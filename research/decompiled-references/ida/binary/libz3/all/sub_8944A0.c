__int64 __fastcall sub_8944A0(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "dl conflicts", a1[46]);
  sub_18183E0(a2, "dl asserts", a1[47]);
  sub_18183E0(a2, "core->dl eqs", a1[49]);
  sub_18183E0(a2, "core->dl diseqs", a1[50]);
  sub_8E1C10(a1 + 30, a2);
  sub_18183E0(a2, "dl prop steps", a1[52]);
  sub_18183E0(a2, "dl impl steps", a1[53]);
  sub_18183E0(a2, "dl impl lits", a1[54]);
  sub_18183E0(a2, "dl impl conf lits", a1[55]);
  return sub_18183E0(a2, "dl bound relax", a1[56]);
}

