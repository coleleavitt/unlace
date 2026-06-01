_QWORD *__fastcall sub_F5CD90(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  bool v7; // al
  _QWORD *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // al
  __int64 v13; // rbx
  unsigned __int64 v14; // rax

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_F5CCC0((__int64)a1, a3);
    v13 = a1[4];
    v14 = *(_QWORD *)(v13 + 32);
    if ( !(*a3 == v14 ? sub_F55E40(v13 + 32, (__int64)a3) : *a3 > v14) )
      return sub_F5CCC0((__int64)a1, a3);
    return nullptr;
  }
  v4 = *a3;
  if ( a2[4] == *a3 )
  {
    if ( !sub_F55E40((__int64)a3, (__int64)(a2 + 4)) )
    {
      if ( sub_F55E40(v9, (__int64)a3) )
      {
LABEL_5:
        if ( (_QWORD *)a1[4] != a2 )
        {
          v5 = std::_Rb_tree_increment();
          v6 = v5;
          if ( v4 == *(_QWORD *)(v5 + 32) )
            v7 = sub_F55E40((__int64)a3, v5 + 32);
          else
            v7 = v4 < *(_QWORD *)(v5 + 32);
          if ( v7 )
          {
            result = nullptr;
            if ( a2[3] )
              return (_QWORD *)v6;
            return result;
          }
          return sub_F5CCC0((__int64)a1, a3);
        }
        return nullptr;
      }
      return a2;
    }
  }
  else if ( a2[4] <= *a3 )
  {
    if ( a2[4] < *a3 )
      goto LABEL_5;
    return a2;
  }
  result = a2;
  if ( (_QWORD *)a1[3] == a2 )
    return result;
  v10 = std::_Rb_tree_decrement();
  v11 = v10;
  if ( v4 == *(_QWORD *)(v10 + 32) )
    v12 = sub_F55E40(v10 + 32, (__int64)a3);
  else
    v12 = v4 > *(_QWORD *)(v10 + 32);
  if ( !v12 )
    return sub_F5CCC0((__int64)a1, a3);
  result = nullptr;
  if ( *(_QWORD *)(v11 + 24) )
    return a2;
  return result;
}

