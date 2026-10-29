/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485BF8
// Address: 0x0000000000485BF8

//----- (0000000000485BF8) ----------------------------------------------------
__int64 __fastcall sub_485BF8(_WORD *a1)
{
  _WORD *v1; // x2
  int v2; // t1

  v1 = a1;
  if ( !*a1 )
    return 0;
  do
  {
    v2 = (unsigned __int16)a1[1];
    ++a1;
  }
  while ( v2 );
  return a1 - v1;
}
