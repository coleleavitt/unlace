const char *__fastcall qstrncat(const char *a1, char *a2, __int64 a3)
{
  size_t v5; // rax
  const char *v6; // rdx
  char *v7; // rax
  char v8; // cl

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_13:
    BUG();
  }
  v5 = strlen(a1);
  v6 = &a1[a3];
  v7 = (char *)&a1[v5];
  if ( v7 >= &a1[a3] )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_13;
  }
  if ( v7 == v6 - 1 )
  {
LABEL_8:
    *((_BYTE *)v6 - 1) = 0;
    return a1;
  }
  else
  {
    while ( 1 )
    {
      v8 = *a2++;
      *v7 = v8;
      if ( !v8 )
        return a1;
      if ( ++v7 == v6 - 1 )
        goto LABEL_8;
    }
  }
}

