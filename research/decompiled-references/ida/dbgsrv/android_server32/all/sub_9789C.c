/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9789C
// Address: 0x0009789C

//----- (0009789C) --------------------------------------------------------
_DWORD *__fastcall sub_9789C(int a1, int *a2, int *a3, char *a4)
{
  _DWORD *result; // r0
  int v8; // r6
  char v9; // r3
  int v10; // r5

  result = sub_93AC6(a1 + 368, 20);
  v8 = *a2;
  v9 = *a4;
  v10 = *a3;
  *result = &off_DC178;
  result[1] = 16843051;
  result[2] = v8;
  result[3] = v10;
  *((_BYTE *)result + 16) = v9;
  return result;
}
// DC178: using guessed type _UNKNOWN *off_DC178;
