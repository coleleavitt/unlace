__int64 __fastcall sub_2A1110(_QWORD *a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _BOOL8 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rbp
  int v14; // eax

  v5 = operator new(0x50u);
  v6 = *a3;
  *(_QWORD *)(v5 + 72) = 0;
  v7 = *v6;
  *(_QWORD *)(v5 + 48) = -1;
  *(_OWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 32) = v7;
  *(_QWORD *)(v5 + 40) = 0x1FFFFFFFFLL;
  v8 = sub_2A0590(a1, a2, (int *)(v5 + 32));
  if ( v9 )
  {
    v10 = 1;
    v11 = a1 + 1;
    if ( !v8 && (_QWORD *)v9 != v11 )
    {
      v14 = *(_DWORD *)(v9 + 32);
      if ( *(_DWORD *)(v5 + 32) >= v14 )
      {
        v10 = 0;
        if ( *(_DWORD *)(v5 + 32) == v14 )
          v10 = *(_DWORD *)(v5 + 36) < *(_DWORD *)(v9 + 36);
      }
    }
    std::_Rb_tree_insert_and_rebalance(v10, v5, v9, v11);
    ++a1[5];
    return v5;
  }
  v12 = v8;
  if ( !v5 )
    return v12;
  operator delete((void *)v5, 0x50u);
  return v12;
}
