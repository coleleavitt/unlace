__int64 __fastcall sub_769660(__int64 a1, __int64 a2)
{
  sub_185D810(a2);
  sub_185DD20(a2);
  sub_185D2A0(a2, "blast_mul", 1, "bit-blast multipliers (and dividers, remainders).", "true", 0);
  sub_185D2A0(a2, "blast_add", 1, "bit-blast adders.", "true", 0);
  sub_185D2A0(a2, "blast_quant", 1, "bit-blast quantified variables.", "false", 0);
  return sub_185D2A0(
           a2,
           "blast_full",
           1,
           "bit-blast any term with bit-vector sort, this option will make E-matching ineffective in any pattern containi"
           "ng bit-vector terms.",
           "false",
           0);
}

