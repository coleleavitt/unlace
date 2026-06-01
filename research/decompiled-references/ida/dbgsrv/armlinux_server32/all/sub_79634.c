/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79634
// Address: 0x00079634

//----- (00079634) --------------------------------------------------------
_BYTE *__fastcall sub_79634(_BYTE *a1)
{
  int v2; // r4
  _BYTE *v3; // r5
  _BYTE *v4; // r6
  int v5; // t1

  v2 = (unsigned __int8)*a1;
  v3 = a1;
  if ( *a1 )
  {
    v4 = a1;
    do
    {
      if ( (v2 & 0x80) != 0 || !isspace(v2) )
        *v3++ = v2;
      v5 = (unsigned __int8)*++v4;
      v2 = v5;
    }
    while ( v5 );
  }
  *v3 = 0;
  return a1;
}
