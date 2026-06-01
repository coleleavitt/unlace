/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B07F0
// Address: 0x00000000004B07F0

//----- (00000000004B07F0) ----------------------------------------------------
__int64 __fastcall sub_4B07F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // x19

  v3 = a2 - *a1;
  sub_4AFF90(a1, v3, 1);
  return *a1 + v3;
}
