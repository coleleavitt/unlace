char *__fastcall sub_81E6E0(char *s, size_t a2)
{
  char *v2; // rax
  char v3; // dl
  char v4; // dl
  char *v5; // rax
  char *v6; // rcx
  size_t v7; // rax
  __int64 v8; // rdx
  size_t v10; // r12

  v2 = &s[strlen(s)];
  if ( s < v2 )
  {
    do
    {
      v3 = *(v2 - 1);
      if ( v3 != 32 && v3 != 9 )
        break;
      --v2;
    }
    while ( s != v2 );
  }
  *v2 = 0;
  v4 = *s;
  v5 = s;
  if ( *s == 9 || v4 == 32 )
  {
    do
    {
      do
        v4 = *++v5;
      while ( v4 == 32 );
    }
    while ( v4 == 9 );
  }
  v6 = s;
  if ( v4 )
  {
    do
    {
      ++v5;
      *v6++ = v4;
      v4 = *v5;
    }
    while ( *v5 );
  }
  *v6 = 0;
  v7 = strlen(s);
  v8 = a2 - v7;
  if ( (__int64)(a2 - v7) > 0 )
  {
    if ( v8 == 1 )
    {
      if ( v7 >= a2 )
      {
LABEL_14:
        s[a2] = 0;
        return s;
      }
    }
    else
    {
      v10 = v8 >> 1;
      memmove(&s[v8 >> 1], s, v7 + 1);
      memset(s, 32, v10);
      v7 = strlen(s);
      if ( v7 >= a2 )
        goto LABEL_14;
    }
    memset(&s[v7], 32, a2 - v7);
    goto LABEL_14;
  }
  return s;
}

