__int64 __fastcall sub_D16880(__int64 a1, __int64 a2)
{
  sub_185D810(a2);
  sub_185D2A0(
    a2,
    "common_patterns",
    1,
    "minimize the number of auxiliary variables during CNF encoding by identifying commonly used patterns",
    "true",
    0);
  sub_185D2A0(
    a2,
    "distributivity",
    1,
    "minimize the number of auxiliary variables during CNF encoding by applying distributivity over unshared subformulas",
    "true",
    0);
  sub_185D2A0(
    a2,
    "distributivity_blowup",
    0,
    "maximum overhead for applying distributivity during CNF encoding",
    "32",
    0);
  sub_185D2A0(
    a2,
    "ite_chaing",
    1,
    "minimize the number of auxiliary variables during CNF encoding by identifying if-then-else chains",
    "true",
    0);
  return sub_185D2A0(
           a2,
           "ite_extra",
           1,
           "add redundant clauses (that improve unit propagation) when encoding if-then-else formulas",
           "true",
           0);
}

