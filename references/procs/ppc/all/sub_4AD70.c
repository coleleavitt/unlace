__int64 __fastcall sub_4AD70(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm2

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(560);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = &off_92C40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_77D80);
  *(_QWORD *)(v3 + 216) = v3 + 120;
  *(_QWORD *)(v3 + 128) = &off_92B98;
  *(_QWORD *)(v3 + 232) = off_92C18;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  *(_QWORD *)(v3 + 184) = 0;
  *(_DWORD *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 224) = v3;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = v3;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)(v3 + 264) = 0;
  *(_QWORD *)(v3 + 272) = 0;
  *(_QWORD *)(v3 + 280) = 0;
  *(_DWORD *)(v3 + 288) = 0;
  *(_QWORD *)(v3 + 296) = 0;
  *(_BYTE *)(v3 + 304) = 0;
  *(_QWORD *)(v3 + 312) = 0;
  *(__m128i *)(v3 + 104) = si128;
  *(_OWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 168) = 0;
  *(_OWORD *)(v3 + 192) = 0;
  *(_OWORD *)(v3 + 320) = 0;
  *(_QWORD *)(v3 + 336) = 0;
  *(_QWORD *)(v3 + 456) = 0x800000000007LL;
  *(_QWORD *)(v3 + 376) = 0;
  *(_QWORD *)(v3 + 400) = 0;
  *(_WORD *)(v3 + 464) = -1;
  *(_DWORD *)(v3 + 468) = 0;
  *(_WORD *)(v3 + 472) = 0;
  *(_WORD *)(v3 + 536) = 0;
  *(_QWORD *)(v3 + 540) = -1;
  *(_QWORD *)(v3 + 548) = -1;
  *(_BYTE *)(v3 + 556) = 0;
  *(_OWORD *)(v3 + 344) = -1;
  *(_OWORD *)(v3 + 360) = -1;
  *(_OWORD *)(v3 + 384) = 0;
  *(_OWORD *)(v3 + 408) = 0;
  *(_OWORD *)(v3 + 424) = -1;
  *(__m128i *)(v3 + 440) = si128;
  return set_module_data(&dword_959F0, v3);
}
