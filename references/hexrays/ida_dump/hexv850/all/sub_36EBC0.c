__int64 __fastcall sub_36EBC0(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rdi

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
  if ( !v3 )
    return 0;
  v4 = 24;
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v5 )
    goto LABEL_11;
  if ( (*(_BYTE *)v5 & 2) != 0 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 24);
      v4 = v5 + 24;
      if ( a2 >= v7 )
        break;
      v5 = *(_QWORD *)(v5 + 8);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        return 0;
    }
    if ( v7 >= a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)v5 & 2) != 0 )
      return 0;
  }
  if ( (_QWORD *)v5 == v3 )
    return 0;
LABEL_11:
  if ( (*(_BYTE *)(v4 + 56) & 0x3F) == 0x30 )
    return 0;
  if ( a3 )
    *a3 = *(_DWORD *)(v4 + 64);
  return 1;
}
