/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CB18
// Address: 0x000000000008CB18

//----- (000000000008CB18) ----------------------------------------------------
__int64 __fastcall sub_8CB18(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0

  sub_A3184(a1, a2, 0);
  sub_9E878(a1 + 192, 0, 1000);
  *(_QWORD *)a1 = &off_15DE38;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 296) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 368) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 192) = off_15DE90;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a3;
  sub_A32C0(a1);
  v5 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 232) = sub_8CC60;
  return sub_A4994(v5);
}
// 15DE38: using guessed type _UNKNOWN *off_15DE38;
// 15DE90: using guessed type __int64 (__fastcall *off_15DE90[9])();
