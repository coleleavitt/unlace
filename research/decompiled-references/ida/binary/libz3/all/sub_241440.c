__int64 __fastcall sub_241440(__int64 a1)
{
  sub_185D2A0(a1, "max_memory", 0, "maximum amount of memory in megabytes", "4294967295", "sls");
  sub_185D2A0(a1, "max_restarts", 0, "maximum number of restarts", "4294967295", "sls");
  sub_185D2A0(a1, "max_repairs", 0, "maximum number of repairs before restart", "1000", "sls");
  sub_185D2A0(a1, "walksat", 1, "use walksat assertion selection (instead of gsat)", "true", "sls");
  sub_185D2A0(
    a1,
    "walksat_ucb",
    1,
    "use bandit heuristic for walksat assertion selection (instead of random)",
    "true",
    "sls");
  sub_185D2A0(a1, "walksat_ucb_constant", 2, "the ucb constant c in the term score + c * f(touched)", "20.0", "sls");
  sub_185D2A0(a1, "walksat_ucb_init", 1, "initialize total ucb touched to formula size", "false", "sls");
  sub_185D2A0(a1, "walksat_ucb_forget", 2, "scale touched by this factor every base restart interval", "1.0", "sls");
  sub_185D2A0(
    a1,
    "walksat_ucb_noise",
    2,
    "add noise 0 <= 256 * ucb_noise to ucb score for assertion selection",
    "0.0002",
    "sls");
  sub_185D2A0(a1, "walksat_repick", 1, "repick assertion if randomizing in local minima", "true", "sls");
  sub_185D2A0(a1, "scale_unsat", 2, "scale score of unsat expressions by this factor", "0.5", "sls");
  sub_185D2A0(a1, "paws_init", 0, "initial/minimum assertion weights", "40", "sls");
  sub_185D2A0(a1, "paws_sp", 0, "smooth assertion weights with probability paws_sp / 1024", "52", "sls");
  sub_185D2A0(a1, "wp", 0, "random walk with probability wp / 1024", "100", "sls");
  sub_185D2A0(a1, "vns_mc", 0, "in local minima, try Monte Carlo sampling vns_mc many 2-bit-flips per bit", "0", "sls");
  sub_185D2A0(
    a1,
    "vns_repick",
    1,
    "in local minima, try picking a different assertion (only for walksat)",
    "false",
    "sls");
  sub_185D2A0(a1, "restart_base", 0, "base restart interval given by moves per run", "100", "sls");
  sub_185D2A0(a1, "restart_init", 1, "initialize to 0 or random value (= 1) after restart", "false", "sls");
  sub_185D2A0(a1, "early_prune", 1, "use early pruning for score prediction", "true", "sls");
  sub_185D2A0(a1, "random_offset", 1, "use random offset for candidate evaluation", "true", "sls");
  sub_185D2A0(a1, "rescore", 1, "rescore/normalize top-level score every base restart interval", "true", "sls");
  sub_185D2A0(a1, "dt_axiomatic", 1, "use axiomatic mode or model reduction for datatype solver", "true", "sls");
  sub_185D2A0(
    a1,
    "track_unsat",
    1,
    "keep a list of unsat assertions as done in SAT - currently disabled internally",
    "false",
    "sls");
  sub_185D2A0(a1, "random_seed", 0, "random seed", "0", "sls");
  sub_185D2A0(a1, "arith_use_lookahead", 1, "use lookahead solver for NIRA", "true", "sls");
  sub_185D2A0(a1, "arith_allow_plateau", 1, "allow plateau moves during NIRA solving", "false", "sls");
  sub_185D2A0(a1, "arith_use_clausal_lookahead", 1, "use clause based lookahead for NIRA", "false", "sls");
  sub_185D2A0(a1, "bv_use_top_level_assertions", 1, "use top-level assertions for BV lookahead solver", "true", "sls");
  sub_185D2A0(a1, "bv_use_lookahead", 1, "use lookahead solver for BV", "true", "sls");
  sub_185D2A0(a1, "bv_allow_rotation", 1, "allow model rotation when repairing literal assignment", "true", "sls");
  return sub_185D2A0(
           a1,
           "str_update_strategy",
           0,
           "string update candidate selection: 0 - single character based update, 1 - subsequence based update, 2 - combined",
           "2",
           "sls");
}

