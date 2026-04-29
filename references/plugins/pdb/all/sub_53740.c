__int64 __fastcall sub_53740(__int64 a1, const __m128i **a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  const __m128i *v8; // rcx
  const __m128i *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __m128i v12; // xmm1
  const __m128i *v13; // rax
  __int64 v14; // rax
  const __m128i *v15; // rdx
  const __m128i *v16; // r9
  const __m128i *v17; // rdi
  __int64 v18; // rdx
  __m128i v19; // xmm0
  const __m128i *v22; // rbx
  __int64 v23; // rbp
  const __m128i *v24; // [rsp+8h] [rbp-40h]
  const __m128i *v25; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 144LL);
  sub_75D50(v6);
  v7 = *(_QWORD *)(v6 + 584);
  v8 = *(const __m128i **)(v6 + 576);
  v9 = v8;
  if ( 40 * v7 )
  {
    do
    {
      v12 = _mm_loadu_si128(v9);
      if ( a3 < _mm_add_epi64(_mm_srli_si128(v12, 8), v12).m128i_u64[0] && v12.m128i_i64[0] < a3 + a4 )
      {
        v13 = a2[1];
        if ( a2[2] >= (const __m128i *)&v13->m128i_i8[1] )
        {
          v10 = (__int64)*a2;
        }
        else
        {
          v24 = a2[2];
          v14 = qvector_reserve(a2, 0, &v13->m128i_i8[1], 40);
          v15 = a2[1];
          v16 = a2[2];
          v17 = *a2;
          v10 = v14;
          a2[2] = v24;
          v18 = (__int64)&v15[-1].m128i_i64[1] + 7;
          if ( v18 >= 0 )
          {
            do
            {
              v19 = _mm_loadu_si128(v17);
              v14 += 40;
              v17 = (const __m128i *)((char *)v17 + 40);
              *(__m128i *)(v14 - 40) = v19;
              *(__m128i *)(v14 - 24) = _mm_loadu_si128((const __m128i *)((char *)v17 - 24));
              *(_QWORD *)(v14 - 8) = v17[-1].m128i_i64[1];
            }
            while ( v18-- != 0 );
            v17 = *a2;
          }
          v25 = v16;
          qfree(v17);
          *a2 = (const __m128i *)v10;
          v13 = a2[1];
          a2[2] = v25;
        }
        v11 = v10 + 40LL * (_QWORD)v13;
        *(_OWORD *)(v11 + 8) = 0;
        *(_QWORD *)(v11 + 24) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)v11 = -1;
        *(_BYTE *)(v11 + 32) = 0;
        a2[1] = (const __m128i *)((char *)a2[1] + 1);
        *(_QWORD *)v11 = v9->m128i_i64[0];
        *(_DWORD *)(v11 + 8) = v9->m128i_i64[1];
        *(_DWORD *)(v11 + 12) = v9[1].m128i_i32[2];
        *(_DWORD *)(v11 + 16) = v9[1].m128i_i32[3];
        *(_DWORD *)(v11 + 20) = v9[1].m128i_i32[0];
        *(_DWORD *)(v11 + 24) = v9[1].m128i_i32[1];
        *(_DWORD *)(v11 + 28) = v9[2].m128i_i32[0];
        *(_BYTE *)(v11 + 32) = v9[2].m128i_i8[4];
        v8 = *(const __m128i **)(v6 + 576);
        v7 = *(_QWORD *)(v6 + 584);
      }
      v9 = (const __m128i *)((char *)v9 + 40);
    }
    while ( v9 != (const __m128i *)((char *)v8 + 40 * v7) );
  }
  if ( (debug & 0x40000) != 0 )
  {
    sub_29350();
    v22 = *a2;
    v23 = (__int64)&(*a2)->m128i_i64[5 * (_QWORD)a2[1]];
    if ( (const __m128i *)v23 != *a2 )
    {
      do
      {
        v22 = (const __m128i *)((char *)v22 + 40);
        sub_29350();
      }
      while ( v22 != (const __m128i *)v23 );
    }
  }
  return 0;
}
