/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_852C0
// Address: 0x00000000000852C0

//----- (00000000000852C0) ----------------------------------------------------
__int64 __fastcall sub_852C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 result; // x0

  v4 = *a1;
  v5 = a1[1];
  v6 = a1[17];
  v7 = a1[18];
  a1[1] = a2;
  a1[17] = 0;
  a1[18] = a4;
  result = sub_84F38((__int64)a1, a3);
  *a1 = v4;
  a1[1] = v5;
  a1[17] = v6;
  a1[18] = v7;
  return result;
}
