__int64 __fastcall sub_785790(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  const char *v4; // rsi
  size_t v5; // rdx
  __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -86;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v10 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v10;
    v3 = v10;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -86;
  v4 = haystack;
  ++v1[1];
  v5 = *(_QWORD *)(a1 + 48);
  ++*(_DWORD *)(a1 + 208);
  if ( v5 )
  {
    v4 = *(const char **)(a1 + 40);
    --v5;
  }
  sub_785640(a1, v4, v5);
  v6 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = 1;
  v7 = v6[1];
  v8 = *v6;
  if ( v6[2] < (unsigned __int64)(v7 + 1) )
  {
    v11 = qvector_reserve(v6, v8, v7 + 1, 1);
    *v6 = v11;
    v8 = v11;
    v7 = v6[1];
  }
  *(_BYTE *)(v8 + v7) = 1;
  ++v6[1];
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
