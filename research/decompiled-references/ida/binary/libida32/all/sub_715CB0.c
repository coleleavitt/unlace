unsigned __int64 __fastcall sub_715CB0(unsigned __int64 *a1, __int16 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // r8

  v2 = *a1;
  v3 = a1[1];
  v4 = *a1 + v3;
  if ( *a1 >= v4 )
  {
LABEL_6:
    v6 = v3 + 40;
    a1[1] = v6;
    if ( v6 > 0x1400 )
    {
      if ( !under_debugger )
        interr(844);
      BUG();
    }
    *(_WORD *)(v4 + 10) = a2;
    *(_OWORD *)(v4 + 16) = 0;
    return v4;
  }
  else
  {
    while ( *(_WORD *)(v2 + 10) != a2 )
    {
      v2 += 40LL;
      if ( v2 >= v4 )
        goto LABEL_6;
    }
    return 0;
  }
}

