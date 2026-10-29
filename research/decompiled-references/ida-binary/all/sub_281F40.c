void __fastcall sub_281F40(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v13; // rbx
  double v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const __m128i *v19; // rdi
  __int64 v20; // rdi
  __m128i v21; // xmm0
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // rdi
  __int64 v29; // [rsp-38h] [rbp-38h]
  __int64 v30; // [rsp-30h] [rbp-30h]

  if ( a1 != a2 )
  {
    v30 = v10;
    v13 = a1 + 24;
    while ( a2 != v13 )
    {
      v14 = *(double *)(v13 + 8);
      v15 = *(_QWORD *)(v13 + 16);
      v19 = (const __m128i *)v13;
      v13 += 24;
      if ( (int)QT::QtPrivate::compareStrings(
                  v15,
                  *(_QWORD *)&v14,
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(a1 + 8),
                  1,
                  a10,
                  v29,
                  v30) >= 0 )
      {
        sub_281E50(v19, *(double *)a3.m128_u64, a4, a5, a6, *(__int64 *)&v14, v16, v17, v18, a10);
      }
      else
      {
        v20 = (__int64)v19->m128i_i64 - a1;
        v21 = _mm_loadl_epi64((const __m128i *)(v13 - 24));
        a4 = 0.0;
        a5 = v14;
        *(_QWORD *)(v13 - 8) = 0;
        a3 = (__m128)_mm_unpacklo_epi64(v21, (__m128i)*(unsigned __int64 *)&v14);
        *(_OWORD *)(v13 - 24) = 0;
        v22 = 0xAAAAAAAAAAAAAAABLL * (v20 >> 3);
        if ( v20 > 0 )
        {
          v23 = *(_QWORD *)(v13 - 16);
          v24 = (__int64 *)(v13 - 48);
          do
          {
            v25 = *v24;
            *v24 = 0;
            v24 -= 3;
            v24[6] = v25;
            v26 = v24[4];
            v24[4] = v23;
            v24[7] = v26;
            v27 = v24[5];
            v24[5] = 0;
            v24[8] = v27;
            --v22;
          }
          while ( v22 );
        }
        v28 = *(void **)a1;
        *(_QWORD *)(a1 + 16) = v15;
        *(__m128 *)a1 = a3;
        if ( v28 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
            free(v28);
        }
      }
    }
  }
}
