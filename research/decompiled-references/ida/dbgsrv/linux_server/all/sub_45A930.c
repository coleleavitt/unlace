/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A930
// Address: 0x000000000045A930

//----- (000000000045A930) ----------------------------------------------------
__int64 __fastcall sub_45A930(__int64 a1, char a2)
{
  sub_46E120(a1, a2);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &off_4C3338;
  *(_BYTE *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_WORD *)(a1 + 104) = 23946;
  *(_BYTE *)(a1 + 106) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  return 23946;
}
// 4C3338: using guessed type __int64 (__fastcall *off_4C3338)();
