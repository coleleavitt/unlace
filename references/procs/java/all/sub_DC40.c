__int64 __fastcall sub_DC40(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 eah; // rax
  __m128i si128; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm2

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(66248);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  eah = get_eah();
  si128 = _mm_load_si128((const __m128i *)&xmmword_24E00);
  *(_QWORD *)(v3 + 32) = eah;
  v6 = _mm_load_si128((const __m128i *)&xmmword_24DF0);
  *(__m128i *)(v3 + 32964) = si128;
  v7 = _mm_load_si128((const __m128i *)&xmmword_24E10);
  *(_QWORD *)v3 = off_2C2C0;
  *(__m128i *)(v3 + 32980) = v7;
  v8 = _mm_load_si128((const __m128i *)&xmmword_24E20);
  *(_QWORD *)(v3 + 120) = off_2C298;
  *(_QWORD *)(v3 + 144) = 0x4000001900000000LL;
  *(__m128i *)(v3 + 104) = v6;
  *(__m128i *)(v3 + 32995) = v8;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 176) = 0;
  *(_OWORD *)(v3 + 33320) = -1;
  *(_WORD *)(v3 + 152) = 0;
  *(_WORD *)(v3 + 168) = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 136) = v3;
  *(_BYTE *)(v3 + 154) = 0;
  *(_QWORD *)(v3 + 156) = 0;
  *(_DWORD *)(v3 + 164) = 0;
  *(_DWORD *)(v3 + 192) = 0;
  *(_DWORD *)(v3 + 33012) = -1;
  *(_BYTE *)(v3 + 33016) = 0;
  *(_QWORD *)(v3 + 33312) = 0;
  *(_QWORD *)(v3 + 33336) = -1;
  *(_BYTE *)(v3 + 33344) = 0;
  *(_WORD *)(v3 + 33345) = 0;
  *(_WORD *)((char *)sub_10290 + v3) = 1;
  *(_QWORD *)(v3 + 33376) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 66224) = (char *)&loc_102A0 + v3;
  *(_QWORD *)(v3 + 66232) = (char *)&loc_102A0 + v3;
  *(_WORD *)(v3 + 33384) = 255;
  *(_OWORD *)(v3 + 33352) = 0;
  *(_DWORD *)(v3 + 33348) = 0;
  *(_QWORD *)(v3 + 33368) = 0;
  *(_QWORD *)(v3 + 66160) = -1;
  *(_QWORD *)(v3 + 66168) = 0;
  *(_BYTE *)(v3 + 66176) = 0;
  *(__int64 *)((char *)&qword_10288 + v3) = 0;
  *(_DWORD *)((char *)&loc_102A0 + v3) = 0;
  *(_QWORD *)(v3 + 66216) = 0;
  *(_QWORD *)(v3 + 66240) = 0;
  *(_QWORD *)(v3 + 33017) = 0;
  *(_QWORD *)(v3 + 33133) = 0;
  memset(
    (void *)((v3 + 33025) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v3 - (((_DWORD)v3 + 33025) & 0xFFFFFFF8) + 33141) >> 3));
  *(_QWORD *)(v3 + 33141) = 0;
  *(_QWORD *)(v3 + 33257) = 0;
  memset(
    (void *)((v3 + 33149) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v3 - (((_DWORD)v3 + 33149) & 0xFFFFFFF8) + 33265) >> 3));
  *(_OWORD *)(v3 + 33281) = 0;
  *(_OWORD *)(v3 + 33265) = 0;
  *(_OWORD *)(v3 + 33293) = 0;
  memset((void *)(v3 + 196), 0, 0x8000u);
  memset((void *)(v3 + 33386), 0, 0x8000u);
  return set_module_data(&dword_2D4F4, v3);
}
