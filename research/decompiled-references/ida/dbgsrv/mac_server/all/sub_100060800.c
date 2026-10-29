/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060800
// Address: 0x0000000100060800

//----- (0000000100060800) ----------------------------------------------------
void __fastcall sub_100060800(__int64 a1)
{
  _BYTE *v1; // rax
  int v2; // eax
  _BOOL8 v3; // rcx

  *(_QWORD *)a1 = off_1000A9A60;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 176) = -1;
  *(_BYTE *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 188) = 0;
  *(_OWORD *)(a1 + 204) = 0;
  *(_OWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_QWORD *)(a1 + 240) = 0x800000028LL;
  *(_OWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = -1;
  *(_OWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 304) = a1 + 312;
  *(_OWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 400) = 0;
  *(_OWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 432) = a1 + 440;
  *(_OWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_DWORD *)(a1 + 528) = -1;
  *(_OWORD *)(a1 + 616) = 0;
  *(_OWORD *)(a1 + 600) = 0;
  *(_OWORD *)(a1 + 584) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  *(_OWORD *)(a1 + 552) = 0;
  *(_OWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 640) = 1;
  *(_OWORD *)(a1 + 648) = xmmword_1000908F0;
  *(_BYTE *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 688) = 0;
  *(_OWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_DWORD *)(a1 + 728) = -1;
  *(_WORD *)(a1 + 732) = 0;
  v1 = qvector_reserve(a1 + 248, nullptr, 0xAu, 1u);
  *(_QWORD *)(a1 + 248) = v1;
  *(_QWORD *)(a1 + 256) = 10;
  *(_QWORD *)v1 = 0x454E494645444E55LL;
  v1[8] = 68;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 9LL) = 0;
  v2 = sub_100064A90();
  if ( *(_BYTE *)(a1 + 36) == 1 )
  {
    v3 = v2 == 8;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8 * v3 + 8);
    *(_DWORD *)(a1 + 32) = 4 * v3 + 4;
  }
  *(_DWORD *)(a1 + 244) = v2;
  sub_100001260((char **)(a1 + 280));
}
// 1000908F0: using guessed type __int128 xmmword_1000908F0;
// 1000A9A60: using guessed type __int64 (__fastcall *off_1000A9A60[4])();
