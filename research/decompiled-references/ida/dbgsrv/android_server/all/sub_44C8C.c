/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C8C
// Address: 0x0000000000044C8C

//----- (0000000000044C8C) ----------------------------------------------------
size_t __fastcall sub_44C8C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_156580;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_WORD *)(a1 + 896) = 0;
  *(_DWORD *)(a1 + 72) = 1065353216;
  memset((void *)(a1 + 88), 0, 0x110u);
  memset((void *)(a1 + 368), 0, 0x210u);
  return sub_44D60(*(_QWORD *)(a1 + 8), &off_164B38, 1);
}
// 156580: using guessed type __int64 (__fastcall *off_156580[5])();
// 164B38: using guessed type _UNKNOWN *off_164B38;
