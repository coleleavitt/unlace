unsigned __int64 __fastcall sub_7A70D0(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9)
{
  __int64 v10; // rbp
  unsigned __int64 v11; // r15
  __m128i v12; // xmm0
  unsigned __int64 v13; // xmm2_8
  __int64 v14; // rax
  __int64 v15; // r14
  __int16 v16; // ax
  __int64 v17; // rax
  __m128i v18; // xmm5
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+2Ch] [rbp-3Ch]

  v10 = a9;
  LODWORD(v21) = a3;
  v22 = a5;
  v23 = a6;
  if ( a9 && (*(_BYTE *)(a9 + 28) & 0x7F) == 0x16 )
    v10 = *(_QWORD *)(a9 + 88);
  v20.m128i_i64[0] = a7;
  v11 = sub_79A610(96, (_QWORD *)a1, a2, 0);
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v20), (__m128i)a8);
  v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v23)).m128i_u64[0];
  *(_QWORD *)v11 = off_49F5208;
  v20 = v12;
  v21 = v13;
  if ( !a2
    || (v14 = sub_79A2E0(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) == 0)
    || *(char *)(v14 + 29) < 0 && !sub_7946A0(v14) )
  {
    v15 = 0;
  }
  *(_QWORD *)(v11 + 8) = v15;
  *(_DWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v11 + 28) = 24651;
  v16 = sub_799DF0(0x4Bu);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v16 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(75);
  v17 = v22;
  v18 = _mm_load_si128(&v20);
  *(_QWORD *)(v11 + 56) = v11;
  *(_QWORD *)(v11 + 88) = v10;
  *(_QWORD *)(v11 + 40) = v17;
  *(_QWORD *)(v11 + 48) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(__m128i *)(v11 + 72) = v18;
  *(_QWORD *)v11 = &off_49F5760;
  *(_QWORD *)(v11 + 64) = v21;
  return v11;
}

