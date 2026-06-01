/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFD58
// Address: 0x00000000004AFD58

//----- (00000000004AFD58) ----------------------------------------------------
__int64 __fastcall sub_4AFD58(__int64 a1, __int64 a2)
{
  __int64 v2; // x1
  __int64 result; // x0

  v2 = a1 - a2;
  result = 0x7FFFFFFF;
  if ( v2 <= 0x7FFFFFFF )
  {
    if ( v2 >= (__int64)0xFFFFFFFF80000000LL )
      return (unsigned int)v2;
    else
      return 0x80000000LL;
  }
  return result;
}
