unsigned __int64 __fastcall sub_7A7E50(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, _QWORD *a6)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r13
  __int16 v13; // ax
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v9 = sub_79A610(72, a1, a2, 0);
  v10 = *(_QWORD *)(sub_B0D8A0(*(_QWORD *)(*a6 & 0xFFFFFFFFFFFFFFF0LL)) + 40);
  v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)).m128i_u64[0];
  *(_QWORD *)v9 = off_49F5208;
  if ( !a2
    || (v11 = sub_79A2E0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && !sub_7946A0(v11) )
  {
    v12 = 0;
  }
  *(_QWORD *)(v9 + 8) = v12;
  *(_DWORD *)(v9 + 24) = a5;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v9 + 28) = 24653;
  v13 = sub_799DF0(0x4Du);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v13 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(77);
  *(_QWORD *)(v9 + 40) = v10;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 64) = a6;
  *(_QWORD *)v9 = &off_49F59A8;
  *(_QWORD *)(v9 + 56) = v16;
  return v9;
}

