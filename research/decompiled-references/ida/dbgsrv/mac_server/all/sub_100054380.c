/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054380
// Address: 0x0000000100054380

//----- (0000000100054380) ----------------------------------------------------
__int64 __fastcall sub_100054380(__int64 a1, __int64 a2, __int64 a3)
{
  sub_100069250(a1, a2, 0);
  sub_1000658A0(a1 + 192, 0, 1000);
  *(_QWORD *)a1 = &off_1000A9610;
  *(_QWORD *)(a1 + 192) = off_1000A9668;
  *(_QWORD *)(a1 + 296) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 304) = -1;
  *(_BYTE *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 316) = 0;
  *(_OWORD *)(a1 + 332) = 0;
  *(_OWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_QWORD *)(a1 + 368) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 388) = 0;
  *(_OWORD *)(a1 + 404) = 0;
  *(_OWORD *)(a1 + 420) = 0;
  *(_OWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 448) = a3;
  sub_100069360(a1);
  *(_QWORD *)(a1 + 232) = sub_1000544E0;
  return sub_10006AB30(*(_QWORD *)(a1 + 136));
}
// 1000A9610: using guessed type __int64 (__fastcall *off_1000A9610)();
// 1000A9668: using guessed type __int64 (__fastcall *off_1000A9668[9])();
