const char **__fastcall sub_3330D0(const char **a1, const char **a2, const char *a3)
{
  const char **v3; // rbp
  __int64 i; // rbx
  __int64 v6; // r14
  const char **v7; // r15

  v3 = a1;
  for ( i = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1); i > 0; i = i - 1 - v6 )
  {
    while ( 1 )
    {
      v6 = i >> 1;
      v7 = &v3[5 * (i >> 1)];
      if ( strcmp(*v7, a3) < 0 )
        break;
      i >>= 1;
      if ( v6 <= 0 )
        goto LABEL_5;
    }
    v3 = v7 + 5;
  }
LABEL_5:
  if ( a2 == v3 || strcmp(*v3, a3) )
  {
    v3 = nullptr;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)v3 + 32) )
  {
    if ( (unsigned __int8)deserialize_tinfo() )
    {
      if ( (int)lower_type() >= 0 )
        goto LABEL_8;
      if ( !under_debugger )
        sub_383060(52017);
    }
    else if ( !under_debugger )
    {
      sub_383060(51093);
    }
    BUG();
  }
LABEL_8:
  clear_tinfo_t();
  return v3;
}
