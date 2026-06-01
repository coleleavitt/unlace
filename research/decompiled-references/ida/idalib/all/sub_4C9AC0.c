__int64 __fastcall sub_4C9AC0(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x210u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 32) = result + 16;
  *(_QWORD *)(result + 40) = result + 16;
  *(_OWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 56) = 0xFFFFFFFB00000009LL;
  *(_QWORD *)(result + 120) = result + 104;
  *(_QWORD *)(result + 128) = result + 104;
  *(_QWORD *)(result + 168) = result + 152;
  *(_QWORD *)(result + 176) = result + 152;
  *(_OWORD *)(result + 240) = 0;
  *(_OWORD *)(result + 256) = 0;
  *(_OWORD *)(result + 272) = 0;
  *(_OWORD *)(result + 288) = 0;
  *(_OWORD *)(result + 304) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 184) = 0;
  *(_QWORD *)(result + 192) = result + 240;
  *(_QWORD *)(result + 200) = 1;
  *(_QWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 216) = 0;
  *(_DWORD *)(result + 224) = 1065353216;
  *(_QWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 320) = 0;
  *(_OWORD *)(result + 328) = 0;
  si128 = _mm_load_si128((const __m128i *)off_2B2D1C0);
  *(_DWORD *)(result + 520) = -1;
  *(__m128i *)(result + 344) = si128;
  *(__m128i *)(result + 360) = _mm_load_si128((const __m128i *)off_2B2D1D0);
  *(__m128i *)(result + 376) = _mm_load_si128((const __m128i *)off_2B2D1E0);
  *(__m128i *)(result + 392) = _mm_load_si128((const __m128i *)&off_2B2D1F0);
  *(__m128i *)(result + 408) = _mm_load_si128((const __m128i *)&off_2B2D200);
  *(__m128i *)(result + 424) = _mm_load_si128((const __m128i *)&unk_2B2D210);
  *(__m128i *)(result + 440) = _mm_load_si128((const __m128i *)off_2B2D220);
  *(__m128i *)(result + 456) = _mm_load_si128((const __m128i *)off_2B2D230);
  *(__m128i *)(result + 472) = _mm_load_si128((const __m128i *)&off_2B2D240);
  *(__m128i *)(result + 488) = _mm_load_si128((const __m128i *)off_2B2D250);
  *(__m128i *)(result + 504) = _mm_load_si128((const __m128i *)&off_2B2D260);
  return result;
}
