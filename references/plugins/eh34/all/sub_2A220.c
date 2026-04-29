__int64 __fastcall sub_2A220(_QWORD *a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  _BOOL8 v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rbp
  int v16; // eax

  v6 = operator new(0x38u);
  v7 = *a4;
  *(_BYTE *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 32) = *v7;
  *(_QWORD *)(v6 + 40) = 0xFFFFFFFF00000000LL;
  v10 = sub_2A0E0(a1, a2, (signed int *)(v6 + 32), v8, v9);
  if ( v11 )
  {
    v12 = 1;
    v13 = a1 + 1;
    if ( !v10 && (_QWORD *)v11 != v13 )
    {
      v16 = *(_DWORD *)(v11 + 32);
      if ( *(_DWORD *)(v6 + 32) >= v16 )
      {
        v12 = 0;
        if ( *(_DWORD *)(v6 + 32) == v16 )
          v12 = *(_DWORD *)(v6 + 36) < *(_DWORD *)(v11 + 36);
      }
    }
    std::_Rb_tree_insert_and_rebalance(v12, v6, v11, v13);
    ++a1[5];
    return v6;
  }
  v14 = v10;
  if ( !v6 )
    return v14;
  operator delete((void *)v6, 0x38u);
  return v14;
}
