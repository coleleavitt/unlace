__int64 __fastcall sub_39B6B0(_QWORD *a1, __int64 a2, __m128d a3)
{
  unsigned __int64 v4; // rdx
  int v5; // r13d
  int v6; // r15d
  int v7; // r14d
  __m128d v8; // xmm1
  __int64 v9; // rbp
  int v10; // r13d
  int v11; // r12d
  __m128i si128; // xmm0
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int32 v16; // esi
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i *v20; // rax
  int v21; // edx
  __m128i v22; // xmm1
  __int32 v23; // r10d
  __int32 v24; // edx
  __m128i v25; // xmm2
  __int32 v26; // r9d
  double v27; // xmm1_8
  int v28; // ecx
  __int32 v29; // esi
  __int32 v30; // r11d
  __int64 v31; // rax
  __int64 v33; // [rsp+8h] [rbp-50h]
  int v34; // [rsp+10h] [rbp-48h]
  unsigned __int8 v35; // [rsp+17h] [rbp-41h]

  v4 = a1[87];
  v5 = *(_DWORD *)(a1[4] + 28LL) - *(_DWORD *)(a1[4] + 20LL);
  v34 = v5 + 1;
  if ( *(_QWORD *)(a2 + 16) < v4 )
    *(_QWORD *)a2 = qvector_reserve(a2, *(_QWORD *)a2, v4, 84);
  v6 = v5 - 3;
  v7 = v5 - 11;
  sub_2856C0(*(_QWORD *)(a1[84] + 888LL));
  v8.m128d_f64[1] = a3.m128d_f64[1];
  v8.m128d_f64[0] = a3.m128d_f64[0] - 1.0;
  *(__m128d *)(a2 + 24) = _mm_unpacklo_pd(a3, v8);
  v9 = a1[86];
  v33 = v9 + 16LL * a1[87];
  if ( v9 == v33 )
  {
    v35 = 0;
    v11 = v5 - 11;
  }
  else
  {
    v10 = v5 - 12;
    v35 = 0;
    v11 = v7;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    do
    {
      v18 = *(_QWORD *)(a2 + 8);
      v19 = *(_QWORD *)a2;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v18 + 1) )
      {
        v31 = qvector_reserve(a2, v19, v18 + 1, 84);
        *(_QWORD *)a2 = v31;
        v19 = v31;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
        v18 = *(_QWORD *)(a2 + 8);
      }
      v20 = (__m128i *)(v19 + 84 * v18);
      v20[1] = si128;
      *v20 = si128;
      v20[3] = si128;
      v20[2] = si128;
      v20[5].m128i_i32[0] = 0;
      v20[4] = si128;
      ++*(_QWORD *)(a2 + 8);
      v20->m128i_i32[2] = v34;
      v20->m128i_i32[0] = 0;
      v21 = (int)((double)*(unsigned __int16 *)(v9 + 8) - *(double *)(a2 + 24) * 0.5);
      v20->m128i_i32[1] = v21;
      v20->m128i_i32[3] = (int)((double)v21 + *(double *)(a2 + 24));
      v22 = _mm_loadu_si128(v20);
      v20[1] = v22;
      v23 = v20[1].m128i_i32[1];
      v24 = v20[1].m128i_i32[3];
      v20[1].m128i_i32[2] = v6;
      v20[1].m128i_i32[0] = v7;
      v20[1].m128i_i32[3] = v24 - 3;
      v20[1].m128i_i32[1] = v23 - 3;
      v25 = _mm_loadu_si128(v20 + 1);
      v20[3] = v22;
      v26 = v20[3].m128i_i32[1];
      v20[3].m128i_i32[2] = v10;
      v20[2] = v25;
      v27 = (double)v10 - *(double *)(a2 + 32);
      v20[3].m128i_i32[1] = v26 - 3;
      v28 = (int)v27;
      v20[3].m128i_i32[0] = (int)v27;
      v29 = v20[3].m128i_i32[3];
      v30 = v29 - 3;
      v20[3].m128i_i32[3] = v29 - 3;
      v20[4] = _mm_loadu_si128(v20 + 3);
      if ( *(_DWORD *)(v9 + 12) == -1 )
      {
        v28 = v7;
      }
      else
      {
        v35 = 1;
        if ( v11 > v28 )
          v11 = (int)v27;
      }
      v13 = v24 - 7 - v23;
      v20[5].m128i_i32[0] = v28 - 2;
      if ( v13 > 0 )
      {
        v14 = v13 >> 1;
        v20[1].m128i_i32[1] = v14 + v23 - 3;
        v20[1].m128i_i32[3] = v23 + v14 + 4;
      }
      v15 = (int)*(double *)(a2 + 32);
      v16 = v29 + 1;
      if ( v16 - v26 - v15 > 0 )
      {
        v17 = (v16 - v26 - v15) >> 1;
        v20[3].m128i_i32[1] = v17 + v26 - 3;
        v20[3].m128i_i32[3] = v17 + v30 + v26 + v15 - v16;
      }
      v9 += 16;
    }
    while ( v33 != v9 );
  }
  *(_DWORD *)(a2 + 40) = v6;
  *(_DWORD *)(a2 + 44) = v11 - 10;
  *(_BYTE *)(a2 + 48) = v35;
  return v35;
}
