__m128i *__fastcall sub_1304350(__m128i **a1, __m128i *a2, __int32 *a3)
{
  __m128i *v3; // rcx
  __m128i *v4; // r14
  __int32 v5; // eax
  __m128i *v6; // r15
  __m128i *v8; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r13
  __m128i *v15; // rax
  __m128i *v16; // rbp
  __m128i *v17; // rax
  __int64 v18; // rdi
  __int32 v19; // edx
  const __m128i *v20; // rdx
  __m128i *v21; // rcx
  unsigned __int64 v22; // rdi
  __int32 v23; // esi
  const __m128i *v24; // rsi
  void **v25; // r13
  __m128i *v26; // rax
  __int64 v27; // [rsp+8h] [rbp-60h] BYREF
  __m128i *v28; // [rsp+10h] [rbp-58h]
  __int64 *v29; // [rsp+18h] [rbp-50h]
  __int64 v30; // [rsp+20h] [rbp-48h]
  __m128i *v31; // [rsp+28h] [rbp-40h]

  v3 = a2 + 1;
  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
    if ( (__m128i *)a2->m128i_i64[0] == v3 )
    {
      v4[1] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v4->m128i_i64[0] = a2->m128i_i64[0];
      v4[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
    v4->m128i_i64[1] = a2->m128i_i64[1];
    a2[1].m128i_i8[0] = 0;
    v5 = *a3;
    a2->m128i_i64[0] = (__int64)v3;
    a2->m128i_i64[1] = 0;
    v4[2].m128i_i32[0] = v5;
    v6 = a1[1];
    a1[1] = (__m128i *)((char *)v6 + 40);
    return v6;
  }
  v8 = *a1;
  v11 = (char *)v4 - (char *)*a1;
  v12 = v11 >> 3;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v11 >> 3) )
  {
    v13 = 0x999999999999999ALL * v12;
    v14 = 0x1FFFFFFFFFFFFFFELL;
    if ( 0xCCCCCCCCCCCCCCCDLL * v12 <= 0x999999999999999ALL * v12 && v13 <= 0x666666666666666LL )
    {
      if ( !v13 )
      {
        v27 = 40;
        v16 = nullptr;
        v29 = nullptr;
        goto LABEL_10;
      }
      v14 = 2 * v12;
    }
  }
  else
  {
    v14 = 5;
  }
  v31 = a2;
  v30 = v11;
  v28 = a2 + 1;
  v15 = (__m128i *)operator new(v14 * 8);
  v3 = a2 + 1;
  v11 = v30;
  v16 = v15;
  v29 = &v15->m128i_i64[v14];
  v27 = (__int64)&v15[2].m128i_i64[1];
LABEL_10:
  v17 = (__m128i *)((char *)v16 + v11);
  *(__int64 *)((char *)v16->m128i_i64 + v11) = (__int64)v16[1].m128i_i64 + v11;
  if ( (__m128i *)a2->m128i_i64[0] == v3 )
  {
    v17[1] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v17->m128i_i64[0] = a2->m128i_i64[0];
    v17[1].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  v18 = a2->m128i_i64[1];
  a2[1].m128i_i8[0] = 0;
  v19 = *a3;
  a2->m128i_i64[0] = (__int64)v3;
  v17->m128i_i64[1] = v18;
  a2->m128i_i64[1] = 0;
  v17[2].m128i_i32[0] = v19;
  if ( v4 == v8 )
  {
    v6 = v16;
  }
  else
  {
    v20 = v8 + 1;
    v21 = v16;
    v22 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)&v4[-3].m128i_u64[1] - (char *)v8) >> 3))
        & 0x1FFFFFFFFFFFFFFFLL;
    v6 = (__m128i *)((char *)v16 + 40 * v22 + 40);
    do
    {
      v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
      v24 = (const __m128i *)v20[-1].m128i_i64[0];
      if ( v24 == v20 )
      {
        v21[1] = _mm_loadu_si128(v20);
      }
      else
      {
        v21->m128i_i64[0] = (__int64)v24;
        v21[1].m128i_i64[0] = v20->m128i_i64[0];
      }
      v21 = (__m128i *)((char *)v21 + 40);
      v21[-2].m128i_i64[0] = v20[-1].m128i_i64[1];
      v23 = v20[1].m128i_i32[0];
      v20[-1].m128i_i64[0] = (__int64)v20;
      v20 = (const __m128i *)((char *)v20 + 40);
      v20[-3].m128i_i64[0] = 0;
      v20[-3].m128i_i8[8] = 0;
      v21[-1].m128i_i32[2] = v23;
    }
    while ( v21 != v6 );
    v25 = (void **)v8;
    v27 = (__int64)&v16[5].m128i_i64[5 * v22];
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 5;
        if ( v4 == (__m128i *)v25 )
          goto LABEL_21;
      }
      v25 += 5;
    }
    while ( v4 != (__m128i *)v25 );
  }
LABEL_21:
  if ( v8 )
    operator delete(v8);
  v28 = v16;
  v26 = (__m128i *)v29;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v27);
  a1[2] = v26;
  return v6;
}
