/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97CB8
// Address: 0x00097CB8

//----- (00097CB8) --------------------------------------------------------
_DWORD *__fastcall sub_97CB8(int a1, int *a2, char *a3)
{
  _DWORD *result; // r0
  int v6; // r5
  char v7; // r3

  result = sub_93AC6(a1 + 368, 16);
  v6 = *a2;
  v7 = *a3;
  *result = &off_DC3B4;
  result[1] = 16843045;
  result[2] = v6;
  *((_BYTE *)result + 12) = v7;
  return result;
}
// DC3B4: using guessed type _UNKNOWN *off_DC3B4;
