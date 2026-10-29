/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_963B4
// Address: 0x000963B4

//----- (000963B4) --------------------------------------------------------
_DWORD *__fastcall sub_963B4(int a1, int *a2, int a3)
{
  _DWORD *result; // r0
  int v6; // r3

  result = sub_93AC6(a1 + 368, 20);
  v6 = *a2;
  *result = &off_DC214;
  result[1] = 16843050;
  result[2] = v6;
  result[3] = a3;
  result[4] = a3 + 2;
  return result;
}
// DC214: using guessed type _UNKNOWN *off_DC214;
