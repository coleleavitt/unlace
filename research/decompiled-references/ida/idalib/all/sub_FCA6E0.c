__int64 __fastcall sub_FCA6E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v17[2]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)a1 = 0x100000000000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9220);
  *(_WORD *)(a1 + 8) = 0;
  v8 = *a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = v8;
  *a2 = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(__m128i *)(a1 + 12) = si128;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 80) = a1 + 72;
  *(_QWORD *)(a1 + 72) = a1 + 72;
  *(_QWORD *)(a1 + 120) = a1 + 104;
  *(_QWORD *)(a1 + 128) = a1 + 104;
  v9 = a1 + 264;
  *(_OWORD *)(a1 + 168) = 0;
  do
  {
    *(_BYTE *)v9 = 0;
    *(_QWORD *)(v9 + 96) = v9 + 112;
    *(_QWORD *)(v9 + 128) = v9 + 144;
    *(_QWORD *)(v9 + 160) = v9 + 176;
    *(_QWORD *)(v9 + 192) = v9 + 208;
    *(_QWORD *)(v9 + 224) = v9 + 240;
    *(_QWORD *)(v9 + 256) = v9 + 272;
    *(_QWORD *)(v9 + 288) = v9 + 304;
    *(_QWORD *)(v9 + 320) = v9 + 336;
    *(_QWORD *)(v9 + 352) = v9 + 368;
    *(_QWORD *)(v9 + 384) = v9 + 400;
    *(_QWORD *)(v9 + 416) = v9 + 432;
    v10 = v9 + 544;
    v9 += 928;
    *(_QWORD *)(v9 - 824) = 0;
    *(_BYTE *)(v9 - 816) = 0;
    *(_QWORD *)(v9 - 792) = 0;
    *(_BYTE *)(v9 - 784) = 0;
    *(_QWORD *)(v9 - 760) = 0;
    *(_BYTE *)(v9 - 752) = 0;
    *(_QWORD *)(v9 - 728) = 0;
    *(_BYTE *)(v9 - 720) = 0;
    *(_QWORD *)(v9 - 696) = 0;
    *(_BYTE *)(v9 - 688) = 0;
    *(_QWORD *)(v9 - 664) = 0;
    *(_BYTE *)(v9 - 656) = 0;
    *(_QWORD *)(v9 - 632) = 0;
    *(_BYTE *)(v9 - 624) = 0;
    *(_QWORD *)(v9 - 600) = 0;
    *(_BYTE *)(v9 - 592) = 0;
    *(_QWORD *)(v9 - 568) = 0;
    *(_BYTE *)(v9 - 560) = 0;
    *(_QWORD *)(v9 - 536) = 0;
    *(_BYTE *)(v9 - 528) = 0;
    *(_DWORD *)(v9 - 504) = 0;
    *(_DWORD *)(v9 - 500) = 8;
    *(_QWORD *)(v9 - 400) = v10;
    *(_DWORD *)(v9 - 392) = 0;
    *(_DWORD *)(v9 - 388) = 6;
  }
  while ( v9 != a1 + 15112 );
  v17[0].m128i_i64[0] = a1 + 264;
  v11 = _mm_loadl_epi64(v17);
  v12 = 0;
  v13 = _mm_load_si128((const __m128i *)&xmmword_23A91A0);
  if ( a5 )
    v12 = a4;
  v14 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 15240) = 16;
  v15 = _mm_unpacklo_epi64(v11, v11);
  *(_QWORD *)(a1 + 56) = v12;
  *(__m128i *)(a1 + 15112) = _mm_add_epi64(v13, v15);
  *(__m128i *)(a1 + 15128) = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23A91B0), v15);
  *(__m128i *)(a1 + 15144) = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23A91C0), v15);
  *(__m128i *)(a1 + 15160) = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23A91D0), v15);
  *(__m128i *)(a1 + 15176) = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23A91E0), v15);
  *(__m128i *)(a1 + 15192) = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23A91F0), v15);
  *(__m128i *)(a1 + 15208) = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23A9200), v15);
  *(__m128i *)(a1 + 15224) = _mm_add_epi64(v15, (__m128i)xmmword_23A9210);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 224) = sub_FC6250;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  return sub_FCA550(a1);
}
