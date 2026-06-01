__int64 __fastcall sub_8E13C0(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  size_t v7; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
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
  if ( *(_QWORD *)(a1 + 48) )
    v6 = *(const char **)(a1 + 40);
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
  sub_3A0970(a2, *(_DWORD *)(a1 + 64));
  return sub_8D6E80(a2, *(_BYTE *)(a1 + 68));
}
