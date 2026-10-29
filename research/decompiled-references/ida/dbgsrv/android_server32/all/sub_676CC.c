/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_676CC
// Address: 0x000676CC

//----- (000676CC) --------------------------------------------------------
_DWORD *__fastcall sub_676CC(_DWORD *a1, int a2)
{
  _DWORD *result; // r0

  result = sub_6BAC0(a1, a2);
  *((_BYTE *)result + 72) = 0;
  *((_BYTE *)result + 58) = 0;
  result[19] = 0;
  *result = &off_DA324;
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  *((_WORD *)result + 28) = 23946;
  return result;
}
// DA324: using guessed type _UNKNOWN *off_DA324;
