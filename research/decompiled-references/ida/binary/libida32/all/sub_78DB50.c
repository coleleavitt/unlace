__int64 __fastcall sub_78DB50(_QWORD *a1, __int64 a2, const char *a3)
{
  const char *v4; // r12
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // r12

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && strcmp(*(const char **)(a1[4] + 32LL), a3) < 0 )
      return 0;
    return sub_78DA90((__int64)a1, a3);
  }
  v4 = *(const char **)(a2 + 32);
  if ( strcmp(a3, v4) < 0 )
  {
    result = a2;
    if ( a1[3] == a2 )
      return result;
    v7 = std::_Rb_tree_decrement();
    if ( strcmp(*(const char **)(v7 + 32), a3) < 0 )
    {
      result = a2;
      if ( !*(_QWORD *)(v7 + 24) )
        return 0;
      return result;
    }
    return sub_78DA90((__int64)a1, a3);
  }
  v5 = strcmp(v4, a3);
  result = a2;
  if ( v5 >= 0 )
    return result;
  if ( a1[4] == a2 )
    return 0;
  v8 = std::_Rb_tree_increment();
  if ( strcmp(a3, *(const char **)(v8 + 32)) >= 0 )
    return sub_78DA90((__int64)a1, a3);
  result = v8;
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}

