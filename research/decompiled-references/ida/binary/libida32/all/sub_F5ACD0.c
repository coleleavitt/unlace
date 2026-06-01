__int64 __fastcall sub_F5ACD0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *i; // rsi
  __int64 v8; // rbx

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
    return 0;
  v3 = (_QWORD *)(a1 + 8);
  v4 = *a2;
  while ( 1 )
  {
    while ( v2[4] < v4 )
    {
      v2 = (_QWORD *)v2[3];
      if ( !v2 )
        return 0;
    }
    v5 = (_QWORD *)v2[2];
    if ( v2[4] <= v4 )
      break;
    v3 = v2;
    v2 = (_QWORD *)v2[2];
    if ( !v5 )
      return 0;
  }
  for ( i = (_QWORD *)v2[3]; i; i = (_QWORD *)i[3] )
  {
    while ( v4 < i[4] )
    {
      v3 = i;
      i = (_QWORD *)i[2];
      if ( !i )
        goto LABEL_13;
    }
  }
LABEL_13:
  while ( v5 )
  {
    while ( v4 <= v5[4] )
    {
      v2 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v5 )
        goto LABEL_16;
    }
    v5 = (_QWORD *)v5[3];
  }
LABEL_16:
  if ( v3 == v2 )
    return 0;
  v8 = 0;
  do
    ++v8;
  while ( (_QWORD *)std::_Rb_tree_increment() != v3 );
  return v8;
}

