unsigned __int64 __fastcall sub_7B7870(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int16 v15; // ax
  unsigned __int64 v17; // [rsp+0h] [rbp-48h]

  v12 = sub_79A610(104, (_QWORD *)a1, a2, 0);
  v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a8)).m128i_u64[0];
  *(_QWORD *)v12 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && !sub_7946A0(v13) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 24) = a6;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v12 + 28) = 24640;
  v15 = sub_799DF0(0x40u);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(64);
  *(_DWORD *)(v12 + 56) = a6;
  *(_QWORD *)(v12 + 72) = v12;
  *(_QWORD *)(v12 + 40) = a7;
  *(_QWORD *)(v12 + 48) = 0;
  *(_WORD *)(v12 + 88) = a5 & 0x3FFF | (a3 << 14);
  *(_QWORD *)(v12 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v12 + 80) = a9 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)v12 = &off_49F6078;
  *(_QWORD *)(v12 + 92) = v17;
  *(_QWORD *)(v12 + 48) = *(_QWORD *)(sub_6DF480(a1, v12, nullptr, 0) & 0xFFFFFFFFFFFFFFF0LL);
  return v12;
}

