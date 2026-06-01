__int64 __fastcall sub_894580(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "dl conflicts", a1[40]);
  sub_18183E0(a2, "dl asserts", a1[41]);
  sub_18183E0(a2, "core->dl eqs", a1[43]);
  sub_18183E0(a2, "core->dl diseqs", a1[44]);
  sub_8E1C10(a1 + 24, a2);
  sub_18183E0(a2, "dl prop steps", a1[46]);
  sub_18183E0(a2, "dl impl steps", a1[47]);
  sub_18183E0(a2, "dl impl lits", a1[48]);
  sub_18183E0(a2, "dl impl conf lits", a1[49]);
  return sub_18183E0(a2, "dl bound relax", a1[50]);
}

