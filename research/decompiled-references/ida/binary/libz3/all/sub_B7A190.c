__int64 __fastcall sub_B7A190(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "utvpi conflicts", a1[24]);
  sub_18183E0(a2, "utvpi asserts", a1[25]);
  sub_18183E0(a2, "core->utvpi eqs", a1[26]);
  sub_18183E0(a2, "core->utvpi diseqs", a1[27]);
  sub_8E1C10(a1 + 222, a2);
  sub_18183E0(a2, "dl prop steps", a1[242]);
  sub_18183E0(a2, "dl impl steps", a1[243]);
  sub_18183E0(a2, "dl impl lits", a1[244]);
  sub_18183E0(a2, "dl impl conf lits", a1[245]);
  return sub_18183E0(a2, "dl bound relax", a1[246]);
}

