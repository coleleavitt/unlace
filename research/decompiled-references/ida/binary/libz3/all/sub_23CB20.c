__int64 sub_23CB20()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "solve_eqs.context_solve", 1, "solve equalities within disjunctions.", "true", "tactic");
  sub_185D2A0(v0, "solve_eqs.theory_solver", 1, "use theory solvers.", "true", "tactic");
  sub_185D2A0(v0, "solve_eqs.ite_solver", 1, "use if-then-else solvers.", "true", "tactic");
  sub_185D2A0(
    v0,
    "solve_eqs.max_occs",
    0,
    "maximum number of occurrences for considering a variable for gaussian eliminations.",
    "4294967295",
    "tactic");
  sub_185D2A0(
    v0,
    "blast_term_ite.max_inflation",
    0,
    "multiplicative factor of initial term size.",
    "4294967295",
    "tactic");
  sub_185D2A0(v0, "blast_term_ite.max_steps", 0, "maximal number of steps allowed for tactic.", "4294967295", "tactic");
  sub_185D2A0(v0, "propagate_values.max_rounds", 0, "maximal number of rounds to propagate values.", "4", "tactic");
  sub_185D2A0(v0, "lia2card.max_range", 0, "maximal range of integers to compilation into Booleans", "100", "tactic");
  sub_185D2A0(
    v0,
    "lia2card.max_ite_nesting",
    0,
    "maximal nesting depth for ite expressions to be compiled into PB constraints",
    "4",
    "tactic");
  sub_185D2A0(v0, "randomizer.seed", 0, "seed for randomizer pre-processor", "0", "tactic");
  sub_185D2A0(v0, "default_tactic", 8, "overwrite default tactic in strategic solver", "", "tactic");
  return v0;
}

