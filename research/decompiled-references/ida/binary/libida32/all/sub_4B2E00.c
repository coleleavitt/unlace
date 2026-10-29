__int64 __fastcall sub_4B2E00(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x208u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 32) = result + 16;
  *(_QWORD *)(result + 40) = result + 16;
  *(_OWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 56) = 0xFFFFFFFB00000009LL;
  *(_QWORD *)(result + 112) = result + 96;
  *(_QWORD *)(result + 120) = result + 96;
  *(_QWORD *)(result + 160) = result + 144;
  *(_QWORD *)(result + 168) = result + 144;
  *(_OWORD *)(result + 248) = 0;
  *(_OWORD *)(result + 264) = 0;
  *(_OWORD *)(result + 280) = 0;
  *(_OWORD *)(result + 296) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 128) = 0;
  *(_DWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 176) = 0;
  *(_QWORD *)(result + 184) = result + 232;
  *(_QWORD *)(result + 192) = 1;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 208) = 0;
  *(_DWORD *)(result + 216) = 1065353216;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 312) = 0;
  *(_OWORD *)(result + 320) = 0;
  si128 = _mm_load_si128((const __m128i *)off_2B03200);
  *(_DWORD *)(result + 512) = -1;
  *(__m128i *)(result + 336) = si128;
  *(__m128i *)(result + 352) = _mm_load_si128((const __m128i *)off_2B03210);
  *(__m128i *)(result + 368) = _mm_load_si128((const __m128i *)off_2B03220);
  *(__m128i *)(result + 384) = _mm_load_si128((const __m128i *)&off_2B03230);
  *(__m128i *)(result + 400) = _mm_load_si128((const __m128i *)&off_2B03240);
  *(__m128i *)(result + 416) = _mm_load_si128((const __m128i *)&unk_2B03250);
  *(__m128i *)(result + 432) = _mm_load_si128((const __m128i *)off_2B03260);
  *(__m128i *)(result + 448) = _mm_load_si128((const __m128i *)off_2B03270);
  *(__m128i *)(result + 464) = _mm_load_si128((const __m128i *)&off_2B03280);
  *(__m128i *)(result + 480) = _mm_load_si128((const __m128i *)off_2B03290);
  *(__m128i *)(result + 496) = _mm_load_si128((const __m128i *)&off_2B032A0);
  return result;
}

