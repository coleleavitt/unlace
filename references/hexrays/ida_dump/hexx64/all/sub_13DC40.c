unsigned __int64 *__fastcall sub_13DC40(_QWORD **a1, unsigned __int64 **a2)
{
  unsigned __int64 *v2; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx

  v2 = *a2;
  if ( !*a2 )
    return v2;
  v3 = *a1;
  if ( !*a1 )
    return nullptr;
  v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v4 )
    return (unsigned __int64 *)(v4 + 32);
  if ( (*(_BYTE *)v4 & 2) != 0 )
    return nullptr;
  v5 = *v2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 24);
    if ( v5 >= v6 )
      break;
    v4 = *(_QWORD *)(v4 + 8);
LABEL_8:
    if ( (*(_BYTE *)v4 & 2) != 0 )
      return nullptr;
  }
  if ( v6 < v5 )
  {
    v4 = *(_QWORD *)(v4 + 16);
    goto LABEL_8;
  }
  if ( (_QWORD *)v4 == v3 )
    return nullptr;
  return (unsigned __int64 *)(v4 + 32);
}
