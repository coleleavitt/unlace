__int64 __fastcall sub_12CDB0(unsigned int a1, __int64 a2)
{
  int v2; // r12d
  int default_encoding_idx; // eax
  int v4; // eax

  if ( a1 == -1 )
  {
    sub_126180(a2, 0x64u);
    sub_126180(a2, 0x65u);
    sub_126180(a2, 0x66u);
    return 1;
  }
  if ( a1 - 100 > 2 )
    return 1;
  v2 = 1;
  if ( a1 != 100 )
    v2 = 2 * (a1 != 101) + 2;
  default_encoding_idx = get_default_encoding_idx();
  v4 = sub_12C710(default_encoding_idx, v2, 0);
  if ( v4 )
  {
    if ( v4 <= 0 )
      return 1;
    if ( (unsigned __int8)set_default_encoding_idx() )
    {
      sub_126180(a2, a1);
      return 1;
    }
    if ( under_debugger )
LABEL_15:
      BUG();
    interr();
  }
  if ( under_debugger )
    goto LABEL_15;
  interr();
  return sub_12CEA0(40509);
}

