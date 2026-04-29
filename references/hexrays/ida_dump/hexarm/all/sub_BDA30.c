__int64 __fastcall sub_BDA30(__int64 a1, int a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rax

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 320) + 1856LL);
  if ( !v2 )
    goto LABEL_4;
  v3 = 24;
  v4 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v4 & 2) != 0 )
          goto LABEL_4;
        v3 = v4 + 24;
        if ( a2 >= *(_DWORD *)(v4 + 24) )
          break;
        v4 = *(_QWORD *)(v4 + 8);
      }
      if ( a2 <= *(_DWORD *)(v4 + 24) )
        break;
      v4 = *(_QWORD *)(v4 + 16);
    }
    if ( v2 == (_QWORD *)v4 )
    {
LABEL_4:
      if ( !under_debugger )
        sub_3835A0(50054);
      goto LABEL_15;
    }
  }
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * *(int *)(v3 + 4));
  v6 = *(int *)(v3 + 8);
  if ( v6 >= v5[1] )
  {
    if ( !under_debugger )
      sub_3835A0(50964);
LABEL_15:
    BUG();
  }
  return *(_QWORD *)(*v5 + 8 * v6);
}
