const char *__fastcall add_spaces(const char *a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  char *v5; // rbx
  const char *v7; // r12
  __int64 v8; // rax

  v4 = strlen(a1);
  v5 = (char *)&a1[v4];
  if ( a3 <= 0 )
    return &a1[v4];
  v7 = &a1[a2];
  v8 = a3 - tag_strlen(a1);
  if ( v8 > 0 )
  {
    while ( v5 < v7 )
    {
      *v5++ = 32;
      if ( v5 >= v7 )
      {
        *((_BYTE *)v7 - 1) = 0;
        v5 = (char *)(v7 - 1);
      }
      if ( !--v8 )
        goto LABEL_8;
    }
    if ( !under_debugger )
      interr(518);
LABEL_14:
    BUG();
  }
LABEL_8:
  if ( v5 >= v7 )
  {
    if ( !under_debugger )
      interr(519);
    goto LABEL_14;
  }
  *v5 = 0;
  return v5;
}
