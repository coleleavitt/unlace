int __fastcall compar(int **a1, int **a2)
{
  int *v2; // r13
  int *v3; // r12
  const char *v4; // rbx
  const char *v5; // rbp
  int result; // eax
  const char *v7; // rbx
  unsigned __int64 v8; // r13
  const char *v9; // rbx
  const char *v10; // rsi
  unsigned __int64 v11; // rax
  const char *v12; // rsi

  v2 = *a1;
  v3 = *a2;
  v4 = (const char *)(*a1 + 1);
  v5 = (const char *)(*a2 + 1);
  result = strcmp(v4, v5);
  if ( !result )
  {
    v7 = &v4[strlen(v4)];
    if ( *v2 < 0 )
    {
      v8 = *(_QWORD *)(v7 + 1);
      v9 = v7 + 9;
    }
    else
    {
      v8 = *(unsigned int *)(v7 + 1);
      v9 = v7 + 5;
    }
    v10 = &v5[strlen(v5)];
    if ( *v3 >= 0 )
    {
      v11 = *(unsigned int *)(v10 + 1);
      v12 = v10 + 5;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 1);
      v12 = v10 + 9;
    }
    if ( v11 < v8 )
    {
      return 1;
    }
    else if ( v8 < v11 )
    {
      return -1;
    }
    else
    {
      return strcmp(v9, v12);
    }
  }
  return result;
}

