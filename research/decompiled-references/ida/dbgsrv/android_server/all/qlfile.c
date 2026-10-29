/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlfile
// Address: 0x00000000000B9C5C

//----- (00000000000B9C5C) ----------------------------------------------------
__int64 __fastcall qlfile(__int64 result)
{
  if ( result )
  {
    if ( *(int *)result <= 1 )
      return *(_QWORD *)(result + 8);
    else
      return 0;
  }
  return result;
}
