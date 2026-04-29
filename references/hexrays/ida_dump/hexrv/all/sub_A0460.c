unsigned __int64 __fastcall sub_A0460(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD **)(a1 + 1144);
  if ( !v2 )
    return a2;
  if ( (*v2 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    while ( 1 )
      ;
  }
  if ( (*(_BYTE *)(*v2 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return a2;
  while ( 2 )
  {
    v3 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( a2 >= v4 )
        break;
      v3 = *(_QWORD *)(v3 + 8);
LABEL_9:
      if ( (*(_BYTE *)v3 & 2) != 0 )
        return a2;
    }
    if ( v4 < a2 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      goto LABEL_9;
    }
    if ( (_QWORD *)v3 != v2 )
    {
      a2 = *(_QWORD *)(v3 + 32);
      continue;
    }
    return a2;
  }
}
