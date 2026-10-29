/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45190
// Address: 0x0000000000045190

//----- (0000000000045190) ----------------------------------------------------
char *__fastcall sub_45190(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 1065353216;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &off_146D10;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  memset((void *)(a1 + 304), 0, 0x200u);
  memset((void *)(a1 + 816), 0, 0xA88u);
  *(_WORD *)(a1 + 3528) = 0;
  *(_BYTE *)(a1 + 3530) = 0;
  *(_QWORD *)(a1 + 3512) = a1 + 816;
  *(_QWORD *)(a1 + 3520) = 2696;
  return sub_45310(*(_QWORD *)(a1 + 8), off_154B30, 1);
}
// 146D10: using guessed type __int64 (__fastcall *off_146D10)();
// 154B30: using guessed type char *off_154B30[6];
