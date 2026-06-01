/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F17E
// Address: 0x0008F17E

//----- (0008F17E) --------------------------------------------------------
_DWORD *__fastcall sub_8F17E(_DWORD *result, _DWORD *a2)
{
  int v2; // r3

  *result = 0;
  result[8] = *a2;
  result[1] = a2[1];
  v2 = a2[2];
  result[3] = 0;
  result[2] = v2;
  result[4] = 0;
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[10] = a2[4];
  result[9] = a2[3];
  return result;
}
