/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79524
// Address: 0x00079524

//----- (00079524) --------------------------------------------------------
unsigned __int8 *__fastcall sub_79524(unsigned __int8 *a1)
{
  int v2; // r0
  _BYTE *v3; // r4
  int v4; // t1

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      v3 = a1;
      do
      {
        *v3 = toupper(v2);
        v4 = (unsigned __int8)*++v3;
        v2 = v4;
      }
      while ( v4 );
    }
  }
  return a1;
}
