/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8348C
// Address: 0x000000000008348C

//----- (000000000008348C) ----------------------------------------------------
__int64 __fastcall sub_8348C(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 8) = ~*(_QWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
