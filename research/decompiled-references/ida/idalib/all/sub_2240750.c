const char ***__fastcall sub_2240750(const char ***a1, __int64 a2, char ***a3)
{
  __int64 v3; // rsi
  const char ***v4; // r13
  __int64 v5; // rbx
  char **v6; // r14
  __int64 v7; // rbp
  const char ***v8; // r12
  const char **v9; // r15
  int v10; // eax
  char *s1; // [rsp+8h] [rbp-40h]

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = v3 >> 3;
  if ( v3 > 0 )
  {
    v6 = *a3;
    s1 = **a3;
    do
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        v8 = &v4[v5 >> 1];
        v9 = *v8;
        v10 = strcmp(s1, **v8);
        if ( !v10 )
        {
          v10 = strcmp(v6[1], v9[1]);
          if ( !v10 )
            v10 = strcmp(v6[2], v9[2]);
        }
        if ( v10 < 0 )
          break;
        v4 = v8 + 1;
        v5 = v5 - v7 - 1;
        if ( v5 <= 0 )
          return v4;
      }
      v5 >>= 1;
    }
    while ( v7 );
  }
  return v4;
}
