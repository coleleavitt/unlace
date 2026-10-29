/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3CB0
// Address: 0x00000000004A3CB0

//----- (00000000004A3CB0) ----------------------------------------------------
__int64 *__fastcall sub_4A3CB0(__int64 **a1, _BYTE *a2, __int64 a3)
{
  __int64 *result; // x0

  result = sub_4A3848(a2, &a2[a3]);
  *a1 = result;
  return result;
}
