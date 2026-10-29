unsigned __int64 __fastcall sub_73F190(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rcx

  v2 = *a1;
  v3 = a1[1];
  v4 = *a1 + v3;
  if ( *a1 < v4 )
  {
    while ( *(_DWORD *)(v2 + 12) != a2 )
    {
      v2 += 40LL;
      if ( v2 >= v4 )
        goto LABEL_6;
    }
    return 0;
  }
  else
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
    *(_DWORD *)(v4 + 12) = a2;
    *(_OWORD *)(v4 + 16) = 0;
    return v4;
  }
}
