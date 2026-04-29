_QWORD *__fastcall sub_3E220(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _QWORD *result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_3E160((__int64)a1, a3);
    v13 = a1[4];
    v14 = *a3;
    v15 = *(_QWORD *)(v13 + 32);
    if ( *a3 < v15 || v15 == v14 && *(_QWORD *)(v13 + 40) >= a3[1] )
      return sub_3E160((__int64)a1, a3);
    return 0;
  }
  v4 = *a3;
  v5 = a2[4];
  if ( v5 >= *a3 )
  {
    if ( v4 == v5 )
    {
      v9 = a3[1];
      v10 = a2[5];
      if ( v9 >= v10 )
      {
        result = a2;
        if ( v10 >= v9 )
          return result;
        goto LABEL_3;
      }
    }
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    v11 = std::_Rb_tree_decrement();
    v12 = v11;
    if ( v4 < *(_QWORD *)(v11 + 32) || v4 == *(_QWORD *)(v11 + 32) && *(_QWORD *)(v11 + 40) >= a3[1] )
      return sub_3E160((__int64)a1, a3);
    result = a2;
    if ( *(_QWORD *)(v12 + 24) )
      return result;
    return 0;
  }
LABEL_3:
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  result = (_QWORD *)std::_Rb_tree_increment();
  v8 = result[4];
  if ( v8 < v4 || v4 == v8 && a3[1] >= result[5] )
    return sub_3E160((__int64)a1, a3);
  if ( !a2[3] )
    return 0;
  return result;
}
