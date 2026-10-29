/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458A90
// Address: 0x0000000000458A90

//----- (0000000000458A90) ----------------------------------------------------
__int64 __fastcall sub_458A90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 result; // x0

  v6 = *a1;
  v5 = a1[1];
  a1[1] = a2;
  v8 = a1[19];
  v7 = a1[20];
  a1[19] = 0;
  a1[20] = a4;
  result = sub_4586D0((__int64)a1, a3);
  *a1 = v6;
  a1[1] = v5;
  a1[19] = v8;
  a1[20] = v7;
  return result;
}
