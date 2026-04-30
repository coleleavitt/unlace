__int64 __fastcall sub_531090(_QWORD *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // rbp
  size_t v4; // rbx
  const char *v5; // rsi
  char *v6; // r14
  _QWORD *v7; // r13
  __int64 v8; // rbp
  char *v9; // r15
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  const char *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rdi
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  while ( 2 )
  {
    s2 = nullptr;
    v22 = 0;
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    v5 = a2;
    s2 = (char *)qvector_reserve(&s2, 0, v2 + 1, 1);
    *(_QWORD *)&v22 = v3;
    memmove(s2, a2, v4);
    s2[v4] = 0;
    v6 = s2;
    v7 = (_QWORD *)a1[5];
    if ( !v7 )
      goto LABEL_25;
    v8 = v22;
    v9 = (char *)&s1;
    v10 = a1 + 4;
    if ( (_QWORD)v22 )
      v9 = s2;
    while ( 1 )
    {
      v15 = v7[5];
      if ( !v8 )
        break;
      v11 = v7;
      v5 = v6;
      v12 = &s1;
      if ( v15 )
        goto LABEL_7;
LABEL_8:
      v13 = strcmp(v12, v5);
      v14 = (_QWORD *)v7[2];
      v7 = (_QWORD *)v7[3];
      if ( v13 >= 0 )
      {
        v10 = v11;
        v7 = v14;
      }
      if ( !v7 )
        goto LABEL_17;
    }
    if ( v15 )
    {
LABEL_15:
      v11 = v7;
LABEL_7:
      v12 = (const char *)v7[4];
      v5 = v9;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v16 = v7[2];
      if ( !v16 )
        break;
      v10 = v7;
      v7 = (_QWORD *)v7[2];
      if ( *(_QWORD *)(v16 + 40) )
        goto LABEL_15;
    }
    v10 = v7;
LABEL_17:
    if ( a1 + 4 == v10 )
      goto LABEL_25;
    if ( v10[5] )
    {
      v17 = &s1;
      v5 = (const char *)v10[4];
      if ( v8 )
        v17 = v6;
LABEL_21:
      if ( strcmp(v17, v5) >= 0 )
        goto LABEL_22;
LABEL_25:
      if ( v6 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v6, v5);
      }
      a1 = (_QWORD *)a1[15];
      if ( !a1 )
        return 0;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    v17 = v6;
    v5 = &s1;
    goto LABEL_21;
  }
LABEL_22:
  if ( v6 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v6, v5);
  }
  return v10[7];
}
