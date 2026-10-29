__int64 __fastcall sub_8060F0(__int64 a1, unsigned int a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // xmm0_8
  unsigned __int8 v11; // al
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v8 = sub_6C4160(a1, *(_QWORD *)(a1 + 18488) | 1LL);
  v9 = sub_AC40C0(40, a1, 8);
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0xF;
  if ( byte_4AD234C )
  {
    v13 = v10;
    sub_AC4570(15);
  }
  *(_WORD *)(v9 + 1) &= 0xF801u;
  *(_QWORD *)(v9 + 8) = v8;
  *(_DWORD *)(v9 + 24) = a4;
  *(_QWORD *)(v9 + 32) = a5;
  *(_QWORD *)(v9 + 16) = v10;
  v11 = sub_76C300(v9, a1);
  *(_BYTE *)(v9 + 1) = (v11 << 6) | *(_BYTE *)(v9 + 1) & 0x3F;
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 + 2) & 0xF8 | (v11 >> 2) & 7;
  return v9;
}

