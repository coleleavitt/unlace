/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B0B0
// Address: 0x000000010004B0B0

//----- (000000010004B0B0) ----------------------------------------------------
__int64 __fastcall sub_10004B0B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0

  v5 = sub_10005CC5C(a1, a2, 0);
  sub_10005A65C(v5 + 192, 0, 1000);
  *(_QWORD *)a1 = off_10009AD30;
  *(_QWORD *)(a1 + 192) = off_10009AD88;
  *(_QWORD *)(a1 + 296) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 304) = -1;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_OWORD *)(a1 + 316) = 0u;
  *(_OWORD *)(a1 + 332) = 0u;
  *(_OWORD *)(a1 + 348) = 0u;
  *(_QWORD *)(a1 + 368) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 432) = 0u;
  *(_OWORD *)(a1 + 388) = 0u;
  *(_OWORD *)(a1 + 404) = 0u;
  *(_OWORD *)(a1 + 420) = 0u;
  *(_QWORD *)(a1 + 448) = a3;
  sub_10005CD60(a1);
  *(_QWORD *)(a1 + 232) = sub_10004B1B0;
  sub_10005E368(*(_QWORD *)(a1 + 136));
  return a1;
}
// 10009AD30: using guessed type __int64 (__fastcall *off_10009AD30[9])();
// 10009AD88: using guessed type __int64 (__fastcall *off_10009AD88[9])();
