__int64 __fastcall sub_894660(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "dl conflicts", a1[48]);
  sub_18183E0(a2, "dl asserts", a1[49]);
  sub_18183E0(a2, "core->dl eqs", a1[51]);
  sub_18183E0(a2, "core->dl diseqs", a1[52]);
  sub_8E1C10(a1 + 32, a2);
  sub_18183E0(a2, "dl prop steps", a1[54]);
  sub_18183E0(a2, "dl impl steps", a1[55]);
  sub_18183E0(a2, "dl impl lits", a1[56]);
  sub_18183E0(a2, "dl impl conf lits", a1[57]);
  return sub_18183E0(a2, "dl bound relax", a1[58]);
}

