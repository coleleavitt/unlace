__int64 __fastcall sub_FBBA40(__int64 *a1)
{
  __int64 v1; // rbx
  __m128i si128; // xmm0

  v1 = operator new(0x70u);
  memset((void *)v1, 0, 0x70u);
  sub_21FF1D0(v1, 6);
  *a1 = v1;
  *(_OWORD *)(v1 + 16) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  *(_QWORD *)(v1 + 32) = v1 + 48;
  *(_QWORD *)(v1 + 40) = 0x400000000LL;
  *(_QWORD *)(v1 + 80) = v1 + 96;
  *(_QWORD *)(v1 + 88) = 0;
  *(__m128i *)(v1 + 96) = si128;
  return v1 + 96;
}

