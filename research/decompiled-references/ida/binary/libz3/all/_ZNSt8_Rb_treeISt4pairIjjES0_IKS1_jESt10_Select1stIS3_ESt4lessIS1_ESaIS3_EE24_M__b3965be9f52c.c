__int64 __fastcall std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
        __int64 a1,
        unsigned int *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx
  __int64 v4; // rax
  char v5; // r8
  unsigned int v6; // edx
  bool v7; // cf
  __int64 v9; // rax
  unsigned int v10; // edx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_14;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v2 + 32);
    if ( v3 == v6 )
      break;
    if ( v3 >= v6 )
      goto LABEL_8;
LABEL_4:
    v4 = *(_QWORD *)(v2 + 16);
    v5 = 1;
    if ( !v4 )
      goto LABEL_9;
LABEL_5:
    v2 = v4;
  }
  if ( a2[1] < *(_DWORD *)(v2 + 36) )
    goto LABEL_4;
LABEL_8:
  v4 = *(_QWORD *)(v2 + 24);
  v5 = 0;
  if ( v4 )
    goto LABEL_5;
LABEL_9:
  if ( !v5 )
  {
    v7 = v6 < v3;
    if ( v6 != v3 )
      goto LABEL_11;
LABEL_16:
    if ( *(_DWORD *)(v2 + 36) >= a2[1] )
      return v2;
    return 0;
  }
LABEL_14:
  if ( v2 == *(_QWORD *)(a1 + 24) )
    return 0;
  v9 = std::_Rb_tree_decrement();
  v10 = *(_DWORD *)(v9 + 32);
  v2 = v9;
  v7 = v10 < *a2;
  if ( v10 == *a2 )
    goto LABEL_16;
LABEL_11:
  if ( v7 )
    return 0;
  return v2;
}

