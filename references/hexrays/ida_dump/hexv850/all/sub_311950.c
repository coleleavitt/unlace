__int64 __fastcall sub_311950(__int64 *a1, __int64 a2, __m128i *a3, double a4, __m128 a5)
{
  __int64 v7; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __m128i v13; // xmm0
  const __m128i *v14; // rbp
  unsigned int v15; // r15d
  __m128i v16; // xmm1
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  bool v19; // cf
  unsigned __int64 v20; // xmm1_8
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __m128i *v24; // [rsp+8h] [rbp-60h] BYREF
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = a3->m128i_i64[0];
  v25[3] = __readfsqword(0x28u);
  if ( !v7 && !a3->m128i_i64[1] )
    return sub_3113F0(a1, (__int64 **)a2);
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 == 1 )
  {
    v12 = *(__int64 **)a2;
    if ( !**(_QWORD **)a2 && !v12[1] )
      return sub_3112F0(a1, a3, a4, a5);
    if ( a1[1] != 1 || *(_QWORD *)*a1 || *(_QWORD *)(*a1 + 8) )
    {
      v23 = a3->m128i_i64[1];
      if ( v23 )
      {
        v14 = *(const __m128i **)a2;
        v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v23);
        v24 = (__m128i *)*a1;
LABEL_10:
        v15 = 0;
        while ( 1 )
        {
          v16 = _mm_loadu_si128(v14);
          v17 = v13.m128i_i64[0];
          v18 = v16.m128i_i64[0];
          v19 = v13.m128i_i64[0] < (unsigned __int64)v16.m128i_i64[0];
          v20 = _mm_add_epi64(v16, _mm_srli_si128(v16, 8)).m128i_u64[0];
          if ( v19 )
            v17 = v18;
          v21 = _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0];
          if ( v21 > v20 )
            v21 = v20;
          if ( v17 < v21 )
          {
            v25[0] = v17;
            v25[1] = v21 - v17;
            v22 = sub_311030(a1, &v24, v25);
            v10 = *(_QWORD *)(a2 + 8);
            v12 = *(__int64 **)a2;
            v15 |= v22;
          }
          if ( ++v14 == (const __m128i *)&v12[2 * v10] )
            break;
          v13 = _mm_loadu_si128(a3);
        }
        return v15;
      }
    }
  }
  else if ( a1[1] != 1 || *(_QWORD *)*a1 || *(_QWORD *)(*a1 + 8) )
  {
    if ( v10 )
    {
      v11 = a3->m128i_i64[1];
      if ( v11 )
      {
        v24 = (__m128i *)*a1;
        if ( 16 * v10 )
        {
          v12 = *(__int64 **)a2;
          v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v11);
          v14 = *(const __m128i **)a2;
          goto LABEL_10;
        }
      }
    }
  }
  return 0;
}
