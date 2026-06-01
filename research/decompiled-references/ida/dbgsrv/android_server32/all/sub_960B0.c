/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_960B0
// Address: 0x000960B0

//----- (000960B0) --------------------------------------------------------
_DWORD *__fastcall sub_960B0(int a1, int *a2, _BYTE *a3, char *a4)
{
  _DWORD *result; // r0
  int v8; // r6
  char v9; // r3

  result = sub_93AC6(a1 + 368, 16);
  v8 = *a2;
  v9 = *a4;
  LOBYTE(a3) = *a3;
  *result = &off_DBFD8;
  result[1] = 16843050;
  result[2] = v8;
  *((_BYTE *)result + 12) = (_BYTE)a3;
  *((_BYTE *)result + 13) = v9;
  return result;
}
// DBFD8: using guessed type _UNKNOWN *off_DBFD8;
