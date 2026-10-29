/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ECD4
// Address: 0x000000000004ECD4

//----- (000000000004ECD4) ----------------------------------------------------
__int64 __fastcall sub_4ECD4(__int64 a1, __int64 a2, __int64 a3, int8x16x2_t a4)
{
  __int64 result; // x0

  a4.val[0] = 0u;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_WORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_WORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_WORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_OWORD *)a1 = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_QWORD *)(a1 + 56) = -1;
  *(_QWORD *)(a1 + 64) = a1;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 120) = 0u;
  *(_OWORD *)(a1 + 256) = 0u;
  *(_OWORD *)(a1 + 216) = 0u;
  *(_OWORD *)(a1 + 200) = 0u;
  *(_OWORD *)(a1 + 184) = 0u;
  *(_OWORD *)(a1 + 168) = 0u;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 304) = 0u;
  *(_OWORD *)(a1 + 320) = 0u;
  *(_OWORD *)(a1 + 288) = 0u;
  *(_QWORD *)(a1 + 370) = 0;
  *(_QWORD *)(a1 + 364) = 0;
  *(_OWORD *)(a1 + 348) = 0u;
  *(_QWORD *)(a1 + 448) = -1;
  *(_QWORD *)(a1 + 456) = -1;
  *(_QWORD *)(a1 + 440) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 464) = 8;
  *(_BYTE *)(a1 + 468) = 1;
  *(_QWORD *)(a1 + 472) = a2;
  *(_QWORD *)(a1 + 480) = a3;
  *(_BYTE *)(a1 + 618) = 0;
  *(_WORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_OWORD *)(a1 + 576) = 0u;
  *(_OWORD *)(a1 + 592) = 0u;
  *(_QWORD *)(a1 + 496) = sub_4EE64;
  result = qlsize(a2, a2, a4);
  *(_QWORD *)(a1 + 488) = result;
  return result;
}
