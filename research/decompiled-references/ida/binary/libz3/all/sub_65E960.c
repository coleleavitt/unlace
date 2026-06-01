__int64 __fastcall sub_65E960(const double *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  double v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  void *v14; // [rsp+0h] [rbp-78h]
  unsigned __int8 v15; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-69h]
  char v17; // [rsp+1Fh] [rbp-59h] BYREF
  int v18[4]; // [rsp+20h] [rbp-58h] BYREF
  __m128 v19; // [rsp+30h] [rbp-48h] BYREF

  result = sub_1666AE0(a1 + 11, a2, a3, &v19);
  if ( !(_BYTE)result )
  {
    v9 = *a1;
    v19.m128_u64[0] = 0;
    sub_14B7810((int)v18, SLODWORD(v9), (int)&v19, v6, v7, v8, v14);
    sub_18572D0(&v19);
    v19 = _mm_loadh_ps(a1);
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_14B9B80(v18, &v19);
    v10 = sub_1666AE0(a1 + 11, v19.m128_u64[0], a3, &v17);
    v11 = v19.m128_u64[0];
    if ( v19.m128_u64[0] )
    {
      v12 = v19.m128_u64[1];
      if ( (*(_DWORD *)(v19.m128_u64[0] + 8))-- == 1 )
      {
        v16 = v10;
        sub_15D7BC0(v12, v11);
        v10 = v16;
      }
    }
    v15 = v10;
    sub_14B63F0(v18);
    return v15;
  }
  return result;
}

