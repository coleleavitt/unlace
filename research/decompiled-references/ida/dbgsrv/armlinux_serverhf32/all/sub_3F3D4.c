/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F3D4
// Address: 0x0003F3D4

//----- (0003F3D4) --------------------------------------------------------
char *__fastcall sub_3F3D4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r2

  if ( a2 < 0 )
  {
    if ( a2 == -1 )
    {
      return &byte_8DEAC;
    }
    else if ( dword_D2CC8 <= (unsigned int)-a2 )
    {
      return &byte_8DEAC;
    }
    else
    {
      return (char *)off_D2CCC[-6 * a2];
    }
  }
  else if ( (unsigned int)a2 >= a1[1] )
  {
    return &byte_8DEAC;
  }
  else
  {
    v2 = *(_DWORD **)(*a1 + 4 * a2);
    if ( v2[1] )
      return (char *)*v2;
    else
      return (char *)&dword_8DA5C;
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
// D2CC8: using guessed type int dword_D2CC8;
// D2CCC: using guessed type _UNKNOWN **off_D2CCC;
