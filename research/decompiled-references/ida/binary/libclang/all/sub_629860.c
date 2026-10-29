char *__fastcall sub_629860(unsigned __int16 *a1, char **a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned __int16 *v4; // rbx
  size_t v5; // r14
  char *v6; // r8
  size_t v7; // rdi
  char *v8; // r15
  size_t v9; // r12
  size_t v10; // rax
  char *v12; // [rsp+8h] [rbp-40h]
  char *v13; // [rsp+8h] [rbp-40h]

  v2 = 8LL * *a1;
  v3 = (__int64)&a1[v2 + 16];
  if ( v2 * 2 )
  {
    v4 = a1 + 16;
    v5 = 0;
    v6 = nullptr;
    while ( 1 )
    {
      while ( *(_DWORD *)v4 )
      {
LABEL_9:
        v4 += 8;
        if ( (unsigned __int16 *)v3 == v4 )
          return v6;
      }
      v8 = *((char **)v4 + 1);
      v9 = 0;
      if ( v8 )
      {
        v12 = v6;
        v10 = strlen(*((const char **)v4 + 1));
        v6 = v12;
        v9 = v10;
      }
      if ( v5 )
      {
        v7 = (size_t)a2[1];
        if ( !v7 )
        {
          if ( (unsigned __int64)a2[2] < v5 )
          {
            v13 = v6;
            sub_25D6230(a2, a2 + 3, v5, 1);
            v7 = (size_t)a2[1];
            v6 = v13;
          }
          memcpy(&(*a2)[v7], v6, v5);
          v7 = (size_t)&a2[1][v5];
          a2[1] = (char *)v7;
        }
        if ( (unsigned __int64)a2[2] < v9 + v7 )
        {
          sub_25D6230(a2, a2 + 3, v9 + v7, 1);
          v7 = (size_t)a2[1];
        }
        v6 = *a2;
        if ( v9 )
        {
          memcpy(&v6[v7], v8, v9);
          v6 = *a2;
          v7 = (size_t)a2[1];
        }
        v5 = v9 + v7;
        a2[1] = (char *)(v9 + v7);
        goto LABEL_9;
      }
      v4 += 8;
      v5 = v9;
      v6 = v8;
      if ( (unsigned __int16 *)v3 == v4 )
        return v6;
    }
  }
  return nullptr;
}

