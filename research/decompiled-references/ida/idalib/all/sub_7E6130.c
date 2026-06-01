unsigned __int64 __fastcall sub_7E6130(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_649F10(a2, v3);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  sub_649F10(a2, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v5 = *(const char **)(a1 + 48);
  sub_649F10(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v6 = *(const char **)(a1 + 72);
  sub_649F10(a2, v6);
  sub_3A0970(a2, *(_DWORD *)(a1 + 96));
  sub_3A0A80(a2, *(_QWORD *)(a1 + 104));
  return sub_3A0970(a2, *(_DWORD *)(a1 + 112));
}
