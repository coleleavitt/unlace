/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474D10
// Address: 0x00474D10

//----- (00474D10) --------------------------------------------------------
int __cdecl sub_474D10(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  signed __int32 v7[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0;
  memset(v7, 0, 32);
  while ( 1 )
  {
    LOBYTE(v2) = *a2;
    if ( !*a2 )
      break;
    ++a2;
    _bittestandset(v7, v2);
  }
  v5 = -1;
  do
  {
    ++v5;
    LOBYTE(v2) = *a1;
    if ( !*a1 )
      break;
    ++a1;
  }
  while ( _bittest(v7, v2) );
  return v5;
}
