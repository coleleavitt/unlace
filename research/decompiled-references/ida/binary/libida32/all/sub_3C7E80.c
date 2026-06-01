__int64 __fastcall sub_3C7E80(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdx
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rcx
  unsigned int *v9; // rbx
  unsigned int *v10; // r15
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx

  v5 = a4;
  v7 = *(_QWORD *)(a1 + 1024);
  if ( v7 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v8 = nullptr;
  }
  else
  {
    v8 = (_QWORD *)(a1 + 896);
    if ( v7 == -1 )
      v8 = (_QWORD *)(a1 + 944);
  }
  if ( a2 == v8 )
    *(_DWORD *)(a1 + 1016) = -1;
  v9 = *(unsigned int **)(a3 + 24);
  v10 = (unsigned int *)(a3 + 8);
  result = sub_3C7A50(v9, (unsigned int *)(a3 + 8), v5);
  if ( (_BYTE)result && v9 != v10 )
  {
    do
    {
      sub_3B4E00(a2, (__int64)(a2 + 1), v9[8]);
      if ( v13 )
      {
        v12 = operator new(0x30u);
        *(_QWORD *)(v12 + 32) = *((_QWORD *)v9 + 4);
        *(_DWORD *)(v12 + 40) = v9[10];
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
      }
      result = std::_Rb_tree_increment();
      v9 = (unsigned int *)result;
    }
    while ( v10 != (unsigned int *)result );
  }
  return result;
}

