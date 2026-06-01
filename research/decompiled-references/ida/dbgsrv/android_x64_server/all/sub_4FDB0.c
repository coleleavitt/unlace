/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FDB0
// Address: 0x000000000004FDB0

//----- (000000000004FDB0) ----------------------------------------------------
__int64 __fastcall sub_4FDB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 12) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = -1;
  *(_QWORD *)(a1 + 64) = a1;
  *(_BYTE *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 92) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_WORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_OWORD *)(a1 + 266) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_OWORD *)(a1 + 330) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 362) = 0;
  *(_OWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 440) = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 448) = -1;
  *(_DWORD *)(a1 + 464) = 8;
  *(_BYTE *)(a1 + 468) = 1;
  *(_QWORD *)(a1 + 472) = a2;
  *(_QWORD *)(a1 + 480) = a3;
  *(_OWORD *)(a1 + 603) = 0;
  *(_OWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 496) = sub_4FFF0;
  result = qlsize(a2);
  *(_QWORD *)(a1 + 488) = result;
  return result;
}
