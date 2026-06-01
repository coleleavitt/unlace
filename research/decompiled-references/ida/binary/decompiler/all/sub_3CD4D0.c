__int64 __fastcall sub_3CD4D0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm1

  *(_QWORD *)(a1 + 8) = off_4E8530;
  *(_QWORD *)(a1 + 32) = &off_4E85A0;
  *(_QWORD *)(a1 + 56) = &off_4E8560;
  *(_QWORD *)(a1 + 80) = &off_4E85E0;
  *(_QWORD *)(a1 + 104) = &off_4E8390;
  *(_QWORD *)(a1 + 128) = &off_4E83D0;
  *(_QWORD *)(a1 + 152) = &off_4E8660;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = a1;
  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)(a1 + 48) = a1;
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = a1;
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = a1;
  *(_DWORD *)(a1 + 112) = 1;
  *(_QWORD *)(a1 + 120) = a1;
  *(_DWORD *)(a1 + 136) = 1;
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 160) = 1;
  *(_QWORD *)(a1 + 168) = a1;
  *(_DWORD *)(a1 + 184) = 1;
  v2 = _mm_loadl_epi64((const __m128i *)off_4E8790);
  *(_QWORD *)(a1 + 176) = &off_4E86A0;
  *(_QWORD *)(a1 + 200) = &off_4E8620;
  *(_QWORD *)(a1 + 312) = a1 + 32;
  *(_QWORD *)(a1 + 248) = a1 + 8;
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)"Generate microcode");
  v3 = _mm_loadl_epi64((const __m128i *)off_4E8798);
  *(_QWORD *)(a1 + 376) = a1 + 56;
  *(_QWORD *)(a1 + 256) = a2;
  *(__m128i *)(a1 + 296) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)"Raise maturity level");
  v4 = _mm_loadl_epi64((const __m128i *)off_4E87A0);
  *(_QWORD *)(a1 + 264) = "Ctrl-Shift-F8";
  *(_QWORD *)(a1 + 320) = a2;
  *(__m128i *)(a1 + 360) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)"Lower maturity level");
  v5 = _mm_loadl_epi64((const __m128i *)off_4E87A8);
  *(_QWORD *)(a1 + 328) = ">";
  *(_QWORD *)(a1 + 280) = 0x6FFFFFFFFLL;
  *(_QWORD *)(a1 + 344) = 0x6FFFFFFFFLL;
  *(_QWORD *)(a1 + 392) = "<";
  *(_QWORD *)(a1 + 408) = 0x6FFFFFFFFLL;
  *(_QWORD *)(a1 + 192) = a1;
  *(_DWORD *)(a1 + 208) = 1;
  *(_QWORD *)(a1 + 216) = a1;
  *(_DWORD *)(a1 + 224) = 64;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 288) = 64;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 352) = 64;
  *(_QWORD *)(a1 + 384) = a2;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 416) = 64;
  *(__m128i *)(a1 + 424) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)"List cross references to...");
  v6 = _mm_loadl_epi64((const __m128i *)off_4E87B0);
  v7 = _mm_loadl_epi64((const __m128i *)off_4E87C8);
  *(_QWORD *)(a1 + 440) = a1 + 80;
  *(_QWORD *)(a1 + 520) = "Ins";
  *(_QWORD *)(a1 + 504) = a1 + 104;
  *(__m128i *)(a1 + 488) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)"Edit block comment...");
  v8 = _mm_loadl_epi64((const __m128i *)off_4E87B8);
  *(_QWORD *)(a1 + 568) = a1 + 128;
  *(_QWORD *)(a1 + 456) = "X";
  *(__m128i *)(a1 + 552) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)"Edit comment...");
  v9 = _mm_loadl_epi64((const __m128i *)off_4E87C0);
  *(_QWORD *)(a1 + 632) = a1 + 152;
  *(_QWORD *)(a1 + 472) = 0x6FFFFFFFFLL;
  *(__m128i *)(a1 + 616) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)"Insert assertion...");
  *(_QWORD *)(a1 + 536) = 0x4FFFFFFFFLL;
  *(_QWORD *)(a1 + 584) = "/,Numpad/";
  *(_QWORD *)(a1 + 600) = 0x4FFFFFFFFLL;
  *(_QWORD *)(a1 + 664) = 0x4FFFFFFFFLL;
  *(__m128i *)(a1 + 680) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)"Delete instruction");
  *(_QWORD *)(a1 + 448) = a2;
  *(_QWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 480) = 64;
  *(_QWORD *)(a1 + 512) = a2;
  *(_QWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 544) = 64;
  *(_QWORD *)(a1 + 576) = a2;
  *(_QWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 608) = 64;
  *(_QWORD *)(a1 + 640) = a2;
  *(_DWORD *)(a1 + 672) = 64;
  *(_OWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 696) = a1 + 176;
  v10 = _mm_loadl_epi64((const __m128i *)&off_4E87D0);
  *(_QWORD *)(a1 + 728) = 0x4FFFFFFFFLL;
  *(_QWORD *)(a1 + 792) = 0x6FFFFFFFFLL;
  *(_QWORD *)(a1 + 824) = off_4E84E0;
  *(_QWORD *)(a1 + 760) = a1 + 200;
  *(_QWORD *)(a1 + 704) = a2;
  *(_QWORD *)(a1 + 712) = "Del";
  *(_QWORD *)(a1 + 720) = 0;
  *(_DWORD *)(a1 + 736) = 64;
  *(_QWORD *)(a1 + 768) = a2;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = a1;
  *(_QWORD *)(a1 + 856) = 0;
  *(_QWORD *)(a1 + 848) = off_4E8508;
  *(_QWORD *)(a1 + 864) = a1;
  *(_QWORD *)(a1 + 872) = 0;
  *(_BYTE *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 904) = 0;
  *(__m128i *)(a1 + 744) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)"Refresh");
  *(_OWORD *)(a1 + 776) = 0;
  *(_OWORD *)(a1 + 808) = 0;
  *(_OWORD *)(a1 + 880) = 0;
  sub_33AB30(a2, sub_3CDF80, a1);
  hook_event_listener();
  return hook_event_listener();
}
