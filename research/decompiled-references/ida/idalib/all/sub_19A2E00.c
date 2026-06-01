void __fastcall sub_19A2E00(__int64 a1)
{
  void *v2; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // r13
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  void *v13; // rdi
  void **v14; // rbx
  void **v15; // r15
  __int64 v16; // rdx

  v2 = (void *)(a1 + 472);
  v3 = *(void **)(a1 + 456);
  if ( v3 != v2 )
    free(v3);
  v4 = *(void **)(a1 + 336);
  if ( v4 != (void *)(a1 + 352) )
    free(v4);
  v5 = *(void **)(a1 + 240);
  if ( v5 != (void *)(a1 + 256) )
    free(v5);
  v6 = *(_QWORD **)(a1 + 32);
  v7 = &v6[4 * *(unsigned int *)(a1 + 40)];
  if ( v6 != v7 )
  {
    do
    {
      v7 -= 4;
      v8 = v7[1];
      if ( v8 )
      {
        v9 = v7[2];
        if ( v9 )
        {
          if ( v8 < v9 || v8 > v9 + 14848 )
          {
            v10 = *(_QWORD **)(v8 + 528);
            v11 = &v10[8 * (unsigned __int64)*(unsigned int *)(v8 + 536)];
            if ( v10 != v11 )
            {
              do
              {
                while ( 1 )
                {
                  v11 -= 8;
                  v12 = (_QWORD *)v11[3];
                  if ( v12 == v11 + 5 )
                    break;
                  operator delete(v12);
                  if ( v10 == v11 )
                    goto LABEL_14;
                }
              }
              while ( v10 != v11 );
LABEL_14:
              v11 = *(_QWORD **)(v8 + 528);
            }
            if ( v11 != (_QWORD *)(v8 + 544) )
              free(v11);
            v13 = *(void **)(v8 + 416);
            if ( v13 != (void *)(v8 + 432) )
              free(v13);
            v14 = (void **)(v8 + 384);
            v15 = (void **)(v8 + 64);
            do
            {
              while ( *v14 != v14 + 2 )
              {
                operator delete(*v14);
                v14 -= 4;
                if ( v15 == v14 )
                  goto LABEL_22;
              }
              v14 -= 4;
            }
            while ( v15 != v14 );
LABEL_22:
            operator delete((void *)v8, 0x3A0u);
          }
          else
          {
            v16 = *(unsigned int *)(v9 + 14976);
            *(_DWORD *)(v9 + 14976) = v16 + 1;
            *(_QWORD *)(v9 + 8 * v16 + 14848) = v8;
          }
        }
      }
    }
    while ( v6 != v7 );
    v7 = *(_QWORD **)(a1 + 32);
  }
  if ( v7 != (_QWORD *)(a1 + 48) )
    free(v7);
}
