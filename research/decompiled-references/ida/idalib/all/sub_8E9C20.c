__int64 __fastcall sub_8E9C20(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  size_t v7; // rdx
  const char *v8; // rsi

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = &byte_22F0C30;
  }
  v5 = v2;
  v6 = haystack;
  sub_8D77E0(a2, v5, v4);
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  if ( v6 )
  {
    v7 = strlen(v6) + 1;
  }
  else
  {
    v7 = 1;
    v6 = &byte_22F0C30;
  }
  sub_8D77E0(a2, v6, v7);
  v8 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v8 = *(const char **)(a1 + 48);
  sub_649F10(a2, v8);
  sub_3A0970(a2, *(_DWORD *)(a1 + 72));
  sub_3A0970(a2, *(_DWORD *)(a1 + 76));
  sub_3A0970(a2, *(_DWORD *)(a1 + 80));
  return sub_8D6E80(a2, *(_BYTE *)(a1 + 84));
}
