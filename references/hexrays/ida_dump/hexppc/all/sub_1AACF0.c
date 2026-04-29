__int64 __fastcall sub_1AACF0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD **v3; // rax
  _QWORD *v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v10; // rbp

  v3 = *(_QWORD ***)(a1 + 16);
  if ( !v3 || !a3 )
    return -1;
  v5 = *v3;
  if ( !*v3 )
    return -1;
  v6 = 24;
  v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
    goto LABEL_11;
  if ( (*(_BYTE *)(*v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return -1;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v6 = v7 + 24;
    if ( a3 >= v8 )
      break;
    v7 = *(_QWORD *)(v7 + 8);
LABEL_8:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      return -1;
  }
  if ( v8 < a3 )
  {
    v7 = *(_QWORD *)(v7 + 16);
    goto LABEL_8;
  }
  if ( (_QWORD *)v7 == v5 )
    return -1;
LABEL_11:
  v10 = *(_QWORD *)(v6 + 8);
  if ( v10 != -1 )
  {
    if ( ((unsigned __int8)v10 & 7u) > 2 )
      sub_1AA590(a1, v5, a3, v7);
    sub_3266D0(a2, (unsigned int)(v10 & 7) + 41, a3, v7);
    tag_addr(a2, v10, 0);
  }
  return *(_QWORD *)(v6 + 8);
}
