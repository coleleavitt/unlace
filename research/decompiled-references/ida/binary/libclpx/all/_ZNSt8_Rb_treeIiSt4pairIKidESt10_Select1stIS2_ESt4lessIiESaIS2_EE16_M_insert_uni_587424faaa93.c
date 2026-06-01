__int64 __fastcall std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
        _QWORD *a1,
        int *a2)
{
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // rax
  char v6; // r9
  int v7; // edi
  __int64 v9; // rbx
  int v10; // eax

  v3 = a1[2];
  if ( !v3 )
  {
    v3 = (__int64)(a1 + 1);
    goto LABEL_11;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v3 + 32);
    if ( v4 >= v7 )
      break;
    v5 = *(_QWORD *)(v3 + 16);
    v6 = 1;
    if ( !v5 )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  v6 = 0;
  if ( v5 )
    goto LABEL_4;
LABEL_7:
  if ( !v6 )
  {
    if ( v4 <= v7 )
      return v3;
LABEL_13:
    v9 = operator new(0x30u);
    v10 = *a2;
    *(_QWORD *)(v9 + 40) = *((_QWORD *)a2 + 1);
    *(_DWORD *)(v9 + 32) = v10;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v9;
  }
LABEL_11:
  if ( a1[3] == v3 )
    goto LABEL_13;
  v3 = std::_Rb_tree_decrement();
  if ( *a2 > *(_DWORD *)(v3 + 32) )
    goto LABEL_13;
  return v3;
}

