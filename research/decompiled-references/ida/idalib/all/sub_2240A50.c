void __fastcall sub_2240A50(const char ***src, const char ***a2)
{
  const char ***i; // rbp
  const char **v3; // rbx
  const char **v4; // r12
  const char *v5; // r14
  int v6; // eax
  const char ***j; // r12
  const char **v8; // r15
  int v9; // eax

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      while ( 1 )
      {
        v3 = *i;
        v4 = *src;
        v5 = **i;
        v6 = strcmp(v5, **src);
        if ( !v6 )
        {
          v6 = strcmp(v3[1], v4[1]);
          if ( !v6 )
            v6 = strcmp(v3[2], v4[2]);
        }
        if ( v6 < 0 )
          break;
        for ( j = i; ; --j )
        {
          v8 = *(j - 1);
          v9 = strcmp(v5, *v8);
          if ( !v9 )
          {
            v9 = strcmp(v3[1], v8[1]);
            if ( !v9 )
              v9 = strcmp(v3[2], v8[2]);
          }
          if ( v9 >= 0 )
            break;
          *j = v8;
        }
        *j = v3;
        if ( a2 == ++i )
          return;
      }
      if ( src != i )
        memmove(src + 1, src, (char *)i - (char *)src);
      *src = v3;
    }
  }
}
