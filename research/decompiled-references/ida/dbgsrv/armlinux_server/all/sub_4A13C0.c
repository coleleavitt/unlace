/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A13C0
// Address: 0x00000000004A13C0

//----- (00000000004A13C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A13C0(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  __int64 v4; // x0
  unsigned __int64 result; // x0

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 - 24);
  if ( !v4 )
    return -1;
  result = v4 - 1;
  if ( result > a3 )
    result = a3;
  while ( *(unsigned __int8 *)(v3 + result) == a2 )
  {
    if ( !result )
      return -1;
    --result;
  }
  return result;
}
