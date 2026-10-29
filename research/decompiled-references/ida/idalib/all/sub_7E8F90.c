unsigned __int64 __fastcall sub_7E8F90(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_649F10(a2, v3);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  sub_649F10(a2, v4);
  sub_3A0A80(a2, *(_QWORD *)(a1 + 48));
  return sub_3A0A80(a2, *(_QWORD *)(a1 + 56));
}
