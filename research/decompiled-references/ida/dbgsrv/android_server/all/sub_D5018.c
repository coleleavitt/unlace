/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5018
// Address: 0x00000000000D5018

//----- (00000000000D5018) ----------------------------------------------------
_QWORD *__fastcall sub_D5018(_QWORD *result, _QWORD *a2)
{
  __int64 v2; // x8

  *result = 0;
  result[8] = *a2;
  result[1] = a2[1];
  v2 = a2[2];
  result[3] = 0;
  result[4] = 0;
  result[2] = v2;
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[10] = a2[4];
  result[9] = a2[3];
  return result;
}
