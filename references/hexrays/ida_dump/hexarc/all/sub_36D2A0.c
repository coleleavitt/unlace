__int64 __fastcall sub_36D2A0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rcx

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
  if ( !v2 )
    goto LABEL_4;
  v3 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v3 & 2) != 0 )
          goto LABEL_4;
        v5 = *(_QWORD *)(v3 + 24);
        if ( a2 >= v5 )
          break;
        v3 = *(_QWORD *)(v3 + 8);
      }
      if ( v5 >= a2 )
        break;
      v3 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 == (_QWORD *)v3 )
    {
LABEL_4:
      if ( !under_debugger )
        sub_37B760(52584);
      BUG();
    }
  }
  sub_13F9F0(a1);
  return sub_1416B0(*(_QWORD *)(a1 + 112), a2, 0);
}
