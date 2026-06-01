/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94038
// Address: 0x00094038

//----- (00094038) --------------------------------------------------------
_DWORD *__fastcall sub_94038(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r5
  int v7; // r3

  result = sub_93AC6(a1 + 368, 16);
  v6 = *a2;
  v7 = *a3;
  *result = &off_DC588;
  result[1] = 16843040;
  result[2] = v6;
  result[3] = v7;
  return result;
}
// DC588: using guessed type _UNKNOWN *off_DC588;
