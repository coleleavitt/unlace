__int64 __fastcall sub_448070(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  const char *v7; // r14
  const char *v8; // r13
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  const char *v18; // rsi
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // eax

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_447F40((__int64)a1, a3);
    v21 = a1[4];
    v22 = *(_QWORD *)(v21 + 40);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v23 = *(const char **)a3;
      v24 = &s1;
      if ( !v22 )
        goto LABEL_31;
    }
    else
    {
      v23 = &s1;
      if ( !v22 )
        goto LABEL_32;
    }
    v24 = *(const char **)(v21 + 32);
LABEL_31:
    v25 = strcmp(v24, v23);
    if ( v25 )
    {
      v26 = v25 >> 31;
LABEL_33:
      if ( !(_BYTE)v26 )
        return sub_447F40((__int64)a1, a3);
      return 0;
    }
LABEL_32:
    LOBYTE(v26) = *(_DWORD *)(v21 + 56) < *(_DWORD *)(a3 + 24);
    goto LABEL_33;
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v7 = *(const char **)(a2 + 32);
    v8 = &s1;
    if ( !v5 )
    {
      v9 = strcmp(&s1, *(const char **)(a2 + 32));
      if ( v9 )
        goto LABEL_17;
LABEL_7:
      if ( *(_DWORD *)(a3 + 24) < *(_DWORD *)(a2 + 56) )
        goto LABEL_8;
      goto LABEL_18;
    }
  }
  else
  {
    v7 = &s1;
    if ( !v5 )
    {
      v8 = &s1;
      goto LABEL_7;
    }
  }
  v8 = *(const char **)a3;
  v9 = strcmp(*(const char **)a3, v7);
  if ( !v9 )
    goto LABEL_7;
LABEL_17:
  if ( v9 >= 0 )
  {
LABEL_18:
    v15 = strcmp(v7, v8);
    if ( v15 )
      v16 = v15 >> 31;
    else
      LOBYTE(v16) = *(_DWORD *)(a2 + 56) < *(_DWORD *)(a3 + 24);
    if ( !(_BYTE)v16 )
      return a2;
    if ( a1[4] != a2 )
    {
      v17 = std::_Rb_tree_increment(a2);
      v18 = &s1;
      v19 = v17;
      if ( *(_QWORD *)(v17 + 40) )
        v18 = *(const char **)(v17 + 32);
      v20 = strcmp(v8, v18);
      if ( v20 )
      {
        if ( v20 >= 0 )
          return sub_447F40((__int64)a1, a3);
      }
      else if ( *(_DWORD *)(a3 + 24) >= *(_DWORD *)(v19 + 56) )
      {
        return sub_447F40((__int64)a1, a3);
      }
      result = v19;
      if ( *(_QWORD *)(a2 + 24) )
        return result;
    }
    return 0;
  }
LABEL_8:
  result = a2;
  if ( a1[3] == a2 )
    return result;
  v11 = std::_Rb_tree_decrement(a2);
  v12 = v11;
  if ( *(_QWORD *)(v11 + 40) )
  {
    v13 = strcmp(*(const char **)(v11 + 32), v8);
    if ( !v13 )
      goto LABEL_11;
  }
  else
  {
    v13 = strcmp(&s1, v8);
    if ( !v13 )
    {
LABEL_11:
      LOBYTE(v14) = *(_DWORD *)(v12 + 56) < *(_DWORD *)(a3 + 24);
      goto LABEL_12;
    }
  }
  v14 = v13 >> 31;
LABEL_12:
  if ( !(_BYTE)v14 )
    return sub_447F40((__int64)a1, a3);
  result = a2;
  if ( !*(_QWORD *)(v12 + 24) )
    return 0;
  return result;
}
