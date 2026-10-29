const char *__fastcall sub_1721590(_QWORD *a1, const char *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r13
  const char *result; // rax
  __int64 v6; // rax
  bool v7; // zf
  const char *v8; // rdx
  __int64 v9; // rdx

  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( a1[5] && *a3 > *(_QWORD *)(a1[4] + 32LL) )
      return nullptr;
    return (const char *)sub_1721500((__int64)a1, a3);
  }
  v4 = *a3;
  if ( *((_QWORD *)a2 + 4) > *a3 )
  {
    result = (const char *)a1[3];
    if ( result == a2 )
      return result;
    v6 = std::_Rb_tree_decrement(a2);
    if ( *(_QWORD *)(v6 + 32) < v4 )
    {
      v7 = *(_QWORD *)(v6 + 24) == 0;
      result = nullptr;
      if ( !v7 )
        return a2;
      return result;
    }
    return (const char *)sub_1721500((__int64)a1, a3);
  }
  if ( *((_QWORD *)a2 + 4) >= *a3 )
    return a2;
  result = nullptr;
  v8 = (const char *)a1[4];
  if ( v8 != a2 )
  {
    v9 = std::_Rb_tree_increment(a2, a2, v8);
    if ( *(_QWORD *)(v9 + 32) <= v4 )
      return (const char *)sub_1721500((__int64)a1, a3);
    result = nullptr;
    if ( *((_QWORD *)a2 + 3) )
      return (const char *)v9;
  }
  return result;
}
