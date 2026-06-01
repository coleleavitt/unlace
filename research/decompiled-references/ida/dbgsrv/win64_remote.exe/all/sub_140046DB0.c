/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046DB0
// Address: 0x0000000140046DB0

//----- (0000000140046DB0) ----------------------------------------------------
__int64 __fastcall sub_140046DB0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_1400547C0(a1, a2, 0);
  sub_140051A30(a1 + 192, 0, 1000);
  *(_QWORD *)a1 = &off_140097230;
  *(_QWORD *)(a1 + 192) = off_140097250;
  *(_DWORD *)(a1 + 296) = -1;
  *(_DWORD *)(a1 + 300) = 0;
  *(_QWORD *)(a1 + 304) = -1;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 368) = -1;
  *(_DWORD *)(a1 + 372) = 0;
  *(_QWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a3;
  sub_140054980(a1);
  *(_QWORD *)(a1 + 232) = sub_140049730;
  sub_1400545B0(*(_QWORD *)(a1 + 136));
  return a1;
}
// 140097230: using guessed type __int64 (__fastcall *off_140097230)(void *Block);
// 140097250: using guessed type __int64 (__fastcall *off_140097250[3])();
