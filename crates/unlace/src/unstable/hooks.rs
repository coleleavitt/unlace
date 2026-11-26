//! Custom passes: a p-code [`Rule`] in one of the rule pools, and a callback
//! that gets the function at a phase boundary, both added to the default
//! pipeline of a [`Decompiler`] through [`DecompilerHooks`].
//! `cargo run -p unlace --example custom_pass` shows both.
//!
//! ```no_run
//! use unlace::unstable::hooks::{DecompilerHooks, UnlacePhase};
//!
//! let mut decompiler = unlace::Decompiler::open("a.out")?
//!     .with_phase_hook(UnlacePhase::P6, |function| {
//!         eprintln!("{} has its variables", function.get_name());
//!     })?;
//! let main = decompiler.decompile_named("main")?;
//! # Ok::<(), unlace::Error>(())
//! ```
//!
//! With nothing registered the pipeline and its output are the default ones.
//!
//! The types re-exported here are the engine's own (`unlace-decomp`), so
//! their methods are the engine's internal API and change with it. A program
//! that needs more of the engine than is re-exported depends on
//! `unlace-decomp` at the same revision.
//!
//! # Rules
//!
//! A rule is offered one op at a time and either rewrites around it and
//! returns non-zero, or returns `0` having changed nothing. It is added
//! behind a *group*: [`with_rule`](DecompilerHooks::with_rule) puts it
//! directly behind the last built-in rule of that group, in the first pool
//! that holds the group. [`rule_groups`] returns the groups; they are:
//!
//! | Pool | When it runs | Groups |
//! |---|---|---|
//! | `oppool1` | Inside the main loop, after each round of SSA construction and type inference, repeated until no rule fires. Most simplification happens here. | `deadcode`, `analysis`, `nodejoin`, `canonicalcompare`, `subvar`, `conditionalexe`, `floatprecision`, `typerecovery`, `segment`, `protorecovery`, `doubleload`, `doubleprecis` |
//! | `oppool2` | Later in the same loop, after block structuring: the pointer-arithmetic and stack-access forms. | `stackvars` |
//! | `cleanup` | After the main loop has reached its fixed point and before variables are merged; it is not part of a loop. | `cleanup`, `splitcopy`, `splitpointer`, `constsequence`, `bitfields` |
//!
//! The group in the rule's [`RuleState`] is a separate choice: it decides
//! which pipeline variants keep the rule. The full pipeline keeps every group
//! above. The reduced pipeline that recovers a jump table runs on a partial
//! copy of the function and keeps `deadcode`, `analysis`, `canonicalcompare`,
//! `subvar`, `conditionalexe`, `segment` and `stackvars`, so a rule in one of
//! those groups also fires there.
//!
//! What a rule must keep true:
//!
//! - It returns non-zero exactly when it changed the function. The pool
//!   sweeps all ops again until a sweep changes nothing, so a rule whose
//!   result matches its own pattern, or two rules that undo each other, run
//!   until the engine's limit of 100000 repeated passes stops them with a
//!   warning on the function, or, when they keep changing one op's opcode,
//!   until the function's time budget
//!   ([`with_max_fn_seconds`](Decompiler::with_max_fn_seconds)) does with an
//!   error that names them.
//! - The function stays in SSA form. The rule edits through the op methods
//!   of [`Funcdata`] (`op_set_input`, `op_set_opcode_code`,
//!   `op_remove_input`, `new_op`, `new_unique_out`, `op_insert_before`,
//!   `new_constant`), which keep the def-use links, and the Varnodes it reads
//!   in a new place are constants, function inputs or written by an op.
//! - It does not change control flow: no block, edge or branch target.
//! - One instance serves every function of a load. State it keeps between
//!   ops is cleared in [`Rule::reset`], which runs before each function.
//! - After a sweep that only removed dead ops and replaced inputs by what
//!   they copy, the pool offers a rule only the ops next to those changes. A
//!   rule whose test reads further than one op from the op it is offered
//!   (past that op's inputs and output, their readers, and the ops that write
//!   the inputs) returns `true` from [`Rule::walks_far`] to be offered every
//!   op of its opcodes in such a sweep; otherwise it fires on what a change
//!   two ops away made possible only at the next full sweep.
//! - Its name is its own: no built-in rule and no other added rule has it.
//!
//! A rewrite that is one op pattern and one replacement needs no Rust:
//! [`with_rules_file`](DecompilerHooks::with_rules_file) loads such rules
//! from a TOML file, the one `unlace decompile --rules FILE` takes.
//!
//! # Phase callbacks
//!
//! [`with_phase_hook`](DecompilerHooks::with_phase_hook) runs a callback on
//! every function at one fixed point of the pipeline per phase. The level is
//! what [`Funcdata::maturity`] reports there.
//!
//! | Phase | The callback runs | Level | What it may change |
//! |---|---|---|---|
//! | `P2` | after the ops are lifted and the control-flow graph is built, before SSA | `lifted` | Ops in place: an op's opcode and its inputs. The whole pipeline runs on the result. |
//! | `P3`, `P4`, `P5` | after the main loop has reached its fixed point, in this order at the same point (the three phases have no boundary between them) | `band-b` | Data flow, under the rules for a [`Rule`]. The change is final: the main loop's simplification, dead-code removal, SSA construction and type inference do not run again, so the callback removes the ops it leaves unread (`op_destroy`), and a Varnode it creates gets no inferred type. |
//! | `P6` | after variables are assigned and merged | `merged` | Nothing. |
//! | `P7` | after the final block structuring | `structured` | Nothing. |
//! | `P8` | after the last structure pass | `casts` | Nothing. |
//!
//! A callback may read anything at any boundary. No boundary allows a change
//! to control flow. A change the table does not allow is not checked, and its
//! effect is undefined: later passes rely on what was settled before them.
//!
//! - **Restarts.** A pass that learns something that invalidates earlier work
//!   clears the function and runs the pipeline on it again. Every callback
//!   then runs again, on the rebuilt function: the changes it made to the
//!   abandoned one are gone, and it makes them again. A callback that
//!   records what it sees keys the record by function and overwrites it.
//!   Decompiling a function a second time runs the callbacks again as well.
//! - **Jump tables.** No callback runs on the partial copy of a function that
//!   jump-table recovery analyses.
//! - **Order.** The callbacks of one phase run in the order they were added.
//!
//! # Determinism
//!
//! unlace gives the same output for the same input, and a rule or callback
//! is part of the pipeline, so it has to do the same: its effect depends only
//! on the function it is given and the loaded program, not on the clock, a
//! random source, the addresses of allocations or the iteration order of a
//! hash map. State carried from one function into the changes made to
//! another makes the output depend on the order functions are decompiled in.
//!
//! A panic in a rule or callback fails the function it ran on, like a panic
//! in an engine pass: the call returns [`Error::Decompile`] with the panic's
//! message in its reason, and the load stays usable.

use std::cell::RefCell;
use std::path::Path;
use std::rc::Rc;

use unlace_decomp::architecture::Architecture;
use unlace_decomp::hooks::HookRegistry;
use unlace_decomp::rewritefile::read_rules;

pub use unlace_decomp::action::{ActionGroupList, Rule, RuleState};
pub use unlace_decomp::context::{OpId, VarnodeId};
pub use unlace_decomp::funcdata::Funcdata;
pub use unlace_decomp::op::PcodeOp;
pub use unlace_decomp::phases::UnlacePhase;
pub use unlace_decomp::varnode::Varnode;
pub use unlace_num::opcodes::OpCode;

use crate::{Decompiler, Error, Result};

type Callback = Rc<RefCell<dyn FnMut(&mut Funcdata)>>;

struct RuleHook {
    after_group: String,
    state: RuleState,
    rule: Box<dyn Rule>,
}

/// What a [`Decompiler`] registers on the architecture of each load.
#[derive(Default)]
pub(crate) struct Hooks {
    rules: Vec<RuleHook>,
    phases: Vec<(UnlacePhase, Callback)>,
}

impl Hooks {
    /// Register everything on a freshly built architecture, in the order the
    /// builder methods were called.
    pub(crate) fn install(&self, arch: &mut Architecture) -> Result<(), String> {
        for hook in &self.rules {
            let rule = fresh(hook.rule.as_ref(), &hook.state)?;
            arch.add_rule(&hook.after_group, hook.state.clone(), rule)
                .map_err(|e| e.explain().to_string())?;
        }
        for (phase, callback) in &self.phases {
            let callback = Rc::clone(callback);
            arch.on_phase(*phase, move |data| (callback.borrow_mut())(data))
                .map_err(|e| e.explain().to_string())?;
        }
        Ok(())
    }
}

/// A new instance of `rule` for its own group, as a rule pool makes one.
fn fresh(rule: &dyn Rule, state: &RuleState) -> Result<Box<dyn Rule>, String> {
    let own = ActionGroupList::from_names([state.basegroup.as_str()]);
    rule.clone_rule(&own).ok_or_else(|| {
        format!(
            "rule {} does not clone for its group {}",
            state.name, state.basegroup
        )
    })
}

/// The groups a rule can be added behind, as `(pool, group)` pairs in the
/// order the pools run. The pool is the one [`DecompilerHooks::with_rule`]
/// puts a rule in when it is given that group.
///
/// ```
/// let groups = unlace::unstable::hooks::rule_groups();
/// assert!(groups.contains(&("oppool1", "analysis".to_string())));
/// ```
pub fn rule_groups() -> Vec<(&'static str, String)> {
    unlace_decomp::hooks::rule_groups()
}

mod sealed {
    pub trait Sealed {}
    impl Sealed for crate::Decompiler {}
}

/// The hook methods of a [`Decompiler`]. Import the trait to call them.
///
/// Each method drops the current load, as every builder method does; the
/// rules and callbacks are registered again on every load, before any option
/// is applied. The contract they run under is in the [module docs](self).
pub trait DecompilerHooks: sealed::Sealed + Sized {
    /// Add a p-code rule to the default pipeline, directly behind the last
    /// rule of `after_group` in the rule pool that holds that group.
    ///
    /// `state` names the rule (the name the action listing shows) and gives
    /// the group that decides which root variants keep it; `rule` must clone
    /// for that group ([`Rule::clone_rule`]). Rules added behind one group
    /// keep the order they were added in.
    ///
    /// Errors with [`Error::Request`] when no rule pool holds `after_group`
    /// ([`rule_groups`] lists them), when a built-in rule or one added
    /// before has the name of `state`, or when `rule` does not clone for the
    /// group of `state`.
    ///
    /// ```no_run
    /// use unlace::unstable::hooks::{
    ///     ActionGroupList, DecompilerHooks, Funcdata, OpCode, OpId, Rule, RuleState, VarnodeId,
    /// };
    ///
    /// /// `(x | y) + (x & y)  =>  x + y`.
    /// struct OrAndSum;
    ///
    /// fn operands(data: &Funcdata, vn: VarnodeId, code: OpCode) -> Option<(VarnodeId, VarnodeId)> {
    ///     let op = data.obank().get(data.vbank().get(vn)?.get_def()?)?;
    ///     (op.code() == code).then_some((op.get_in(0)?, op.get_in(1)?))
    /// }
    ///
    /// impl Rule for OrAndSum {
    ///     fn get_op_list(&self) -> Vec<OpCode> {
    ///         vec![OpCode::CPUI_INT_ADD]
    ///     }
    ///     fn clone_rule(&self, groups: &ActionGroupList) -> Option<Box<dyn Rule>> {
    ///         groups.contains("analysis").then(|| Box::new(OrAndSum) as Box<dyn Rule>)
    ///     }
    ///     fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> i32 {
    ///         let Some(add) = data.obank().get(op) else { return 0 };
    ///         let (Some(lhs), Some(rhs)) = (add.get_in(0), add.get_in(1)) else { return 0 };
    ///         let pair = |first, second| {
    ///             let or = operands(data, first, OpCode::CPUI_INT_OR)?;
    ///             let and = operands(data, second, OpCode::CPUI_INT_AND)?;
    ///             (or == and || or == (and.1, and.0)).then_some(or)
    ///         };
    ///         let Some((x, y)) = pair(lhs, rhs).or_else(|| pair(rhs, lhs)) else { return 0 };
    ///         data.op_set_input(op, x, 0).expect("an INT_ADD has slot 0");
    ///         data.op_set_input(op, y, 1).expect("an INT_ADD has slot 1");
    ///         1
    ///     }
    /// }
    ///
    /// let decompiler = unlace::Decompiler::open("a.out")?
    ///     .with_rule("analysis", RuleState::new("analysis", 0, "orandsum"), OrAndSum)?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    fn with_rule(
        self,
        after_group: &str,
        state: RuleState,
        rule: impl Rule + 'static,
    ) -> Result<Self>;

    /// Run `callback` on every function at the boundary of `phase`; the
    /// callbacks of one phase run in the order they were added.
    ///
    /// Errors with [`Error::Request`] for a phase that has no boundary inside
    /// the action tree (`P0`, `P1`, `P9`, `Infra`).
    ///
    /// ```no_run
    /// use unlace::unstable::hooks::{DecompilerHooks, UnlacePhase};
    ///
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_phase_hook(UnlacePhase::P2, |data| {
    ///     let lifted = data.obank().iter_alive().count();
    ///     eprintln!("{}: {lifted} ops lifted", data.get_name());
    /// })?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    fn with_phase_hook(
        self,
        phase: UnlacePhase,
        callback: impl FnMut(&mut Funcdata) + 'static,
    ) -> Result<Self>;

    /// Add the rules of a rewrite rule file (`--rules FILE`): p-code rewrites
    /// written as TOML, each compiled into a [`Rule`] and added behind the
    /// group it names, as [`with_rule`](Self::with_rule) adds one.
    /// `docs/cli.md` ("`--rules FILE`") describes the file.
    ///
    /// The file is read and checked here. Errors with [`Error::Request`] when
    /// it cannot be read or a rule in it is refused; the message has one line
    /// per problem, with the path, the line and the rule's name.
    ///
    /// ```no_run
    /// use unlace::unstable::hooks::DecompilerHooks;
    ///
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_rules_file("rules.toml")?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    fn with_rules_file(self, path: impl AsRef<Path>) -> Result<Self>;
}

impl DecompilerHooks for Decompiler {
    fn with_rule(
        mut self,
        after_group: &str,
        state: RuleState,
        rule: impl Rule + 'static,
    ) -> Result<Self> {
        let rule: Box<dyn Rule> = Box::new(rule);
        let probe = fresh(rule.as_ref(), &state).map_err(Error::Request)?;
        HookRegistry::default()
            .add_rule(after_group, state.clone(), probe)
            .map_err(|e| Error::Request(e.explain().to_string()))?;
        if self
            .hooks
            .rules
            .iter()
            .any(|hook| hook.state.name == state.name)
        {
            return Err(Error::Request(format!(
                "a rule is already named {}",
                state.name
            )));
        }
        self.hooks.rules.push(RuleHook {
            after_group: after_group.to_string(),
            state,
            rule,
        });
        self.session = None;
        Ok(self)
    }

    fn with_phase_hook(
        mut self,
        phase: UnlacePhase,
        callback: impl FnMut(&mut Funcdata) + 'static,
    ) -> Result<Self> {
        HookRegistry::default()
            .on_phase(phase, Box::new(|_| ()))
            .map_err(|e| Error::Request(e.explain().to_string()))?;
        self.hooks
            .phases
            .push((phase, Rc::new(RefCell::new(callback))));
        self.session = None;
        Ok(self)
    }

    fn with_rules_file(self, path: impl AsRef<Path>) -> Result<Self> {
        let rules = read_rules(path.as_ref()).map_err(Error::Request)?;
        rules.into_iter().try_fold(self, |decompiler, rule| {
            let state = RuleState::new(rule.group(), 0, rule.name());
            let group = rule.group().to_string();
            decompiler.with_rule(&group, state, rule)
        })
    }
}
