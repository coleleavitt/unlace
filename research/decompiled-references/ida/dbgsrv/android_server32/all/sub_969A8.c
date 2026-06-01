/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_969A8
// Address: 0x000969A8

//----- (000969A8) --------------------------------------------------------
int __fastcall sub_969A8(int *a1)
{
  __int64 v2; // kr00_8
  int v3; // r2
  _DWORD v5[4]; // [sp+0h] [bp-20h] BYREF

  v2 = *(_QWORD *)a1;
  sub_9241E(*a1, 40);
  v3 = *(_DWORD *)(HIDWORD(v2) + 8);
  v5[0] = &off_DBEA0;
  v5[1] = 16843037;
  v5[2] = v3;
  sub_923F8((unsigned __int8 *)v5, *a1);
  sub_9241E(*a1, 41);
  return _stack_chk_guard - v5[3];
}
// DBEA0: using guessed type _UNKNOWN *off_DBEA0;
