__int64 __fastcall sub_234440(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4)
{
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx

  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) < 0 )
    return 0;
  if ( sub_233520(a1, a2, a3, a4) )
    return 0;
  v5 = **(_QWORD ***)(a1 + 64);
  if ( !v5 )
    goto LABEL_8;
  v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_8;
      v7 = *(_QWORD *)(v6 + 24);
      if ( a2 >= v7 )
        break;
      v6 = *(_QWORD *)(v6 + 8);
    }
    if ( v7 >= a2 )
      break;
    v6 = *(_QWORD *)(v6 + 16);
  }
  if ( v5 == (_QWORD *)v6 )
  {
LABEL_8:
    if ( !under_debugger )
      sub_37E160(52375);
    BUG();
  }
  return 0;
}
