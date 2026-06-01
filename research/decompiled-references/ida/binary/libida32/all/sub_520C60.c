__int64 __fastcall sub_520C60(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  const char *v11; // r13
  const char *v12; // r15
  int v13; // ecx

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_520B70((__int64)a1, (unsigned __int64 *)a3);
    v10 = a1[4];
    if ( *(_QWORD *)(v10 + 32) >= *(_QWORD *)a3
      && (*(_QWORD *)(v10 + 32) != *(_QWORD *)a3 || strcmp(*(const char **)(v10 + 40), *(const char **)(a3 + 8)) >= 0) )
    {
      return sub_520B70((__int64)a1, (unsigned __int64 *)a3);
    }
    return 0;
  }
  v4 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 < a2[4] )
    goto LABEL_3;
  if ( *(_QWORD *)a3 != a2[4] )
  {
LABEL_9:
    if ( (_QWORD *)a1[4] != a2 )
    {
      v8 = std::_Rb_tree_increment();
      v9 = v8;
      if ( v4 >= *(_QWORD *)(v8 + 32)
        && (v4 != *(_QWORD *)(v8 + 32) || strcmp(*(const char **)(a3 + 8), *(const char **)(v8 + 40)) >= 0) )
      {
        return sub_520B70((__int64)a1, (unsigned __int64 *)a3);
      }
      result = v9;
      if ( a2[3] )
        return result;
    }
    return 0;
  }
  v11 = (const char *)a2[5];
  v12 = *(const char **)(a3 + 8);
  if ( strcmp(v12, v11) >= 0 )
  {
    v13 = strcmp(v11, v12);
    result = (__int64)a2;
    if ( v13 >= 0 )
      return result;
    goto LABEL_9;
  }
LABEL_3:
  result = (__int64)a2;
  if ( (_QWORD *)a1[3] == a2 )
    return result;
  v6 = std::_Rb_tree_decrement();
  v7 = *(_QWORD *)(v6 + 32);
  if ( v7 >= v4 && (v4 != v7 || strcmp(*(const char **)(v6 + 40), *(const char **)(a3 + 8)) >= 0) )
    return sub_520B70((__int64)a1, (unsigned __int64 *)a3);
  result = (__int64)a2;
  if ( !*(_QWORD *)(v6 + 24) )
    return 0;
  return result;
}

