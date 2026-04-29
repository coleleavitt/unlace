__int64 __fastcall sub_64340(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx

  if ( !a1[99] )
    return a2;
  v3 = a1[96];
  v4 = a1 + 95;
  v6 = (__int64)(a1 + 95);
  if ( !v3 )
    goto LABEL_3;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v3 + 16);
      v11 = *(_QWORD *)(v3 + 24);
      if ( *(_DWORD *)(v3 + 32) < a2 )
        break;
      v6 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v10 )
        goto LABEL_10;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v11 );
LABEL_10:
  if ( v4 == (_QWORD *)v6 || *(_DWORD *)(v6 + 32) != a2 )
  {
LABEL_3:
    v7 = a1[97];
    while ( v6 != v7 )
    {
      v6 = std::_Rb_tree_decrement();
      v8 = *(_DWORD *)(v6 + 36);
      if ( v8 )
        return a2 + v8 - *(_DWORD *)(v6 + 32);
    }
    return a2;
  }
  return *(unsigned int *)(v6 + 36);
}
