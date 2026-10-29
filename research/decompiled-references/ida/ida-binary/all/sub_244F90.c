__int64 __fastcall sub_244F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __m128i v4; // xmm0

  v2 = operator new(0xD0u);
  *(_QWORD *)v2 = get_eah(208, a2, v3);
  *(_QWORD *)(v2 + 112) = omr_ah_t___vtable;
  *(_OWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 160) = v2 + 112;
  *(_OWORD *)(v2 + 40) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 96) = 0;
  v4 = _mm_loadl_epi64((const __m128i *)off_8602C8);
  *(_WORD *)(v2 + 200) = 0;
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 56) = 1;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 120) = 1;
  *(_QWORD *)(v2 + 128) = v2;
  *(_DWORD *)(v2 + 136) = 64;
  *(_QWORD *)(v2 + 168) = 2;
  *(_QWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 184) = 0;
  *(_QWORD *)(v2 + 192) = 0xFFFFFFFFLL;
  *(__m128i *)(v2 + 144) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)"Manual memory regions");
  sub_22BB70((__int64 *)(v2 + 8), &qword_8CC640);
  return v2;
}
