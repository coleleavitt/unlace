__int64 __fastcall sub_BB2110(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned int v6; // [rsp+0h] [rbp-1Ch]
  __m128 v7; // [rsp+4h] [rbp-18h] BYREF

  v7 = _mm_loadh_ps((const double *)(a1 + 24));
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_14B9B80(a1 + 1192, &v7);
  result = sub_966440(a1, (unsigned int *)v7.m128_u64[0]);
  v3 = v7.m128_u64[0];
  if ( v7.m128_u64[0] )
  {
    v4 = v7.m128_u64[1];
    if ( (*(_DWORD *)(v7.m128_u64[0] + 8))-- == 1 )
    {
      v6 = result;
      sub_15D7BC0(v4, v3);
      return v6;
    }
  }
  return result;
}

