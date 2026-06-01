__int64 sub_23DB50()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "optsmt_engine", 8, "select optimization engine: 'basic', 'symba'", "basic", "opt");
  sub_185D2A0(
    v0,
    "maxsat_engine",
    8,
    "select engine for maxsat: 'core_maxsat', 'wmax', 'maxres', 'pd-maxres', 'maxres-bin', 'rc2'",
    "maxres",
    "opt");
  sub_185D2A0(
    v0,
    "priority",
    8,
    "select how to prioritize objectives: 'lex' (lexicographic), 'pareto', 'box'",
    "lex",
    "opt");
  sub_185D2A0(v0, "dump_benchmarks", 1, "dump benchmarks for profiling", "false", "opt");
  sub_185D2A0(v0, "dump_models", 1, "display intermediary models to stdout", "false", "opt");
  sub_185D2A0(v0, "solution_prefix", 8, "path prefix to dump intermediary, but non-optimal, solutions", "", "opt");
  sub_185D2A0(v0, "timeout", 0, "timeout (in milliseconds) (UINT_MAX and 0 mean no timeout)", "4294967295", "opt");
  sub_185D2A0(v0, "rlimit", 0, "resource limit (0 means no limit)", "0", "opt");
  sub_185D2A0(v0, "enable_sls", 1, "enable SLS tuning during weighted maxsat", "false", "opt");
  sub_185D2A0(v0, "enable_lns", 1, "enable LNS during weighted maxsat", "false", "opt");
  sub_185D2A0(v0, "lns_conflicts", 0, "initial conflict count for LNS search", "1000", "opt");
  sub_185D2A0(
    v0,
    "enable_core_rotate",
    1,
    "enable core rotation to both sample cores and correction sets",
    "false",
    "opt");
  sub_185D2A0(v0, "enable_sat", 1, "enable the new SAT core for propositional constraints", "true", "opt");
  sub_185D2A0(v0, "elim_01", 1, "eliminate 01 variables", "true", "opt");
  sub_185D2A0(
    v0,
    "incremental",
    1,
    "set incremental mode. It disables pre-processing and enables adding constraints in model event handler",
    "false",
    "opt");
  sub_185D2A0(
    v0,
    "pp.neat",
    1,
    "use neat (as opposed to less readable, but faster) pretty printer when displaying context",
    "true",
    "opt");
  sub_185D2A0(
    v0,
    "pb.compile_equality",
    1,
    "compile arithmetical equalities into pseudo-Boolean equality (instead of two inequalites)",
    "false",
    "opt");
  sub_185D2A0(v0, "pp.wcnf", 1, "print maxsat benchmark into wcnf format", "false", "opt");
  sub_185D2A0(v0, "maxlex.enable", 1, "enable maxlex heuristic for lexicographic MaxSAT problems", "true", "opt");
  sub_185D2A0(v0, "rc2.totalizer", 1, "use totalizer for rc2 encoding", "true", "opt");
  sub_185D2A0(v0, "maxres.hill_climb", 1, "give preference for large weight cores", "true", "opt");
  sub_185D2A0(v0, "maxres.add_upper_bound_block", 1, "restrict upper bound with constraint", "false", "opt");
  sub_185D2A0(v0, "maxres.max_num_cores", 0, "maximal number of cores per round", "200", "opt");
  sub_185D2A0(v0, "maxres.max_core_size", 0, "break batch of generated cores if size reaches this number", "3", "opt");
  sub_185D2A0(v0, "maxres.maximize_assignment", 1, "find an MSS/MCS to improve current assignment", "false", "opt");
  sub_185D2A0(
    v0,
    "maxres.max_correction_set_size",
    0,
    "allow generating correction set constraints up to maximal size",
    "3",
    "opt");
  sub_185D2A0(v0, "maxres.wmax", 1, "use weighted theory solver to constrain upper bounds", "false", "opt");
  sub_185D2A0(
    v0,
    "maxres.pivot_on_correction_set",
    1,
    "reduce soft constraints if the current correction set is smaller than current core",
    "true",
    "opt");
  return v0;
}

