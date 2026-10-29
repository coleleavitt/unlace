__int64 __fastcall sub_2404C0(__int64 a1)
{
  sub_185D2A0(a1, "max_memory", 0, "maximum amount of memory in megabytes", "4294967295", "sat");
  sub_185D2A0(
    a1,
    "phase",
    8,
    "phase selection strategy: always_false, always_true, basic_caching, random, caching, local_search",
    "caching",
    "sat");
  sub_185D2A0(a1, "phase.sticky", 1, "use sticky phase caching", "true", "sat");
  sub_185D2A0(a1, "search.unsat.conflicts", 0, "period for solving for unsat (in number of conflicts)", "400", "sat");
  sub_185D2A0(a1, "search.sat.conflicts", 0, "period for solving for sat (in number of conflicts)", "400", "sat");
  sub_185D2A0(a1, "rephase.base", 0, "number of conflicts per rephase ", "1000", "sat");
  sub_185D2A0(a1, "reorder.base", 0, "number of conflicts per random reorder ", "4294967295", "sat");
  sub_185D2A0(a1, "reorder.itau", 2, "inverse temperature for softmax", "4.0", "sat");
  sub_185D2A0(a1, "reorder.activity_scale", 0, "scaling factor for activity update", "100", "sat");
  sub_185D2A0(a1, "propagate.prefetch", 1, "prefetch watch lists for assigned literals", "true", "sat");
  sub_185D2A0(a1, "restart", 8, "restart strategy: static, luby, ema or geometric", "ema", "sat");
  sub_185D2A0(a1, "restart.initial", 0, "initial restart (number of conflicts)", "2", "sat");
  sub_185D2A0(a1, "restart.max", 0, "maximal number of restarts.", "4294967295", "sat");
  sub_185D2A0(a1, "restart.fast", 1, "use fast restart approach only removing less active literals.", "true", "sat");
  sub_185D2A0(a1, "restart.factor", 2, "restart increment factor for geometric strategy", "1.5", "sat");
  sub_185D2A0(a1, "restart.margin", 2, "margin between fast and slow restart factors. For ema", "1.1", "sat");
  sub_185D2A0(a1, "restart.emafastglue", 2, "ema alpha factor for fast moving average", "0.03", "sat");
  sub_185D2A0(a1, "restart.emaslowglue", 2, "ema alpha factor for slow moving average", "1e-05", "sat");
  sub_185D2A0(a1, "variable_decay", 0, "multiplier (divided by 100) for the VSIDS activity increment", "110", "sat");
  sub_185D2A0(a1, "inprocess.max", 0, "maximal number of inprocessing passes", "4294967295", "sat");
  sub_185D2A0(a1, "inprocess.out", 8, "file to dump result of the first inprocessing step and exit", "", "sat");
  sub_185D2A0(a1, "branching.heuristic", 8, "branching heuristic vsids, chb", "vsids", "sat");
  sub_185D2A0(
    a1,
    "branching.anti_exploration",
    1,
    "apply anti-exploration heuristic for branch selection",
    "false",
    "sat");
  sub_185D2A0(a1, "random_freq", 2, "frequency of random case splits", "0.01", "sat");
  sub_185D2A0(a1, "random_seed", 0, "random seed", "0", "sat");
  sub_185D2A0(a1, "burst_search", 0, "number of conflicts before first global simplification", "100", "sat");
  sub_185D2A0(a1, "enable_pre_simplify", 1, "enable pre simplifications before the bounded search", "false", "sat");
  sub_185D2A0(a1, "max_conflicts", 0, "maximum number of conflicts", "4294967295", "sat");
  sub_185D2A0(a1, "gc", 8, "garbage collection strategy: psm, glue, glue_psm, dyn_psm", "glue_psm", "sat");
  sub_185D2A0(a1, "gc.initial", 0, "learned clauses garbage collection frequency", "20000", "sat");
  sub_185D2A0(a1, "gc.increment", 0, "increment to the garbage collection threshold", "500", "sat");
  sub_185D2A0(
    a1,
    "gc.small_lbd",
    0,
    "learned clauses with small LBD are never deleted (only used in dyn_psm)",
    "3",
    "sat");
  sub_185D2A0(
    a1,
    "gc.k",
    0,
    "learned clauses that are inactive for k gc rounds are permanently deleted (only used in dyn_psm)",
    "7",
    "sat");
  sub_185D2A0(a1, "gc.burst", 1, "perform eager garbage collection during initialization", "false", "sat");
  sub_185D2A0(a1, "gc.defrag", 1, "defragment clauses when garbage collecting", "true", "sat");
  sub_185D2A0(a1, "simplify.delay", 0, "set initial delay of simplification by a conflict count", "0", "sat");
  sub_185D2A0(a1, "force_cleanup", 1, "force cleanup to remove tautologies and simplify clauses", "false", "sat");
  sub_185D2A0(a1, "minimize_lemmas", 1, "minimize learned clauses", "true", "sat");
  sub_185D2A0(a1, "dyn_sub_res", 1, "dynamic subsumption resolution for minimizing learned clauses", "true", "sat");
  sub_185D2A0(a1, "core.minimize", 1, "minimize computed core", "false", "sat");
  sub_185D2A0(a1, "core.minimize_partial", 1, "apply partial (cheap) core minimization", "false", "sat");
  sub_185D2A0(a1, "backtrack.scopes", 0, "number of scopes to enable chronological backtracking", "100", "sat");
  sub_185D2A0(
    a1,
    "backtrack.conflicts",
    0,
    "number of conflicts before enabling chronological backtracking",
    "4000",
    "sat");
  sub_185D2A0(a1, "threads", 0, "number of parallel threads to use", "1", "sat");
  sub_185D2A0(a1, "dimacs.core", 1, "extract core from DIMACS benchmarks", "false", "sat");
  sub_185D2A0(a1, "drat.disable", 1, "override anything that enables DRAT", "false", "sat");
  sub_185D2A0(a1, "smt", 1, "use the SAT solver based incremental SMT core", "false", "sat");
  sub_185D2A0(a1, "smt.proof.check", 1, "check proofs on the fly during SMT search", "false", "sat");
  sub_185D2A0(a1, "drat.file", 8, "file to dump DRAT proofs", "", "sat");
  sub_185D2A0(a1, "drat.binary", 1, "use Binary DRAT output format", "false", "sat");
  sub_185D2A0(a1, "drat.check_unsat", 1, "build up internal proof and check", "false", "sat");
  sub_185D2A0(a1, "drat.check_sat", 1, "build up internal trace, check satisfying model", "false", "sat");
  sub_185D2A0(a1, "drat.activity", 1, "dump variable activities", "false", "sat");
  sub_185D2A0(a1, "cardinality.solver", 1, "use cardinality solver", "true", "sat");
  sub_185D2A0(
    a1,
    "pb.solver",
    8,
    "method for handling Pseudo-Boolean constraints: circuit (arithmetical circuit), sorting (sorting circuit), totalizer"
    " (use totalizer encoding), binary_merge, segmented, solver (use native solver)",
    "solver",
    "sat");
  sub_185D2A0(a1, "pb.min_arity", 0, "minimal arity to compile pb/cardinality constraints to CNF", "9", "sat");
  sub_185D2A0(
    a1,
    "cardinality.encoding",
    8,
    "encoding used for at-most-k constraints: grouped, bimander, ordered, unate, circuit",
    "grouped",
    "sat");
  sub_185D2A0(
    a1,
    "pb.resolve",
    8,
    "resolution strategy for boolean algebra solver: cardinality, rounding",
    "cardinality",
    "sat");
  sub_185D2A0(a1, "pb.lemma_format", 8, "generate either cardinality or pb lemmas", "cardinality", "sat");
  sub_185D2A0(
    a1,
    "euf",
    1,
    "enable euf solver (this feature is preliminary and not ready for general consumption)",
    "false",
    "sat");
  sub_185D2A0(a1, "ddfw_search", 1, "use ddfw local search instead of CDCL", "false", "sat");
  sub_185D2A0(a1, "ddfw.init_clause_weight", 0, "initial clause weight for DDFW local search", "8", "sat");
  sub_185D2A0(
    a1,
    "ddfw.use_reward_pct",
    0,
    "percentage to pick highest reward variable when it has reward 0",
    "15",
    "sat");
  sub_185D2A0(
    a1,
    "ddfw.restart_base",
    0,
    "number of flips used a starting point for hesitant restart backoff",
    "100000",
    "sat");
  sub_185D2A0(
    a1,
    "ddfw.reinit_base",
    0,
    "increment basis for geometric backoff scheme of re-initialization of weights",
    "10000",
    "sat");
  sub_185D2A0(a1, "ddfw.threads", 0, "number of ddfw threads to run in parallel with sat solver", "0", "sat");
  sub_185D2A0(a1, "prob_search", 1, "use probsat local search instead of CDCL", "false", "sat");
  sub_185D2A0(a1, "local_search", 1, "use local search instead of CDCL", "false", "sat");
  sub_185D2A0(a1, "local_search_threads", 0, "number of local search threads to find satisfiable solution", "0", "sat");
  sub_185D2A0(a1, "local_search_mode", 8, "local search algorithm, either default wsat or qsat", "wsat", "sat");
  sub_185D2A0(a1, "local_search_dbg_flips", 1, "write debug information for number of flips", "false", "sat");
  sub_185D2A0(a1, "anf", 1, "enable ANF based simplification in-processing", "false", "sat");
  sub_185D2A0(a1, "anf.delay", 0, "delay ANF simplification by in-processing round", "2", "sat");
  sub_185D2A0(a1, "anf.exlin", 1, "enable extended linear simplification", "false", "sat");
  sub_185D2A0(a1, "cut", 1, "enable AIG based simplification in-processing", "false", "sat");
  sub_185D2A0(a1, "cut.delay", 0, "delay cut simplification by in-processing round", "2", "sat");
  sub_185D2A0(a1, "cut.aig", 1, "extract aigs (and ites) from cluases for cut simplification", "false", "sat");
  sub_185D2A0(a1, "cut.lut", 1, "extract luts from clauses for cut simplification", "false", "sat");
  sub_185D2A0(a1, "cut.xor", 1, "extract xors from clauses for cut simplification", "false", "sat");
  sub_185D2A0(a1, "cut.npn3", 1, "extract 3 input functions from clauses for cut simplification", "false", "sat");
  sub_185D2A0(a1, "cut.dont_cares", 1, "integrate dont cares with cuts", "true", "sat");
  sub_185D2A0(a1, "cut.redundancies", 1, "integrate redundancy checking of cuts", "true", "sat");
  sub_185D2A0(a1, "cut.force", 1, "force redoing cut-enumeration until a fixed-point", "false", "sat");
  sub_185D2A0(
    a1,
    "lookahead.cube.cutoff",
    8,
    "cutoff type used to create lookahead cubes: depth, freevars, psat, adaptive_freevars, adaptive_psat",
    "depth",
    "sat");
  sub_185D2A0(
    a1,
    "lookahead.cube.fraction",
    2,
    "adaptive fraction to create lookahead cubes. Used when lookahead.cube.cutoff is adaptive_freevars or adaptive_psat",
    "0.4",
    "sat");
  sub_185D2A0(
    a1,
    "lookahead.cube.depth",
    0,
    "cut-off depth to create cubes. Used when lookahead.cube.cutoff is depth.",
    "1",
    "sat");
  sub_185D2A0(
    a1,
    "lookahead.cube.freevars",
    2,
    "cube free variable fraction. Used when lookahead.cube.cutoff is freevars",
    "0.8",
    "sat");
  sub_185D2A0(a1, "lookahead.cube.psat.var_exp", 2, "free variable exponent for PSAT cutoff", "1", "sat");
  sub_185D2A0(a1, "lookahead.cube.psat.clause_base", 2, "clause base for PSAT cutoff", "2", "sat");
  sub_185D2A0(
    a1,
    "lookahead.cube.psat.trigger",
    2,
    "trigger value to create lookahead cubes for PSAT cutoff. Used when lookahead.cube.cutoff is psat",
    "5",
    "sat");
  sub_185D2A0(a1, "lookahead.preselect", 1, "use pre-selection of subset of variables for branching", "false", "sat");
  sub_185D2A0(a1, "lookahead_simplify", 1, "use lookahead solver during simplification", "false", "sat");
  sub_185D2A0(
    a1,
    "lookahead_scores",
    1,
    "extract lookahead scores. A utility that can only be used from the DIMACS front-end",
    "false",
    "sat");
  sub_185D2A0(a1, "lookahead.double", 1, "enable double lookahead", "true", "sat");
  sub_185D2A0(a1, "lookahead.use_learned", 1, "use learned clauses when selecting lookahead literal", "false", "sat");
  sub_185D2A0(
    a1,
    "lookahead_simplify.bca",
    1,
    "add learned binary clauses as part of lookahead simplification",
    "true",
    "sat");
  sub_185D2A0(
    a1,
    "lookahead.global_autarky",
    1,
    "prefer to branch on variables that occur in clauses that are reduced",
    "false",
    "sat");
  sub_185D2A0(
    a1,
    "lookahead.delta_fraction",
    2,
    "number between 0 and 1, the smaller the more literals are selected for double lookahead",
    "1.0",
    "sat");
  return sub_185D2A0(
           a1,
           "lookahead.reward",
           8,
           "select lookahead heuristic: ternary, heule_schur (Heule Schur), heuleu (Heule Unit), unit, or march_cu",
           "march_cu",
           "sat");
}

