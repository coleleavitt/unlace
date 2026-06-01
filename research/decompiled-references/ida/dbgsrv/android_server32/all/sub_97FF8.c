/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97FF8
// Address: 0x00097FF8

//----- (00097FF8) --------------------------------------------------------
_DWORD *__fastcall sub_97FF8(int a1, int *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  result = sub_93AC6(a1 + 368, 12);
  v4 = *a2;
  *result = &off_DC4EC;
  result[1] = 16843044;
  result[2] = v4;
  return result;
}
// DC4EC: using guessed type _UNKNOWN *off_DC4EC;
