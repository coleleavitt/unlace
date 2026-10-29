__int64 __fastcall sub_B7A0B0(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "utvpi conflicts", a1[22]);
  sub_18183E0(a2, "utvpi asserts", a1[23]);
  sub_18183E0(a2, "core->utvpi eqs", a1[24]);
  sub_18183E0(a2, "core->utvpi diseqs", a1[25]);
  sub_8E1C10(a1 + 220, a2);
  sub_18183E0(a2, "dl prop steps", a1[240]);
  sub_18183E0(a2, "dl impl steps", a1[241]);
  sub_18183E0(a2, "dl impl lits", a1[242]);
  sub_18183E0(a2, "dl impl conf lits", a1[243]);
  return sub_18183E0(a2, "dl bound relax", a1[244]);
}

