/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5A98
// Address: 0x00000000004A5A98

//----- (00000000004A5A98) ----------------------------------------------------
__int64 __fastcall sub_4A5A98(__int64 result, int a2)
{
  if ( !result || *(_DWORD *)result != 47 )
    return 0;
  if ( a2 <= 0 )
  {
    if ( !a2 )
      return *(_QWORD *)(result + 8);
    return 0;
  }
  while ( 1 )
  {
    result = *(_QWORD *)(result + 16);
    --a2;
    if ( !result )
      break;
    if ( *(_DWORD *)result != 47 )
      return 0;
    if ( !a2 )
      return *(_QWORD *)(result + 8);
  }
  return result;
}
