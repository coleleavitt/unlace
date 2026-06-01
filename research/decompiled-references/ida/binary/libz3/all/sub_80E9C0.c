__int64 __fastcall sub_80E9C0(__int64 a1, _QWORD *a2, int a3)
{
  __m128i si128; // xmm0
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int64 result; // rax
  __m128i v12[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13[8]; // [rsp+28h] [rbp-40h] BYREF

  v12[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_1C6E570, (__m128i)(unsigned __int64)off_1C6E5C0);
  sub_180C5A0(v13, "bv");
  sub_7E4DF0(a1, a2, v13, a3);
  si128 = _mm_load_si128(v12);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &off_1C6E2F8;
  v6 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 48) = off_1C6E5E8;
  *(_QWORD *)(a1 + 120) = 0;
  *(__m128i *)(a1 + 32) = si128;
  sub_16744A0(a1 + 128, v6);
  sub_16669D0(a1 + 152, *(_QWORD *)(a1 + 72));
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  sub_878A00(a1 + 200, a1);
  v7 = sub_7E4EB0(a1);
  sub_FD7470(a1 + 272, *(_QWORD *)(a1 + 72), v7 + 38);
  v8 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 544) = a1;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 552) = v8 + 2128;
  *(_QWORD *)(a1 + 584) = off_1C54E20;
  *(_QWORD *)(a1 + 592) = a1 + 544;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_OWORD *)(a1 + 560) = 0;
  v9 = sub_186B270(0x1C0u);
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 80) = 0;
  *(_OWORD *)(v9 + 136) = 0;
  *(_OWORD *)(v9 + 192) = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 120) = 0;
  *(_OWORD *)(v9 + 176) = 0;
  *(_OWORD *)(v9 + 232) = 0;
  *(_OWORD *)(v9 + 248) = 0;
  *(_BYTE *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 24) = 1;
  *(_BYTE *)(v9 + 28) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  *(_BYTE *)(v9 + 68) = 0;
  *(_DWORD *)(v9 + 80) = 1;
  *(_BYTE *)(v9 + 84) = 0;
  *(_DWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_BYTE *)(v9 + 124) = 0;
  *(_DWORD *)(v9 + 136) = 1;
  *(_BYTE *)(v9 + 140) = 0;
  *(_DWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 168) = 0;
  *(_BYTE *)(v9 + 180) = 0;
  *(_DWORD *)(v9 + 192) = 1;
  *(_BYTE *)(v9 + 196) = 0;
  *(_DWORD *)(v9 + 208) = 0;
  *(_QWORD *)(v9 + 224) = 0;
  *(_BYTE *)(v9 + 236) = 0;
  *(_DWORD *)(v9 + 248) = 1;
  *(_OWORD *)(v9 + 304) = 0;
  *(_OWORD *)(v9 + 360) = 0;
  *(_OWORD *)(v9 + 416) = 0;
  *(_OWORD *)(v9 + 288) = 0;
  *(_OWORD *)(v9 + 344) = 0;
  *(_OWORD *)(v9 + 400) = 0;
  *(_BYTE *)(v9 + 252) = 0;
  *(_DWORD *)(v9 + 264) = 0;
  *(_QWORD *)(v9 + 280) = 0;
  *(_BYTE *)(v9 + 292) = 0;
  *(_DWORD *)(v9 + 304) = 1;
  *(_BYTE *)(v9 + 308) = 0;
  *(_DWORD *)(v9 + 320) = 0;
  *(_QWORD *)(v9 + 336) = 0;
  *(_BYTE *)(v9 + 348) = 0;
  *(_DWORD *)(v9 + 360) = 1;
  *(_BYTE *)(v9 + 364) = 0;
  *(_DWORD *)(v9 + 376) = 0;
  *(_QWORD *)(v9 + 392) = 0;
  *(_BYTE *)(v9 + 404) = 0;
  *(_DWORD *)(v9 + 416) = 1;
  *(_BYTE *)(v9 + 420) = 0;
  *(_DWORD *)(v9 + 432) = 0;
  *(_QWORD *)(a1 + 640) = v9;
  *(_QWORD *)(a1 + 648) = 8;
  *(_DWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 696) = 0xFFFFFFFE00000000LL;
  *(_QWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 680) = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 712) = v10;
  *(_QWORD *)(a1 + 720) = 8;
  *(_DWORD *)(a1 + 728) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  result = sub_186B270(0x80u);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_QWORD *)(a1 + 736) = result;
  *(_QWORD *)(a1 + 744) = 8;
  *(_DWORD *)(a1 + 752) = 0;
  *(_BYTE *)(a1 + 760) = 1;
  *(_BYTE *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  return result;
}

