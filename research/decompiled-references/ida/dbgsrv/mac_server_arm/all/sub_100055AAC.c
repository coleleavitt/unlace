/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055AAC
// Address: 0x0000000100055AAC

//----- (0000000100055AAC) ----------------------------------------------------
__int64 __fastcall sub_100055AAC(__int64 a1)
{
  __int64 v2; // x22
  char **v3; // x23
  _BYTE *v4; // x0
  int v5; // w0
  int v6; // w8

  *(_QWORD *)a1 = off_10009B138;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
  v2 = a1 + 8;
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_QWORD *)(a1 + 168) = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_OWORD *)(a1 + 96) = 0u;
  *(_OWORD *)(a1 + 112) = 0u;
  *(_OWORD *)(a1 + 128) = 0u;
  *(_OWORD *)(a1 + 144) = 0u;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 176) = -1;
  *(_BYTE *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 248) = 0u;
  *(_DWORD *)(a1 + 236) = 0;
  *(_OWORD *)(a1 + 220) = 0u;
  *(_OWORD *)(a1 + 204) = 0u;
  *(_OWORD *)(a1 + 188) = 0u;
  *(_QWORD *)(a1 + 240) = 0x800000028LL;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = -1;
  *(_OWORD *)(a1 + 280) = 0u;
  v3 = (char **)(a1 + 280);
  *(_QWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 312) = 0u;
  *(_QWORD *)(a1 + 304) = a1 + 312;
  *(_OWORD *)(a1 + 336) = 0u;
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 352) = 0u;
  *(_OWORD *)(a1 + 440) = 0u;
  *(_OWORD *)(a1 + 368) = 0u;
  *(_OWORD *)(a1 + 384) = 0u;
  *(_OWORD *)(a1 + 400) = 0u;
  *(_OWORD *)(a1 + 416) = 0u;
  *(_QWORD *)(a1 + 432) = a1 + 440;
  *(_OWORD *)(a1 + 512) = 0u;
  *(_OWORD *)(a1 + 456) = 0u;
  *(_OWORD *)(a1 + 472) = 0u;
  *(_OWORD *)(a1 + 488) = 0u;
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_DWORD *)(a1 + 528) = -1;
  *(_OWORD *)(a1 + 536) = 0u;
  *(_OWORD *)(a1 + 552) = 0u;
  *(_OWORD *)(a1 + 568) = 0u;
  *(_OWORD *)(a1 + 584) = 0u;
  *(_OWORD *)(a1 + 600) = 0u;
  *(_OWORD *)(a1 + 616) = 0u;
  *(_QWORD *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 640) = 1;
  *(_OWORD *)(a1 + 648) = xmmword_1000767B0;
  *(_BYTE *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 672) = 0u;
  *(_OWORD *)(a1 + 688) = 0u;
  *(_OWORD *)(a1 + 704) = 0u;
  *(_QWORD *)(a1 + 720) = 0;
  *(_DWORD *)(a1 + 728) = -1;
  *(_WORD *)(a1 + 732) = 0;
  v4 = qvector_reserve((_QWORD *)(a1 + 248), nullptr, 0xAu, 1u);
  *(_QWORD *)(a1 + 248) = v4;
  *(_QWORD *)(a1 + 256) = 10;
  *(_QWORD *)v4 = *(_QWORD *)"UNDEFINED";
  v4[8] = 68;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 9LL) = 0;
  v5 = sub_100059898();
  if ( *(_BYTE *)(a1 + 36) == 1 )
  {
    if ( v5 == 8 )
      v6 = 8;
    else
      v6 = 4;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v2 + 8LL * (v5 == 8));
    *(_DWORD *)(a1 + 32) = v6;
  }
  *(_DWORD *)(a1 + 244) = v5;
  sub_1000010D0(v3);
  return a1;
}
// 1000767B0: using guessed type __int128 xmmword_1000767B0;
// 10009B138: using guessed type __int64 (__fastcall *off_10009B138[4])();
