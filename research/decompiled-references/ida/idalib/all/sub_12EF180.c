__int64 __fastcall sub_12EF180(_QWORD *a1, _QWORD *a2, const void **a3)
{
  _QWORD *v4; // r13
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdx

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v4 = nullptr;
      if ( sub_9C4B50(a1[4] + 32LL, (__int64)a3) < 0 )
        return (__int64)v4;
    }
    return sub_12EF090((__int64)a1, a3);
  }
  if ( sub_9C4B50((__int64)a3, (__int64)(a2 + 4)) >= 0 )
  {
    v4 = a2;
    if ( sub_9C4B50((__int64)(a2 + 4), (__int64)a3) >= 0 )
      return (__int64)v4;
    if ( (_QWORD *)a1[4] == a2 )
      return 0;
    v8 = std::_Rb_tree_increment(a2, (const char *)a3);
    if ( sub_9C4B50((__int64)a3, v8 + 32) < 0 )
    {
      v9 = 0;
      if ( a2[3] )
        return v8;
      return v9;
    }
    return sub_12EF090((__int64)a1, a3);
  }
  v4 = (_QWORD *)a1[3];
  if ( v4 == a2 )
    return (__int64)v4;
  v6 = std::_Rb_tree_decrement(a2);
  if ( sub_9C4B50(v6 + 32, (__int64)a3) >= 0 )
    return sub_12EF090((__int64)a1, a3);
  v7 = 0;
  if ( *(_QWORD *)(v6 + 24) )
    return (__int64)a2;
  return v7;
}
