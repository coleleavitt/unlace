/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_777D8
// Address: 0x000777D8

//----- (000777D8) --------------------------------------------------------
int __fastcall sub_777D8(const char *a1, const char *a2, char a3)
{
  int v6; // r4
  int v7; // r6
  int v9; // r0

  if ( sub_77404((int)a2) )
  {
    if ( sub_777B0(a2, 2) )
    {
      v6 = a3 & 6;
      if ( v6 != 6 )
      {
        v7 = 6;
        sub_70A2C(1);
        return v7;
      }
    }
    else
    {
      if ( (a3 & 2) == 0 )
      {
        v7 = 2;
        *_errno_location() = 17;
        sub_70A2C(1);
        return v7;
      }
      v6 = 2;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = sub_777C4(a1, a2);
  if ( !v7 )
    return v7;
  if ( *_errno_location() == 18 )
  {
    if ( (a3 & 1) == 0 )
      return v6 | 1;
    if ( (a3 & 4) != 0 )
      sub_7779C(a2);
    v9 = sub_778B8((int)a1, a2, 1u, nullptr, 0);
    v7 = v9;
    if ( (unsigned int)(v9 + 1) <= 1 )
    {
      if ( !v9 )
      {
        sub_7779C(a1);
        return v7;
      }
    }
    else if ( (v9 & 0xFFFFFFFD) != 0xFFFFFFFC )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(1354);
    }
  }
  return -1;
}
// D5C00: using guessed type char under_debugger;
