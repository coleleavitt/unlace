/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479160
// Address: 0x00479160

//----- (00479160) --------------------------------------------------------
int __cdecl sub_479160(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  int v3; // ecx
  unsigned __int8 v6; // ah
  unsigned __int8 v7; // al

  v3 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = *a1++;
      v7 = *a2++;
      if ( v6 != v7 )
      {
        if ( v6 >= 0x41u && v6 <= 0x5Au )
          v6 += 32;
        if ( v7 >= 0x41u && v7 <= 0x5Au )
          v7 += 32;
        if ( v6 != v7 )
          break;
      }
      if ( !--v3 )
        return v3;
    }
    v3 = -1;
    if ( v6 >= v7 )
      return 1;
  }
  return v3;
}
