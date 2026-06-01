/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E955D
// Address: 0x00000000000E955D

//----- (00000000000E955D) ----------------------------------------------------
__int64 __fastcall sub_E955D(char a1)
{
  unsigned __int8 v1; // di
  bool v2; // zf

  if ( a1 == -1 )
    return 0;
  v1 = a1 & 7;
  if ( v1 == 2 )
    return 2;
  if ( v1 > 2u )
  {
    if ( v1 == 3 )
      return 4;
    v2 = v1 == 4;
  }
  else
  {
    v2 = v1 == 0;
  }
  if ( !v2 )
    abort();
  return 8;
}
