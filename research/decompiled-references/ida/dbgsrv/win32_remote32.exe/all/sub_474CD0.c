/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474CD0
// Address: 0x00474CD0

//----- (00474CD0) --------------------------------------------------------
char __cdecl sub_474CD0(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // eax
  signed __int32 v6[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0;
  memset(v6, 0, 32);
  while ( 1 )
  {
    LOBYTE(v2) = *a2;
    if ( !*a2 )
      break;
    ++a2;
    _bittestandset(v6, v2);
  }
  while ( 1 )
  {
    LOBYTE(v2) = *a1;
    if ( !*a1 )
      break;
    ++a1;
    if ( _bittest(v6, v2) )
    {
      LOBYTE(v2) = (_BYTE)a1 - 1;
      return v2;
    }
  }
  return v2;
}
