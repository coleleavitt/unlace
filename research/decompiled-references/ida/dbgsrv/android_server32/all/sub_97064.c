/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97064
// Address: 0x00097064

//----- (00097064) --------------------------------------------------------
_DWORD *__fastcall sub_97064(int a1, int *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  result = sub_93AC6(a1 + 368, 12);
  v4 = *a2;
  *result = &off_DC0DC;
  result[1] = 16843041;
  result[2] = v4;
  return result;
}
// DC0DC: using guessed type _UNKNOWN *off_DC0DC;
