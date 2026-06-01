/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F568
// Address: 0x0003F568

//----- (0003F568) --------------------------------------------------------
char *__fastcall sub_3F568(_DWORD *a1, int a2)
{
  _DWORD *v2; // r2

  if ( a2 < 0 )
  {
    if ( a2 == -1 )
    {
      return &byte_8DFE8;
    }
    else if ( dword_D3CE8 <= (unsigned int)-a2 )
    {
      return &byte_8DFE8;
    }
    else
    {
      return (char *)off_D3CEC[-6 * a2];
    }
  }
  else if ( (unsigned int)a2 >= a1[1] )
  {
    return &byte_8DFE8;
  }
  else
  {
    v2 = *(_DWORD **)(*a1 + 4 * a2);
    if ( v2[1] )
      return (char *)*v2;
    else
      return (char *)&dword_8DB98;
  }
}
// 8DB98: using guessed type int dword_8DB98;
// 8DFE8: using guessed type char byte_8DFE8;
// D3CE8: using guessed type int dword_D3CE8;
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
