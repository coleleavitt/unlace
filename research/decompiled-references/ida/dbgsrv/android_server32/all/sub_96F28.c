/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96F28
// Address: 0x00096F28

//----- (00096F28) --------------------------------------------------------
_DWORD *__fastcall sub_96F28(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r5
  int v7; // r3

  result = sub_93AC6(a1 + 368, 16);
  v6 = *a2;
  v7 = *a3;
  *result = &off_DC00C;
  result[1] = 16843031;
  result[2] = v6;
  result[3] = v7;
  return result;
}
// DC00C: using guessed type _UNKNOWN *off_DC00C;
