void __fastcall sub_10DA960(__m128i **a1, __m128i *a2, __m128i *a3)
{
  __m128i *v4; // rsi
  __int64 v5; // rax
  size_t v6; // rax
  __m128i v7; // xmm1
  __m128i *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i *v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  void *v14; // [rsp+10h] [rbp-58h]
  size_t v15; // [rsp+18h] [rbp-50h]
  __m128i v16; // [rsp+20h] [rbp-48h] BYREF
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]

  *a1 = a2;
  v4 = (__m128i *)a3->m128i_i64[0];
  v14 = &v16;
  if ( v4 == &a3[1] )
  {
    v4 = &v16;
    v16 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v5 = a3[1].m128i_i64[0];
    v14 = v4;
    v16.m128i_i64[0] = v5;
  }
  v6 = a3->m128i_u64[1];
  v7 = _mm_loadu_si128(a3 + 2);
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  a3->m128i_i64[1] = 0;
  v8 = (__m128i *)a2[110].m128i_i64[0];
  a3[1].m128i_i8[0] = 0;
  v9 = a3[3].m128i_i64[0];
  v15 = v6;
  v18 = v9;
  v17 = v7;
  if ( v4 == &v16 )
  {
    if ( v6 )
    {
      if ( v6 == 1 )
        v8->m128i_i8[0] = v16.m128i_i8[0];
      else
        memcpy(v8, v4, v6);
      v6 = v15;
      v8 = (__m128i *)a2[110].m128i_i64[0];
    }
    a2[110].m128i_i64[1] = v6;
    v8->m128i_i8[v6] = 0;
    v8 = (__m128i *)v14;
  }
  else
  {
    if ( v8 == &a2[111] )
    {
      v13 = v16.m128i_i64[0];
      a2[110].m128i_i64[0] = (__int64)v4;
      *(__m128 *)((char *)&a2[110] + 8) = _mm_loadh_ps((const double *)&v13);
    }
    else
    {
      v13 = v16.m128i_i64[0];
      v10 = a2[111].m128i_i64[0];
      a2[110].m128i_i64[0] = (__int64)v4;
      *(__m128 *)((char *)&a2[110] + 8) = _mm_loadh_ps((const double *)&v13);
      if ( v8 )
      {
        v14 = v8;
        v16.m128i_i64[0] = v10;
        goto LABEL_7;
      }
    }
    v8 = &v16;
    v14 = &v16;
  }
LABEL_7:
  v15 = 0;
  v8->m128i_i8[0] = 0;
  v11 = v18;
  v12 = (__m128i *)v14;
  a2[112] = _mm_load_si128(&v17);
  a2[113].m128i_i64[0] = v11;
  if ( v12 != &v16 )
    operator delete(v12);
}
