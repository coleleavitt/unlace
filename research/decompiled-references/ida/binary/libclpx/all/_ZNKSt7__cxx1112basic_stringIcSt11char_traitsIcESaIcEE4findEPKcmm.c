__int64 __fastcall std::string::find(__int64 *a1, char *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax
  int v6; // r13d
  unsigned __int64 v7; // r14
  size_t v8; // r8
  const void *v9; // rdi
  size_t v10; // rbp
  size_t v11; // rdx
  size_t v13; // rdx
  char *v14; // rax
  char *v15; // r15
  __int64 v16; // [rsp+0h] [rbp-40h]

  v4 = a1[1];
  if ( a4 )
  {
    result = -1;
    if ( v4 > a3 )
    {
      v6 = *a2;
      v7 = *a1 + v4;
      v8 = v4 - a3;
      v16 = *a1;
      v9 = (const void *)(*a1 + a3);
      if ( a4 <= v8 )
      {
        v10 = 1 - a4;
        v11 = 1 - a4 + v8;
        if ( v11 )
        {
          while ( 1 )
          {
            v14 = (char *)memchr(v9, v6, v11);
            v15 = v14;
            if ( !v14 )
              return -1;
            if ( !memcmp(v14, a2, a4) )
              break;
            v9 = v15 + 1;
            v13 = v7 - (_QWORD)(v15 + 1);
            if ( a4 <= v13 )
            {
              v11 = v10 + v13;
              if ( v11 )
                continue;
            }
            return -1;
          }
          return (__int64)&v15[-v16];
        }
      }
    }
  }
  else
  {
    result = -1;
    if ( v4 >= a3 )
      return a3;
  }
  return result;
}

