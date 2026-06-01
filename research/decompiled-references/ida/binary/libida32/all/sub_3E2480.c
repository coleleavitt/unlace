__int64 sub_3E2480()
{
  __int64 result; // rax
  __m128i v1; // xmm1
  __m128i v2; // xmm0

  result = operator new(0xE8u);
  v1 = _mm_loadl_epi64((const __m128i *)off_2AFD808);
  *(_OWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 48) = result + 32;
  *(_QWORD *)(result + 56) = result + 32;
  *(_OWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 160) = result + 144;
  *(_QWORD *)(result + 168) = result + 144;
  *(_OWORD *)(result + 120) = 0;
  v2 = _mm_loadl_epi64((const __m128i *)&off_2AFD810);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_BYTE *)(result + 80) = 0;
  *(_DWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 176) = 0;
  *(_QWORD *)(result + 184) = off_2AFD780;
  *(_BYTE *)(result + 192) = 0;
  *(_QWORD *)(result + 216) = result + 224;
  *(_DWORD *)(result + 224) = 0;
  *(__m128i *)(result + 88) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)"custom data types");
  *(__m128i *)(result + 200) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)"custom data formats");
  return result;
}

