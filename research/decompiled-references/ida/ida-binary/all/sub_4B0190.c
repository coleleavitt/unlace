void __fastcall sub_4B0190(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rbp
  void **v3; // rax
  void **v4; // rbx
  void **v5; // r14
  char *v6; // rdi
  void **v7; // r12
  void **v8; // r13
  __int64 v9; // rax
  void **v10; // rax
  __int64 v11; // rax

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
            v11 = 0;
          }
          else
          {
            v5 = v4 - 2;
            do
            {
              v6 = (char *)*v5;
              v7 = v4;
              v4 -= 18;
              if ( *v5 )
              {
                v8 = v4;
                if ( v4 == v5 )
                  goto LABEL_17;
                do
                {
                  v9 = *(unsigned __int8 *)v8;
                  if ( (_BYTE)v9 != 0xFF )
                  {
                    v10 = (void **)&v6[32 * v9];
                    if ( *v10 )
                    {
                      if ( !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
                        free(*v10);
                      v6 = (char *)*v5;
                    }
                  }
                  v8 = (void **)((char *)v8 + 1);
                }
                while ( v8 != v5 );
                if ( v6 )
LABEL_17:
                  operator delete[](v6);
              }
              v5 -= 18;
            }
            while ( *((void ***)v2 + 4) != v4 );
            v11 = 144LL * (_QWORD)*(v7 - 19);
          }
          operator delete[](v4 - 1, v11 + 8);
        }
        operator delete((void *)v2, 0x28u);
      }
    }
  }
}
