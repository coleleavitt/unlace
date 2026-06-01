const char *__fastcall sub_113CC60(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  const char *v3; // rbx
  size_t v4; // rbp
  size_t v5; // rax
  const char *v7; // rdi

  v3 = (const char *)(*a2 + (unsigned int)a1[1]);
  if ( !*a1 )
  {
    v4 = 0;
    if ( !v3 )
      return v3;
    goto LABEL_3;
  }
  v7 = (const char *)(*a2 + *(unsigned int *)(a3 + 4LL * (unsigned int)(*a1 + 1)));
  if ( !v7 )
  {
    v4 = 0;
    if ( !v3 )
    {
      v4 = 0;
      return &v3[v4];
    }
    goto LABEL_3;
  }
  v4 = (unsigned int)strlen(v7);
  v5 = 0;
  if ( v3 )
LABEL_3:
    v5 = strlen(v3);
  if ( v5 < v4 )
  {
    v3 += v5;
    return v3;
  }
  return &v3[v4];
}

