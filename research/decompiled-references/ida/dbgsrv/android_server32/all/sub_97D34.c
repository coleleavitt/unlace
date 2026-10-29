/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97D34
// Address: 0x00097D34

//----- (00097D34) --------------------------------------------------------
_DWORD *__fastcall sub_97D34(_DWORD *result, int a2)
{
  int v2; // r1
  int v3; // r3

  v2 = *(_DWORD *)(a2 + 8);
  v3 = (int)*(&off_DC9B0 + v2);
  *result = off_DC990[v2];
  result[1] = v3;
  return result;
}
// DC990: using guessed type char *off_DC990[6];
// DC9B0: using guessed type _UNKNOWN *off_DC9B0;
