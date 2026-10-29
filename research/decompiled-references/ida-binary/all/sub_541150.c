_QWORD *__fastcall sub_541150(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  _QWORD *result; // rax
  _QWORD *v11; // r15
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-40h]

  v6 = a3;
  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_53F130((__int64)a1, v6, a3, a4, a5, a6);
    v14 = a1[4];
    v15 = QT::QtPrivate::compareStrings(
            *(_QWORD *)(v14 + 48),
            *(_QWORD *)(v14 + 40),
            *(_QWORD *)(a3 + 16),
            *(_QWORD *)(a3 + 8),
            1,
            a6);
    a3 = v14;
    a4 = v15;
    result = nullptr;
    if ( (int)a4 >= 0 )
      return sub_53F130((__int64)a1, v6, a3, a4, a5, a6);
  }
  else
  {
    v7 = a2[5];
    v8 = *(_QWORD *)(a3 + 8);
    v9 = *(_QWORD *)(a3 + 16);
    v16 = a2[6];
    if ( (int)QT::QtPrivate::compareStrings(v9, v8, v16, v7, 1, v16) < 0 )
    {
      result = (_QWORD *)a1[3];
      if ( result == a2 )
        return result;
      v11 = (_QWORD *)std::_Rb_tree_decrement(a2);
      if ( (int)QT::QtPrivate::compareStrings(v11[6], v11[5], v9, v8, 1, v11[6]) < 0 )
      {
        result = a2;
        if ( !v11[3] )
          return nullptr;
        return result;
      }
      return sub_53F130((__int64)a1, v6, a3, a4, a5, a6);
    }
    if ( (int)QT::QtPrivate::compareStrings(v16, v7, v9, v8, 1, v16) >= 0 )
      return a2;
    result = nullptr;
    if ( (_QWORD *)a1[4] != a2 )
    {
      v12 = std::_Rb_tree_increment(a2);
      if ( (int)QT::QtPrivate::compareStrings(v9, v8, *(_QWORD *)(v12 + 48), *(_QWORD *)(v12 + 40), 1, v13) >= 0 )
        return sub_53F130((__int64)a1, v6, a3, a4, a5, a6);
      result = (_QWORD *)v12;
      if ( !a2[3] )
        return nullptr;
    }
  }
  return result;
}
