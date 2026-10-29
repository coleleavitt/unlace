/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F18C
// Address: 0x000000010005F18C

//----- (000000010005F18C) ----------------------------------------------------
__int64 __fastcall sub_10005F18C(__int64 result, __int64 a2)
{
  if ( *(_QWORD *)(result + 40) )
    *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) += a2;
  return result;
}
