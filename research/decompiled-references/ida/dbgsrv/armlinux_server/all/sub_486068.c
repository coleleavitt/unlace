/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486068
// Address: 0x0000000000486068

//----- (0000000000486068) ----------------------------------------------------
__int64 __fastcall sub_486068(unsigned __int8 *a1)
{
  __int64 v1; // x19
  bool v2; // zf
  unsigned __int8 *v3; // x0
  unsigned __int8 *v5; // [xsp+28h] [xbp-8h] BYREF

  v5 = a1;
  if ( !*a1 )
    return 0;
  v1 = 0;
  do
  {
    v2 = (unsigned int)sub_485C28(&v5) == -1;
    v3 = v5;
    if ( v2 )
      v3 = ++v5;
    ++v1;
  }
  while ( *v3 );
  return v1;
}
