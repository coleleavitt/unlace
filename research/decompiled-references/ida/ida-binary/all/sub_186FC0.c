void __fastcall sub_186FC0(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // r14
  void **v3; // rax
  void **v4; // r13
  void **v5; // r12
  char *v6; // rbp
  void **v7; // rbx
  __int64 v8; // rax
  char *v9; // rbp
  _QWORD *v10; // r15
  void *v11; // rdi
  __int64 v12; // rax
  void **v13; // [rsp+0h] [rbp-40h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 != -1 && !_InterlockedSub(v1, 1u) )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *((void ***)v2 + 4);
        if ( v3 )
        {
          v4 = &v3[18 * (_QWORD)*(v3 - 1)];
          if ( v3 == v4 )
          {
            v12 = 0;
          }
          else
          {
            v5 = v4 - 2;
            do
            {
              v6 = (char *)*v5;
              v13 = v4;
              v4 -= 18;
              if ( *v5 )
              {
                v7 = v4;
                if ( v4 == v5 )
                  goto LABEL_19;
                do
                {
                  v8 = *(unsigned __int8 *)v7;
                  if ( (_BYTE)v8 != 0xFF )
                  {
                    v9 = &v6[32 * v8];
                    v10 = *((_QWORD **)v9 + 3);
                    while ( v10 )
                    {
                      v11 = v10;
                      v10 = (_QWORD *)v10[1];
                      operator delete(v11, 0x10u);
                    }
                    if ( *(_QWORD *)v9 )
                    {
                      if ( !_InterlockedSub(*(volatile signed __int32 **)v9, 1u) )
                        free(*(void **)v9);
                    }
                    v6 = (char *)*v5;
                  }
                  v7 = (void **)((char *)v7 + 1);
                }
                while ( v5 != v7 );
                if ( v6 )
LABEL_19:
                  operator delete[](v6);
              }
              v5 -= 18;
            }
            while ( *((void ***)v2 + 4) != v4 );
            v12 = 144LL * (_QWORD)*(v13 - 19);
          }
          operator delete[](v4 - 1, v12 + 8);
        }
        operator delete((void *)v2, 0x28u);
      }
    }
  }
}
