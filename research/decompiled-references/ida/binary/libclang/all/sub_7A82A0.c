unsigned __int64 __fastcall sub_7A82A0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __m128i v9; // xmm1
  unsigned __int64 v10; // rbx
  int v11; // r13d
  __m128i v12; // xmm0
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  __int16 v16; // ax
  __int64 v17; // rax
  __m128i si128; // xmm4
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  __m128i v21[4]; // [rsp+10h] [rbp-48h] BYREF

  v20.m128i_i64[0] = a4;
  v9 = _mm_cvtsi32_si128(a3);
  v10 = sub_79A610(88, a1, a2, 0);
  v11 = *(_DWORD *)(a6 + 8);
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v20), (__m128i)a5);
  v13 = a1[2364];
  v20.m128i_i64[0] = *(_QWORD *)a6;
  v21[0] = v12;
  v20.m128i_i64[1] = _mm_unpacklo_epi32(v9, _mm_cvtsi32_si128(a7)).m128i_u64[0];
  *(_QWORD *)v10 = off_49F5208;
  if ( !a2
    || (v14 = sub_79A2E0(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) == 0)
    || *(char *)(v14 + 29) < 0 && !sub_7946A0(v14) )
  {
    v15 = 0;
  }
  *(_QWORD *)(v10 + 8) = v15;
  *(_DWORD *)(v10 + 24) = v11;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v10 + 28) = 24602;
  v16 = sub_799DF0(0x1Au);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v16 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(26);
  v17 = v20.m128i_i64[0];
  si128 = _mm_load_si128(v21);
  *(_QWORD *)(v10 + 48) = v13;
  *(_QWORD *)(v10 + 40) = v17;
  *(__m128i *)(v10 + 64) = si128;
  *(_QWORD *)v10 = &off_49F5A98;
  *(_QWORD *)(v10 + 56) = v20.m128i_i64[1];
  *(_QWORD *)(v10 + 80) = *(_QWORD *)(a6 + 16);
  return v10;
}

