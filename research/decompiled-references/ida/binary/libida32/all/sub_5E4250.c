_QWORD *__fastcall sub_5E4250(const char *src)
{
  char *v1; // rbx
  __int64 current_config; // rax
  __int64 v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // r12
  const char *v9; // r14
  _QWORD *v10; // r13
  _QWORD *v11; // rbp
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const char *v18; // rdi
  const char *v19; // rsi
  __int64 v21; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v1 = (char *)src;
  current_config = get_current_config();
  s2 = nullptr;
  v3 = current_config;
  v23 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    s2 = (char *)qvector_reserve(&s2, 0, v4 + 1, 1);
    *(_QWORD *)&v23 = v5;
    memmove(s2, src, v6);
    s2[v6] = 0;
    v1 = s2;
    if ( (unsigned __int64)v23 > 1 )
    {
      qstrlwr(s2);
      v1 = s2;
    }
    v7 = *(_QWORD **)(v3 + 128);
    v21 = v3 + 120;
    if ( !v7 )
      goto LABEL_23;
  }
  else
  {
    v7 = *(_QWORD **)(current_config + 128);
    v21 = current_config + 120;
    if ( !v7 )
      return v7;
  }
  v8 = v23;
  v9 = haystack;
  v10 = (_QWORD *)v21;
  if ( (_QWORD)v23 )
    v9 = v1;
  while ( 1 )
  {
    v16 = v7[5];
    if ( !v8 )
      break;
    if ( v16 )
      goto LABEL_17;
    v11 = v7;
    v12 = v1;
    v13 = haystack;
LABEL_10:
    v14 = strcmp(v13, v12);
    v15 = (_QWORD *)v7[2];
    v7 = (_QWORD *)v7[3];
    if ( v14 >= 0 )
    {
      v10 = v11;
      v7 = v15;
    }
    if ( !v7 )
      goto LABEL_19;
  }
  if ( v16 )
  {
LABEL_17:
    v13 = (const char *)v7[4];
    v11 = v7;
    v12 = v9;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v17 = v7[2];
    if ( !v17 )
      break;
    v10 = v7;
    v7 = (_QWORD *)v7[2];
    if ( *(_QWORD *)(v17 + 40) )
      goto LABEL_17;
  }
  v10 = v7;
LABEL_19:
  v7 = nullptr;
  if ( (_QWORD *)v21 != v10 )
  {
    if ( v10[5] )
    {
      v18 = haystack;
      v19 = (const char *)v10[4];
      if ( v8 )
        v18 = v1;
    }
    else
    {
      v18 = v1;
      v19 = haystack;
      if ( !v8 )
        goto LABEL_22;
    }
    if ( strcmp(v18, v19) >= 0 )
LABEL_22:
      v7 = v10 + 7;
    else
      v7 = nullptr;
  }
LABEL_23:
  if ( v1 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v1);
  }
  return v7;
}

