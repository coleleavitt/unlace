__int64 __fastcall sub_241700(__int64 a1, _QWORD *a2)
{
  int tinfo_property; // eax
  const char *v3; // r12
  __int64 v4; // rsi
  int tinfo_size; // eax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  tinfo_property = get_tinfo_property(*a2, 3);
  v3 = (const char *)&unk_3F5793;
  v4 = *a2;
  if ( tinfo_property == 1 )
    v3 = "S";
  tinfo_size = get_tinfo_size(0, v4, 0);
  sub_66DF0((__int64 *)a1, (__int64)"__%sPAIR%d__", v3, 8 * tinfo_size);
  return a1;
}
