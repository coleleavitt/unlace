__int64 __fastcall sub_B79080(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // ax
  __m128i si128; // xmm0
  __m128i v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = sub_B902D0(104, a1, 0, 0);
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)v1 = off_2C02B30;
  *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 24) & 0xFFFF000000000000LL | 0x600000000000LL;
  v2 = sub_B8C0C0(0);
  *(_BYTE *)(v1 + 32) &= 0xF8u;
  *(_WORD *)(v1 + 30) = v2 & 0x3FFF | *(_WORD *)(v1 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(0);
  v5[0].m128i_i64[0] = a1;
  v5[0] = (__m128i)_mm_loadh_ps((const double *)v5[0].m128i_i64);
  sub_B8E080(v1 + 40, 0);
  si128 = _mm_load_si128(v5);
  *(_QWORD *)(v1 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v1 + 96) = 0;
  *(__m128i *)(v1 + 80) = si128;
  *(_QWORD *)v1 = &off_2B4AAF0;
  return v1;
}
