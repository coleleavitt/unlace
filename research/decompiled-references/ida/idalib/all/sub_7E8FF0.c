unsigned __int64 __fastcall sub_7E8FF0(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi

  sub_3A0970(a2, *(_DWORD *)(a1 + 16));
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v3 = *(const char **)(a1 + 24);
  sub_649F10(a2, v3);
  sub_7E6130(a1 + 48, a2);
  sub_3A0A80(a2, *(_QWORD *)(a1 + 168));
  return sub_7E8F90(a1 + 176, a2);
}
