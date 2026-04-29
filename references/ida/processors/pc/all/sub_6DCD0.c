__int64 __fastcall sub_6DCD0(__int64 a1, char *a2)
{
  __int64 v2; // r13
  char v3; // bp

  if ( (unsigned __int8)getinf_flag() )
  {
    if ( a2 )
      *a2 = 1;
    return 0;
  }
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v3 = 1;
    if ( v2 > 0 )
      goto LABEL_4;
    v3 = 1;
    if ( (*(_BYTE *)(a1 + 17) & 0x40) == 0 )
    {
      v3 = 0;
      if ( !(unsigned __int8)get_tinfo() )
      {
        clear_tinfo_t();
        v3 = 0;
        v2 = 0;
LABEL_4:
        if ( !a2 )
          return v2 + (*(_QWORD *)(a1 + 16) & 2LL);
LABEL_5:
        *a2 = v3;
        return v2 + (*(_QWORD *)(a1 + 16) & 2LL);
      }
      v2 = (int)sub_40000();
      clear_tinfo_t();
    }
    if ( v2 == -1 )
      v2 = 0;
    if ( !a2 )
      return v2 + (*(_QWORD *)(a1 + 16) & 2LL);
    goto LABEL_5;
  }
  if ( !a2 )
    return 0;
  *a2 = 0;
  return 0;
}
