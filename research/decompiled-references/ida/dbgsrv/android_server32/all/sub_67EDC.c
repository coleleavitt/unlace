/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67EDC
// Address: 0x00067EDC

//----- (00067EDC) --------------------------------------------------------
int __fastcall sub_67EDC(int a1, char a2, int a3)
{
  int result; // r0

  result = sub_6D054(a1, a2, a3, 0, 0);
  *(_DWORD *)result = &off_DA37C;
  *(_WORD *)(result + 52) = 0;
  return result;
}
// DA37C: using guessed type _UNKNOWN *off_DA37C;
