__m128i *__fastcall sub_9AE200(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // r14
  __m128i *v4; // r12
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __m128i *v12; // rbp
  unsigned __int64 v13; // r13
  __m128i *v14; // rcx
  __m128i si128; // xmm3
  __int64 v16; // rax
  __m128i *v17; // rcx
  const __m128i *v18; // rax
  __int64 v19; // rsi
  __m128i *v20; // r15
  signed __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+10h] [rbp-48h]
  __m128i *v25; // [rsp+18h] [rbp-40h]

  v2 = a1[1];
  if ( v2 != a1[2] )
  {
    *v2 = _mm_load_si128(a2);
    v2[1].m128i_i32[0] = a2[1].m128i_i32[0];
    v2[1].m128i_i64[1] = a2[1].m128i_i64[1];
    a2[1].m128i_i64[1] = 0;
    a1[1] = v2 + 2;
    return v2;
  }
  v4 = *a1;
  v7 = (char *)v2 - (char *)*a1;
  v8 = v7 >> 5;
  if ( v7 >> 5 )
  {
    v9 = 2 * v8;
    v10 = -32;
    if ( v8 <= 2 * v8 && v9 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( !v9 )
      {
        v23 = 32;
        v13 = 0;
        v12 = nullptr;
        goto LABEL_7;
      }
      v10 = v8 << 6;
    }
  }
  else
  {
    v10 = 32;
  }
  v24 = (char *)v2 - (char *)*a1;
  v11 = operator new(v10);
  v7 = v24;
  v12 = (__m128i *)v11;
  v13 = v11 + v10;
  v23 = v11 + 32;
LABEL_7:
  v14 = (__m128i *)((char *)v12 + v7);
  si128 = _mm_load_si128(a2);
  v14[1].m128i_i32[0] = a2[1].m128i_i32[0];
  v16 = a2[1].m128i_i64[1];
  *v14 = si128;
  v14[1].m128i_i64[1] = v16;
  a2[1].m128i_i64[1] = 0;
  if ( v2 == v4 )
  {
    v24 = (unsigned __int64)v12;
  }
  else
  {
    v17 = v12;
    v18 = v4;
    do
    {
      *v17 = _mm_loadu_si128(v18);
      v17[1].m128i_i32[0] = v18[1].m128i_i32[0];
      v19 = v18[1].m128i_i64[1];
      v17[1].m128i_i64[1] = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 68);
      v18 += 2;
      v17 += 2;
    }
    while ( v2 != v18 );
    v20 = v4;
    v21 = (char *)&v2[-2] - (char *)v4;
    v23 = (__int64)v12[4].m128i_i64 + v21;
    v24 = (unsigned __int64)v12[2].m128i_u64 + (v21 & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      v22 = &v20[1].m128i_i64[1];
      v20 += 2;
      sub_9AE1E0((_DWORD **)v22);
    }
    while ( v2 != v20 );
  }
  if ( v4 )
    operator delete(v4);
  v25 = v12;
  a1[2] = (__m128i *)v13;
  v2 = (__m128i *)v24;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v23);
  return v2;
}

