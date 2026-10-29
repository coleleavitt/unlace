/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFA50
// Address: 0x00000000004AFA50

//----- (00000000004AFA50) ----------------------------------------------------
__int64 *__fastcall sub_4AFA50(__int64 *result, __int64 a2)
{
  __int64 v2; // x2

  v2 = *result;
  result[1] = a2;
  *(_BYTE *)(v2 + a2) = 0;
  return result;
}
