unsigned __int64 *__fastcall sub_F80AD0(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // al
  unsigned __int64 *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // al
  __int64 v14; // rbx
  unsigned __int64 v15; // rax

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_F80A00((__int64)a1, a3);
    v14 = a1[4];
    v15 = *(_QWORD *)(v14 + 32);
    if ( !(*a3 == v15 ? sub_F79B80(v14 + 32, (__int64)a3) : *a3 > v15) )
      return sub_F80A00((__int64)a1, a3);
    return nullptr;
  }
  v4 = a2;
  v5 = *a3;
  if ( a2[4] == *a3 )
  {
    if ( !sub_F79B80((__int64)a3, (__int64)(a2 + 4)) )
    {
      a2 = a3;
      if ( sub_F79B80(v10, (__int64)a3) )
      {
LABEL_5:
        if ( (unsigned __int64 *)a1[4] != v4 )
        {
          v6 = std::_Rb_tree_increment(v4, (const char *)a2);
          v7 = v6;
          if ( v5 == *(_QWORD *)(v6 + 32) )
            v8 = sub_F79B80((__int64)a3, v6 + 32);
          else
            v8 = v5 < *(_QWORD *)(v6 + 32);
          if ( v8 )
          {
            result = nullptr;
            if ( v4[3] )
              return (unsigned __int64 *)v7;
            return result;
          }
          return sub_F80A00((__int64)a1, a3);
        }
        return nullptr;
      }
      return v4;
    }
  }
  else if ( a2[4] <= *a3 )
  {
    if ( a2[4] < *a3 )
      goto LABEL_5;
    return v4;
  }
  result = a2;
  if ( (unsigned __int64 *)a1[3] == a2 )
    return result;
  v11 = std::_Rb_tree_decrement(a2);
  v12 = v11;
  if ( v5 == *(_QWORD *)(v11 + 32) )
    v13 = sub_F79B80(v11 + 32, (__int64)a3);
  else
    v13 = v5 > *(_QWORD *)(v11 + 32);
  if ( !v13 )
    return sub_F80A00((__int64)a1, a3);
  result = nullptr;
  if ( *(_QWORD *)(v12 + 24) )
    return a2;
  return result;
}
