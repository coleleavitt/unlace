/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96408
// Address: 0x00096408

//----- (00096408) --------------------------------------------------------
int __fastcall sub_96408(int a1, int a2, int *a3)
{
  _DWORD *v5; // r0
  __int64 v7; // [sp+0h] [bp-10h]

  v5 = sub_93AC6(a1 + 368, 28);
  LODWORD(v7) = ")";
  HIDWORD(v7) = "";
  return sub_97B38((int)v5, a2, a2 + 8, *a3, v7);
}
