__int64 __fastcall sub_23F230(__int64 a1)
{
  sub_185D2A0(a1, "engine", 8, "Select: auto-config, datalog, bmc, spacer", "auto-config", "fp");
  sub_185D2A0(
    a1,
    "datalog.default_table",
    8,
    "default table implementation: sparse, hashtable, bitvector, interval",
    "sparse",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.default_relation",
    8,
    "default relation implementation: external_relation, pentagon",
    "pentagon",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.generate_explanations",
    1,
    "produce explanations for produced facts when using the datalog engine",
    "false",
    "fp");
  sub_185D2A0(a1, "datalog.use_map_names", 1, "use names from map files when displaying tuples", "true", "fp");
  sub_185D2A0(
    a1,
    "datalog.magic_sets_for_queries",
    1,
    "magic set transformation will be used for queries",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.explanations_on_relation_level",
    1,
    "if true, explanations are generated as history of each relation, rather than per fact (generate_explanations must be"
    " set to true for this option to have any effect)",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.unbound_compressor",
    1,
    "auxiliary relations will be introduced to avoid unbound variables in rule heads",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.similarity_compressor",
    1,
    "rules that differ only in values of constants will be merged into a single rule",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.similarity_compressor_threshold",
    0,
    "if similarity_compressor is on, this value determines how many similar rules there must be in order for them to be merged",
    "11",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.all_or_nothing_deltas",
    1,
    "compile rules so that it is enough for the delta relation in union and widening operations to determine only whether"
    " the updated relation was modified or not",
    "false",
    "fp");
  sub_185D2A0(a1, "datalog.compile_with_widening", 1, "widening will be used to compile recursive rules", "false", "fp");
  sub_185D2A0(
    a1,
    "datalog.default_table_checked",
    1,
    "if true, the default table will be default_table inside a wrapper that checks that its results are the same as of de"
    "fault_table_checker table",
    "false",
    "fp");
  sub_185D2A0(a1, "datalog.default_table_checker", 8, "see default_table_checked", "null", "fp");
  sub_185D2A0(
    a1,
    "datalog.check_relation",
    8,
    "name of default relation to check. operations on the default relation will be verified using SMT solving",
    "null",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.initial_restart_timeout",
    0,
    "length of saturation run before the first restart (in ms), zero means no restarts",
    "0",
    "fp");
  sub_185D2A0(a1, "datalog.timeout", 0, "Time limit used for saturation", "0", "fp");
  sub_185D2A0(
    a1,
    "datalog.output_profile",
    1,
    "determines whether profile information should be output when outputting Datalog rules or instructions",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.print.tuples",
    1,
    "determines whether tuples for output predicates should be output",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.profile_timeout_milliseconds",
    0,
    "instructions and rules that took less than the threshold will not be printed when printed the instruction/rule list",
    "0",
    "fp");
  sub_185D2A0(
    a1,
    "datalog.dbg_fpr_nonempty_relation_signature",
    1,
    "if true, finite_product_relation will attempt to avoid creating inner relation with empty signature by putting in ha"
    "lf of the table columns, if it would have been empty otherwise",
    "false",
    "fp");
  sub_185D2A0(a1, "datalog.subsumption", 1, "if true, removes/filters predicates with total transitions", "true", "fp");
  sub_185D2A0(a1, "generate_proof_trace", 1, "trace for 'sat' answer as proof object", "false", "fp");
  sub_185D2A0(a1, "spacer.push_pob", 1, "push blocked pobs to higher level", "false", "fp");
  sub_185D2A0(a1, "spacer.push_pob_max_depth", 0, "Maximum depth at which push_pob is enabled", "4294967295", "fp");
  sub_185D2A0(a1, "validate", 1, "validate result (by proof checking or model checking)", "false", "fp");
  sub_185D2A0(
    a1,
    "spacer.simplify_lemmas_pre",
    1,
    "simplify derived lemmas before inductive propagation",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.simplify_lemmas_post",
    1,
    "simplify derived lemmas after inductive propagation",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.use_inductive_generalizer",
    1,
    "generalize lemmas using induction strengthening",
    "true",
    "fp");
  sub_185D2A0(a1, "spacer.max_num_contexts", 0, "maximal number of contexts to create", "500", "fp");
  sub_185D2A0(
    a1,
    "print_fixedpoint_extensions",
    1,
    "use SMT-LIB2 fixedpoint extensions, instead of pure SMT2, when printing rules",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "print_low_level_smt2",
    1,
    "use (faster) low-level SMT2 printer (the printer is scalable but the result may not be as readable)",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "print_with_variable_declarations",
    1,
    "use variable declarations when displaying rules (instead of attempting to use original names)",
    "true",
    "fp");
  sub_185D2A0(a1, "print_answer", 1, "print answer instance(s) to query", "false", "fp");
  sub_185D2A0(a1, "print_certificate", 1, "print certificate for reachability or non-reachability", "false", "fp");
  sub_185D2A0(
    a1,
    "print_boogie_certificate",
    1,
    "print certificate for reachability or non-reachability using a format understood by Boogie",
    "false",
    "fp");
  sub_185D2A0(a1, "print_aig", 8, "Dump clauses in AIG text format (AAG) to the given file name", "", "fp");
  sub_185D2A0(a1, "print_statistics", 1, "print statistics", "false", "fp");
  sub_185D2A0(
    a1,
    "tab.selection",
    8,
    "selection method for tabular strategy: weight (default), first, var-use",
    "weight",
    "fp");
  sub_185D2A0(a1, "xform.bit_blast", 1, "bit-blast bit-vectors", "false", "fp");
  sub_185D2A0(a1, "xform.magic", 1, "perform symbolic magic set transformation", "false", "fp");
  sub_185D2A0(a1, "xform.scale", 1, "add scaling variable to linear real arithmetic clauses", "false", "fp");
  sub_185D2A0(a1, "xform.inline_linear", 1, "try linear inlining method", "true", "fp");
  sub_185D2A0(a1, "xform.inline_eager", 1, "try eager inlining of rules", "true", "fp");
  sub_185D2A0(a1, "xform.inline_linear_branch", 1, "try linear inlining method with potential expansion", "false", "fp");
  sub_185D2A0(a1, "xform.compress_unbound", 1, "compress tails with unbound variables", "true", "fp");
  sub_185D2A0(a1, "xform.fix_unbound_vars", 1, "fix unbound variables in tail", "false", "fp");
  sub_185D2A0(a1, "xform.unfold_rules", 0, "unfold rules statically using iterative squaring", "0", "fp");
  sub_185D2A0(a1, "xform.slice", 1, "simplify clause set using slicing", "true", "fp");
  sub_185D2A0(a1, "spacer.use_euf_gen", 1, "Generalize lemmas and pobs using implied equalities", "false", "fp");
  sub_185D2A0(
    a1,
    "xform.transform_arrays",
    1,
    "Rewrites arrays equalities and applies select over store",
    "false",
    "fp");
  sub_185D2A0(a1, "xform.instantiate_arrays", 1, "Transforms P(a) into P(i, a[i] a)", "false", "fp");
  sub_185D2A0(
    a1,
    "xform.instantiate_arrays.enforce",
    1,
    "Transforms P(a) into P(i, a[i]), discards a from predicate",
    "false",
    "fp");
  sub_185D2A0(a1, "xform.instantiate_arrays.nb_quantifier", 0, "Gives the number of quantifiers per array", "1", "fp");
  sub_185D2A0(
    a1,
    "xform.instantiate_arrays.slice_technique",
    8,
    "<no-slicing>=> GetId(i) = i, <smash> => GetId(i) = true",
    "no-slicing",
    "fp");
  sub_185D2A0(a1, "xform.quantify_arrays", 1, "create quantified Horn clauses from clauses with arrays", "false", "fp");
  sub_185D2A0(
    a1,
    "xform.instantiate_quantifiers",
    1,
    "instantiate quantified Horn clauses using E-matching heuristic",
    "false",
    "fp");
  sub_185D2A0(a1, "xform.coalesce_rules", 1, "coalesce rules", "false", "fp");
  sub_185D2A0(a1, "xform.tail_simplifier_pve", 1, "propagate_variable_equivalences", "true", "fp");
  sub_185D2A0(
    a1,
    "xform.subsumption_checker",
    1,
    "Enable subsumption checker (no support for model conversion)",
    "true",
    "fp");
  sub_185D2A0(a1, "xform.coi", 1, "use cone of influence simplification", "true", "fp");
  sub_185D2A0(
    a1,
    "spacer.order_children",
    0,
    "SPACER: order of enqueuing children in non-linear rules : 0 (original), 1 (reverse), 2 (random)",
    "0",
    "fp");
  sub_185D2A0(a1, "spacer.use_lemma_as_cti", 1, "SPACER: use a lemma instead of a CTI in flexible_trace", "false", "fp");
  sub_185D2A0(
    a1,
    "spacer.reset_pob_queue",
    1,
    "SPACER: reset pob obligation queue when entering a new level",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.use_array_eq_generalizer",
    1,
    "SPACER: attempt to generalize lemmas with array equalities",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.use_derivations",
    1,
    "SPACER: using derivation mechanism to cache intermediate results for non-linear rules",
    "true",
    "fp");
  sub_185D2A0(
    a1,
    "xform.array_blast",
    1,
    "try to eliminate local array terms using Ackermannization -- some array terms may remain",
    "false",
    "fp");
  sub_185D2A0(a1, "xform.array_blast_full", 1, "eliminate all local array variables by QE", "false", "fp");
  sub_185D2A0(a1, "xform.elim_term_ite", 1, "Eliminate term-ite expressions", "false", "fp");
  sub_185D2A0(
    a1,
    "xform.elim_term_ite.inflation",
    0,
    "Maximum inflation for non-Boolean ite-terms blasting: 0 (none), k (multiplicative)",
    "3",
    "fp");
  sub_185D2A0(a1, "spacer.propagate", 1, "Enable propagate/pushing phase", "true", "fp");
  sub_185D2A0(a1, "spacer.max_level", 0, "Maximum level to explore", "4294967295", "fp");
  sub_185D2A0(a1, "spacer.elim_aux", 1, "Eliminate auxiliary variables in reachability facts", "true", "fp");
  sub_185D2A0(
    a1,
    "spacer.blast_term_ite_inflation",
    0,
    "Maximum inflation for non-Boolean ite-terms expansion: 0 (none), k (multiplicative)",
    "3",
    "fp");
  sub_185D2A0(a1, "spacer.reach_dnf", 1, "Restrict reachability facts to DNF", "true", "fp");
  sub_185D2A0(a1, "bmc.linear_unrolling_depth", 0, "Maximal level to explore", "4294967295", "fp");
  sub_185D2A0(a1, "spacer.iuc.split_farkas_literals", 1, "Split Farkas literals", "false", "fp");
  sub_185D2A0(a1, "spacer.native_mbp", 1, "Use native mbp of Z3", "true", "fp");
  sub_185D2A0(a1, "spacer.eq_prop", 1, "Enable equality and bound propagation in arithmetic", "true", "fp");
  sub_185D2A0(a1, "spacer.weak_abs", 1, "Weak abstraction", "true", "fp");
  sub_185D2A0(a1, "spacer.restarts", 1, "Enable resetting obligation queue", "false", "fp");
  sub_185D2A0(a1, "spacer.restart_initial_threshold", 0, "Initial threshold for restarts", "10", "fp");
  sub_185D2A0(a1, "spacer.random_seed", 0, "Random seed to be used by SMT solver", "0", "fp");
  sub_185D2A0(a1, "spacer.mbqi", 1, "Enable mbqi", "true", "fp");
  sub_185D2A0(a1, "spacer.keep_proxy", 1, "keep proxy variables (internal parameter)", "true", "fp");
  sub_185D2A0(a1, "spacer.q3", 1, "Allow quantified lemmas in frames", "true", "fp");
  sub_185D2A0(a1, "spacer.q3.instantiate", 1, "Instantiate quantified lemmas", "true", "fp");
  sub_185D2A0(a1, "spacer.q3.use_qgen", 1, "use quantified lemma generalizer", "false", "fp");
  sub_185D2A0(a1, "spacer.q3.qgen.normalize", 1, "normalize cube before quantified generalization", "true", "fp");
  sub_185D2A0(
    a1,
    "spacer.iuc",
    0,
    "0 = use old implementation of unsat-core-generation, 1 = use new implementation of IUC generation, 2 = use new imple"
    "mentation of IUC + min-cut optimization",
    "1",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.iuc.arith",
    0,
    "0 = use simple Farkas plugin, 1 = use simple Farkas plugin with constant from other partition (like old unsat-core-g"
    "eneration),2 = use Gaussian elimination optimization (broken), 3 = use additive IUC plugin",
    "1",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.iuc.old_hyp_reducer",
    1,
    "use old hyp reducer instead of new implementation, for debugging only",
    "false",
    "fp");
  sub_185D2A0(a1, "spacer.validate_lemmas", 1, "Validate each lemma after generalization", "false", "fp");
  sub_185D2A0(a1, "spacer.ground_pobs", 1, "Ground pobs by using values from a model", "true", "fp");
  sub_185D2A0(
    a1,
    "spacer.iuc.print_farkas_stats",
    1,
    "prints for each proof how many Farkas lemmas it contains and how many of these participate in the cut (for debugging)",
    "false",
    "fp");
  sub_185D2A0(
    a1,
    "spacer.iuc.debug_proof",
    1,
    "prints proof used by unsat-core-learner for debugging purposes (debugging)",
    "false",
    "fp");
  sub_185D2A0(a1, "spacer.simplify_pob", 1, "simplify pobs by removing redundant constraints", "false", "fp");
  sub_185D2A0(a1, "spacer.p3.share_lemmas", 1, "Share frame lemmas", "false", "fp");
  sub_185D2A0(a1, "spacer.p3.share_invariants", 1, "Share invariants lemmas", "false", "fp");
  sub_185D2A0(a1, "spacer.min_level", 0, "Minimal level to explore", "0", "fp");
  sub_185D2A0(a1, "spacer.trace_file", 8, "Log file for progress events", "", "fp");
  sub_185D2A0(a1, "spacer.ctp", 1, "Enable counterexample-to-pushing", "true", "fp");
  sub_185D2A0(a1, "spacer.use_inc_clause", 1, "Use incremental clause to represent trans", "true", "fp");
  sub_185D2A0(a1, "spacer.dump_benchmarks", 1, "Dump SMT queries as benchmarks", "false", "fp");
  sub_185D2A0(a1, "spacer.dump_threshold", 2, "Threshold in seconds on dumping benchmarks", "5.0", "fp");
  sub_185D2A0(a1, "spacer.gpdr", 1, "Use GPDR solving strategy for non-linear CHC", "false", "fp");
  sub_185D2A0(a1, "spacer.gpdr.bfs", 1, "Use BFS exploration strategy for expanding model search", "true", "fp");
  sub_185D2A0(a1, "spacer.use_bg_invs", 1, "Enable external background invariants", "false", "fp");
  sub_185D2A0(a1, "spacer.use_lim_num_gen", 1, "Enable limit numbers generalizer to get smaller numbers", "false", "fp");
  sub_185D2A0(a1, "spacer.logic", 8, "SMT-LIB logic to configure internal SMT solvers", "", "fp");
  sub_185D2A0(
    a1,
    "spacer.arith.solver",
    0,
    "arithmetic solver: 0 - no solver, 1 - bellman-ford based solver (diff. logic only), 2 - simplex based solver, 3 - fl"
    "oyd-warshall based solver (diff. logic only) and no theory combination 4 - utvpi, 5 - infinitary lra, 6 - lra solver",
    "2",
    "fp");
  sub_185D2A0(a1, "spacer.global", 1, "Enable global guidance", "false", "fp");
  sub_185D2A0(a1, "spacer.gg.concretize", 1, "Enable global guidance concretize", "true", "fp");
  sub_185D2A0(a1, "spacer.gg.conjecture", 1, "Enable global guidance conjecture", "true", "fp");
  sub_185D2A0(a1, "spacer.gg.subsume", 1, "Enable global guidance subsume", "true", "fp");
  sub_185D2A0(a1, "spacer.use_iuc", 1, "Enable Interpolating Unsat Core(IUC) for lemma generalization", "true", "fp");
  return sub_185D2A0(a1, "spacer.expand_bnd", 1, "Enable expand-bound lemma generalization", "false", "fp");
}

