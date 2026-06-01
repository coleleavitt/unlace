unsigned __int64 __fastcall sub_7B9650(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // r14
  __int16 v15; // ax

  v11 = sub_79A610(96, a1, a2, 0);
  v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a8)).m128i_u64[0];
  *(_QWORD *)v11 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && !sub_7946A0(v13) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v11 + 8) = v14;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v11 + 24) = a4;
  *(_WORD *)(v11 + 28) = 24588;
  v15 = sub_799DF0(0xCu);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v15 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(12);
  *(_QWORD *)(v11 + 36) = v12;
  *(_QWORD *)(v11 + 48) = a5;
  *(_OWORD *)(v11 + 64) = 0;
  *(_QWORD *)v11 = &off_49F64D0;
  *(_OWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 56) = a7;
  return v11;
}

