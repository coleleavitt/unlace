void __fastcall sub_229F50(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 m128i_i64; // rdi
  const char *v11; // r12
  __int64 v12; // rdi
  __m128i v13; // xmm5
  __m128 v14; // xmm3
  __m128i *v15; // r15
  __int64 v16; // rax
  __m128i v17; // xmm6
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // r13
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r13
  __m128i v26; // xmm0
  __int64 v27; // rcx
  __int64 v28; // rdi
  __m128i v29; // xmm5
  __int64 v30; // rdi
  __m128i si128; // xmm6
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-A8h] BYREF
  const char *v34; // [rsp+18h] [rbp-90h]
  __int64 v35; // [rsp+20h] [rbp-88h]
  __int64 v36; // [rsp+28h] [rbp-80h]
  __m128i v37; // [rsp+30h] [rbp-78h] BYREF
  __int64 v38; // [rsp+40h] [rbp-68h]
  __int16 v39; // [rsp+4Eh] [rbp-5Ah]
  __m128i v40; // [rsp+50h] [rbp-58h] BYREF
  __m128i v41[4]; // [rsp+60h] [rbp-48h] BYREF

  v34 = a2;
  if ( (const char *)a1 != a2 && a2 != (const char *)(a1 + 80) )
  {
    v7 = (__m128i *)(a1 + 160);
    do
    {
      while ( 1 )
      {
        v8 = v7[-5].m128i_u64[0];
        v9 = *(_QWORD *)a1;
        m128i_i64 = (__int64)v7[-5].m128i_i64;
        v11 = (const char *)v7;
        if ( *(_QWORD *)a1 >= v8 )
        {
          if ( v8 != v9 )
            break;
          a2 = *(const char **)(a1 + 8);
          if ( v7[-5].m128i_i64[1] < (unsigned __int64)a2 )
            break;
        }
        sub_229D40(m128i_i64, a2, a3, v9, a5, a6);
        v7 += 5;
        if ( v34 == v11 )
          return;
      }
      v12 = m128i_i64 - a1;
      v13 = _mm_loadu_si128((__m128i *)((char *)v7 - 56));
      v14 = _mm_loadh_ps((const double *)&v7[-5].m128i_i64[1]);
      v15 = v7;
      v35 = v7[-4].m128i_i64[0];
      v16 = v7[-3].m128i_i64[1];
      v17 = _mm_loadu_si128(v7 - 2);
      v7[-4].m128i_i64[0] = 0;
      v36 = v16;
      v18 = v7[-1].m128i_i64[0];
      v7[-3].m128i_i64[1] = 0;
      v38 = v18;
      LOWORD(v18) = v7[-1].m128i_i16[4];
      v40 = (__m128i)v14;
      v39 = v18;
      v19 = 0xCCCCCCCCCCCCCCCDLL * (v12 >> 4);
      v37 = v13;
      *(__m128i *)((char *)&v7[-4] + 8) = 0;
      v41[0] = v17;
      v7[-2] = 0;
      if ( v12 > 0 )
      {
        do
        {
          v20 = v15[-4].m128i_i64[0];
          v15 -= 5;
          v21 = _mm_loadu_si128(v15 - 5);
          v22 = v15[-4].m128i_i64[0];
          v15[-4].m128i_i64[0] = 0;
          *v15 = v21;
          v23 = _mm_loadu_si128((__m128i *)((char *)v15 - 56));
          *(__m128i *)((char *)&v15[-4] + 8) = 0;
          if ( v20 )
          {
            v15[1].m128i_i64[1] = 0;
            v33 = v23;
            qfree(v20, a2);
            v23 = _mm_load_si128(&v33);
          }
          v24 = v15[2].m128i_i64[1];
          v15[1].m128i_i64[0] = v22;
          *(__m128i *)((char *)v15 + 24) = v23;
          v25 = v15[-3].m128i_i64[1];
          v26 = _mm_loadu_si128(v15 - 2);
          v15[-3].m128i_i64[1] = 0;
          v15[-2] = 0;
          if ( v24 )
          {
            v15[3].m128i_i64[0] = 0;
            v33 = v26;
            qfree(v24, a2);
            v26 = _mm_load_si128(&v33);
          }
          v27 = v15[-1].m128i_i64[0];
          v15[2].m128i_i64[1] = v25;
          v15[3] = v26;
          v15[4].m128i_i64[0] = v27;
          v15[4].m128i_i8[8] = v15[-1].m128i_i8[8];
          v15[4].m128i_i8[9] = v15[-1].m128i_i8[9];
          --v19;
        }
        while ( v19 );
      }
      v28 = *(_QWORD *)(a1 + 16);
      *(__m128i *)a1 = _mm_load_si128(&v40);
      if ( v28 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        qfree(v28, a2);
      }
      v29 = _mm_load_si128(&v37);
      v30 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 16) = v35;
      *(__m128i *)(a1 + 24) = v29;
      if ( v30 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        qfree(v30, a2);
      }
      si128 = _mm_load_si128(v41);
      v7 += 5;
      *(_QWORD *)(a1 + 40) = v36;
      v32 = v38;
      *(__m128i *)(a1 + 48) = si128;
      *(_QWORD *)(a1 + 64) = v32;
      *(_WORD *)(a1 + 72) = v39;
    }
    while ( v34 != v11 );
  }
}
