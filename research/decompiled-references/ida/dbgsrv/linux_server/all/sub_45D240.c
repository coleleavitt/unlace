/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D240
// Address: 0x000000000045D240

//----- (000000000045D240) ----------------------------------------------------
__int64 __fastcall sub_45D240(
        __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char v14; // r13
  char v15; // r12
  __int64 v17; // rsi
  unsigned int v18; // r14d
  __m128 v19; // xmm0
  __int64 v20; // rsi
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v28; // ecx
  __int64 *v29; // rax
  __int64 v30; // rdx
  char v31; // [rsp+0h] [rbp-28h]

  v14 = a4;
  v15 = a3;
  v17 = a2[1].m128i_u16[4];
  if ( (_WORD)v17 == 523 )
  {
    v18 = 1;
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[7] = _mm_loadu_si128(a2 + 8);
    a1[8] = _mm_loadu_si128(a2 + 9);
    a1[9] = _mm_loadu_si128(a2 + 10);
    a1[10] = _mm_loadu_si128(a2 + 11);
    a1[11] = _mm_loadu_si128(a2 + 12);
    a1[12] = _mm_loadu_si128(a2 + 13);
    a1[13] = _mm_loadu_si128(a2 + 14);
    v19 = (__m128)_mm_loadu_si128(a2 + 15);
    a1[14] = (__m128i)v19;
    a1[15].m128i_i64[0] = a2[16].m128i_i64[0];
    a1[6].m128i_i32[0] = a2[6].m128i_i64[0];
    a1[6].m128i_i32[1] = a2[6].m128i_i64[1];
    a1[6].m128i_i32[2] = a2[7].m128i_i64[0];
    a1[6].m128i_i32[3] = a2[7].m128i_i64[1];
  }
  else
  {
    if ( (unsigned __int16)v17 > 0x20Bu || (v18 = 1, (((_WORD)v17 - 263) & 0xFFFB) != 0) && (_WORD)v17 )
    {
      if ( !(_BYTE)a3 )
        sub_423FE0(
          (int)"The input file has non-standard magic number (%x)",
          v17,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          v31);
      v18 = 0;
    }
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[6] = _mm_loadu_si128(a2 + 6);
    a1[7] = _mm_loadu_si128(a2 + 7);
    a1[8] = _mm_loadu_si128(a2 + 8);
    a1[9] = _mm_loadu_si128(a2 + 9);
    a1[10] = _mm_loadu_si128(a2 + 10);
    a1[11] = _mm_loadu_si128(a2 + 11);
    a1[12] = _mm_loadu_si128(a2 + 12);
    a1[13] = _mm_loadu_si128(a2 + 13);
    v19 = (__m128)_mm_loadu_si128(a2 + 14);
    a1[14] = (__m128i)v19;
    a1[15].m128i_i64[0] = a2[15].m128i_i64[0];
  }
  if ( (unsigned __int16)(a1[5].m128i_i16[6] - 10) > 3u
    && ((v20 = a1[3].m128i_u32[2], v21 = a1[3].m128i_u32[3], (unsigned int)v20 < v21)
     || v21 && (v21 & (v21 - 1)) != 0
     || (_DWORD)v20 && ((unsigned int)v20 & ((_DWORD)v20 - 1)) != 0) )
  {
    if ( !v15 )
    {
      sub_45D170(
        "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
        v20,
        v21);
      v20 = a1[5].m128i_u32[0];
      if ( (unsigned int)v20 > 0x77000000 || (unsigned int)v20 < a1[5].m128i_i32[1] )
LABEL_32:
        sub_45D170("Invalid file: bad ImageSize value %x", v20);
    }
  }
  else
  {
    v20 = a1[5].m128i_u32[0];
    if ( ((unsigned int)v20 > 0x77000000 || (unsigned int)v20 < a1[5].m128i_i32[1]) && !v15 )
      goto LABEL_32;
  }
  if ( v14 )
  {
    v22 = a1[7].m128i_u32[1];
    if ( (unsigned int)(v22 - 1) <= 0xE )
    {
      v28 = 16 - v22;
      v29 = &a1[7].m128i_i64[v22 + 1];
      *v29 = 0;
      v30 = (unsigned int)(8 * v28);
      *(__int64 *)((char *)v29 + v30 - 8) = 0;
      memset(
        (void *)((unsigned __int64)(v29 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v29 - (((_DWORD)v29 + 8) & 0xFFFFFFF8) + (unsigned int)v30) >> 3));
      a4 = 0;
    }
    v23 = 248;
    if ( a1[1].m128i_i16[4] == 523 )
      v23 = 264;
    v24 = a1[1].m128i_u16[2] + 24LL;
    v25 = 128;
    if ( v24 >= 0x80 )
      v25 = a1[1].m128i_u16[2] + 24LL;
    if ( v25 < v23 )
    {
      v26 = 120;
      if ( v23 != 248 )
        v26 = 136;
      if ( v24 >= v26 )
      {
        if ( !v15 )
          sub_410EA0(
            (int)"Warning: image directories are covered by the section table, some entries will be ignored\n",
            v20,
            136,
            a4,
            a5,
            a6,
            v19,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            v31);
        memset(&a1[7].m128i_u64[16 - ((v23 - v24 + 7) >> 3) + 1], 0, (v23 - v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
  }
  return v18;
}
// 45D5C9: variable 'v31' is possibly undefined
// 45D5E1: variable 'a4' is possibly undefined
// 45D5E1: variable 'a5' is possibly undefined
// 45D5E1: variable 'a6' is possibly undefined
// 45D5E1: variable 'a11' is possibly undefined
// 45D5E1: variable 'a12' is possibly undefined
