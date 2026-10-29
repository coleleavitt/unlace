_QWORD *__fastcall sub_40CE50(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax

  if ( a2 == a1 + 8 )
  {
    if ( a1[12] )
    {
      v12 = a1[11];
      v13 = *(_QWORD *)(v12 + 32);
      if ( v13 < a3 || a3 >= v13 && *(_QWORD *)(v12 + 40) < a4 )
        return nullptr;
    }
    return sub_40CDA0((__int64)a1, a3, a4);
  }
  v6 = a2[4];
  if ( a3 < v6 )
  {
LABEL_5:
    result = a2;
    if ( (_QWORD *)a1[10] == a2 )
      return result;
    v9 = (_QWORD *)std::_Rb_tree_decrement(a2);
    v10 = v9[4];
    if ( v10 < a3 || a3 >= v10 && v9[5] < a4 )
    {
      result = a2;
      if ( v9[3] )
        return result;
      return nullptr;
    }
    return sub_40CDA0((__int64)a1, a3, a4);
  }
  if ( v6 >= a3 )
  {
    v7 = a2[5];
    if ( a4 < v7 )
      goto LABEL_5;
    if ( v7 >= a4 )
      return a2;
  }
  if ( (_QWORD *)a1[11] == a2 )
    return nullptr;
  result = (_QWORD *)std::_Rb_tree_increment(a2, a2, a3, a4);
  v11 = result[4];
  if ( a3 >= v11 && (v11 < a3 || a4 >= result[5]) )
    return sub_40CDA0((__int64)a1, a3, a4);
  if ( !a2[3] )
    return nullptr;
  return result;
}
