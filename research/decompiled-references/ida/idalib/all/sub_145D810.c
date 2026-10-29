void __fastcall sub_145D810(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rdi
  void **v14; // rax
  __int64 v15; // rdi
  void **v16; // rdi
  void **v17; // r15
  void **v18; // rdi
  void *v19; // rdi

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_145D810(a1, *(_QWORD *)(v3 + 24));
      v4 = *(void **)(v3 + 64);
      v5 = *(_QWORD *)(v3 + 16);
      if ( v4 )
        operator delete(v4);
      v6 = *(_QWORD **)(v3 + 40);
      v7 = *(unsigned int *)(v3 + 56);
      v8 = 2 * v7;
      if ( (_DWORD)v7 )
      {
        v9 = &v6[v8];
        do
        {
          if ( *v6 != -8192 && *v6 != -4096 )
          {
            v10 = v6[1];
            if ( v10 )
            {
              if ( (v10 & 4) != 0 )
              {
                v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
                v12 = v11;
                if ( v11 )
                {
                  v13 = *(_QWORD *)(v11 + 24);
                  if ( v13 )
                  {
                    if ( (v13 & 4) != 0 )
                    {
                      v14 = (void **)(v13 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( (v13 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                      {
                        if ( *v14 != v14 + 2 )
                        {
                          free(*v14);
                          v14 = (void **)(v13 & 0xFFFFFFFFFFFFFFF8LL);
                        }
                        operator delete(v14, 0x30u);
                      }
                    }
                  }
                  v15 = *(_QWORD *)(v12 + 8);
                  if ( v15 )
                  {
                    if ( (v15 & 4) != 0 )
                    {
                      v16 = (void **)(v15 & 0xFFFFFFFFFFFFFFF8LL);
                      v17 = v16;
                      if ( v16 )
                      {
                        v18 = (void **)*v16;
                        if ( v18 != v17 + 2 )
                          free(v18);
                        operator delete(v17, 0x30u);
                      }
                    }
                  }
                }
              }
            }
          }
          v6 += 2;
        }
        while ( v9 != v6 );
        v6 = *(_QWORD **)(v3 + 40);
        v8 = 2LL * *(unsigned int *)(v3 + 56);
      }
      operator delete(v6, v8 * 8, 8);
      v19 = (void *)v3;
      v3 = v5;
      operator delete(v19);
    }
    while ( v5 );
  }
}
