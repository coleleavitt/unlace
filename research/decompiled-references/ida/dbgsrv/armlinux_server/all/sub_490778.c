/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490778
// Address: 0x0000000000490778

//----- (0000000000490778) ----------------------------------------------------
__int64 __fastcall sub_490778(const char *a1, const char *a2, char a3)
{
  int v6; // w23
  unsigned int v7; // w19

  if ( (unsigned __int8)sub_490268(a2) )
  {
    if ( (unsigned int)sub_490728(a2, 2) )
    {
      v6 = a3 & 6;
      v7 = 6;
      if ( v6 != 6 )
      {
        sub_4869C8(1);
        return v7;
      }
    }
    else
    {
      v6 = 2;
      if ( (a3 & 2) == 0 )
      {
        v7 = 2;
        *__errno_location() = 17;
        sub_4869C8(1);
        return v7;
      }
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = sub_490750(a1, a2);
  if ( !v7 )
    return v7;
  if ( *__errno_location() == 18 )
  {
    v7 = v6 | 1;
    if ( (a3 & 1) == 0 )
      return v7;
    if ( (a3 & 4) != 0 )
      sub_490700(a2);
    v7 = sub_4908C0(a1, a2, 1u, nullptr, 0);
    if ( v7 + 1 > 1 )
    {
      v7 &= ~2u;
      if ( v7 == -4 )
        return 0xFFFFFFFFLL;
      if ( !under_debugger )
        sub_492270(1354);
      __break(0x3E8u);
    }
    if ( !v7 )
    {
      sub_490700(a1);
      return v7;
    }
  }
  return 0xFFFFFFFFLL;
}
// 52451C: using guessed type char under_debugger;
