/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E07E
// Address: 0x0004E07E

//----- (0004E07E) --------------------------------------------------------
_DWORD *__fastcall sub_4E07E(_DWORD *result)
{
  int v1; // r3
  int v2; // r1

  v1 = result[8];
  v2 = result[7] + 28 * (v1 - 1);
  *result = *(_DWORD *)(v2 + 12);
  result[1] = *(_DWORD *)(v2 + 16);
  result[10] = *(_DWORD *)(v2 + 24);
  if ( v1 )
  {
    result[8] = v1 - 1;
    return sub_1B3BC((char **)v2);
  }
  return result;
}
