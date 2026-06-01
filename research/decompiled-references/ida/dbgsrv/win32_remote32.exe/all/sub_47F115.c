/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F115
// Address: 0x0047F115

//----- (0047F115) --------------------------------------------------------
bool __cdecl sub_47F115(char *a1, char *a2, int a3, int a4, int a5)
{
  int v6; // eax
  _BYTE *v7; // ecx

  if ( !a5 )
    return *a2 >= 53;
  v6 = sub_47B587();
  if ( v6 )
  {
    if ( v6 == 512 )
    {
      if ( *a2 == 48 || a3 == 45 )
        return 0;
    }
    else if ( v6 != 256 || *a2 == 48 || a3 != 45 )
    {
      return 0;
    }
    return 1;
  }
  if ( *a2 > 53 )
    return 1;
  if ( *a2 < 53 )
    return 0;
  v7 = a2 + 1;
  if ( !a4 )
    return 1;
  while ( *v7 == 48 )
    ++v7;
  if ( *v7 )
    return 1;
  if ( a2 != a1 )
    return *(a2 - 1) & 1;
  return 0;
}
