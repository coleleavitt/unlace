unsigned __int64 __fastcall sub_7B9390(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // xmm1_8
  __int64 v15; // rax
  __int64 v16; // r14
  __int16 v17; // ax
  unsigned __int64 v18; // rdx

  v13 = sub_79A610(128, a1, a2, 0);
  v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)).m128i_u64[0];
  *(_QWORD *)v13 = off_49F5208;
  if ( !a2
    || (v15 = sub_79A2E0(a2), v16 = *(_QWORD *)(v15 + 8) & 7LL, (*(_QWORD *)(v15 + 8) & 7) == 0)
    || *(char *)(v15 + 29) < 0 && !sub_7946A0(v15) )
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v13 + 24) = a3;
  *(_WORD *)(v13 + 28) = 24649;
  v17 = sub_799DF0(0x49u);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(73);
  *(_QWORD *)(v13 + 40) = a4;
  v18 = *(_QWORD *)(v13 + 72) & 0xFFFFFFFC00000000LL;
  *(_QWORD *)(v13 + 48) = v14;
  *(_QWORD *)(v13 + 96) = 0;
  *(_QWORD *)v13 = &off_49F6458;
  *(_QWORD *)(v13 + 120) = 0;
  *(_QWORD *)(v13 + 56) = a7;
  *(_OWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 64) = a8;
  *(_OWORD *)(v13 + 104) = 0;
  *(_QWORD *)(v13 + 72) = v18 | ((unsigned __int64)(a9 & 3) << 32);
  return v13;
}

