__int64 __fastcall sub_7652C0(__int64 a1)
{
  const char *v1; // rsi
  size_t v2; // rdx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax

  v1 = haystack;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v1 = *(const char **)(a1 + 40);
    --v2;
  }
  sub_765200(a1, v1, v2);
  v3 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -80;
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = qvector_reserve(v3, v5, v4 + 1, 1);
    *v3 = v7;
    v5 = v7;
    v4 = v3[1];
  }
  *(_BYTE *)(v5 + v4) = -80;
  ++v3[1];
  ++*(_DWORD *)(a1 + 200);
  return 0;
}

