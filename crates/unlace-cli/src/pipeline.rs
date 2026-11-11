//! # Pipeline Driver — Wave 24 Recovery Pass Dependency Order
//!
//! The Wave 24 recovery passes have hard ordering dependencies that this
//! file enforces. The intended sequence is:
//!
//! 1. **`recover_stack_frame`** (t209) — produces
//!    [`SsaFunction::stack_frame`]. Every later pass that reasons about
//!    locals reads this map; must run before byref detection so the
//!    detector knows which locals already participate in a stack slot.
//!
//! 2. **`detect_byref`** (t210) — produces
//!    [`SsaFunction::byref_info`]. Depends on the stack-frame layout
//!    above so it can mark stack locals whose address escapes (passed
//!    by-reference to callees, taken into a register, etc.). Also reads
//!    [`ParamInferPass`]'s output so it knows how many parameter
//!    registers are live for this calling convention.
//!
//! 3. **`recover_structs`** (t213) — populates
//!    [`SsaFunction::array_struct_layouts`]. Needs the IV/loop passes
//!    (`LicmPass` + `IvElimPass`) to have run so basic induction
//!    variables are stable.
//!
//! 4. **`TypeConstraintSolverPass`** (t228) — TIE-style constraint
//!    solver. Depends on byref_info (constraints from address-taken
//!    sites) and on stack_frame (constraints from same-slot accesses).
//!    *Wired (Wave 26): runs inside the outer fixedpoint immediately
//!    after `TypeInferPass`.*
//!
//! 5. **`annotate_libc_calls`** (t229) — annotates calls to recognised
//!    libc functions in [`SsaFunction::libc_call_annotations`]. Depends
//!    on the symbol-table side of call resolution. *Wired (Wave 26):
//!    runs once after the outer fixedpoint, with the symbol table as
//!    the resolver closure.*
//!
//! 6. **`VarNamingPass`** (t227) — assigns liveness-aware names
//!    (`i`/`j`/`k`, `arg<N>`, …) keyed in
//!    `SsaFunction::var_role_names`. Depends on stable types from t228
//!    so the role classifier can tell `LoopCounter` from `Argument`.
//!    *Wired (Wave 26): runs after `VariableMergePass`.*
//!
//! 7. **`CallingConvFinalizePass`** (t230) — finalises the function's
//!    public signature in `SsaFunction::finalized_signature` using the
//!    full caller set's recovered types. Depends on every preceding
//!    pass (var roles, types, libc info, byref info). *Wired (Wave 26):
//!    final per-function pass, after `VarNamingPass`.*
//!
//! Wave 26 landed all four wirings; this file's job from here is to
//! keep the ordering honest as new passes slot into the documented
//! sequence.

use anyhow::{Context, Result, bail};
use iced_x86::{Decoder, DecoderOptions, FlowControl};
use std::collections::BTreeMap;
use std::collections::BTreeSet;
use std::path::PathBuf;
use std::sync::Arc;
use std::time::{Duration, Instant};
use unlace_ir::lvar::{LiveRange, Lvar, LvarFlags, LvarId, LvarSource, LvarStorage};
use unlace_ir::ssa::SsaFunction;
use unlace_ir::ssa::VarnodeSlot;
use unlace_ir::ssa::{DwarfStackLocalSpan, Maturity, PendingDwarfLocal, PrimitiveType, SsaVarnode};
#[cfg(test)]
use unlace_ir::types::StructFieldType;
use unlace_ir::types::{Type, TypeKind};
use unlace_ir::{ArchId, BasicBlock, BlockId, Function, IrOp, Lifter, SpaceId, Varnode};
use unlace_loader::pdb_types::{PdbTypes, primitive_ti_to_type};
use unlace_loader::{
    BinaryImage, DwarfInfo, Endian, FlirtDb, PdbInfo, PdbLocal, Section, SectionFlags, SymbolKind,
};
use unlace_passes::{
    AlgebraicSimplifyPass, AliasCategorizePass, AnalysisContext, BitfieldIdiomPass, BmiIdiomPass,
    BoolSimplifyPass, CallBoundaryCopyPropPass, CalleeArity, CallingConvFinalizePass,
    CallingConventionDetectPass, CfgRepairPass, ConditionSimplifyPass, ConstBranchFoldPass,
    ConstantFoldPass, CopyPropagationPass, CppCoroutinePass, CppLambdaCapturePass, CppMethodPass,
    CppVariantPass, CppVtablePass, CryptoIdiomPass, CsePass, DEFAULT_OUTER_FIXEDPOINT_CAP,
    DeadCodeElimPass, DeadFlagElimPass, DeadPhiElimPass, DeadStoreElimGlobalPass,
    DeadStoreElimPass, DivisionIdiomPass, ExpressionTreePass, GlobalCopyPropPass, GvnPass,
    IdiomRecognitionPass, IndirectCallResolvePass, IndirectJumpResolvePass, IvElimPass,
    KnownBitsSimplifyPass, LicmPass, LvarCollectPass, MemorySsaDsePass, ModuloIdiomPass,
    NoreturnDetectPass, ObjcDispatchPass, OpTypeBindingPass, OuterFixedpointReport, ParamInferPass,
    PassAdapter, PassOptions, PassWithContext, PrologueElimPass, RedundantFlagElimPass,
    RegisterCoalescePass, RepStringIdiomPass, ReturnTypeInferPass, RustAsyncPass, RustEnumPass,
    RustPanicPass, RustVtablePass, SccpPass, SignatureSnapshot, SizeofRecognitionPass,
    StackOffsetSnapshotPass, StackPointerTrackingPass, StackVarRecoveryPass, StrengthReducePass,
    StructFieldDetectPass, TailCallDetectPass, TempHomePass, TypeConstraintSolverPass,
    UnreachableBlockElimPass, VarNamingPass, VariableMergePass, annotate_libc_calls,
    bump_if_signature_changed, canonical_pipeline_backedge_exceptions,
    canonical_pipeline_descriptor, detect_byref, detect_go_defer, parse_printf_format_strings,
    recover_direct_call_args_with_param_counts, recover_stack_frame, recover_structs,
    run_instrumented, run_outer_fixedpoint, run_to_fixedpoint_with_context,
    validate_named_phase_monotonicity_with_exceptions,
};
#[path = "pipeline_call_site_guess.rs"]
mod call_site_guess;
#[path = "pipeline_function_extents.rs"]
mod function_extents;
#[path = "pipeline_hir_recovery.rs"]
mod hir_recovery;

#[path = "pipeline_annotations.rs"]
mod annotations;
#[path = "pipeline_debug_info.rs"]
mod debug_info;
#[path = "pipeline_decompile.rs"]
mod decompile;
#[path = "pipeline_discovery.rs"]
mod discovery;
#[path = "pipeline_driver.rs"]
mod driver;
#[path = "pipeline_eh.rs"]
mod eh;
#[path = "pipeline_emit.rs"]
mod emit;
#[path = "pipeline_flirt.rs"]
mod flirt;
#[path = "pipeline_jump_tables.rs"]
mod jump_tables;
#[path = "pipeline_lift.rs"]
mod lift;
#[path = "pipeline_passes.rs"]
mod passes;
#[path = "pipeline_stages.rs"]
mod stages;
#[path = "pipeline_symbols.rs"]
mod symbols;
#[path = "pipeline_trace.rs"]
mod trace;

use crate::args::EmitFormat;
use crate::profiling::{self, TraceField};
use annotations::*;
pub(crate) use annotations::{
    collect_return_value_aliases, collect_ssa_phi_uses, collect_ssa_statement_slots,
    data_items_for_ssa,
};
use debug_info::*;
pub use debug_info::{
    PdbFunctionLocalSource, apply_pdb_debug_to_ssa, apply_pdb_function_locals_to_ssa,
    apply_pdb_types_to_ssa,
};
pub use decompile::decompile_function_with_symbols;
use decompile::*;
use discovery::*;
pub use discovery::{
    FunctionEntry, discover_functions, drop_dwarf_duplicate_subfunctions, select_functions,
};
use driver::*;
pub use driver::{
    decompile_function, decompile_one_function, decompile_one_function_cached,
    emit_function_interproc, function_span, lift_and_run_passes,
};
use eh::*;
pub use emit::emit_output;
pub(crate) use emit::post_process_hir;
use flirt::*;
pub use flirt::{
    FlirtConfidence, FlirtConfig, FlirtOptions, flirt_match, flirt_match_detailed,
    flirt_match_detailed_with_config,
};
pub(crate) use jump_tables::remove_unreachable_blocks_for_pipeline;
use jump_tables::*;
pub use jump_tables::{
    build_jump_table_section_views, jump_table_info_map_to_struct, resolve_jump_table_targets,
};
pub use lift::lift_function;
use lift::*;
use passes::*;
pub use passes::{
    PassesReport, WholeProgramQualityReport, ir_node_count, run_passes, run_passes_with_report,
    run_passes_with_resolver, run_whole_program_interproc, run_whole_program_printf_parse,
    run_whole_program_quality_refinement, warn_if_large_ir,
};
use stages::*;
pub use symbols::{
    PipelineConfig, SymbolContext, build_shared_symbol_context, build_symbol_context_with_config,
    build_symbol_table, build_symbol_table_and_flirt_with_config,
    build_symbol_table_and_flirt_with_functions, build_symbol_table_with_functions,
};
use trace::*;
const IR_NODE_WARN_THRESHOLD: usize = 100_000;
#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use std::time::{Duration, Instant};
    use unlace_ir::ArchId;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{Function, IrInsn, Varnode};
    use unlace_loader::{BinaryImage, Endian, Section, SectionFlags};
    use unlace_passes::Pass;

    fn make_text_image(code: Vec<u8>, base: u64) -> BinaryImage {
        let size = code.len() as u64;
        BinaryImage {
            arch: ArchId::X86_64,
            os_abi: unlace_ir::OsAbi::Unknown,
            endian: Endian::Little,
            entry: base,
            sections: vec![Section {
                name: ".text".to_string(),
                vaddr: base,
                size,
                data: code,
                flags: SectionFlags::READ | SectionFlags::EXEC,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            pe_mitigations: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            pdb_info: None,
            image_base: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
            go_types: std::collections::BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
        }
    }

    #[test]
    fn run_passes_timeout_deadline_is_enforced() {
        let mut func = Function::new("timeout_func", BlockId(0), 0x1000);
        let out = Varnode::reg(0, 8);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![Varnode::constant(1, 8)],
            0x1000,
        ));
        block
            .insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1001));
        func.insert_block(block);
        let mut ssa = build_ssa(func);

        let resolver = |_addr: u64| None;
        let err = run_passes_with_resolver_until(
            &mut ssa,
            &resolver,
            Instant::now() - Duration::from_millis(1),
            &PassOptions::default(),
        )
        .expect_err("deadline in the past should force timeout");
        assert!(
            err.to_string()
                .contains("timeout exceeded for function 'timeout_func'"),
            "unexpected error: {err:#}"
        );
    }

    #[test]
    fn emit_output_structuring_timeout_deadline_is_enforced() {
        let mut func = Function::new("emit_timeout_func", BlockId(0), 0x1000);
        let out = Varnode::reg(0, 8);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![Varnode::constant(1, 8)],
            0x1000,
        ));
        block
            .insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1001));
        func.insert_block(block);
        let ssa = build_ssa(func);

        let err = emit_output(
            EmitFormat::C,
            &ssa,
            None,
            &BTreeMap::new(),
            &BTreeMap::new(),
            None,
            &crate::config::Config::default(),
            None,
            &[],
            Some(Instant::now() - Duration::from_millis(1)),
        )
        .expect_err("deadline in the past should force timeout");
        let chain = format!("{err:#}");
        assert!(
            chain.contains("structuring timeout exceeded for function 'emit_timeout_func'"),
            "unexpected error: {err:#}"
        );
    }

    #[test]
    fn rebase_instruction_uniques_keeps_lifted_instruction_temps_disjoint() {
        let mut first = vec![IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 4),
            smallvec![Varnode::unique(1, 4), Varnode::constant(1, 4)],
            0x1000,
        )];
        let mut second = vec![IrInsn::with_output(
            IrOp::IntSub,
            Varnode::unique(0, 4),
            smallvec![Varnode::unique(1, 4), Varnode::constant(1, 4)],
            0x1004,
        )];

        let span = rebase_instruction_uniques(&mut first, 0);
        assert_eq!(span, 2);
        let second_span = rebase_instruction_uniques(&mut second, span);

        assert_eq!(second_span, 2);
        assert_eq!(first[0].output.unwrap().offset, 0);
        assert_eq!(first[0].inputs[0].offset, 1);
        assert_eq!(second[0].output.unwrap().offset, 2);
        assert_eq!(second[0].inputs[0].offset, 3);
    }

    #[test]
    fn jump_table_resolution_trims_probe_prefix_and_installs_successors() {
        let mut func = Function::new("dispatch", BlockId(0), 0x1000);
        let mut dispatch = BasicBlock::new(BlockId(0));
        dispatch.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![Varnode::unique(0, 8)],
            0x1010,
        ));
        func.insert_block(dispatch);

        let rax = Varnode::reg(0, 4);
        let mut case0 = BasicBlock::new(BlockId(1));
        case0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rax,
            smallvec![Varnode::constant(10, 4)],
            0x1020,
        ));
        case0
            .insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![rax], 0x1021));
        func.insert_block(case0);

        let mut case1 = BasicBlock::new(BlockId(2));
        case1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rax,
            smallvec![Varnode::constant(20, 4)],
            0x1030,
        ));
        case1
            .insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![rax], 0x1031));
        func.insert_block(case1);

        let mut ssa = build_ssa(func);
        ssa.resolved_jump_tables.insert(
            0x1010,
            unlace_ir::ssa::JumpTableInfo {
                base: 0x2000,
                entry_size: 4,
                num_entries: 0,
                bound: None,
                endian_little: true,
                targets: Vec::new(),
                target_blocks: Vec::new(),
            },
        );

        let mut image = make_text_image(vec![0x90; 0x100], 0x1000);
        let mut table = Vec::new();
        table.extend_from_slice(&((0x1020_i64 - 0x2000_i64) as i32).to_le_bytes());
        table.extend_from_slice(&((0x1030_i64 - 0x2000_i64) as i32).to_le_bytes());
        table.extend_from_slice(&(0x7fff_0000_i32).to_le_bytes());
        image.sections.push(Section {
            name: ".rodata".to_string(),
            vaddr: 0x2000,
            size: table.len() as u64,
            data: table,
            flags: SectionFlags::READ,
        });

        resolve_jump_table_targets(&mut ssa, &image);

        let resolved = ssa.resolved_jump_tables.get(&0x1010).unwrap();
        assert_eq!(resolved.targets, vec![0x1020, 0x1030]);
        assert_eq!(resolved.num_entries, 2);
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].successors.as_slice(),
            &[BlockId(1), BlockId(2)]
        );

        unlace_passes::DeadCodeElimPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.function.blocks[&BlockId(1)].insns.len(), 2);
        assert_eq!(ssa.function.blocks[&BlockId(2)].insns.len(), 2);
    }

    fn empty_ssa_with_struct(name: &str, addr: u64, struct_name: &str) -> SsaFunction {
        let mut func = Function::new(name, BlockId(0), addr);
        func.insert_block(BasicBlock::new(BlockId(0)));
        let mut ssa = build_ssa(func);
        ssa.inferred_structs.insert(
            -16,
            Type::Struct {
                name: struct_name.to_string(),
                fields: vec![
                    StructFieldType {
                        name: "x".into(),
                        ty: Type::int(4),
                        offset: 0,
                    },
                    StructFieldType {
                        name: "y".into(),
                        ty: Type::int(4),
                        offset: 4,
                    },
                ],
            },
        );
        ssa
    }

    #[test]
    fn whole_program_quality_refinement_canonicalizes_structs_and_refreshes_final_metadata() {
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, empty_ssa_with_struct("a", 0x1000, "local_a"));
        funcs.insert(0x2000, empty_ssa_with_struct("b", 0x2000, "local_b"));

        let report = run_whole_program_quality_refinement(&mut funcs, 0, &PassOptions::default())
            .expect("whole-program quality refinement");

        assert_eq!(report.canonical_struct_layouts, 1);
        assert_eq!(report.struct_name_rewrite_functions, 2);
        assert_eq!(report.final_refresh_changes, 2);

        let names: BTreeSet<String> = funcs
            .values()
            .map(|ssa| match ssa.inferred_structs.get(&-16).unwrap() {
                Type::Struct { name, .. } => name.clone(),
                other => panic!("expected struct, got {other:?}"),
            })
            .collect();
        assert_eq!(names.len(), 1);
        assert!(names.iter().next().unwrap().starts_with("__anon_"));
        assert!(funcs.values().all(|ssa| ssa.finalized_signature.is_some()));
    }

    #[test]
    fn t298_collects_go_iface_devirtualized_calls_from_itab_method() {
        let mut func = Function::new("go_iface", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let target = Varnode::unique(0, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            target,
            smallvec![Varnode::constant(0x4010, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![target, Varnode::reg(0, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        unlace_passes::IndirectCallResolvePass
            .run(&mut ssa)
            .unwrap();

        let mut image = make_text_image(vec![0xC3], 0x1000);
        image.go_itabs.insert(
            0x9000,
            unlace_loader::go_types::GoItab {
                va: 0x9000,
                inter_type_va: 0xA000,
                concrete_type_va: 0xB000,
                hash: 0x1234,
                methods: vec![0x4010],
            },
        );
        let mut symbols = BTreeMap::new();
        symbols.insert(0x4010, "main.(*MyType).Do".to_string());

        let resolved = collect_go_iface_devirtualized_calls(&ssa, &image, &symbols);
        assert_eq!(
            resolved.get(&0x1004).map(String::as_str),
            Some("main_MyType_Do")
        );
    }

    #[test]
    fn collects_cxx_eh_actions_from_direct_and_resolved_indirect_calls() {
        let mut func = Function::new("eh_sites", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let indirect_target = Varnode::unique(0, 8);
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x4010, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            indirect_target,
            smallvec![Varnode::constant(0x4020, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![indirect_target],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x100c,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        unlace_passes::IndirectCallResolvePass
            .run(&mut ssa)
            .unwrap();

        let mut symbols = BTreeMap::new();
        symbols.insert(0x4010, "__cxa_throw".to_string());
        symbols.insert(0x4020, "__imp___CxxFrameHandler3".to_string());

        let actions = collect_cxx_eh_actions(&ssa, &symbols);
        assert_eq!(
            actions.get(&0x1000),
            Some(&unlace_passes::cxx_eh::CxxEhAction::Throw)
        );
        assert_eq!(
            actions.get(&0x1008),
            Some(&unlace_passes::cxx_eh::CxxEhAction::MsvcFrameHandler)
        );
    }

    #[test]
    fn cxx_catch_type_uses_rtti_names_and_catch_all_sentinel() {
        let mut classes = BTreeMap::new();
        classes.insert(
            0x9000,
            unlace_loader::CppClass {
                mangled_name: "NSt3__112bad_allocE".to_string(),
                demangled_name: "std::__1::bad_alloc".to_string(),
                typeinfo_addr: 0x9000,
                bases: vec![],
                vtable_addr: None,
                vtable_methods: vec![],
                vtable_layout: None,
            },
        );
        let rtti = unlace_loader::RttiInfo { classes };
        let mut image = BinaryImage::empty(ArchId::X86_64, unlace_loader::Endian::Little);
        image.relocations.push(unlace_loader::Relocation {
            addr: 0x4010,
            sym_name: "_ZTISt9exception".to_string(),
            kind: unlace_loader::RelocKind::Other,
        });

        assert_eq!(
            cxx_catch_type_for_typeinfo_addr(&image, 0, Some(&rtti)),
            Type::Primitive(PrimitiveType::Unknown),
        );
        assert_eq!(
            cxx_catch_type_for_typeinfo_addr(&image, 0x9000, Some(&rtti)),
            Type::Struct {
                name: "std____1__bad_alloc".to_string(),
                fields: vec![],
            },
        );
        assert_eq!(
            cxx_catch_type_for_typeinfo_addr(&image, 0x4010, Some(&rtti)),
            Type::Struct {
                name: "std__exception".to_string(),
                fields: vec![],
            },
        );
        assert_eq!(
            cxx_catch_type_for_typeinfo_addr(&image, 0xdead, Some(&rtti)),
            Type::Struct {
                name: "typeinfo_dead".to_string(),
                fields: vec![],
            },
        );
    }

    #[test]
    fn test_recursive_discovery_finds_call_targets() {
        let base: u64 = 0x1000;
        // target = call_site + 5 + rel32
        let rel: i32 = 0x1010_i64.wrapping_sub(0x1005) as i32;
        let rel_bytes = rel.to_le_bytes();
        let mut code = Vec::new();
        code.push(0xE8);
        code.extend_from_slice(&rel_bytes);
        code.push(0xC3);

        while code.len() < 0x10 {
            code.push(0xCC);
        }

        code.push(0xC3);

        let image = make_text_image(code, base);

        let initial = vec![FunctionEntry {
            name: "func_a".into(),
            addr: base,
            size: 6,
        }];

        let result = recursive_descent_discovery(&image, initial);

        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();
        assert!(
            addrs.contains(&0x1010),
            "recursive descent should discover call target 0x1010, got: {addrs:?}",
        );
    }

    #[test]
    fn test_recursive_discovery_ignores_e8_inside_x86_instruction() {
        let base: u64 = 0x1000;
        let code = vec![
            0x48, 0x83, 0xba, 0xe8, 0x02, 0x00, 0x00, 0x00, // cmpq $0, 0x2e8(%rdx)
            0xc3, // ret
        ];
        let image = make_text_image(code, base);
        let initial = vec![FunctionEntry {
            name: "func".into(),
            addr: base,
            size: 9,
        }];

        let result = recursive_descent_discovery(&image, initial);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();
        assert_eq!(
            addrs,
            BTreeSet::from([base]),
            "recursive descent must decode instructions instead of byte-scanning E8: {addrs:?}",
        );
    }

    #[test]
    fn test_non_x86_discovery_does_not_treat_e8_as_call() {
        let base: u64 = 0x1000;
        let rel: i32 = 0x1010_i64.wrapping_sub(0x1005) as i32;
        let mut code = vec![0u8; 0x40];
        code[0] = 0xE8;
        code[1..5].copy_from_slice(&rel.to_le_bytes());

        let mut image = make_text_image(code, base);
        image.arch = ArchId::AArch64;

        let result = discover_functions(&image, None).expect("discover");
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();
        assert_eq!(
            addrs,
            BTreeSet::from([base]),
            "AArch64 discovery must not run x86 E8 recursive descent: {addrs:?}",
        );
    }

    #[test]
    fn test_macho_function_starts_win_over_header_symbol() {
        let base: u64 = 0x1_0000_8000;
        let mut image = make_text_image(vec![0; 0x80], base);
        image.arch = ArchId::AArch64;
        image.sections[0].name = "__text".to_string();
        image.entry = 0x1_0000_0000;
        image.function_starts = vec![base, base + 0x20, base + 0x40];
        image.symbols.insert(
            image.entry,
            unlace_loader::Symbol {
                name: "__mh_execute_header".into(),
                addr: image.entry,
                size: 0,
                kind: SymbolKind::Function,
            },
        );

        let result = discover_functions(&image, None).expect("discover");
        let addrs: Vec<u64> = result.iter().map(|func| func.addr).collect();
        assert_eq!(
            addrs,
            vec![base, base + 0x20, base + 0x40],
            "Mach-O LC_FUNCTION_STARTS should drive real text discovery, not the header symbol"
        );
        assert!(
            result.iter().all(|func| func.size > 0),
            "function-start entries should receive inferred sizes: {result:?}",
        );
    }

    #[test]
    fn macho_function_starts_take_unsized_symbol_names() {
        let base: u64 = 0x1_0000_2480;
        let mut image = make_text_image(vec![0xc3; 0x40], base);
        image.sections[0].name = "__text".to_string();
        image.function_starts = vec![base, base + 0x20];
        image.symbols.insert(
            base + 0x20,
            unlace_loader::Symbol {
                name: "_mv_end".into(),
                addr: base + 0x20,
                size: 0,
                kind: SymbolKind::Function,
            },
        );

        let result = discover_functions(&image, None).expect("discover");
        let named: Vec<(u64, &str)> = result
            .iter()
            .map(|func| (func.addr, func.name.as_str()))
            .collect();
        assert_eq!(
            named,
            vec![(base, "sub_100002480"), (base + 0x20, "_mv_end")],
        );
    }

    #[test]
    fn test_pe_runtime_functions_drive_discovery_without_symbols() {
        let base: u64 = 0x1400_1000;
        let mut code = vec![0xcc; 0x100];
        code[0x20] = 0x55;
        let mut image = make_text_image(code, base);
        image
            .runtime_functions
            .push(unlace_loader::image::RuntimeFunction {
                begin_address: base + 0x20,
                end_address: base + 0x50,
                unwind_info_address: base + 0x200,
                unwind_info: None,
            });

        let result = discover_functions(&image, None).expect("discover");
        let func = result
            .iter()
            .find(|func| func.addr == base + 0x20)
            .expect(".pdata function must be discovered");

        assert_eq!(func.name, format!("sub_{:x}", base + 0x20));
        assert_eq!(func.size, 0x30);
    }

    #[test]
    fn test_pe_tls_callbacks_drive_discovery_without_symbols() {
        let base: u64 = 0x1400_1000;
        let mut code = vec![0xcc; 0x100];
        code[0x30] = 0x55;
        let mut image = make_text_image(code, base);
        image.tls_callbacks.push(base + 0x30);

        let result = discover_functions(&image, None).expect("discover");
        let func = result
            .iter()
            .find(|func| func.addr == base + 0x30)
            .expect("TLS callback must be discovered");

        assert_eq!(func.name, format!("tls_callback_0_{:x}", base + 0x30));
        assert!(
            func.size > 0,
            "TLS callback receives an inferred size: {func:?}"
        );
    }

    #[test]
    fn test_import_thunks_are_not_user_functions() {
        let base: u64 = 0x1000;
        let mut code = vec![0xcc; 0x80];
        code[0x00] = 0x55;
        code[0x01] = 0x48;
        code[0x02] = 0x89;
        code[0x03] = 0xe5;
        code[0x20] = 0x55;
        code[0x21] = 0x48;
        code[0x22] = 0x89;
        code[0x23] = 0xe5;
        let mut image = make_text_image(code, base);
        image.plt_symbols.insert(base + 0x20, "puts".to_string());

        let result = discover_functions(&image, None).expect("discover");
        let addrs: BTreeSet<u64> = result.iter().map(|func| func.addr).collect();

        assert!(
            addrs.contains(&base),
            "real function should remain: {addrs:?}"
        );
        assert!(
            !addrs.contains(&(base + 0x20)),
            "PLT/import thunk should not be decompiled as a user function: {addrs:?}"
        );
    }

    #[test]
    fn test_go_pclntab_drives_discovery_without_symbols() {
        let text_base: u64 = 0x401000;
        let mut code = vec![0xcc; 0x1200];
        code[0] = 0x55;
        code[0x100] = 0x55;
        let mut image = make_text_image(code, text_base);
        let pclntab = build_synthetic_gopclntab();
        image.sections.push(Section {
            name: ".gopclntab".to_string(),
            vaddr: 0x500000,
            size: pclntab.len() as u64,
            data: pclntab,
            flags: SectionFlags::READ,
        });

        let result = discover_functions(&image, None).expect("discover");
        let names: BTreeMap<u64, String> = result
            .iter()
            .map(|func| (func.addr, func.name.clone()))
            .collect();

        assert_eq!(names.get(&0x401000).map(String::as_str), Some("main.main"));
        assert_eq!(
            names.get(&0x401100).map(String::as_str),
            Some("main.helper")
        );
        let main = result
            .iter()
            .find(|func| func.addr == 0x401000)
            .expect("main.main");
        assert_eq!(main.size, 0x100);
    }

    fn build_synthetic_gopclntab() -> Vec<u8> {
        let ptr_size: usize = 8;
        let mut buf = Vec::new();
        buf.extend_from_slice(&[0xfa, 0xff, 0xff, 0xff]);
        buf.extend_from_slice(&[0x00, 0x00]);
        buf.push(1);
        buf.push(8);
        buf.extend_from_slice(&2u64.to_le_bytes());
        buf.extend_from_slice(&1u64.to_le_bytes());

        let header_size = 8 + 2 * ptr_size + 6 * ptr_size;
        let funcnametab_start = header_size;
        let name1 = b"main.main\0";
        let name2 = b"main.helper\0";
        let funcnametab_data: Vec<u8> = [name1.as_slice(), name2.as_slice()].concat();
        let name1_off: u32 = 0;
        let name2_off: u32 = name1.len() as u32;
        let functab_start = funcnametab_start + funcnametab_data.len();
        let functab_array_size = 3 * 2 * ptr_size;
        let func1_struct_off = functab_array_size;
        let func2_struct_off = func1_struct_off + 16;
        let func1_addr: u64 = 0x401000;
        let func2_addr: u64 = 0x401100;

        buf.extend_from_slice(&(funcnametab_start as u64).to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());
        buf.extend_from_slice(&(functab_start as u64).to_le_bytes());
        buf.extend_from_slice(&funcnametab_data);
        buf.extend_from_slice(&func1_addr.to_le_bytes());
        buf.extend_from_slice(&(func1_struct_off as u64).to_le_bytes());
        buf.extend_from_slice(&func2_addr.to_le_bytes());
        buf.extend_from_slice(&(func2_struct_off as u64).to_le_bytes());
        buf.extend_from_slice(&0x402000u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());
        buf.extend_from_slice(&func1_addr.to_le_bytes());
        buf.extend_from_slice(&name1_off.to_le_bytes());
        buf.extend_from_slice(&[0u8; 4]);
        buf.extend_from_slice(&func2_addr.to_le_bytes());
        buf.extend_from_slice(&name2_off.to_le_bytes());
        buf.extend_from_slice(&[0u8; 4]);
        buf
    }

    #[test]
    fn test_aarch64_function_prune_rejects_unaligned_entries() {
        let base: u64 = 0x1000;
        let mut image = make_text_image(vec![0; 0x40], base);
        image.arch = ArchId::AArch64;
        let mut funcs = vec![
            FunctionEntry {
                name: "aligned".into(),
                addr: base,
                size: 4,
            },
            FunctionEntry {
                name: "unaligned".into(),
                addr: base + 1,
                size: 4,
            },
        ];

        prune_invalid_function_starts(&image, &mut funcs);

        assert_eq!(funcs.len(), 1);
        assert_eq!(funcs[0].name, "aligned");
    }

    #[test]
    fn test_decode_error_advance_keeps_fixed_width_alignment() {
        assert_eq!(decode_error_advance(ArchId::X86_64, 9), 1);
        assert_eq!(decode_error_advance(ArchId::AArch64, 9), 4);
        assert_eq!(decode_error_advance(ArchId::AArch64, 3), 3);
        assert_eq!(decode_error_advance(ArchId::Arc, 9), 2);
    }

    #[test]
    fn test_padding_tail_detection_is_arch_specific() {
        assert!(is_padding_tail(ArchId::Arc, &[0, 0]));
        assert!(is_padding_tail(ArchId::AArch64, &[0, 0, 0, 0]));
        assert!(is_padding_tail(ArchId::X86_64, &[0xcc, 0x90, 0x00]));
        assert!(!is_padding_tail(ArchId::Arc, &[0, 0x22]));
        assert!(!is_padding_tail(ArchId::X86_64, &[0xcc, 0x48]));
        assert!(is_padding_prefix(ArchId::X86_64, &[0xcc, 0x48]));
        assert!(!is_padding_prefix(ArchId::X86_64, &[0x48, 0xcc]));
    }

    #[test]
    fn test_lift_continues_after_internal_branch_over_alignment_nops() {
        let base = 0x1000;
        let mut code = vec![0xeb, 0x0b];
        code.extend_from_slice(&[0x90; 11]);
        code.push(0xc3);

        let lifter = unlace_lift::X86Lifter::new();
        // size-unknown (synthetic boundary): early-stop heuristic is allowed.
        let records = lift_instructions(&lifter, &code, base, false).expect("lift");
        let addrs: BTreeSet<u64> = records.iter().map(|rec| rec.addr).collect();

        assert!(
            addrs.contains(&(base + 0x0d)),
            "internal branch over padding must not truncate the function: {addrs:?}",
        );
    }

    /// Regression for the ARCompact `arc_branch` truncation: a function with a
    /// *known* symbol size whose tail instruction contains interior zero bytes
    /// (which look like a padding prefix to the early-stop heuristic) must lift
    /// to its full extent, not stop at the first no-fallthrough insn followed
    /// by a zero byte.
    #[test]
    fn test_known_size_function_not_truncated_by_interior_padding() {
        let base: u64 = 0x1000;
        // Two x86 instructions: `eb 02` (jmp +2, no-fallthrough) then a `00`
        // byte that opens the *next* real instruction `00 c3` (add bl,al) —
        // i.e. the byte after the branch looks like padding but is live code.
        let code = vec![0xeb, 0x02, 0x00, 0xc3, 0xc3];

        // size-unknown: the heuristic stops right after the `jmp` (legacy).
        let unknown = lift_instructions(&unlace_lift::X86Lifter::new(), &code, base, false)
            .expect("lift unknown");
        let unknown_end = unknown
            .iter()
            .map(|r| r.addr + r.len as u64)
            .max()
            .unwrap_or(base);

        // known size: must consume the whole slice despite the interior `00`.
        let known = lift_instructions(&unlace_lift::X86Lifter::new(), &code, base, true)
            .expect("lift known");
        let known_end = known
            .iter()
            .map(|r| r.addr + r.len as u64)
            .max()
            .unwrap_or(base);

        assert_eq!(
            known_end,
            base + code.len() as u64,
            "known-size function must lift its entire byte range; got end={known_end:#x}",
        );
        assert!(
            known_end >= unknown_end,
            "known-size lift must reach at least as far as the size-unknown lift",
        );
    }

    /// The known-size carve-out must still honour a genuine all-padding tail:
    /// if a symbol's `st_size` overshoots the real code into inter-function
    /// alignment, lifting should stop at the padding run rather than decode
    /// garbage. Exercises `should_stop_at_no_fallthrough_boundary` directly.
    #[test]
    fn test_known_size_still_stops_on_all_padding_tail() {
        let ret_op = [unlace_ir::IrInsn::without_output(
            IrOp::Return,
            smallvec::smallvec![],
            0x1000,
        )];
        // known size + remainder all NOPs (x86 padding) => stop (overshoot).
        assert!(
            should_stop_at_no_fallthrough_boundary(
                ArchId::X86_64,
                &ret_op,
                0x1000,
                0x1008,
                &[0x90, 0x90, 0x90],
                true,
            ),
            "all-padding tail after a known-size function must still stop",
        );
        // known size + remainder contains live code => continue.
        assert!(
            !should_stop_at_no_fallthrough_boundary(
                ArchId::X86_64,
                &ret_op,
                0x1000,
                0x1008,
                &[0x00, 0x48, 0x89],
                true,
            ),
            "interior padding-prefix-then-code must NOT truncate a known-size fn",
        );
        // known size + empty remainder => stop (slice exhausted).
        assert!(
            should_stop_at_no_fallthrough_boundary(
                ArchId::X86_64,
                &ret_op,
                0x1000,
                0x1008,
                &[],
                true,
            ),
            "exhausted known-size slice must stop",
        );
    }

    #[test]
    fn test_x86_padding_function_starts_are_pruned() {
        let base: u64 = 0x1000;
        let image = make_text_image(vec![0x55, 0x48, 0x89, 0xe5, 0xcc, 0x55], base);
        let mut funcs = vec![
            FunctionEntry {
                name: "real".into(),
                addr: base,
                size: 4,
            },
            FunctionEntry {
                name: "padding".into(),
                addr: base + 4,
                size: 1,
            },
            FunctionEntry {
                name: "after_padding".into(),
                addr: base + 5,
                size: 1,
            },
        ];

        prune_padding_function_starts(&image, &mut funcs);

        let addrs: Vec<u64> = funcs.iter().map(|func| func.addr).collect();
        assert_eq!(addrs, vec![base, base + 5]);
    }

    #[test]
    fn test_enhanced_prologue_patterns() {
        let base: u64 = 0x1000;
        let mut code = vec![0xCC; 0x100];

        // push r15 at offset 0x00
        code[0x00] = 0x41;
        code[0x01] = 0x57;

        // push r14 at offset 0x20
        code[0x20] = 0x41;
        code[0x21] = 0x56;

        // push r13 at offset 0x40
        code[0x40] = 0x41;
        code[0x41] = 0x55;

        // push r12 at offset 0x60
        code[0x60] = 0x41;
        code[0x61] = 0x54;

        // push rbx at 16-byte aligned offset 0x80
        code[0x80] = 0x53;

        // push rbx at non-aligned offset 0x83 (should NOT match)
        code[0x83] = 0x53;

        // endbr64 at offset 0xA0
        code[0xA0] = 0xF3;
        code[0xA1] = 0x0F;
        code[0xA2] = 0x1E;
        code[0xA3] = 0xFA;

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();

        assert!(addrs.contains(&base), "push r15: {addrs:?}");
        assert!(addrs.contains(&(base + 0x20)), "push r14: {addrs:?}");
        assert!(addrs.contains(&(base + 0x40)), "push r13: {addrs:?}");
        assert!(addrs.contains(&(base + 0x60)), "push r12: {addrs:?}");
        assert!(
            addrs.contains(&(base + 0x80)),
            "push rbx aligned: {addrs:?}"
        );
        assert!(
            !addrs.contains(&(base + 0x83)),
            "push rbx unaligned should not match: {addrs:?}"
        );
        assert!(addrs.contains(&(base + 0xA0)), "endbr64: {addrs:?}");
    }

    /// Regression test for P6-3: callee-saved `push r15` immediately following
    /// a `push rbp; mov rbp, rsp` prologue must NOT be treated as a separate
    /// function start. This is the root cause of `sub_2436e0` lifting only
    /// 4 bytes instead of hundreds.
    #[test]
    fn test_prologue_no_false_positive_after_push_rbp_mov() {
        let base: u64 = 0x1000;
        let mut code = vec![0xCC; 0x40];

        // Real function at 0x1000: push rbp; mov rbp, rsp; push r15; push r14; push r13; push r12; ret
        code[0x00] = 0x55; // push rbp
        code[0x01] = 0x48; // mov rbp, rsp (rex.w)
        code[0x02] = 0x89;
        code[0x03] = 0xe5;
        code[0x04] = 0x41; // push r15  ← would have been a false positive
        code[0x05] = 0x57;
        code[0x06] = 0x41; // push r14
        code[0x07] = 0x56;
        code[0x08] = 0x41; // push r13
        code[0x09] = 0x55;
        code[0x0A] = 0x41; // push r12
        code[0x0B] = 0x54;
        code[0x0C] = 0xC3; // ret

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();

        assert!(
            addrs.contains(&base),
            "real prologue at {base:#x} must be detected; got: {addrs:?}",
        );
        for off in [0x04u64, 0x06, 0x08, 0x0A] {
            assert!(
                !addrs.contains(&(base + off)),
                "push at offset {off:#x} (callee-saved register save) must NOT be a function start; got: {addrs:?}",
            );
        }

        let real_func = result.iter().find(|f| f.addr == base).expect("real func");
        assert!(
            real_func.size >= 0xD,
            "function size must extend through callee-saved pushes (got {})",
            real_func.size,
        );
    }

    /// Regression test for P6-3: a bare `push r12` in the middle of a function
    /// (not aligned, not preceded by a boundary) must NOT be treated as a
    /// function start. This was causing `sub_7b710` to be cut at offset 32.
    #[test]
    fn test_prologue_no_false_positive_for_misaligned_push_r12() {
        let base: u64 = 0x7B710;
        let mut code = vec![0xCC; 0x40];

        // sub rsp, 8 at offset 0 (16-byte aligned, valid prologue)
        code[0x00] = 0x48;
        code[0x01] = 0x83;
        code[0x02] = 0xEC;
        code[0x03] = 0x08;

        // ret at offset 0x12
        code[0x12] = 0xC3;

        // NOPL padding  at 0x13–0x1F (not a valid alignment slot for our test)
        // push r12 at offset 0x20 — preceded by 0xCC (boundary), 16-byte aligned
        code[0x20] = 0x41;
        code[0x21] = 0x54;

        // push r12 at offset 0x24 — NOT aligned, preceded by a push (chain)
        code[0x22] = 0x41;
        code[0x23] = 0x55;
        code[0x24] = 0x41;
        code[0x25] = 0x54;

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();

        assert!(addrs.contains(&base), "sub rsp prologue at base must match");
        assert!(
            addrs.contains(&(base + 0x20)),
            "push r12 aligned + boundary should match: {addrs:?}",
        );
        assert!(
            !addrs.contains(&(base + 0x22)),
            "push r13 misaligned & after push must NOT match: {addrs:?}",
        );
        assert!(
            !addrs.contains(&(base + 0x24)),
            "push r12 misaligned & after push must NOT match: {addrs:?}",
        );
    }

    /// Regression test for P6-3: with the false positive removed, a function
    /// that starts with `push rbp; ...; push r15..r12` must lift to its full
    /// size (next function start), not be cut off after 4 bytes.
    #[test]
    fn test_prologue_function_size_extends_through_callee_saved() {
        let base: u64 = 0x2436E0;
        let mut code = vec![0xCC; 0x100];

        // Function 1: push rbp; mov rbp, rsp; push r15..r12; ... ret
        code[0x00] = 0x55;
        code[0x01] = 0x48;
        code[0x02] = 0x89;
        code[0x03] = 0xe5;
        code[0x04] = 0x41;
        code[0x05] = 0x57;
        code[0x06] = 0x41;
        code[0x07] = 0x56;
        code[0x08] = 0x41;
        code[0x09] = 0x55;
        code[0x0A] = 0x41;
        code[0x0B] = 0x54;
        code[0x80] = 0xC3;

        // Function 2: starts at 0xA0 (16-byte aligned, preceded by 0xCC)
        code[0xA0] = 0xF3;
        code[0xA1] = 0x0F;
        code[0xA2] = 0x1E;
        code[0xA3] = 0xFA;

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);

        let f1 = result.iter().find(|f| f.addr == base).expect("function 1");
        assert!(
            f1.size >= 0xA0,
            "function 1 size must reach next function start (got {})",
            f1.size,
        );
    }

    // -----------------------------------------------------------------
    // t234 — Wave 24 pipeline ordering smoke test
    //
    // Builds a synthetic SsaFunction that exercises every recovery
    // dependency tracked in the module-level doc comment:
    //
    //   * a stack local at RSP-8 (drives `recover_stack_frame`),
    //   * a STORE whose value is the local's address (drives
    //     `detect_byref` — the address escapes),
    //   * a loop with an induction variable and an array-of-struct
    //     access (drives `recover_structs`),
    //   * a CALL to a recognised libc symbol (drives `LibcIdiomsPass`
    //     once wired).
    //
    // The test asserts each Wave-24 side effect that has actually been
    // wired into the pipeline at this revision, and notes the rest as
    // TODOs so the assertions can be lifted in lock-step with each
    // pass landing.
    // -----------------------------------------------------------------
    #[test]
    fn t234_wave24_pipeline_ordering_smoke() {
        use smallvec::smallvec;
        use unlace_ir::ssa::{PrimitiveType, build_ssa};
        use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

        // ---- Build a synthetic SsaFunction ----
        //
        //   entry:
        //     u0 = rsp - 8         ; address of a stack local
        //     store ram, u0, rax   ; spill `rax` to the local
        //     u1 = rcx + 8         ; loop-counter-ish param chain
        //     store ram, u0, rcx   ; second write to the same local
        //                          ; (forms a partial-access group)
        //     call malloc, 0x40    ; libc call (recognised by name)
        //     return rcx
        //
        // The CALL target is `Varnode::constant(0x4040, 8)`; the
        // matching symbol table entry "malloc" lives on the SSA func's
        // `extra_symbols` slot (mirrors how the real loader populates
        // PLT/IAT name maps).
        let rsp = Varnode::reg(0x20, 8); // sysv x86_64 RSP encoding
        let rax = Varnode::reg(0x00, 8);
        let rcx = Varnode::reg(0x10, 8);
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let c8 = Varnode::constant(8, 8);
        let ram = Varnode::constant(1, 8);
        let malloc_addr = Varnode::constant(0x4040, 8);
        let malloc_arg = Varnode::constant(0x40, 8);

        let insns = vec![
            // stack local at -8: u0 = rsp - 8
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp, c8], 0x1000),
            // store rax at *(rsp-8)
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, rax], 0x1004),
            // small loop-counter update for variety
            IrInsn::with_output(IrOp::IntAdd, u1, smallvec![rcx, c8], 0x1008),
            // libc call site
            IrInsn::without_output(IrOp::Call, smallvec![malloc_addr, malloc_arg], 0x100C),
            // return
            IrInsn::without_output(IrOp::Return, smallvec![rcx], 0x1014),
        ];

        let mut func = Function::new("t234_smoke", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);

        let _ = &PrimitiveType::Unknown; // satisfy unused-import lints

        let mut ssa = build_ssa(func);

        // Run the full pass pipeline.
        super::run_passes(&mut ssa, &PassOptions::default())
            .expect("pipeline must not crash on a synthetic SsaFunction");

        // (1) stack_frame populated — t209 wired.
        assert!(
            ssa.stack_frame.is_some(),
            "Wave-24/t209: `recover_stack_frame` must populate `ssa.stack_frame`"
        );

        // (2) byref_info populated — t210 wired.
        assert!(
            ssa.byref_info.is_some(),
            "Wave-24/t210: `detect_byref` must populate `ssa.byref_info`"
        );

        // (3) At least one var has a more-specific type than Unknown.
        //     Driven by `TypeInferPass` + the cluster of type
        //     recovery passes; this is the most permissive assertion
        //     because the t228 constraint solver is not yet wired.
        let non_unknown = ssa
            .var_types
            .values()
            .any(|t| !matches!(t, PrimitiveType::Unknown));
        assert!(
            non_unknown,
            "type recovery must produce at least one non-Unknown var_type entry; got: {:?}",
            ssa.var_types,
        );

        // (4) t229: `annotate_libc_calls` runs at the tail of
        //     `run_passes`, but only inside the CLI driver — the bare
        //     `run_passes(&mut ssa)` smoke path used by this test does
        //     NOT thread a symbol-table resolver in. Touch the field to
        //     guard against rename / removal; the genuine assertion
        //     lives in `unlace-output`'s c_printer tests
        //     (`t229_call_rewrites_*`).
        let _ = &ssa.libc_call_annotations;

        // (5) t227: `VarNamingPass` always runs and writes into
        //     `var_role_names`. The synthetic body is too tight to
        //     classify as a loop, so `var_role_names` may legitimately
        //     stay empty here; we just touch the field to ensure the
        //     pass didn't crash.
        let _ = &ssa.var_role_names;

        // (6) t230: `CallingConvFinalizePass` always populates
        //     `finalized_signature` (with empty params if no callers
        //     are supplied to this single-function smoke test).
        assert!(
            ssa.finalized_signature.is_some(),
            "Wave-26/t230: `CallingConvFinalizePass` must populate \
             `ssa.finalized_signature`"
        );
    }

    /// `.text` 0x14b0..0x1569 of `fixtures/medium.elf`: the `crtbeginS.o`
    /// helpers `deregister_tm_clones` (0x14b0), `register_tm_clones`
    /// (0x14e0), `__do_global_dtors_aux` (0x1520) and `frame_dummy` (0x1560).
    const CRT_PIE_BASE: u64 = 0x14b0;
    const CRT_PIE: [u8; 185] = [
        0x48, 0x8d, 0x3d, 0x59, 0x2b, 0x00, 0x00, 0x48, 0x8d, 0x05, 0x52, 0x2b, 0x00, 0x00, 0x48,
        0x39, 0xf8, 0x74, 0x15, 0x48, 0x8b, 0x05, 0x16, 0x2b, 0x00, 0x00, 0x48, 0x85, 0xc0, 0x74,
        0x09, 0xff, 0xe0, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x0f, 0x1f, 0x80, 0x00,
        0x00, 0x00, 0x00, 0x48, 0x8d, 0x3d, 0x29, 0x2b, 0x00, 0x00, 0x48, 0x8d, 0x35, 0x22, 0x2b,
        0x00, 0x00, 0x48, 0x29, 0xfe, 0x48, 0x89, 0xf0, 0x48, 0xc1, 0xf8, 0x03, 0x48, 0xc1, 0xee,
        0x3f, 0x48, 0x01, 0xc6, 0x48, 0xd1, 0xfe, 0x74, 0x14, 0x48, 0x8b, 0x05, 0xe5, 0x2a, 0x00,
        0x00, 0x48, 0x85, 0xc0, 0x74, 0x08, 0xff, 0xe0, 0x66, 0x0f, 0x1f, 0x44, 0x00, 0x00, 0xc3,
        0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x0f, 0x1e, 0xfa, 0x80, 0x3d, 0xe5, 0x2a,
        0x00, 0x00, 0x00, 0x75, 0x2b, 0x55, 0x48, 0x83, 0x3d, 0xc2, 0x2a, 0x00, 0x00, 0x00, 0x48,
        0x89, 0xe5, 0x74, 0x0c, 0x48, 0x8b, 0x3d, 0xc6, 0x2a, 0x00, 0x00, 0xe8, 0xf9, 0xfa, 0xff,
        0xff, 0xe8, 0x64, 0xff, 0xff, 0xff, 0xc6, 0x05, 0xbd, 0x2a, 0x00, 0x00, 0x01, 0x5d, 0xc3,
        0x0f, 0x1f, 0x00, 0xc3, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x0f, 0x1e, 0xfa,
        0xe9, 0x77, 0xff, 0xff, 0xff,
    ];

    fn crt_entry(addr: u64) -> FunctionEntry {
        FunctionEntry {
            name: format!("sub_{addr:x}"),
            addr,
            size: 0,
        }
    }

    #[test]
    fn flirt_match_names_startup_helpers_in_text() {
        let image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        let names: Vec<_> = [0x14b0, 0x14e0, 0x1520, 0x1560]
            .map(|addr| super::flirt_match(&image, &crt_entry(addr)))
            .into_iter()
            .collect();
        assert_eq!(
            names,
            [
                "deregister_tm_clones",
                "register_tm_clones",
                "__do_global_dtors_aux",
                "frame_dummy",
            ]
            .map(|name| Some(name.to_string()))
        );
    }

    #[test]
    fn flirt_match_skips_named_functions() {
        let image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        let entry = FunctionEntry {
            name: "my_cleanup".into(),
            ..crt_entry(0x14b0)
        };
        assert_eq!(super::flirt_match(&image, &entry), None);
    }

    /// `confidence` is 1.0 when the signature's references resolved and 0.9
    /// for a signature without references.
    #[test]
    fn flirt_match_detailed_returns_confidence() {
        let image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        let plain = super::flirt_match_detailed(&image, &crt_entry(0x14b0)).expect("flirt hit");
        assert_eq!(
            (plain.name.as_str(), plain.confidence),
            ("deregister_tm_clones", 0.9)
        );
        let referenced =
            super::flirt_match_detailed(&image, &crt_entry(0x1520)).expect("flirt hit");
        assert_eq!(
            (referenced.name.as_str(), referenced.confidence),
            ("__do_global_dtors_aux", 1.0)
        );
    }

    /// A reference that leads to a known name other than the expected one
    /// rejects the match.
    #[test]
    fn flirt_match_rejects_reference_to_another_function() {
        let mut image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        image.symbols.insert(
            0x14b0,
            unlace_loader::Symbol {
                name: "cleanup_tables".into(),
                addr: 0x14b0,
                size: 0x29,
                kind: SymbolKind::Function,
            },
        );
        assert_eq!(super::flirt_match(&image, &crt_entry(0x1520)), None);
    }

    /// FLIRT-matched names propagate through
    /// `build_symbol_table_with_functions` so call sites render the library
    /// name rather than the stripped `sub_XXXX` placeholder.
    #[test]
    fn build_symbol_table_overlays_flirt_canonical_names() {
        let image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        let symbols = super::build_symbol_table_with_functions(&image, &[crt_entry(0x14b0)]);
        assert_eq!(
            symbols.get(&0x14b0).map(String::as_str),
            Some("deregister_tm_clones"),
            "FLIRT canonical name must replace `sub_XXXX` in the symbol table",
        );
    }

    #[test]
    fn build_symbol_table_respects_no_flirt_config() {
        let image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        let flirt_config = super::FlirtConfig::from_options(super::FlirtOptions {
            enabled: false,
            ..Default::default()
        })
        .expect("disabled FLIRT config");

        let (symbols, flirt) = super::build_symbol_table_and_flirt_with_config(
            &image,
            &[crt_entry(0x14b0)],
            &flirt_config,
        );
        assert_eq!(symbols.get(&0x14b0).map(String::as_str), Some("sub_14b0"));
        assert!(flirt.is_empty());
        assert!(
            super::flirt_match_detailed_with_config(&image, &crt_entry(0x14b0), &flirt_config)
                .is_none()
        );
    }

    /// `build_symbol_table_and_flirt_with_functions` returns the per-entry
    /// FLIRT confidence map alongside the symbol table so downstream printer
    /// annotations and quality counters can drive off the same data without
    /// re-running the matcher.
    #[test]
    fn build_symbol_table_and_flirt_surfaces_confidence() {
        let image = make_text_image(CRT_PIE.to_vec(), CRT_PIE_BASE);
        let (symbols, flirt) =
            super::build_symbol_table_and_flirt_with_functions(&image, &[crt_entry(0x1560)]);
        assert_eq!(
            symbols.get(&0x1560).map(String::as_str),
            Some("frame_dummy")
        );
        let fc = flirt.get(&0x1560).expect("flirt confidence missing");
        assert_eq!((fc.name.as_str(), fc.confidence), ("frame_dummy", 1.0));
    }

    /// Batch §1 Phase 4: `apply_pdb_types_to_ssa` writes
    /// `composite_var_types` for SSA varnodes whose stack offset
    /// matches a DWARF-named local *and* whose name aligns with a
    /// recovered PDB struct.
    #[test]
    fn apply_pdb_types_populates_composite_var_types() {
        use unlace_ir::Varnode;
        use unlace_ir::ssa::SsaVarnode;
        use unlace_ir::types::{StructFieldType, Type};
        use unlace_loader::pdb_types::PdbTypes;

        // Build a minimal image + PdbTypes carrying a recovered `Point`
        // struct.
        let code = vec![0x90, 0xc3]; // nop; ret
        let mut image = make_text_image(code, 0x1000);

        let mut pdb = PdbTypes::default();
        let point_type = Type::Struct {
            name: "Point".into(),
            fields: vec![
                StructFieldType {
                    name: "x".into(),
                    ty: Type::Primitive(unlace_ir::ssa::PrimitiveType::Int(4)),
                    offset: 0,
                },
                StructFieldType {
                    name: "y".into(),
                    ty: Type::Primitive(unlace_ir::ssa::PrimitiveType::Int(4)),
                    offset: 4,
                },
            ],
        };
        pdb.structs.insert("Point".into(), point_type.clone());
        image.pdb_types = Some(pdb);

        let entry = FunctionEntry {
            name: "main".into(),
            addr: 0x1000,
            size: 2,
        };
        let lifter = unlace_lift::get_lifter(image.arch).expect("supported arch");
        let ir = super::lift_function(&image, lifter.as_ref(), &entry).expect("lift");
        let mut ssa = unlace_ir::ssa::build_ssa(ir);
        ssa.arch = image.arch;
        ssa.os_abi = image.os_abi;

        // Use a positive offset so `stack_offset_matches` resolves
        // through the `raw_offset == frame_offset.unsigned_abs()` arm.
        // Frame offset -16 has `unsigned_abs() == 16`; stack varnode at
        // offset 16 matches.
        let stack_var = SsaVarnode {
            base: Varnode::stack(16, 4),
            version: 1,
        };
        ssa.var_map.insert(
            (
                unlace_ir::BlockId(0),
                0,
                unlace_ir::ssa::VarnodeSlot::Output,
            ),
            stack_var,
        );
        ssa.dwarf_local_names.insert(-16, "Point".into());

        super::apply_pdb_types_to_ssa(&mut ssa, &image);

        let recovered = ssa
            .composite_var_types
            .get(&stack_var)
            .expect("Point struct landed on the stack varnode");
        assert!(matches!(recovered, Type::Struct { name, .. } if name == "Point"));
    }

    /// `apply_pdb_types_to_ssa` is a no-op when `image.pdb_types` is
    /// `None`.
    #[test]
    fn apply_pdb_types_no_op_without_pdb_data() {
        let code = vec![0xc3];
        let image = make_text_image(code, 0x1000);
        let entry = FunctionEntry {
            name: "main".into(),
            addr: 0x1000,
            size: 1,
        };
        let lifter = unlace_lift::get_lifter(image.arch).expect("supported arch");
        let ir = super::lift_function(&image, lifter.as_ref(), &entry).expect("lift");
        let mut ssa = unlace_ir::ssa::build_ssa(ir);
        ssa.arch = image.arch;
        ssa.os_abi = image.os_abi;
        let before = ssa.composite_var_types.len();
        super::apply_pdb_types_to_ssa(&mut ssa, &image);
        assert_eq!(ssa.composite_var_types.len(), before);
    }

    #[test]
    fn pdb_debug_overlay_selects_locals_by_entry_rva() {
        use unlace_ir::ssa::SsaVarnode;
        use unlace_ir::types::Type;
        use unlace_loader::pdb_types::PdbTypes;
        use unlace_loader::{PdbInfo, PdbLocal};

        let image_base = 0x0040_0000;
        let function_rva = 0x1000;
        let entry_va = image_base + function_rva;
        let mut image = make_text_image(vec![0xc3], entry_va);
        image.image_base = Some(image_base);

        let mut pdb_info = PdbInfo::default();
        pdb_info.function_locals.insert(
            function_rva,
            vec![PdbLocal {
                name: "sidecar_count".to_string(),
                frame_offset: Some(-8),
                type_index: 0x1000,
            }],
        );
        image.pdb_info = Some(pdb_info);

        let mut pdb_types = PdbTypes::default();
        pdb_types.by_index.insert(0x1000, Type::uint(4));
        image.pdb_types = Some(pdb_types);

        let mut ir_func = Function::new("pdb_sidecar_func", BlockId(0), entry_va);
        ir_func.insert_block(BasicBlock::new(BlockId(0)));
        let mut ssa = build_ssa(ir_func);
        ssa.arch = ArchId::X86_64;
        let stack_var = SsaVarnode {
            base: Varnode::stack(8, 4),
            version: 1,
        };
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), stack_var);

        let entry = FunctionEntry {
            name: "pdb_sidecar_func".to_string(),
            addr: entry_va,
            size: 1,
        };
        super::apply_pdb_debug_to_ssa(&mut ssa, &image, &entry);

        assert_eq!(
            ssa.dwarf_local_names.get(&-8).map(String::as_str),
            Some("sidecar_count"),
        );
        let recovered = ssa
            .lvars
            .iter()
            .find(|lvar| {
                matches!(lvar.storage, LvarStorage::Stack { offset: -8 })
                    && lvar.name.as_deref() == Some("sidecar_count")
            })
            .expect("production PDB overlay should install a debug stack lvar");
        assert_eq!(recovered.source, LvarSource::FromDebug);
        assert!(recovered.flags.contains(LvarFlags::FROM_DEBUG));
    }

    #[test]
    fn pdb_locals_render_debug_stack_name_and_type() {
        use unlace_ir::ssa::{StackFrame, StackLocal};
        use unlace_ir::types::Type;
        use unlace_loader::pdb_types::PdbTypes;
        use unlace_loader::{PdbInfo, PdbLocal};
        use unlace_struct::{HirFunction, HirNode};

        let mut ir_func = Function::new("pdb_local_sink", BlockId(0), 0x1000);
        ir_func.insert_block(BasicBlock::new(BlockId(0)));
        let mut ssa = build_ssa(ir_func);
        ssa.arch = ArchId::X86_64;
        ssa.var_map.insert(
            (BlockId(0), 0, VarnodeSlot::Output),
            SsaVarnode {
                base: Varnode::stack(8, 4),
                version: 1,
            },
        );
        let mut ssa_locals = BTreeMap::new();
        ssa_locals.insert(
            -8,
            StackLocal {
                offset: -8,
                size: 4,
                access_widths: vec![4],
                kind: Default::default(),
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals: ssa_locals,
            sp_offset_at_addr: std::collections::BTreeMap::new(),
            frame_size: 4,
            max_pos_offset: -4,
            min_neg_offset: -8,
        });

        let mut pdb_info = PdbInfo::default();
        pdb_info.function_locals.insert(
            0x1000,
            vec![PdbLocal {
                name: "pdb_count".to_string(),
                frame_offset: Some(-8),
                type_index: 0x1000,
            }],
        );
        let mut pdb_types = PdbTypes::default();
        pdb_types.by_index.insert(0x1000, Type::uint(4));

        super::apply_pdb_function_locals_to_ssa(
            &mut ssa,
            super::PdbFunctionLocalSource {
                info: &pdb_info,
                types: Some(&pdb_types),
                function_rva: 0x1000,
            },
        );

        let annotations = unlace_output::PrinterAnnotations {
            stack_lvars: unlace_output::stack_lvar_annotations_from_ssa(&ssa),
            ..Default::default()
        };

        let rsp = Varnode::reg(32, 8);
        let addr = Varnode::unique(0x100, 8);
        let ram = Varnode::constant(1, 8);
        let five = Varnode::constant(5, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntSub,
                addr,
                smallvec![rsp, Varnode::constant(8, 8)],
                0x1000,
            )),
            HirNode::Statement(IrInsn::without_output(
                IrOp::Store,
                smallvec![ram, addr, five],
                0x1004,
            )),
            HirNode::Return(None),
        ];
        let hir = HirFunction {
            name: "pdb_local_sink".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: BTreeSet::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            byref_locals: BTreeSet::new(),
            stack_frame: ssa.stack_frame.clone(),
            cpp_lambda_captures: Vec::new(),
            vtable_call_targets: BTreeMap::new(),
            go_defer_recover_calls: BTreeMap::new(),
            rust_async: None,
        };

        let output = unlace_output::print_c_with_annotations(
            &hir,
            None,
            None,
            None,
            None,
            None,
            None,
            Some(&annotations),
        );
        assert!(
            output.contains("unsigned int pdb_count;"),
            "PDB local type/name should drive final declaration: {output}",
        );
        assert!(
            output.contains("pdb_count = 5;"),
            "PDB local name should replace synthetic stack access: {output}",
        );
        assert!(
            !output.contains("v_8"),
            "PDB local output should not fall back to synthetic stack names: {output}",
        );
    }

    /// §5.3: `decompile_one_function_cached` writes to the cache on
    /// miss and returns the cached body on a subsequent identical call
    /// (verified by overwriting the cache with a sentinel between calls
    /// and observing the sentinel come back).
    #[test]
    fn decompile_one_function_cached_round_trips_through_disk_cache() {
        use unlace_loader::Loader;
        let fixture =
            std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../fixtures/hello_world.elf");
        let data = std::fs::read(&fixture).expect("fixture present");
        let image = unlace_loader::ElfLoader::load(&data).expect("elf parse");
        let main_addr = image
            .symbols
            .iter()
            .find(|(_, s)| s.name == "main")
            .map(|(addr, _)| *addr)
            .expect("main symbol");

        let tmp =
            std::env::temp_dir().join(format!("unlace_pipeline_cache_test_{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&tmp);
        let cache = crate::cache::DiskCache::new(&tmp);
        let sha = crate::cache::sha256_hex(&data);

        // First call: cache miss, runs pipeline, writes body.
        let first = super::decompile_one_function_cached(
            &image,
            main_addr,
            EmitFormat::C,
            Some(&cache),
            Some(&sha),
        )
        .expect("first call");

        // Overwrite the cache entry with a sentinel so the second call's
        // returned body proves we're reading from cache rather than
        // re-running the pipeline.
        let key = crate::cache::CacheKey::new(&sha, main_addr, 0);
        // The recorded size may differ from `0`; recover it from `discover_functions`
        // the same way the cached entry was built.
        let functions = super::discover_functions(&image, None).expect("discover");
        let entry = functions
            .iter()
            .filter(|f| f.addr <= main_addr)
            .max_by_key(|f| f.addr)
            .expect("entry");
        let actual_key = crate::cache::CacheKey::new(&sha, entry.addr, entry.size);
        cache.put(&actual_key, b"SENTINEL").expect("overwrite");

        let second = super::decompile_one_function_cached(
            &image,
            main_addr,
            EmitFormat::C,
            Some(&cache),
            Some(&sha),
        )
        .expect("second call");

        let _ = std::fs::remove_dir_all(&tmp);
        // First-call output is real C; second-call output is the sentinel.
        assert!(first.contains("main"));
        assert_eq!(second, "SENTINEL");
        let _ = key; // suppress unused warning
    }

    /// Batch 25: lazy lifting on a real fixture. The closest function
    /// at-or-below the target address is decompiled; we just check that
    /// a non-empty C string comes back and contains a known token.
    #[test]
    fn decompile_one_function_returns_c_for_hello_world_main() {
        use unlace_loader::Loader;
        let fixture =
            std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../fixtures/hello_world.elf");
        let data = std::fs::read(&fixture).expect("fixture present");
        let image = unlace_loader::ElfLoader::load(&data).expect("elf parse");
        // Find `main`'s entry from the image symbols so we don't hard-code
        // an address that could drift across rebuilds.
        let main_addr = image
            .symbols
            .iter()
            .find(|(_, s)| s.name == "main")
            .map(|(addr, _)| *addr)
            .expect("hello_world should export main");

        let out = super::decompile_one_function(&image, main_addr, EmitFormat::C)
            .expect("decompile_one_function");
        assert!(
            out.contains("int main") || out.contains("void main") || out.contains("main("),
            "lazy decompile must render the function header; got: {out}",
        );
    }

    fn ssa_with_pending(pending: Vec<PendingDwarfLocal>, observed: &[i64]) -> SsaFunction {
        let mut func = Function::new("calib", BlockId(0), 0x1000);
        func.insert_block(BasicBlock::new(BlockId(0)));
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        ssa.pending_dwarf_locals = pending;
        for (i, &off) in observed.iter().enumerate() {
            ssa.stack_offset_hints.insert((BlockId(0), i), off);
        }
        ssa
    }

    fn pending(frame_offset: i64, name: &str, delta: Option<i64>, agg: bool) -> PendingDwarfLocal {
        PendingDwarfLocal {
            frame_offset,
            name: name.to_string(),
            type_name: None,
            byte_size: None,
            raw_span: None,
            calibrated_span: None,
            cfa_to_rbp_delta: delta,
            is_aggregate: agg,
            is_param: false,
        }
    }

    #[test]
    fn calibrate_shifts_fp_function_by_cfi_delta() {
        // Two locals at raw CFA offsets -20/-16; the real RBP slots (observed)
        // are +16 away at -4/0. The CFI delta is +16 and corroborated by both,
        // so calibration relocates the names onto the resolved slots.
        let mut ssa = ssa_with_pending(
            vec![
                pending(-20, "a", Some(16), false),
                pending(-16, "b", Some(16), false),
            ],
            &[-4, 0],
        );
        super::calibrate_dwarf_offsets(&mut ssa);
        assert_eq!(
            ssa.dwarf_local_names.get(&-4).map(String::as_str),
            Some("a")
        );
        assert_eq!(ssa.dwarf_local_names.get(&0).map(String::as_str), Some("b"));
        assert!(!ssa.dwarf_local_names.contains_key(&-20));
    }

    #[test]
    fn calibrate_declines_uncorroborated_delta() {
        // The CFI delta is +16 but only the raw offsets are observed (the
        // shifted ones are not), so the shift is not corroborated → no shift.
        let mut ssa = ssa_with_pending(
            vec![
                pending(-20, "a", Some(16), false),
                pending(-16, "b", Some(16), false),
            ],
            &[-20, -16],
        );
        super::calibrate_dwarf_offsets(&mut ssa);
        // delta=0 leaves the raw seed untouched.
        assert!(ssa.dwarf_local_names.is_empty() || ssa.dwarf_local_names.contains_key(&-20));
        assert!(!ssa.dwarf_local_names.contains_key(&-4));
    }

    #[test]
    fn calibrate_keeps_aggregate_at_raw_offset() {
        // An aggregate local must keep its RAW offset entry (so buffer fusion
        // is unchanged) and be recorded in dwarf_aggregate_offsets, even when
        // the function is otherwise shifted by the CFI delta.
        let mut ssa = ssa_with_pending(
            vec![
                pending(-20, "a", Some(16), false),
                pending(-16, "b", Some(16), false),
                pending(-48, "p", Some(16), true),
            ],
            &[-4, 0],
        );
        super::calibrate_dwarf_offsets(&mut ssa);
        assert_eq!(
            ssa.dwarf_local_names.get(&-4).map(String::as_str),
            Some("a")
        );
        assert_eq!(ssa.dwarf_local_names.get(&0).map(String::as_str), Some("b"));
        // Aggregate keeps its RAW offset entry (buffer fusion unchanged).
        assert_eq!(
            ssa.dwarf_local_names.get(&-48).map(String::as_str),
            Some("p")
        );
        assert!(ssa.dwarf_aggregate_offsets.contains(&-48));
    }

    #[test]
    fn calibrate_records_aggregate_type_size_and_spans_without_shifting_name() {
        let mut ssa = ssa_with_pending(
            vec![
                pending(-20, "a", Some(16), false),
                pending(-16, "b", Some(16), false),
                PendingDwarfLocal {
                    frame_offset: -48,
                    name: "p".to_string(),
                    cfa_to_rbp_delta: Some(16),
                    type_name: Some("Pair".to_string()),
                    byte_size: Some(8),
                    raw_span: None,
                    calibrated_span: None,
                    is_aggregate: true,
                    is_param: false,
                },
            ],
            &[-4, 0],
        );

        super::calibrate_dwarf_offsets(&mut ssa);

        let ann = ssa
            .pending_dwarf_locals
            .iter()
            .find(|pending| pending.name == "p")
            .expect("aggregate pending record retained");
        assert_eq!(ann.name, "p");
        assert_eq!(ann.type_name.as_deref(), Some("Pair"));
        assert_eq!(ann.byte_size, Some(8));
        assert_eq!(
            ann.raw_span.map(|span| (span.start, span.byte_size)),
            Some((-48, 8))
        );
        assert_eq!(
            ann.calibrated_span.map(|span| (span.start, span.byte_size)),
            Some((-32, 8))
        );
        assert_eq!(
            ssa.dwarf_local_names.get(&-48).map(String::as_str),
            Some("p"),
            "aggregate name must remain at the raw offset for existing buffer fusion"
        );
        assert!(!ssa.dwarf_local_names.contains_key(&-32));
    }
}
