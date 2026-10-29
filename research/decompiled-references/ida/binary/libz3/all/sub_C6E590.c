__int64 __fastcall sub_C6E590(__int64 a1, __int64 a2)
{
  sub_185E220(a2);
  sub_185D810(a2);
  sub_185D2A0(a2, "fm_real_only", 1, "consider only real variables for fourier-motzkin elimination.", "true", 0);
  sub_185D2A0(a2, "fm_occ", 1, "consider inequalities occurring in clauses for FM.", "false", 0);
  sub_185D2A0(a2, "fm_limit", 0, "maximum number of constraints, monomials, clauses visited during FM.", "5000000", 0);
  sub_185D2A0(a2, "fm_cutoff1", 0, "first cutoff for FM based on maximum number of lower/upper occurrences.", "8", 0);
  sub_185D2A0(a2, "fm_cutoff2", 0, "second cutoff for FM based on num_lower * num_upper occurrences.", "256", 0);
  return sub_185D2A0(
           a2,
           "fm_extra",
           0,
           "max. increase on the number of inequalities for each FM variable elimination step.",
           "0",
           0);
}

