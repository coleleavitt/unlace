/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97F98
// Address: 0x00097F98

//----- (00097F98) --------------------------------------------------------
_DWORD *__fastcall sub_97F98(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r5
  int v7; // r3

  result = sub_93AC6(a1 + 368, 16);
  v6 = *a2;
  v7 = *a3;
  *result = &off_DC4B8;
  result[1] = 16843033;
  result[2] = v6;
  result[3] = v7;
  return result;
}
// DC4B8: using guessed type _UNKNOWN *off_DC4B8;
