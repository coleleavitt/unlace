/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006A3B0
// Address: 0x000000014006A3B0

//----- (000000014006A3B0) ----------------------------------------------------
__int64 __fastcall sub_14006A3B0(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = sub_14006A390(*a1);
  result = sub_14006A390(a1[1]);
  *a1 = result;
  a1[1] = v2;
  return result;
}
