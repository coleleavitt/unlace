/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F630
// Address: 0x000000000045F630

//----- (000000000045F630) ----------------------------------------------------
__int64 __fastcall sub_45F630(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  sub_46D680(a1, a2, 0);
  sub_46B320(a1 + 192, 0, 1000);
  *(_QWORD *)(a1 + 304) = -1;
  *(_QWORD *)a1 = &off_4C4860;
  *(_QWORD *)(a1 + 192) = off_4C48B8;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 296) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 368) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 376) = -1;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a3;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 424) = 0;
  sub_46D7F0(a1);
  v5 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 232) = sub_45B5E0;
  return sub_46F090(v5);
}
// 4C4860: using guessed type __int64 (__fastcall *off_4C4860)();
// 4C48B8: using guessed type __int64 (__fastcall *[9])();
