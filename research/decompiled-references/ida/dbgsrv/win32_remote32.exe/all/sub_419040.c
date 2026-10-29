/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419040
// Address: 0x00419040

//----- (00419040) --------------------------------------------------------
char __thiscall sub_419040(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // edx
  unsigned int *i; // eax

  v2 = *(this + 1);
  v3 = 0;
  if ( !v2 )
    return 0;
  for ( i = (unsigned int *)*this; a2 < *i || a2 >= i[1]; i += 3 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
