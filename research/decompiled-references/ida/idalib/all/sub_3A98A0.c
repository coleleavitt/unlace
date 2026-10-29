_QWORD *__fastcall sub_3A98A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 i; // rdx

  v3 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 16);
  v7 = (_QWORD *)(a1 + 8);
  if ( v6 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6[3];
        if ( v6[4] < a2 )
          break;
        v7 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v8 )
          goto LABEL_6;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v9 );
LABEL_6:
    if ( v3 != v7 )
    {
      v10 = v7[4];
      if ( v10 == a2 || a3 != -1 && v10 < a3 )
        return v7;
    }
  }
  if ( *(_QWORD **)(a1 + 24) != v7 )
  {
    v7 = (_QWORD *)std::_Rb_tree_decrement(v7);
    v11 = v7[5];
    v12 = v11 + 8LL * v7[6];
    for ( i = 1; v12 != v11; v11 += 8 )
    {
      if ( (int)i < *(_DWORD *)(*(_QWORD *)v11 + 80LL) )
        i = *(int *)(*(_QWORD *)v11 + 80LL);
    }
    if ( a2 >= v7[4] + i )
      return v3;
    return v7;
  }
  return v3;
}
