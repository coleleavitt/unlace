/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_793BC
// Address: 0x000793BC

//----- (000793BC) --------------------------------------------------------
unsigned __int8 *__fastcall sub_793BC(unsigned __int8 *a1)
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
