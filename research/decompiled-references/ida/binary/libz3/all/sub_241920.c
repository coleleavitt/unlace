__int64 __fastcall sub_241920(__int64 a1)
{
  sub_185D2A0(a1, "auto_config", 1, "automatically configure solver", "true", "smt");
  sub_185D2A0(a1, "logic", 8, "logic used to setup the SMT solver", "", "smt");
  sub_185D2A0(a1, "random_seed", 0, "random seed for the smt solver", "0", "smt");
  sub_185D2A0(
    a1,
    "relevancy",
    0,
    "relevancy propagation heuristic: 0 - disabled, 1 - relevancy is tracked by only affects quantifier instantiation, 2 "
    "- relevancy is tracked, and an atom is only asserted if it is relevant",
    "2",
    "smt");
  sub_185D2A0(
    a1,
    "macro_finder",
    1,
    "try to find universally quantified formulas that can be viewed as macros",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "quasi_macros",
    1,
    "try to find universally quantified formulas that are quasi-macros",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "restricted_quasi_macros",
    1,
    "try to find universally quantified formulas that are restricted quasi-macros",
    "false",
    "smt");
  sub_185D2A0(a1, "ematching", 1, "E-Matching based quantifier instantiation", "true", "smt");
  sub_185D2A0(
    a1,
    "phase_selection",
    0,
    "phase selection heuristic: 0 - always false, 1 - always true, 2 - phase caching, 3 - phase caching conservative, 4 -"
    " phase caching conservative 2, 5 - random, 6 - number of occurrences, 7 - theory",
    "3",
    "smt");
  sub_185D2A0(a1, "phase_caching_on", 0, "number of conflicts while phase caching is on", "400", "smt");
  sub_185D2A0(a1, "phase_caching_off", 0, "number of conflicts while phase caching is off", "100", "smt");
  sub_185D2A0(
    a1,
    "restart_strategy",
    0,
    "0 - geometric, 1 - inner-outer-geometric, 2 - luby, 3 - fixed, 4 - arithmetic",
    "1",
    "smt");
  sub_185D2A0(
    a1,
    "restart_factor",
    2,
    "when using geometric (or inner-outer-geometric) progression of restarts, it specifies the constant used to multiply "
    "the current restart threshold",
    "1.1",
    "smt");
  sub_185D2A0(
    a1,
    "case_split",
    0,
    "0 - case split based on variable activity, 1 - similar to 0, but delay case splits created during the search, 2 - si"
    "milar to 0, but cache the relevancy, 3 - case split based on relevancy (structural splitting), 4 - case split on rel"
    "evancy and activity, 5 - case split on relevancy and current goal, 6 - activity-based case split with theory-aware b"
    "ranching activity",
    "1",
    "smt");
  sub_185D2A0(a1, "delay_units", 1, "if true then z3 will not restart when a unit clause is learned", "false", "smt");
  sub_185D2A0(
    a1,
    "delay_units_threshold",
    0,
    "maximum number of learned unit clauses before restarting, ignored if delay_units is false",
    "32",
    "smt");
  sub_185D2A0(a1, "elim_unconstrained", 1, "pre-processing: eliminate unconstrained subterms", "true", "smt");
  sub_185D2A0(a1, "solve_eqs", 1, "pre-processing: solve equalities", "true", "smt");
  sub_185D2A0(
    a1,
    "solve_eqs.non_ground",
    1,
    "pre-processing: solve equalities. Allow eliminating variables by non-ground solutions which can break behavior for m"
    "odel evaluation.",
    "true",
    "smt");
  sub_185D2A0(a1, "propagate_values", 1, "pre-processing: propagate values", "true", "smt");
  sub_185D2A0(a1, "bound_simplifier", 1, "apply bounds simplification during pre-processing", "true", "smt");
  sub_185D2A0(a1, "pull_nested_quantifiers", 1, "pre-processing: pull nested quantifiers", "false", "smt");
  sub_185D2A0(a1, "refine_inj_axioms", 1, "pre-processing: refine injectivity axioms", "true", "smt");
  sub_185D2A0(
    a1,
    "candidate_models",
    1,
    "create candidate models even when quantifier or theory reasoning is incomplete",
    "false",
    "smt");
  sub_185D2A0(a1, "max_conflicts", 0, "maximum number of conflicts before giving up.", "4294967295", "smt");
  sub_185D2A0(a1, "restart.max", 0, "maximal number of restarts.", "4294967295", "smt");
  sub_185D2A0(a1, "cube_depth", 0, "cube depth.", "1", "smt");
  sub_185D2A0(a1, "threads", 0, "maximal number of parallel threads.", "1", "smt");
  sub_185D2A0(
    a1,
    "threads.max_conflicts",
    0,
    "maximal number of conflicts between rounds of cubing for parallel SMT",
    "400",
    "smt");
  sub_185D2A0(a1, "threads.cube_frequency", 0, "frequency for using cubing", "2", "smt");
  sub_185D2A0(a1, "mbqi", 1, "model based quantifier instantiation (MBQI)", "true", "smt");
  sub_185D2A0(
    a1,
    "mbqi.max_cexs",
    0,
    "initial maximal number of counterexamples used in MBQI, each counterexample generates a quantifier instantiation",
    "1",
    "smt");
  sub_185D2A0(
    a1,
    "mbqi.max_cexs_incr",
    0,
    "increment for MBQI_MAX_CEXS, the increment is performed after each round of MBQI",
    "0",
    "smt");
  sub_185D2A0(a1, "mbqi.max_iterations", 0, "maximum number of rounds of MBQI", "1000", "smt");
  sub_185D2A0(
    a1,
    "mbqi.trace",
    1,
    "generate tracing messages for Model Based Quantifier Instantiation (MBQI). It will display a message before every ro"
    "und of MBQI, and the quantifiers that were not satisfied",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "mbqi.force_template",
    0,
    "some quantifiers can be used as templates for building interpretations for functions. Z3 uses heuristics to decide w"
    "hether a quantifier will be used as a template or not. Quantifiers with weight >= mbqi.force_template are forced to "
    "be used as a template",
    "10",
    "smt");
  sub_185D2A0(
    a1,
    "mbqi.id",
    5,
    "Only use model-based instantiation for quantifiers with id's beginning with string",
    "",
    "smt");
  sub_185D2A0(
    a1,
    "q.lift_ite",
    0,
    "0 - don not lift non-ground if-then-else, 1 - use conservative ite lifting, 2 - use full lifting of if-then-else under quantifiers",
    "0",
    "smt");
  sub_185D2A0(a1, "q.lite", 1, "Use cheap quantifier elimination during pre-processing", "false", "smt");
  sub_185D2A0(a1, "qi.profile", 1, "profile quantifier instantiation", "false", "smt");
  sub_185D2A0(a1, "qi.profile_freq", 0, "how frequent results are reported by qi.profile", "4294967295", "smt");
  sub_185D2A0(a1, "qi.max_instances", 0, "maximum number of quantifier instantiations", "4294967295", "smt");
  sub_185D2A0(a1, "qi.eager_threshold", 2, "threshold for eager quantifier instantiation", "10.0", "smt");
  sub_185D2A0(a1, "qi.lazy_threshold", 2, "threshold for lazy quantifier instantiation", "20.0", "smt");
  sub_185D2A0(
    a1,
    "qi.cost",
    5,
    "expression specifying what is the cost of a given quantifier instantiation",
    "(+ weight generation)",
    "smt");
  sub_185D2A0(a1, "qi.max_multi_patterns", 0, "specify the number of extra multi patterns", "0", "smt");
  sub_185D2A0(
    a1,
    "qi.quick_checker",
    0,
    "specify quick checker mode, 0 - no quick checker, 1 - using unsat instances, 2 - using both unsat and no-sat instances",
    "0",
    "smt");
  sub_185D2A0(a1, "induction", 1, "enable generation of induction lemmas", "false", "smt");
  sub_185D2A0(a1, "bv.reflect", 1, "create enode for every bit-vector term", "true", "smt");
  sub_185D2A0(a1, "bv.enable_int2bv", 1, "enable support for int2bv and bv2int operators", "true", "smt");
  sub_185D2A0(a1, "bv.watch_diseq", 1, "use watch lists instead of eager axioms for bit-vectors", "false", "smt");
  sub_185D2A0(a1, "bv.delay", 1, "delay internalize expensive bit-vector operations", "false", "smt");
  sub_185D2A0(
    a1,
    "bv.size_reduce",
    1,
    "pre-processing; turn assertions that set the upper bits of a bit-vector to constants into a substitution that replac"
    "es the bit-vector with constant bits. Useful for minimizing circuits as many input bits to circuits are constant",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "bv.solver",
    0,
    "bit-vector solver engine: 0 - bit-blasting, 1 - polysat, 2 - intblast, requires sat.smt=true",
    "0",
    "smt");
  sub_185D2A0(
    a1,
    "arith.random_initial_value",
    1,
    "use random initial values in the simplex-based procedure for linear arithmetic",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "arith.solver",
    0,
    "arithmetic solver: 0 - no solver, 1 - bellman-ford based solver (diff. logic only), 2 - simplex based solver, 3 - fl"
    "oyd-warshall based solver (diff. logic only) and no theory combination 4 - utvpi, 5 - infinitary lra, 6 - lra solver",
    "6",
    "smt");
  sub_185D2A0(
    a1,
    "arith.nl",
    1,
    "(incomplete) nonlinear arithmetic support based on Groebner basis and interval propagation, relevant only if smt.arith.solver=2",
    "true",
    "smt");
  sub_185D2A0(
    a1,
    "arith.nl.nra",
    1,
    "call nra_solver when incremental linearization does not produce a lemma, this option is ignored when arith.nl=false,"
    " relevant only if smt.arith.solver=6",
    "true",
    "smt");
  sub_185D2A0(a1, "arith.nl.branching", 1, "branching on integer variables in non linear clusters", "true", "smt");
  sub_185D2A0(a1, "arith.nl.expensive_patching", 1, "use the expensive of monomials", "false", "smt");
  sub_185D2A0(
    a1,
    "arith.nl.rounds",
    0,
    "threshold for number of (nested) final checks for non linear arithmetic, relevant only if smt.arith.solver=2",
    "1024",
    "smt");
  sub_185D2A0(a1, "arith.nl.order", 1, "run order lemmas", "true", "smt");
  sub_185D2A0(a1, "arith.nl.expp", 1, "expensive patching", "false", "smt");
  sub_185D2A0(a1, "arith.nl.tangents", 1, "run tangent lemmas", "true", "smt");
  sub_185D2A0(a1, "arith.nl.horner", 1, "run horner's heuristic", "true", "smt");
  sub_185D2A0(
    a1,
    "arith.nl.horner_subs_fixed",
    0,
    "0 - no subs, 1 - substitute, 2 - substitute fixed zeros only",
    "2",
    "smt");
  sub_185D2A0(a1, "arith.nl.horner_frequency", 0, "horner's call frequency", "4", "smt");
  sub_185D2A0(
    a1,
    "arith.nl.horner_row_length_limit",
    0,
    "row is disregarded by the heuristic if its length is longer than the value",
    "10",
    "smt");
  sub_185D2A0(
    a1,
    "arith.nl.grobner_row_length_limit",
    0,
    "row is disregarded by the heuristic if its length is longer than the value",
    "10",
    "smt");
  sub_185D2A0(a1, "arith.nl.grobner_frequency", 0, "grobner's call frequency", "4", "smt");
  sub_185D2A0(a1, "arith.nl.grobner", 1, "run grobner's basis heuristic", "true", "smt");
  sub_185D2A0(a1, "arith.nl.grobner_eqs_growth", 0, "grobner's number of equalities growth ", "10", "smt");
  sub_185D2A0(a1, "arith.nl.grobner_expr_size_growth", 0, "grobner's maximum expr size growth", "2", "smt");
  sub_185D2A0(a1, "arith.nl.grobner_expr_degree_growth", 0, "grobner's maximum expr degree growth", "2", "smt");
  sub_185D2A0(a1, "arith.nl.grobner_max_simplified", 0, "grobner's maximum number of simplifications", "10000", "smt");
  sub_185D2A0(a1, "arith.nl.grobner_cnfl_to_report", 0, "grobner's maximum number of conflicts to report", "1", "smt");
  sub_185D2A0(a1, "arith.nl.gr_q", 0, "grobner's quota", "10", "smt");
  sub_185D2A0(
    a1,
    "arith.nl.grobner_subs_fixed",
    0,
    "0 - no subs, 1 - substitute, 2 - substitute fixed zeros only",
    "1",
    "smt");
  sub_185D2A0(
    a1,
    "arith.nl.delay",
    0,
    "number of calls to final check before invoking bounded nlsat check",
    "10",
    "smt");
  sub_185D2A0(a1, "arith.nl.propagate_linear_monomials", 1, "propagate linear monomials", "true", "smt");
  sub_185D2A0(a1, "arith.nl.optimize_bounds", 1, "enable bounds optimization", "true", "smt");
  sub_185D2A0(a1, "arith.nl.cross_nested", 1, "enable cross-nested consistency checking", "true", "smt");
  sub_185D2A0(a1, "arith.nl.log", 1, "Log lemmas sent to nra solver", "false", "smt");
  sub_185D2A0(a1, "arith.propagate_eqs", 1, "propagate (cheap) equalities", "true", "smt");
  sub_185D2A0(
    a1,
    "arith.propagation_mode",
    0,
    "0 - no propagation, 1 - propagate existing literals, 2 - refine finite bounds",
    "1",
    "smt");
  sub_185D2A0(a1, "arith.branch_cut_ratio", 0, "branch/cut ratio for linear integer arithmetic", "2", "smt");
  sub_185D2A0(a1, "arith.int_eq_branch", 1, "branching using derived integer equations", "false", "smt");
  sub_185D2A0(a1, "arith.ignore_int", 1, "treat integer variables as real", "false", "smt");
  sub_185D2A0(a1, "arith.dump_lemmas", 1, "dump arithmetic theory lemmas to files", "false", "smt");
  sub_185D2A0(a1, "arith.dump_bound_lemmas", 1, "dump linear solver bounds to files in smt2 format", "false", "smt");
  sub_185D2A0(a1, "arith.greatest_error_pivot", 1, "Pivoting strategy", "false", "smt");
  sub_185D2A0(a1, "arith.eager_eq_axioms", 1, "eager equality axioms", "true", "smt");
  sub_185D2A0(a1, "arith.auto_config_simplex", 1, "force simplex solver in auto_config", "false", "smt");
  sub_185D2A0(
    a1,
    "arith.rep_freq",
    0,
    "the report frequency, in how many iterations print the cost and other info",
    "0",
    "smt");
  sub_185D2A0(a1, "arith.min", 1, "minimize cost", "false", "smt");
  sub_185D2A0(a1, "arith.print_stats", 1, "print statistic", "false", "smt");
  sub_185D2A0(a1, "arith.validate", 1, "validate lemmas generated by arithmetic solver", "false", "smt");
  sub_185D2A0(a1, "arith.simplex_strategy", 0, "simplex strategy for the solver", "0", "smt");
  sub_185D2A0(a1, "arith.enable_hnf", 1, "enable hnf (Hermite Normal Form) cuts", "true", "smt");
  sub_185D2A0(
    a1,
    "arith.bprop_on_pivoted_rows",
    1,
    "propagate bounds on rows changed by the pivot operation",
    "true",
    "smt");
  sub_185D2A0(a1, "arith.print_ext_var_names", 1, "print external variable names", "false", "smt");
  sub_185D2A0(a1, "pb.conflict_frequency", 0, "conflict frequency for Pseudo-Boolean theory", "1000", "smt");
  sub_185D2A0(a1, "pb.learn_complements", 1, "learn complement literals for Pseudo-Boolean theory", "true", "smt");
  sub_185D2A0(
    a1,
    "up.persist_clauses",
    1,
    "replay propagated clauses below the levels they are asserted",
    "false",
    "smt");
  sub_185D2A0(a1, "array.weak", 1, "weak array theory", "false", "smt");
  sub_185D2A0(a1, "array.extensional", 1, "extensional array theory", "true", "smt");
  sub_185D2A0(a1, "clause_proof", 1, "record a clausal proof", "false", "smt");
  sub_185D2A0(
    a1,
    "dack",
    0,
    "0 - disable dynamic ackermannization, 1 - expand Leibniz's axiom if a congruence is the root of a conflict, 2 - expa"
    "nd Leibniz's axiom if a congruence is used during conflict resolution",
    "1",
    "smt");
  sub_185D2A0(a1, "dack.eq", 1, "enable dynamic ackermannization for transitivity of equalities", "false", "smt");
  sub_185D2A0(a1, "dack.factor", 2, "number of instance per conflict", "0.1", "smt");
  sub_185D2A0(a1, "dack.gc", 0, "Dynamic ackermannization garbage collection frequency (per conflict)", "2000", "smt");
  sub_185D2A0(a1, "dack.gc_inv_decay", 2, "Dynamic ackermannization garbage collection decay", "0.8", "smt");
  sub_185D2A0(
    a1,
    "dack.threshold",
    0,
    " number of times the congruence rule must be used before Leibniz's axiom is expanded",
    "10",
    "smt");
  sub_185D2A0(
    a1,
    "theory_case_split",
    1,
    "Allow the context to use heuristics involving theory case splits, which are a set of literals of which exactly one c"
    "an be assigned True. If this option is false, the context will generate extra axioms to enforce this instead.",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "string_solver",
    8,
    "solver for string/sequence theories. options are: 'z3str3' (specialized string solver), 'seq' (sequence solver), 'au"
    "to' (use static features to choose best solver), 'empty' (a no-op solver that forces an answer unknown if strings we"
    "re used), 'none' (no solver)",
    "seq",
    "smt");
  sub_185D2A0(
    a1,
    "core.validate",
    1,
    "[internal] validate unsat core produced by SMT context. This option is intended for debugging",
    "false",
    "smt");
  sub_185D2A0(a1, "seq.split_w_len", 1, "enable splitting guided by length constraints", "true", "smt");
  sub_185D2A0(a1, "seq.validate", 1, "enable self-validation of theory axioms created by seq theory", "false", "smt");
  sub_185D2A0(
    a1,
    "seq.max_unfolding",
    0,
    "maximal unfolding depth for checking string equations and regular expressions",
    "1000000000",
    "smt");
  sub_185D2A0(
    a1,
    "seq.min_unfolding",
    0,
    "initial bound for strings whose lengths are bounded by iterative deepening. Set this to a higher value if there are "
    "only models with larger string lengths",
    "1",
    "smt");
  sub_185D2A0(
    a1,
    "str.strong_arrangements",
    1,
    "assert equivalences instead of implications when generating string arrangement axioms",
    "true",
    "smt");
  sub_185D2A0(
    a1,
    "str.aggressive_length_testing",
    1,
    "prioritize testing concrete length values over generating more options",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "str.aggressive_value_testing",
    1,
    "prioritize testing concrete string constant values over generating more options",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "str.aggressive_unroll_testing",
    1,
    "prioritize testing concrete regex unroll counts over generating more options",
    "true",
    "smt");
  sub_185D2A0(
    a1,
    "str.fast_length_tester_cache",
    1,
    "cache length tester constants instead of regenerating them",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "str.fast_value_tester_cache",
    1,
    "cache value tester constants instead of regenerating them",
    "true",
    "smt");
  sub_185D2A0(
    a1,
    "str.string_constant_cache",
    1,
    "cache all generated string constants generated from anywhere in theory_str",
    "true",
    "smt");
  sub_185D2A0(
    a1,
    "theory_aware_branching",
    1,
    "Allow the context to use extra information from theory solvers regarding literal branching prioritization.",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "str.overlap_priority",
    2,
    "theory-aware priority for overlapping variable cases; use smt.theory_aware_branching=true",
    "-0.1",
    "smt");
  sub_185D2A0(
    a1,
    "str.regex_automata_difficulty_threshold",
    0,
    "difficulty threshold for regex automata heuristics",
    "1000",
    "smt");
  sub_185D2A0(
    a1,
    "str.regex_automata_intersection_difficulty_threshold",
    0,
    "difficulty threshold for regex intersection heuristics",
    "1000",
    "smt");
  sub_185D2A0(
    a1,
    "str.regex_automata_failed_automaton_threshold",
    0,
    "number of failed automaton construction attempts after which a full automaton is automatically built",
    "10",
    "smt");
  sub_185D2A0(
    a1,
    "str.regex_automata_failed_intersection_threshold",
    0,
    "number of failed automaton intersection attempts after which intersection is always computed",
    "10",
    "smt");
  sub_185D2A0(
    a1,
    "str.regex_automata_length_attempt_threshold",
    0,
    "number of length/path constraint attempts before checking unsatisfiability of regex terms",
    "10",
    "smt");
  sub_185D2A0(
    a1,
    "str.fixed_length_refinement",
    1,
    "use abstraction refinement in fixed-length equation solver (Z3str3 only)",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "str.fixed_length_naive_cex",
    1,
    "construct naive counterexamples when fixed-length model construction fails for a given length assignment (Z3str3 only)",
    "true",
    "smt");
  sub_185D2A0(a1, "sls.enable", 1, "enable sls co-processor with SMT engine", "false", "smt");
  sub_185D2A0(a1, "sls.parallel", 1, "use sls co-processor in parallel or sequential with SMT engine", "true", "smt");
  sub_185D2A0(a1, "core.minimize", 1, "minimize unsat core produced by SMT context", "false", "smt");
  sub_185D2A0(
    a1,
    "core.extend_patterns",
    1,
    "extend unsat core with literals that trigger (potential) quantifier instances",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "core.extend_patterns.max_distance",
    0,
    "limits the distance of a pattern-extended unsat core",
    "4294967295",
    "smt");
  sub_185D2A0(
    a1,
    "core.extend_nonlocal_patterns",
    1,
    "extend unsat cores with literals that have quantifiers with patterns that contain symbols which are not in the quantifier's body",
    "false",
    "smt");
  sub_185D2A0(
    a1,
    "lemma_gc_strategy",
    0,
    "lemma garbage collection strategy: 0 - fixed, 1 - geometric, 2 - at restart, 3 - none",
    "0",
    "smt");
  sub_185D2A0(
    a1,
    "dt_lazy_splits",
    0,
    "How lazy datatype splits are performed: 0- eager, 1- lazy for infinite types, 2- lazy",
    "1",
    "smt");
  return sub_185D2A0(
           a1,
           "qsat_use_qel",
           1,
           "Use QEL for lite quantifier elimination and model-based projection in QSAT",
           "true",
           "smt");
}

