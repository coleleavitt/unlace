char *__fastcall sub_57A620(char *s, __int64 a2, const char *a3, _BYTE *a4)
{
  char *v6; // rax
  char *v7; // r12
  char *v8; // rax
  char *v9; // rdx
  char *v10; // rcx
  char *v11; // rbx
  char v12; // al

  if ( !*(_BYTE *)(*(_QWORD *)(qword_2CA1698 + 1480) + 392LL) )
    return (char *)set_file_ext(s, a2, a3, a4);
  v6 = strrchr(a3, 46);
  if ( v6 )
  {
    if ( (unsigned __int8)is_database_ext(v6 + 1) )
      return (char *)set_file_ext(s, a2, a3, a4);
  }
  if ( a3 != s )
    qstrncpy(s, a3, a2);
  if ( !a4 || !*a4 )
    return s;
  v7 = &s[a2];
  v8 = &s[strlen(s)];
  if ( v8 >= &s[a2] )
  {
    if ( !under_debugger )
      interr(518);
    BUG();
  }
  v9 = v8 + 1;
  *v8 = 46;
  v10 = v7 - 1;
  if ( v8 + 1 < v7 )
  {
    v11 = &a4[*a4 == 46];
    if ( v9 == v10 )
      goto LABEL_17;
    while ( 1 )
    {
      v12 = *v11++;
      *v9 = v12;
      if ( !v12 )
        return s;
      if ( ++v9 == v10 )
        goto LABEL_17;
    }
  }
  *(v7 - 1) = 0;
LABEL_17:
  *(v7 - 1) = 0;
  return s;
}

