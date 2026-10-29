__int64 __fastcall sub_3A5200(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  int i; // edx

  v3 = a1 + 8;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1 + 8;
  if ( v6 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 16);
        v9 = *(_QWORD *)(v6 + 24);
        if ( *(_DWORD *)(v6 + 32) < a2 )
          break;
        v7 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v8 )
          goto LABEL_6;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v9 );
LABEL_6:
    if ( v3 != v7 )
    {
      v10 = *(_DWORD *)(v7 + 32);
      if ( v10 == a2 || a3 != -1 && v10 < a3 )
        return v7;
    }
  }
  if ( *(_QWORD *)(a1 + 24) != v7 )
  {
    v7 = std::_Rb_tree_decrement();
    v11 = *(_QWORD *)(v7 + 40);
    v12 = v11 + 8LL * *(_QWORD *)(v7 + 48);
    for ( i = 1; v12 != v11; v11 += 8 )
    {
      if ( i < *(_DWORD *)(*(_QWORD *)v11 + 72LL) )
        i = *(_DWORD *)(*(_QWORD *)v11 + 72LL);
    }
    if ( a2 >= *(_DWORD *)(v7 + 32) + i )
      return v3;
    return v7;
  }
  return v3;
}

