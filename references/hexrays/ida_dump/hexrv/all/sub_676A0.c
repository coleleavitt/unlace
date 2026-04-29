__int64 __fastcall sub_676A0(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

  v3 = *(_QWORD **)(a1 + 8);
  if ( !v3 )
    return 0;
  v4 = 24;
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v5 )
    return *(unsigned int *)(v4 + 8);
  if ( (*(_BYTE *)v5 & 2) != 0 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = v5 + 24;
      if ( a2 >= *(_DWORD *)(v5 + 24) )
        break;
LABEL_5:
      v5 = *(_QWORD *)(v5 + 8);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        return 0;
    }
    if ( a2 == *(_DWORD *)(v5 + 24) )
      break;
LABEL_8:
    v5 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)v5 & 2) != 0 )
      return 0;
  }
  if ( a3 < *(_DWORD *)(v5 + 28) )
    goto LABEL_5;
  if ( a3 > *(_DWORD *)(v5 + 28) )
    goto LABEL_8;
  if ( (_QWORD *)v5 == v3 )
    return 0;
  return *(unsigned int *)(v4 + 8);
}
