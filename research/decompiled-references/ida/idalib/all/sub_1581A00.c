void __fastcall sub_1581A00(void **a1)
{
  void **v1; // r12
  void **v2; // r13
  void **v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void *v9; // rdi
  void **v10; // rbx
  void **v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  void **v15; // [rsp+0h] [rbp-48h]

  v1 = (void **)*a1;
  if ( *a1 != a1 )
  {
    do
    {
      v2 = (void **)v1[6];
      v3 = &v2[4 * *((unsigned int *)v1 + 14)];
      v15 = (void **)*v1;
      if ( v2 != v3 )
      {
        do
        {
          v3 -= 4;
          v4 = (unsigned __int64)v3[1];
          if ( v4 )
          {
            v5 = (unsigned __int64)v3[2];
            if ( v5 )
            {
              if ( v4 < v5 || v4 > v5 + 14848 )
              {
                v6 = *(_QWORD **)(v4 + 528);
                v7 = &v6[8 * (unsigned __int64)*(unsigned int *)(v4 + 536)];
                if ( v6 != v7 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v7 -= 8;
                      v8 = (_QWORD *)v7[3];
                      if ( v8 == v7 + 5 )
                        break;
                      operator delete(v8);
                      if ( v6 == v7 )
                        goto LABEL_9;
                    }
                  }
                  while ( v6 != v7 );
LABEL_9:
                  v7 = *(_QWORD **)(v4 + 528);
                }
                if ( v7 != (_QWORD *)(v4 + 544) )
                  free(v7);
                v9 = *(void **)(v4 + 416);
                if ( v9 != (void *)(v4 + 432) )
                  free(v9);
                v10 = (void **)(v4 + 384);
                v11 = (void **)(v4 + 64);
                do
                {
                  while ( *v10 != v10 + 2 )
                  {
                    operator delete(*v10);
                    v10 -= 4;
                    if ( v11 == v10 )
                      goto LABEL_17;
                  }
                  v10 -= 4;
                }
                while ( v11 != v10 );
LABEL_17:
                operator delete((void *)v4, 0x3A0u);
              }
              else
              {
                v14 = *(unsigned int *)(v5 + 14976);
                *(_DWORD *)(v5 + 14976) = v14 + 1;
                *(_QWORD *)(v5 + 8 * v14 + 14848) = v4;
              }
            }
          }
        }
        while ( v2 != v3 );
        v3 = (void **)v1[6];
      }
      if ( v3 != v1 + 8 )
        free(v3);
      v12 = (unsigned __int64)v1[3];
      if ( v12 )
      {
        v13 = (unsigned __int64)v1[4];
        if ( v13 )
          sub_1580C40(v13, v12);
      }
      operator delete(v1);
      v1 = v15;
    }
    while ( v15 != a1 );
  }
}
