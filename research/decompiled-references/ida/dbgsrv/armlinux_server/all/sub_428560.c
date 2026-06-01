/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428560
// Address: 0x0000000000428560

//----- (0000000000428560) ----------------------------------------------------
__int64 __fastcall sub_428560(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // x0
  __int64 result; // x0

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = -1;
  *(_QWORD *)(a1 + 64) = a1;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_BYTE *)(a1 + 248) = 0;
  *(_BYTE *)(a1 + 249) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_WORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 440) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 448) = -1;
  v4 = (_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_WORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_WORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_QWORD *)(a1 + 456) = -1;
  *(_DWORD *)(a1 + 464) = 8;
  *(_QWORD *)(a1 + 480) = a3;
  *(_BYTE *)(a1 + 616) = 0;
  *(_BYTE *)(a1 + 617) = 0;
  *(_BYTE *)(a1 + 618) = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  *(_BYTE *)(a1 + 468) = 1;
  *(_QWORD *)(a1 + 472) = a2;
  *(_QWORD *)(a1 + 496) = sub_4209B0;
  *(_QWORD *)(a1 + 608) = 0;
  result = sub_48C400(a2);
  *(_QWORD *)(a1 + 488) = result;
  return result;
}
