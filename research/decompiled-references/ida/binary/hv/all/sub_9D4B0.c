_QWORD *__fastcall sub_9D4B0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  const char *v7; // r12
  const char *v8; // r14
  __int64 v9; // rax
  const char *v10; // rsi
  _QWORD *v11; // r12
  _QWORD *result; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_9D360((__int64)a1, a3);
    v15 = a1[4];
    v16 = *(_QWORD *)(v15 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v17 = *(const char **)a3;
      v18 = haystack;
      if ( !v16 )
        goto LABEL_23;
    }
    else
    {
      v17 = haystack;
      if ( !v16 )
        return sub_9D360((__int64)a1, a3);
    }
    v18 = *(const char **)(v15 + 32);
LABEL_23:
    if ( strcmp(v18, v17) < 0 )
      return nullptr;
    return sub_9D360((__int64)a1, a3);
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( !a2[5] )
  {
    v7 = haystack;
    if ( !v5 )
      return a2;
LABEL_4:
    v8 = *(const char **)a3;
    if ( strcmp(*(const char **)a3, v7) >= 0 )
      goto LABEL_5;
LABEL_13:
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    v13 = std::_Rb_tree_decrement();
    v14 = v13;
    if ( *(_QWORD *)(v13 + 40) )
    {
      if ( strcmp(*(const char **)(v13 + 32), v8) < 0 )
      {
LABEL_16:
        result = a2;
        if ( !*(_QWORD *)(v14 + 24) )
          return nullptr;
        return result;
      }
    }
    else if ( strcmp(haystack, v8) < 0 )
    {
      goto LABEL_16;
    }
    return sub_9D360((__int64)a1, a3);
  }
  v7 = (const char *)a2[4];
  if ( v5 )
    goto LABEL_4;
  v8 = haystack;
  if ( *v7 )
    goto LABEL_13;
LABEL_5:
  if ( strcmp(v7, v8) >= 0 )
    return a2;
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  v9 = std::_Rb_tree_increment();
  v10 = haystack;
  v11 = (_QWORD *)v9;
  if ( *(_QWORD *)(v9 + 40) )
    v10 = *(const char **)(v9 + 32);
  if ( strcmp(v8, v10) >= 0 )
    return sub_9D360((__int64)a1, a3);
  result = v11;
  if ( !a2[3] )
    return nullptr;
  return result;
}

