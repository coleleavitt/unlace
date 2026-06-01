/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80278
// Address: 0x00080278

//----- (00080278) --------------------------------------------------------
_BYTE *__fastcall sub_80278(_BYTE *a1)
{
  int v2; // r7
  _BYTE *v3; // r5
  unsigned __int8 *v4; // r6

  LOBYTE(v2) = *a1;
  v3 = a1;
  if ( *a1 )
  {
    v4 = a1 + 1;
    v3 = a1;
    do
    {
      if ( (v2 & 0x80u) != 0 || !isspace((unsigned __int8)v2) )
        *v3++ = v2;
      v2 = *v4++;
    }
    while ( v2 );
  }
  *v3 = 0;
  return a1;
}
