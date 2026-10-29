char *__fastcall sub_9ECC30(__int64 a1, char *a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // r13
  size_t v6; // rax
  unsigned __int64 v7; // rbx
  char *v8; // rbp
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v14; // rax

  v4 = a3;
  if ( a4 )
  {
    v6 = j__strlen("__builtin_");
    if ( v6 <= a3 && (!v6 || !memcmp(a2, "__builtin_", v6)) )
    {
      v7 = 0;
      if ( a3 > 9 )
      {
        v7 = a3 - 10;
        v4 = 10;
      }
      v8 = &a2[v4];
      v9 = j__strlen("__");
      if ( v9 <= v7 && (!v9 || !memcmp(v8, "__", v9)) )
      {
        v10 = j__strlen("_chk");
        if ( v10 <= v7 && (!v10 || !memcmp(&v8[v7 - v10], "_chk", v10)) )
        {
          if ( v7 <= 1 )
            v8 += v7;
          else
            v8 += 2;
          return v8;
        }
      }
LABEL_21:
      v12 = j__strlen("_s");
      if ( v12 <= v7 && v12 )
        memcmp(&v8[v7 - v12], "_s", v12);
      return v8;
    }
  }
  v11 = j__strlen("__asan_");
  if ( v11 <= a3 && (!v11 || !memcmp(a2, "__asan_", v11)) )
  {
    v7 = 0;
    if ( a3 > 6 )
    {
      v7 = a3 - 7;
      v4 = 7;
    }
    v8 = &a2[v4];
    goto LABEL_21;
  }
  v14 = j__strlen("_s");
  if ( v14 <= a3 && v14 )
    memcmp(&a2[a3 - v14], "_s", v14);
  return a2;
}
