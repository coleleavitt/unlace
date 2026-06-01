_QWORD *__fastcall sub_411C00(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v2 = *(_QWORD **)(a1 + 72);
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  v5 = a2[1];
  if ( !v2 )
    return v3;
  v6 = v3;
  do
  {
    while ( 1 )
    {
      v7 = v2[4];
      if ( v7 < v4 || v4 >= v7 && v2[5] < v5 )
        break;
      v6 = v2;
      v2 = (_QWORD *)v2[2];
      if ( !v2 )
        goto LABEL_8;
    }
    v2 = (_QWORD *)v2[3];
  }
  while ( v2 );
LABEL_8:
  if ( v3 == v6 )
    return v3;
  v8 = v6[4];
  if ( v4 < v8 )
    return v3;
  if ( v8 >= v4 )
  {
    if ( v5 >= v6[5] )
      return v6;
    return v3;
  }
  return v6;
}
