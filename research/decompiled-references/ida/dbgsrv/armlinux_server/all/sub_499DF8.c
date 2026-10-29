/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499DF8
// Address: 0x0000000000499DF8

//----- (0000000000499DF8) ----------------------------------------------------
__int64 __fastcall sub_499DF8(__int64 a1)
{
  __int64 *v1; // x1
  __int64 v2; // x4
  __int64 result; // x0
  __int64 *i; // x4
  __int64 v5; // x2
  __int64 v6; // t1

  v1 = *(__int64 **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  result = 0;
  for ( i = &v1[2 * v2]; v1 != i; result += v5 - v6 )
  {
    v5 = v1[1];
    v6 = *v1;
    v1 += 2;
  }
  return result;
}
