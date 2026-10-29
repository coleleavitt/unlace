const char *__fastcall sub_107740(__int64 *a1, const char *a2, char a3)
{
  const char **v3; // r15
  size_t v6; // rbp
  const char *v7; // rbx
  const char *v8; // rsi
  size_t v10; // r13
  const char *v11; // r12
  __int64 v12; // rbx
  size_t v13; // rbp
  size_t v14; // r13
  _BYTE *v15; // rsi
  const char *v16; // rsi
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // rax
  __int64 v20; // rax

  v3 = (const char **)&off_2319E0;
  while ( 1 )
  {
    v7 = v3[1];
    v8 = *v3;
    if ( !a3 )
    {
      v8 = v3[1];
      v7 = *v3;
    }
    if ( *((_BYTE *)v3 + 16) )
      break;
    if ( !strcmp(a2, v8) )
      return v7;
LABEL_3:
    v3 += 3;
    if ( v3 == (const char **)&unk_231AB8 )
      return a2;
  }
  v6 = strlen(v8);
  if ( strncmp(a2, v8, v6) )
    goto LABEL_3;
  if ( v7 && (v10 = strlen(v7)) != 0 )
  {
    v18 = (void *)*a1;
    if ( a1[2] < v10 + 1 )
    {
      v20 = qvector_reserve();
      *a1 = v20;
      v18 = (void *)v20;
    }
    v11 = &a2[v6];
    a1[1] = v10 + 1;
    memmove(v18, v7, v10);
    *(_BYTE *)(*a1 + v10) = 0;
    v19 = strlen(v11);
    v12 = a1[1];
    v13 = v19;
    if ( v12 )
    {
      --v12;
      v14 = v19 + v12;
    }
    else
    {
      v14 = v19;
    }
  }
  else
  {
    v11 = &a2[v6];
    v12 = 0;
    a1[1] = 0;
    v13 = strlen(v11);
    v14 = v13;
  }
  v15 = (_BYTE *)*a1;
  if ( a1[2] < v14 + 1 )
  {
    v17 = qvector_reserve();
    *a1 = v17;
    v15 = (_BYTE *)v17;
  }
  a1[1] = v14 + 1;
  v15[v14] = 0;
  v16 = v11;
  a2 = s1;
  memmove((void *)(v12 + *a1), v16, v13);
  if ( a1[1] )
    return (const char *)*a1;
  return a2;
}

