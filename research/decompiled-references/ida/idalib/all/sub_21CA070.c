void __fastcall sub_21CA070(_QWORD *a1)
{
  _QWORD *v1; // r13
  __int64 v2; // r14
  __int64 v3; // rbx
  char *v4; // r15
  char *v5; // rbp
  void **v6; // rdi
  void **v7; // rax
  void **v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  void **v11; // [rsp+8h] [rbp-40h]

  v1 = (_QWORD *)a1[1];
  *a1 = &off_2C74D60;
  if ( v1 )
  {
    v2 = v1[5];
    v3 = v1[4];
    if ( v2 != v3 )
    {
      do
      {
        while ( 1 )
        {
          v4 = *(char **)(v3 + 48);
          if ( v4 )
          {
            v5 = v4 + 72;
            do
            {
              while ( 1 )
              {
                v5 -= 24;
                v6 = *(void ***)v5;
                v7 = *((void ***)v5 + 1);
                v8 = *(void ***)v5;
                if ( v7 != *(void ***)v5 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v9 = *v8;
                      if ( !*v8 )
                        break;
                      v11 = v7;
                      v8 += 3;
                      operator delete(v9);
                      v7 = v11;
                      if ( v8 == v11 )
                        goto LABEL_8;
                    }
                    v8 += 3;
                  }
                  while ( v7 != v8 );
LABEL_8:
                  v6 = *(void ***)v5;
                }
                if ( !v6 )
                  break;
                operator delete(v6);
                if ( v4 == v5 )
                  goto LABEL_11;
              }
            }
            while ( v4 != v5 );
LABEL_11:
            operator delete(v4, 0x48u);
          }
          v10 = *(void **)(v3 + 24);
          if ( v10 )
            operator delete(v10);
          if ( !*(_QWORD *)v3 )
            break;
          operator delete(*(void **)v3);
          v3 += 80;
          if ( v2 == v3 )
          {
            v3 = v1[4];
            goto LABEL_17;
          }
        }
        v3 += 80;
      }
      while ( v2 != v3 );
      v3 = v1[4];
    }
LABEL_17:
    if ( v3 )
      operator delete((void *)v3);
    operator delete(v1, 0x50u);
  }
}
