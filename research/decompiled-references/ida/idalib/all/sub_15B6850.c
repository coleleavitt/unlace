void __fastcall sub_15B6850(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rax
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  void *v7; // rdi
  void **v8; // rbx
  void **v9; // r12
  __int64 v10; // rdx
  void *v11; // rdi
  void *v12; // rdi

  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 1 )
    {
      v2 = *(_QWORD *)(a1 + 40);
      if ( v2 )
      {
        v3 = *(_QWORD *)(a1 + 48);
        if ( v3 )
        {
          if ( v2 < v3 || v2 > v3 + 14848 )
          {
            v4 = *(_QWORD **)(v2 + 528);
            v5 = &v4[8 * (unsigned __int64)*(unsigned int *)(v2 + 536)];
            if ( v4 != v5 )
            {
              do
              {
                while ( 1 )
                {
                  v5 -= 8;
                  v6 = (_QWORD *)v5[3];
                  if ( v6 == v5 + 5 )
                    break;
                  operator delete(v6);
                  if ( v4 == v5 )
                    goto LABEL_9;
                }
              }
              while ( v4 != v5 );
LABEL_9:
              v5 = *(_QWORD **)(v2 + 528);
            }
            if ( v5 != (_QWORD *)(v2 + 544) )
              free(v5);
            v7 = *(void **)(v2 + 416);
            if ( v7 != (void *)(v2 + 432) )
              free(v7);
            v8 = (void **)(v2 + 384);
            v9 = (void **)(v2 + 64);
            do
            {
              while ( *v8 != v8 + 2 )
              {
                operator delete(*v8);
                v8 -= 4;
                if ( v9 == v8 )
                  goto LABEL_17;
              }
              v8 -= 4;
            }
            while ( v8 != v9 );
LABEL_17:
            operator delete((void *)v2, 0x3A0u);
          }
          else
          {
            v10 = *(unsigned int *)(v3 + 14976);
            *(_DWORD *)(v3 + 14976) = v10 + 1;
            *(_QWORD *)(v3 + 8 * v10 + 14848) = v2;
          }
        }
      }
    }
  }
  else
  {
    v11 = *(void **)(a1 + 40);
    if ( v11 )
      operator delete[](v11);
    v12 = *(void **)(a1 + 56);
    if ( v12 )
      operator delete[](v12);
  }
}
