/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98088
// Address: 0x00098088

//----- (00098088) --------------------------------------------------------
_DWORD *__fastcall sub_98088(_DWORD *result, int a2)
{
  int v2; // r1
  int v3; // r3

  v2 = *(_DWORD *)(a2 + 8);
  v3 = (int)*(&off_DC9F0 + v2);
  *result = off_DC9D0[v2];
  result[1] = v3;
  return result;
}
// DC9D0: using guessed type char *off_DC9D0[6];
// DC9F0: using guessed type _UNKNOWN *off_DC9F0;
