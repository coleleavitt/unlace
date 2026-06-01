/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2060
// Address: 0x00000000004B2060

//----- (00000000004B2060) ----------------------------------------------------
__int64 __fastcall sub_4B2060(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x3
  unsigned __int64 v4; // x3
  __int64 v5; // x4
  __int64 result; // x0

  v3 = a1[1];
  if ( !v3 )
    return -1;
  v4 = v3 - 1;
  v5 = *a1;
  if ( v4 > a3 )
    result = a3;
  else
    result = v4;
  while ( *(unsigned __int8 *)(v5 + result) == a2 )
  {
    if ( !result )
      return -1;
    --result;
  }
  return result;
}
