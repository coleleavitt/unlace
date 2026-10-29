/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77940
// Address: 0x00077940

//----- (00077940) --------------------------------------------------------
int __fastcall sub_77940(const char *a1, const char *a2, char a3)
{
  int v6; // r4
  int v7; // r6
  int v9; // r0

  if ( sub_7756C((int)a2) )
  {
    if ( sub_77918(a2, 2) )
    {
      v6 = a3 & 6;
      if ( v6 != 6 )
      {
        v7 = 6;
        sub_70B98(1);
        return v7;
      }
    }
    else
    {
      if ( (a3 & 2) == 0 )
      {
        v7 = 2;
        *_errno_location() = 17;
        sub_70B98(1);
        return v7;
      }
      v6 = 2;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = sub_7792C(a1, a2);
  if ( !v7 )
    return v7;
  if ( *_errno_location() == 18 )
  {
    if ( (a3 & 1) == 0 )
      return v6 | 1;
    if ( (a3 & 4) != 0 )
      sub_77904(a2);
    v9 = sub_77A20((int)a1, a2, 1u, nullptr, 0);
    v7 = v9;
    if ( (unsigned int)(v9 + 1) <= 1 )
    {
      if ( !v9 )
      {
        sub_77904(a1);
        return v7;
      }
    }
    else if ( (v9 & 0xFFFFFFFD) != 0xFFFFFFFC )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(1354);
    }
  }
  return -1;
}
// D6C20: using guessed type char under_debugger;
