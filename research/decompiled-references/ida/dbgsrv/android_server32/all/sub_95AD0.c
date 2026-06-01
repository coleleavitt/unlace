/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95AD0
// Address: 0x00095AD0

//----- (00095AD0) --------------------------------------------------------
int __fastcall sub_95AD0(int a1, int a2, int *a3)
{
  _DWORD *v5; // r0
  __int64 v7; // [sp+0h] [bp-10h]

  v5 = sub_93AC6(a1 + 368, 28);
  LODWORD(v7) = ")";
  HIDWORD(v7) = "";
  return sub_97B38((int)v5, a2, a2 + 9, *a3, v7);
}
