__int64 __fastcall sub_539930(_QWORD *a1, const char *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  const char *v13; // r13
  const char *v14; // r15
  unsigned int v15; // eax

  v4 = a3;
  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( !a1[5] )
      return sub_5396D0((__int64)a1, v4);
    v12 = a1[4];
    if ( *(_QWORD *)(v12 + 32) >= *a3
      && (*(_QWORD *)(v12 + 32) != *a3 || strcmp(*(const char **)(v12 + 40), (const char *)a3[1]) >= 0) )
    {
      return sub_5396D0((__int64)a1, v4);
    }
    return 0;
  }
  v5 = *a3;
  v6 = (__int64)a2;
  if ( *a3 < *((_QWORD *)a2 + 4) )
    goto LABEL_3;
  if ( *a3 != *((_QWORD *)a2 + 4) )
  {
LABEL_9:
    if ( a1[4] != v6 )
    {
      v10 = std::_Rb_tree_increment(v6, a2, a3, a4);
      v11 = v10;
      if ( v5 >= *(_QWORD *)(v10 + 32)
        && (v5 != *(_QWORD *)(v10 + 32) || strcmp((const char *)v4[1], *(const char **)(v10 + 40)) >= 0) )
      {
        return sub_5396D0((__int64)a1, v4);
      }
      result = v11;
      if ( *(_QWORD *)(v6 + 24) )
        return result;
    }
    return 0;
  }
  v13 = *((const char **)a2 + 5);
  v14 = (const char *)a3[1];
  if ( strcmp(v14, v13) >= 0 )
  {
    a2 = v14;
    v15 = strcmp(v13, v14);
    a3 = nullptr;
    a4 = v15;
    result = v6;
    if ( (int)a4 >= 0 )
      return result;
    goto LABEL_9;
  }
LABEL_3:
  result = (__int64)a2;
  if ( (const char *)a1[3] == a2 )
    return result;
  v8 = std::_Rb_tree_decrement(a2);
  v9 = *(_QWORD *)(v8 + 32);
  if ( v9 >= v5 && (v5 != v9 || strcmp(*(const char **)(v8 + 40), (const char *)v4[1]) >= 0) )
    return sub_5396D0((__int64)a1, v4);
  result = (__int64)a2;
  if ( !*(_QWORD *)(v8 + 24) )
    return 0;
  return result;
}
