__int64 __fastcall sub_407D80(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm1
  __m128i v3; // xmm0

  result = operator new(0xF0u);
  v2 = _mm_loadl_epi64((const __m128i *)off_2AFE178);
  *(_OWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 64) = result + 48;
  *(_QWORD *)(result + 72) = result + 48;
  *(_OWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 176) = result + 160;
  *(_QWORD *)(result + 184) = result + 160;
  *(_OWORD *)(result + 136) = 0;
  v3 = _mm_loadl_epi64((const __m128i *)&off_2AFE180);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_BYTE *)(result + 96) = 0;
  *(_DWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_BYTE *)(result + 208) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(__m128i *)(result + 104) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)"custom fixup handlers");
  *(__m128i *)(result + 216) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)"custom refinfo handlers");
  return result;
}

