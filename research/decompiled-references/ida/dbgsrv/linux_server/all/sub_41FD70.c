/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FD70
// Address: 0x000000000041FD70

//----- (000000000041FD70) ----------------------------------------------------
__m128i *__fastcall sub_41FD70(__m128i *a1, __int64 a2, __int64 a3, __m128i *a4, double a5, double a6, __m128 a7)
{
  __int64 v7; // r15
  signed __int64 v9; // r13
  __m128 v10; // xmm0
  unsigned __int64 v11; // xmm2_8
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rsi
  __int64 v22; // [rsp+8h] [rbp-50h]

  v7 = a3;
  v9 = 0x8E38E38E38E38E39LL * ((a3 - a2) >> 3);
  v10 = (__m128)_mm_loadu_si128(a4);
  v11 = _mm_movehl_ps(a7, v10).m128_u64[0];
  if ( a3 - a2 > 0 )
  {
    v12 = v11;
    v13 = v10.m128_u64[0];
    while ( 1 )
    {
      v14 = v13;
      v15 = 0x8E38E38E38E38E39LL * ((__int64)(v13 - v12) >> 3);
      v16 = v15;
      if ( v13 == v12 )
      {
        v16 = 7;
        v14 = *(_QWORD *)(a4[1].m128i_i64[1] - 8) + 504LL;
      }
      if ( v9 <= v16 )
        v16 = v9;
      v22 = v7 - 72 * v16;
      v17 = 0x8E38E38E38E38E39LL * ((72 * v16) >> 3);
      if ( 72 * v16 > 0 )
      {
        do
        {
          v7 -= 72;
          v14 -= 72;
          sub_4788F0(v14, v7);
          --v17;
        }
        while ( v17 );
        v13 = a4->m128i_i64[0];
        v12 = a4->m128i_u64[1];
        v15 = 0x8E38E38E38E38E39LL * ((__int64)(a4->m128i_i64[0] - v12) >> 3);
      }
      v18 = v15 - v16;
      if ( v18 < 0 )
      {
        v19 = ~(~v18 / 7);
      }
      else
      {
        if ( v18 <= 6 )
        {
          v9 -= v16;
          v13 += -72 * v16;
          a4->m128i_i64[0] = v13;
          if ( v9 <= 0 )
            goto LABEL_16;
          goto LABEL_13;
        }
        v19 = v18 / 7;
      }
      v9 -= v16;
      v20 = (unsigned __int64 *)(8 * v19 + a4[1].m128i_i64[1]);
      a4[1].m128i_i64[1] = (__int64)v20;
      v12 = *v20;
      *(__m128i *)((char *)a4 + 8) = _mm_unpacklo_epi64((__m128i)*v20, (__m128i)(*v20 + 504));
      v13 = v12 + 72 * (v18 - 7 * v19);
      a4->m128i_i64[0] = v13;
      if ( v9 <= 0 )
      {
LABEL_16:
        v10 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v12);
        break;
      }
LABEL_13:
      v7 = v22;
    }
  }
  *a1 = (__m128i)v10;
  a1[1] = _mm_loadu_si128(a4 + 1);
  return a1;
}
