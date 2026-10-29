/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D90C
// Address: 0x000000010004D90C

//----- (000000010004D90C) ----------------------------------------------------
__int64 __fastcall sub_10004D90C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0

  v5 = sub_100060A3C(a1, a2, 0);
  sub_10005E128(v5 + 192, 0, 1000);
  *(_QWORD *)a1 = off_10009ED70;
  *(_QWORD *)(a1 + 192) = off_10009EDC8;
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
  sub_100060B54(a1);
  *(_QWORD *)(a1 + 232) = sub_10004DA4C;
  sub_1000625D0(*(_QWORD *)(a1 + 136));
  return a1;
}
// 10009ED70: using guessed type __int64 (__fastcall *off_10009ED70[9])();
// 10009EDC8: using guessed type __int64 (__fastcall *off_10009EDC8[9])();
