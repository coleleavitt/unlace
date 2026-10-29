__int64 __fastcall sub_19BAE0(_QWORD *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // rbp
  size_t v4; // rbx
  _QWORD *v5; // r13
  const char *v6; // r15
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  const char *v9; // rdi
  const char *v10; // rsi
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rdi
  const char *v16; // rsi
  char *s2; // [rsp+20h] [rbp-58h]

  if ( !a2 )
    return 0;
  while ( 2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    s2 = (char *)qvector_reserve();
    memmove(s2, a2, v4);
    s2[v4] = 0;
    v5 = (_QWORD *)a1[5];
    if ( !v5 )
      goto LABEL_26;
    v6 = s2;
    v7 = a1 + 4;
    if ( !v3 )
      v6 = s1;
    while ( 1 )
    {
      v13 = v5[5];
      if ( !v3 )
        break;
      v8 = v5;
      if ( v13 )
        goto LABEL_16;
      v9 = s1;
      v10 = s2;
LABEL_8:
      v11 = strcmp(v9, v10);
      v12 = (_QWORD *)v5[2];
      v5 = (_QWORD *)v5[3];
      if ( v11 >= 0 )
      {
        v7 = v8;
        v5 = v12;
      }
      if ( !v5 )
        goto LABEL_18;
    }
    if ( v13 )
    {
LABEL_15:
      v8 = v5;
LABEL_16:
      v9 = (const char *)v5[4];
      v10 = v6;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v14 = v5[2];
      if ( !v14 )
        break;
      v7 = v5;
      v5 = (_QWORD *)v5[2];
      if ( *(_QWORD *)(v14 + 40) )
        goto LABEL_15;
    }
    v7 = v5;
LABEL_18:
    if ( a1 + 4 == v7 )
      goto LABEL_26;
    if ( v7[5] )
    {
      v15 = s2;
      v16 = (const char *)v7[4];
      if ( !v3 )
        v15 = s1;
LABEL_22:
      if ( strcmp(v15, v16) >= 0 )
        goto LABEL_23;
LABEL_26:
      if ( s2 )
        qfree();
      a1 = (_QWORD *)a1[15];
      if ( !a1 )
        return 0;
      continue;
    }
    break;
  }
  if ( v3 )
  {
    v16 = s1;
    v15 = s2;
    goto LABEL_22;
  }
LABEL_23:
  if ( s2 )
    qfree();
  return v7[7];
}

