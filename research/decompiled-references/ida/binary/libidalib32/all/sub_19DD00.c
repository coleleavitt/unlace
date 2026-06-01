_QWORD *__fastcall sub_19DD00(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *result; // rax
  const char *v8; // r12
  const char *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // r12
  const char *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  const char *v19; // rdi

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_19DBA0((__int64)a1, a3);
    v13 = a1[4];
    v14 = *(_QWORD *)(v13 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v15 = *(const char **)a3;
      if ( !v14 )
      {
        v16 = s1;
LABEL_18:
        if ( strcmp(v16, v15) < 0 )
          return nullptr;
        return sub_19DBA0((__int64)a1, a3);
      }
    }
    else
    {
      if ( !v14 )
        return sub_19DBA0((__int64)a1, a3);
      v15 = s1;
    }
    v16 = *(const char **)(v13 + 32);
    goto LABEL_18;
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( a2[5] )
  {
    v8 = (const char *)a2[4];
    if ( !v5 )
    {
      v9 = s1;
      if ( !*v8 )
        goto LABEL_8;
LABEL_21:
      result = a2;
      if ( (_QWORD *)a1[3] != a2 )
      {
        v17 = std::_Rb_tree_decrement();
        v18 = v17;
        if ( *(_QWORD *)(v17 + 40) )
          v19 = *(const char **)(v17 + 32);
        else
          v19 = s1;
        if ( strcmp(v19, v9) >= 0 )
          return sub_19DBA0((__int64)a1, a3);
        result = a2;
        if ( !*(_QWORD *)(v18 + 24) )
          return nullptr;
      }
      return result;
    }
  }
  else
  {
    if ( !v5 )
      return a2;
    v8 = s1;
  }
  v9 = *(const char **)a3;
  if ( strcmp(*(const char **)a3, v8) < 0 )
    goto LABEL_21;
LABEL_8:
  if ( strcmp(v8, v9) >= 0 )
    return a2;
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  v10 = std::_Rb_tree_increment();
  v11 = (_QWORD *)v10;
  if ( *(_QWORD *)(v10 + 40) )
    v12 = *(const char **)(v10 + 32);
  else
    v12 = s1;
  if ( strcmp(v9, v12) >= 0 )
    return sub_19DBA0((__int64)a1, a3);
  result = v11;
  if ( !a2[3] )
    return nullptr;
  return result;
}

