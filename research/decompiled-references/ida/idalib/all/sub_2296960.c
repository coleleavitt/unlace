void __fastcall sub_2296960(void *a1)
{
  volatile __int64 *v2; // rbp
  volatile __int64 *v3; // r13
  void *v4; // rdi
  volatile __int64 *v5; // r14
  void *v6; // rdi
  volatile __int64 *v7; // r15
  void *v8; // rdi
  volatile __int64 *v9; // rax
  void *v10; // rdi
  volatile __int64 *v11; // rdi
  void *v12; // rdi
  volatile __int64 *v13; // [rsp+0h] [rbp-40h]
  volatile __int64 *v14; // [rsp+0h] [rbp-40h]

  if ( a1 )
  {
    v2 = (volatile __int64 *)_InterlockedExchange64(&qword_2D0B848, 0);
    if ( v2 )
    {
      v3 = (volatile __int64 *)_InterlockedExchange64(v2 + 1, 0);
      if ( v3 )
      {
        v5 = (volatile __int64 *)_InterlockedExchange64(v3 + 1, 0);
        if ( v5 )
        {
          v7 = (volatile __int64 *)_InterlockedExchange64(v5 + 1, 0);
          if ( v7 )
          {
            v9 = (volatile __int64 *)_InterlockedExchange64(v7 + 1, 0);
            if ( v9 )
            {
              v11 = (volatile __int64 *)_InterlockedExchange64(v9 + 1, 0);
              if ( v11 )
              {
                v13 = v9;
                sub_2296550(v11);
                operator delete((void *)v11, 0x10u);
                v9 = v13;
              }
              v12 = (void *)_InterlockedExchange64(v9, 0);
              if ( v12 )
              {
                v14 = v9;
                free(v12);
                v9 = v14;
              }
              operator delete((void *)v9, 0x10u);
            }
            v10 = (void *)_InterlockedExchange64(v7, 0);
            if ( v10 )
              free(v10);
            operator delete((void *)v7, 0x10u);
          }
          v8 = (void *)_InterlockedExchange64(v5, 0);
          if ( v8 )
            free(v8);
          operator delete((void *)v5, 0x10u);
        }
        v6 = (void *)_InterlockedExchange64(v3, 0);
        if ( v6 )
          free(v6);
        operator delete((void *)v3, 0x10u);
      }
      v4 = (void *)_InterlockedExchange64(v2, 0);
      if ( v4 )
        free(v4);
      operator delete((void *)v2, 0x10u);
    }
    operator delete(a1, 1u);
  }
}
