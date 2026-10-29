/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8360C
// Address: 0x000000000008360C

//----- (000000000008360C) ----------------------------------------------------
__int64 __fastcall sub_8360C(__int64 result, __int64 a2)
{
  if ( *(_BYTE *)result || *(_BYTE *)a2 )
    *(_QWORD *)(result + 8) /= *(_QWORD *)(a2 + 8);
  else
    *(__int64 *)(result + 8) /= *(__int64 *)(a2 + 8);
  return result;
}
