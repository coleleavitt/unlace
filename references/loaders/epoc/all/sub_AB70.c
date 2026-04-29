__int64 __fastcall sub_AB70(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  unsigned int v6; // eax
  const char *v8; // r15
  const char *v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rax
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 result; // rax
  const char *v16; // r14
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rax
  const char *v26; // rsi
  const char *v27; // rdi

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_AA30((__int64)a1, a3);
    v22 = a1[4];
    v23 = *(_DWORD *)(a3 + 32);
    v24 = *(_DWORD *)(v22 + 64);
    if ( v24 < v23 )
      return 0;
    if ( v23 < v24 )
      return sub_AA30((__int64)a1, a3);
    v25 = *(_QWORD *)(v22 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v26 = *(const char **)a3;
      v27 = s1;
      if ( !v25 )
        goto LABEL_33;
    }
    else
    {
      v26 = s1;
      if ( !v25 )
        return sub_AA30((__int64)a1, a3);
    }
    v27 = *(const char **)(v22 + 32);
LABEL_33:
    if ( strcmp(v27, v26) >= 0 )
      return sub_AA30((__int64)a1, a3);
    return 0;
  }
  v5 = *(_DWORD *)(a3 + 32);
  v6 = *(_DWORD *)(a2 + 64);
  if ( v5 < v6 )
    goto LABEL_18;
  if ( v6 < v5 )
    goto LABEL_8;
  if ( *(_QWORD *)(a2 + 40) )
  {
    v16 = *(const char **)(a2 + 32);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v8 = *(const char **)a3;
      if ( strcmp(*(const char **)a3, *(const char **)(a2 + 32)) < 0 )
      {
LABEL_18:
        result = a2;
        if ( a1[3] == a2 )
          return result;
        v17 = std::_Rb_tree_decrement(a2);
        v18 = *(_DWORD *)(v17 + 64);
        if ( v18 < v5 )
          goto LABEL_24;
        if ( v5 < v18 )
          return sub_AA30((__int64)a1, a3);
        v19 = *(_QWORD *)(v17 + 40);
        if ( *(_QWORD *)(a3 + 8) )
        {
          v20 = *(const char **)a3;
          v21 = s1;
          if ( !v19 )
            goto LABEL_23;
        }
        else
        {
          v20 = s1;
          if ( !v19 )
            return sub_AA30((__int64)a1, a3);
        }
        v21 = *(const char **)(v17 + 32);
LABEL_23:
        if ( strcmp(v21, v20) >= 0 )
          return sub_AA30((__int64)a1, a3);
LABEL_24:
        result = a2;
        if ( !*(_QWORD *)(v17 + 24) )
          return 0;
        return result;
      }
    }
    else
    {
      v8 = s1;
      if ( *v16 )
        goto LABEL_18;
    }
    v9 = v16;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(a3 + 8) )
    return a2;
  v8 = *(const char **)a3;
  v9 = s1;
LABEL_7:
  if ( strcmp(v9, v8) >= 0 )
    return a2;
LABEL_8:
  if ( a1[4] == a2 )
    return 0;
  v10 = std::_Rb_tree_increment(a2);
  v11 = *(_DWORD *)(v10 + 64);
  if ( v5 < v11 )
    goto LABEL_40;
  if ( v11 < v5 )
    return sub_AA30((__int64)a1, a3);
  v12 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(v10 + 40) )
  {
    v13 = *(const char **)(v10 + 32);
    v14 = s1;
    if ( !v12 )
      goto LABEL_14;
  }
  else
  {
    v13 = s1;
    if ( !v12 )
      return sub_AA30((__int64)a1, a3);
  }
  v14 = *(const char **)a3;
LABEL_14:
  if ( strcmp(v14, v13) >= 0 )
    return sub_AA30((__int64)a1, a3);
LABEL_40:
  result = v10;
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}
