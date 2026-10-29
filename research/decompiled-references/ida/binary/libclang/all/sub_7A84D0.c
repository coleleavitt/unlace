unsigned __int64 __fastcall sub_7A84D0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbp
  __int16 v15; // ax
  __m128i si128; // xmm3
  __m128i v18[4]; // [rsp+0h] [rbp-48h] BYREF

  v18[0].m128i_i64[0] = a6;
  v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)).m128i_u64[0];
  v10 = sub_79A610(88, a1, a2, 0);
  v11 = 0;
  v18[0] = (__m128i)_mm_loadh_ps((const double *)v18[0].m128i_i64);
  if ( (a8 & 7) == 0 )
    v11 = a8 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v11;
  *(_QWORD *)v10 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && !sub_7946A0(v13) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v10 + 8) = v14;
  *(_DWORD *)(v10 + 24) = a7;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v10 + 28) = 24637;
  v15 = sub_799DF0(0x3Du);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v15 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(61);
  si128 = _mm_load_si128(v18);
  *(_QWORD *)(v10 + 40) = v12;
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 56) = v9;
  *(_QWORD *)v10 = &off_49F5B10;
  *(__m128i *)(v10 + 72) = si128;
  *(_DWORD *)(v10 + 64) = a9;
  return v10;
}

