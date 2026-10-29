__int64 sub_D6540()
{
  __int64 v0; // rbx
  __m128i v1; // xmm0

  v0 = operator new(0xD0u);
  *(_QWORD *)v0 = get_eah();
  *(_QWORD *)(v0 + 112) = off_22EC50;
  *(_OWORD *)(v0 + 16) = 0;
  *(_QWORD *)(v0 + 160) = v0 + 112;
  *(_OWORD *)(v0 + 40) = 0;
  *(_OWORD *)(v0 + 72) = 0;
  *(_OWORD *)(v0 + 96) = 0;
  v1 = _mm_loadl_epi64((const __m128i *)&off_22FC68);
  *(_WORD *)(v0 + 200) = 0;
  *(_QWORD *)(v0 + 8) = 0;
  *(_QWORD *)(v0 + 32) = 0;
  *(_BYTE *)(v0 + 56) = 1;
  *(_QWORD *)(v0 + 64) = 0;
  *(_QWORD *)(v0 + 88) = 0;
  *(_DWORD *)(v0 + 120) = 1;
  *(_QWORD *)(v0 + 128) = v0;
  *(_DWORD *)(v0 + 136) = 64;
  *(_QWORD *)(v0 + 168) = 2;
  *(_QWORD *)(v0 + 176) = 0;
  *(_QWORD *)(v0 + 184) = 0;
  *(_QWORD *)(v0 + 192) = 0xFFFFFFFFLL;
  *(__m128i *)(v0 + 144) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)"Manual memory regions");
  sub_BD8E0((__int64 *)(v0 + 8), &qword_2515F0);
  return v0;
}

