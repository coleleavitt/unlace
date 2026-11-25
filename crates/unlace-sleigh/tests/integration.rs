// Shared integration-test executable. Process-sensitive tests stay separate.
#[path = "arcv2_decode.rs"]
mod arcv2_decode;

#[path = "arm_coprocessor_selectors.rs"]
mod arm_coprocessor_selectors;

#[path = "arm_neon_vldm_regression.rs"]
mod arm_neon_vldm_regression;

#[path = "arm_pop_return.rs"]
mod arm_pop_return;

#[path = "combined_decode.rs"]
mod combined_decode;

#[path = "golden_lift.rs"]
mod golden_lift;

#[path = "instruction_mask.rs"]
mod instruction_mask;

#[path = "macro_symbol.rs"]
mod macro_symbol;

#[path = "ppc_lwarx_reservation.rs"]
mod ppc_lwarx_reservation;

#[path = "ppc_ldx_ldarx_encoding.rs"]
mod ppc_ldx_ldarx_encoding;

#[path = "ppc_nested_operands.rs"]
mod ppc_nested_operands;

#[path = "sparc_delay_slot_condition.rs"]
mod sparc_delay_slot_condition;

#[path = "sparc_float_to_integer.rs"]
mod sparc_float_to_integer;

#[path = "verify_context_commits.rs"]
mod verify_context_commits;

#[path = "verify_ctxsnapshot.rs"]
mod verify_ctxsnapshot;

#[path = "ws4a_pattern_build_golden.rs"]
mod ws4a_pattern_build_golden;

#[path = "x86_maxlen_nop_regression.rs"]
mod x86_maxlen_nop_regression;

#[path = "x86_rdtsc_zero_extend.rs"]
mod x86_rdtsc_zero_extend;

#[path = "x87_integer_rounding.rs"]
mod x87_integer_rounding;

#[path = "x86_bound.rs"]
mod x86_bound;

#[path = "x86_uintr_gatherpf.rs"]
mod x86_uintr_gatherpf;
#[path = "x86_vmx_status.rs"]
mod x86_vmx_status;

#[path = "octeon_core.rs"]
mod octeon_core;

#[path = "nanomips_core.rs"]
mod nanomips_core;
