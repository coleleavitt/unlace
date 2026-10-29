const char *__fastcall prev_idcv_attr(__int64 a1, const char *a2)
{
  __int64 v2; // r14
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbp
  _QWORD *v7; // r13
  _QWORD *v8; // r15
  char *v9; // r14
  __int64 v10; // r12
  bool v11; // al
  bool v12; // zf
  const char *v13; // rax
  _QWORD *v14; // rbp
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *v21; // rbp
  __int64 v22; // rax
  const char *v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 8);
  s2 = nullptr;
  v27 = 0;
  v25 = v2;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    s2 = (char *)qvector_reserve(&s2, 0, v4 + 1, 1);
    *(_QWORD *)&v27 = v5;
    v7 = (_QWORD *)(v2 + 8);
    memmove(s2, a2, v6);
    s2[v6] = 0;
    v8 = *(_QWORD **)(v2 + 16);
    v9 = s2;
    if ( !v8 )
      goto LABEL_20;
    v10 = v27;
    v11 = (_QWORD)v27 == 0;
  }
  else
  {
    v9 = nullptr;
    v10 = 0;
    v8 = *(_QWORD **)(v25 + 16);
    v7 = (_QWORD *)(v25 + 8);
    v11 = 1;
    if ( !v8 )
      goto LABEL_22;
  }
  v12 = !v11;
  v13 = haystack;
  if ( v12 )
    v13 = v9;
  v24 = v13;
  while ( 1 )
  {
    v19 = v8[5];
    if ( !v10 )
      break;
    if ( v19 )
      goto LABEL_18;
    v14 = v8;
    v15 = v9;
    v16 = haystack;
LABEL_11:
    v17 = strcmp(v16, v15);
    v18 = (_QWORD *)v8[2];
    v8 = (_QWORD *)v8[3];
    if ( v17 >= 0 )
    {
      v7 = v14;
      v8 = v18;
    }
    if ( !v8 )
      goto LABEL_20;
  }
  if ( v19 )
  {
LABEL_18:
    v16 = (const char *)v8[4];
    v15 = v24;
    v14 = v8;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v20 = v8[2];
    if ( !v20 )
      break;
    v7 = v8;
    v8 = (_QWORD *)v8[2];
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_18;
  }
  v7 = v8;
LABEL_20:
  if ( v9 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v9);
  }
LABEL_22:
  if ( *(_QWORD **)(v25 + 24) == v7 )
    return nullptr;
  v21 = haystack;
  v22 = std::_Rb_tree_decrement();
  if ( *(_QWORD *)(v22 + 40) )
    v21 = *(const char **)(v22 + 32);
  if ( strcmp(v21, a2) >= 0 )
    return nullptr;
  return v21;
}

