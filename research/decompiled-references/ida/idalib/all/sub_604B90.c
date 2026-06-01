_QWORD *__fastcall sub_604B90(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  const char *v7; // r12
  const char *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  const char *v12; // rsi
  _QWORD *v13; // r12
  _QWORD *result; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_604A40((__int64)a1, a3);
    v17 = a1[4];
    v18 = *(_QWORD *)(v17 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v19 = *(const char **)a3;
      v20 = haystack;
      if ( !v18 )
        goto LABEL_23;
    }
    else
    {
      v19 = haystack;
      if ( !v18 )
        return sub_604A40((__int64)a1, a3);
    }
    v20 = *(const char **)(v17 + 32);
LABEL_23:
    if ( strcmp(v20, v19) < 0 )
      return nullptr;
    return sub_604A40((__int64)a1, a3);
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
    v15 = std::_Rb_tree_decrement(a2);
    v16 = v15;
    if ( *(_QWORD *)(v15 + 40) )
    {
      if ( strcmp(*(const char **)(v15 + 32), v8) < 0 )
      {
LABEL_16:
        result = a2;
        if ( !*(_QWORD *)(v16 + 24) )
          return nullptr;
        return result;
      }
    }
    else if ( strcmp(haystack, v8) < 0 )
    {
      goto LABEL_16;
    }
    return sub_604A40((__int64)a1, a3);
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
  v11 = std::_Rb_tree_increment(a2, v8, v9, v10);
  v12 = haystack;
  v13 = (_QWORD *)v11;
  if ( *(_QWORD *)(v11 + 40) )
    v12 = *(const char **)(v11 + 32);
  if ( strcmp(v8, v12) >= 0 )
    return sub_604A40((__int64)a1, a3);
  result = v13;
  if ( !a2[3] )
    return nullptr;
  return result;
}
