__int64 __fastcall std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int v4; // r13d
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
               a1,
               a3);
    v11 = a1[4];
    v12 = *a3;
    v13 = *(_DWORD *)(v11 + 32);
    if ( v12 == v13 )
    {
      if ( *(_DWORD *)(v11 + 36) >= a3[1] )
        return std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
                 a1,
                 a3);
    }
    else if ( v13 >= v12 )
    {
      return std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
               a1,
               a3);
    }
    return 0;
  }
  v4 = *a3;
  if ( *a3 == *(_DWORD *)(a2 + 32) )
  {
    v7 = a3[1];
    v8 = *(_DWORD *)(a2 + 36);
    if ( v7 >= v8 )
    {
      result = a2;
      if ( v8 < v7 )
      {
LABEL_4:
        if ( a1[4] == a2 )
          return 0;
        result = std::_Rb_tree_increment();
        if ( v4 == *(_DWORD *)(result + 32) )
        {
          if ( a3[1] < *(_DWORD *)(result + 36) )
          {
LABEL_7:
            if ( *(_QWORD *)(a2 + 24) )
              return result;
            return 0;
          }
        }
        else if ( v4 < *(_DWORD *)(result + 32) )
        {
          goto LABEL_7;
        }
        return std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
                 a1,
                 a3);
      }
      return result;
    }
  }
  else if ( v4 >= *(_DWORD *)(a2 + 32) )
  {
    goto LABEL_4;
  }
  result = a2;
  if ( a1[3] != a2 )
  {
    v9 = std::_Rb_tree_decrement();
    v10 = *(_DWORD *)(v9 + 32);
    if ( v4 == v10 )
    {
      if ( *(_DWORD *)(v9 + 36) >= a3[1] )
        return std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
                 a1,
                 a3);
    }
    else if ( v10 >= v4 )
    {
      return std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_unique_pos(
               a1,
               a3);
    }
    result = a2;
    if ( !*(_QWORD *)(v9 + 24) )
      return 0;
  }
  return result;
}

