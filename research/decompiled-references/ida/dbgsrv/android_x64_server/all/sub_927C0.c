/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_927C0
// Address: 0x00000000000927C0

//----- (00000000000927C0) ----------------------------------------------------
__int64 __fastcall sub_927C0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_A7B50(a1, a2, 0);
  sub_A4E50(a1 + 192, 0, 1000);
  *(_QWORD *)a1 = &off_14E5E0;
  *(_QWORD *)(a1 + 192) = off_14E638;
  *(_QWORD *)(a1 + 296) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 304) = -1;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 368) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_OWORD *)(a1 + 424) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a3;
  sub_A7CB0(a1);
  *(_QWORD *)(a1 + 232) = sub_929A0;
  return sub_A96A0(*(_QWORD *)(a1 + 136));
}
// 14E5E0: using guessed type __int64 (__fastcall *off_14E5E0)();
// 14E638: using guessed type __int64 (__fastcall *off_14E638[9])();
