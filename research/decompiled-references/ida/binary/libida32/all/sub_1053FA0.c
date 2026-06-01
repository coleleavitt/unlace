__int64 __fastcall sub_1053FA0(__int64 a1, const void *a2, size_t a3)
{
  char **i; // rbx
  const char *v5; // r12
  void *v6; // r15
  const char *v8; // rdi
  const char *v9; // rbx
  const char *v10; // rbx
  void *v11; // r14

  for ( i = &off_2C58820; ; i += 20 )
  {
    v5 = *i;
    if ( *i )
    {
      if ( strlen(*i) == a3 && (!a3 || !memcmp(v5, a2, a3)) )
      {
LABEL_26:
        LOBYTE(v5) = i != (char **)&unk_2C5C358;
        return (unsigned int)v5;
      }
      v5 = i[5];
      v6 = i + 5;
      if ( !v5 )
      {
        if ( !a3 )
          goto LABEL_29;
        goto LABEL_9;
      }
      if ( strlen(i[5]) == a3 )
        goto LABEL_7;
    }
    else
    {
      if ( !a3 )
        goto LABEL_26;
      v5 = i[5];
      v6 = i + 5;
      if ( !v5 )
        goto LABEL_9;
      if ( strlen(i[5]) == a3 )
      {
LABEL_7:
        if ( !a3 || !memcmp(v5, a2, a3) )
        {
LABEL_29:
          LOBYTE(v5) = v6 != &unk_2C5C358;
          return (unsigned int)v5;
        }
LABEL_9:
        v5 = i[10];
        v6 = i + 10;
        if ( !v5 )
          goto LABEL_13;
        goto LABEL_10;
      }
    }
    v5 = i[10];
    v6 = i + 10;
    if ( !v5 )
    {
      if ( !a3 )
        goto LABEL_29;
      goto LABEL_13;
    }
LABEL_10:
    if ( strlen(v5) == a3 )
    {
      if ( !a3 || !memcmp(v5, a2, a3) )
        goto LABEL_29;
LABEL_13:
      v5 = i[15];
      v6 = i + 15;
      if ( !v5 )
        goto LABEL_17;
      goto LABEL_14;
    }
    v5 = i[15];
    v6 = i + 15;
    if ( !v5 )
    {
      if ( !a3 )
        goto LABEL_29;
      goto LABEL_17;
    }
LABEL_14:
    if ( strlen(v5) == a3 && (!a3 || !memcmp(v5, a2, a3)) )
      goto LABEL_29;
LABEL_17:
    if ( i + 20 == off_2C5C2E0 )
      break;
  }
  v5 = i[20];
  if ( !v5 )
  {
    if ( a3 )
    {
      v5 = (const char *)(i + 25);
      v9 = i[25];
      if ( v9 )
        goto LABEL_38;
      goto LABEL_48;
    }
LABEL_54:
    LODWORD(v5) = 1;
    return (unsigned int)v5;
  }
  if ( strlen(i[20]) != a3 )
    goto LABEL_37;
  if ( !a3 )
    goto LABEL_54;
  v8 = v5;
  LODWORD(v5) = 1;
  if ( !memcmp(v8, a2, a3) )
    return (unsigned int)v5;
LABEL_37:
  v5 = (const char *)(i + 25);
  v9 = i[25];
  if ( !v9 )
  {
    if ( !a3 )
    {
LABEL_53:
      LOBYTE(v5) = v5 != (const char *)&unk_2C5C358;
      return (unsigned int)v5;
    }
LABEL_48:
    v10 = *((const char **)v5 + 5);
    v11 = (void *)(v5 + 40);
    LODWORD(v5) = 0;
    if ( v10 )
      goto LABEL_42;
    return (unsigned int)v5;
  }
LABEL_38:
  if ( strlen(v9) == a3 && (!a3 || !memcmp(v9, a2, a3)) )
    goto LABEL_53;
  v10 = *((const char **)v5 + 5);
  v11 = (void *)(v5 + 40);
  if ( v10 )
  {
LABEL_42:
    LODWORD(v5) = 0;
    if ( a3 == strlen(v10) && (!a3 || !memcmp(v10, a2, a3)) )
LABEL_45:
      LOBYTE(v5) = v11 != &unk_2C5C358;
  }
  else
  {
    LODWORD(v5) = 0;
    if ( !a3 )
      goto LABEL_45;
  }
  return (unsigned int)v5;
}

