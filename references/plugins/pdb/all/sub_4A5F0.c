const char *__fastcall sub_4A5F0(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v10; // rax
  const char *v11; // rbx
  const char *v12; // r12
  const char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  const char *v19; // rsi
  const char *v20; // r12
  const char *result; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rax
  const char *v26; // rsi
  const char *v27; // rdi

  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( !a1[5] )
      return (const char *)sub_4A240((__int64)a1, (const char *)a3, a3, a4, a5);
    v24 = a1[4];
    v25 = *(_QWORD *)(v24 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v26 = *(const char **)a3;
      v27 = src;
      if ( !v25 )
        goto LABEL_23;
    }
    else
    {
      v26 = src;
      if ( !v25 )
        return (const char *)sub_4A240((__int64)a1, (const char *)a3, a3, a4, a5);
    }
    v27 = *(const char **)(v24 + 32);
LABEL_23:
    if ( strcmp(v27, v26) < 0 )
      return nullptr;
    return (const char *)sub_4A240((__int64)a1, (const char *)a3, a3, a4, a5);
  }
  v10 = *(_QWORD *)(a3 + 8);
  v11 = a2;
  if ( !*((_QWORD *)a2 + 5) )
  {
    v12 = src;
    if ( !v10 )
      return v11;
LABEL_4:
    v13 = *(const char **)a3;
    a2 = v12;
    if ( strcmp(*(const char **)a3, v12) >= 0 )
      goto LABEL_5;
LABEL_13:
    result = v11;
    if ( (const char *)a1[3] == v11 )
      return result;
    v22 = std::_Rb_tree_decrement(v11, a2, v11, a4, a5);
    v23 = v22;
    if ( *(_QWORD *)(v22 + 40) )
    {
      if ( strcmp(*(const char **)(v22 + 32), v13) < 0 )
      {
LABEL_16:
        result = v11;
        if ( !*(_QWORD *)(v23 + 24) )
          return nullptr;
        return result;
      }
    }
    else if ( strcmp(src, v13) < 0 )
    {
      goto LABEL_16;
    }
    return (const char *)sub_4A240((__int64)a1, (const char *)a3, a3, a4, a5);
  }
  v12 = *((const char **)a2 + 4);
  if ( v10 )
    goto LABEL_4;
  v13 = src;
  if ( *v12 )
    goto LABEL_13;
LABEL_5:
  if ( strcmp(v12, v13) >= 0 )
    return v11;
  if ( (const char *)a1[4] == v11 )
    return nullptr;
  v18 = std::_Rb_tree_increment(v11, v13, v14, v15, v16, v17, a6, a7, a8);
  v19 = src;
  v20 = (const char *)v18;
  if ( *(_QWORD *)(v18 + 40) )
    v19 = *(const char **)(v18 + 32);
  if ( strcmp(v13, v19) >= 0 )
    return (const char *)sub_4A240((__int64)a1, (const char *)a3, a3, a4, a5);
  result = v20;
  if ( !*((_QWORD *)v11 + 3) )
    return nullptr;
  return result;
}
