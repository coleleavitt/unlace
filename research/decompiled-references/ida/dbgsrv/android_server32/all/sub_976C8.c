/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_976C8
// Address: 0x000976C8

//----- (000976C8) --------------------------------------------------------
_DWORD *__fastcall sub_976C8(int a1, int *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  result = sub_93AC6(a1 + 368, 12);
  v4 = *a2;
  *result = &off_DC074;
  result[1] = 16843012;
  result[2] = v4;
  return result;
}
// DC074: using guessed type _UNKNOWN *off_DC074;
