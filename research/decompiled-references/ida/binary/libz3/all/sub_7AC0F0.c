__int64 __fastcall sub_7AC0F0(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "pb propagations", a1[44]);
  sub_18183E0(a2, "pb conflicts", a1[45]);
  sub_18183E0(a2, "pb resolves", a1[46]);
  sub_18183E0(a2, "pb cuts", a1[51]);
  sub_18183E0(a2, "pb gc", a1[52]);
  sub_18183E0(a2, "pb overflow", a1[53]);
  sub_18183E0(a2, "pb big strengthenings", a1[50]);
  sub_18183E0(a2, "pb lemmas", a1[54]);
  return sub_18183E0(a2, "pb subsumes", a1[49] + a1[47] + a1[48]);
}

