void __fastcall sub_C23820(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void *v9; // rdi
  void **v10; // rbx
  void **v11; // r15
  __int64 v12; // rdx

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      v3 -= 4;
      v4 = v3[1];
      if ( v4 )
      {
        v5 = v3[2];
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
                    goto LABEL_8;
                }
              }
              while ( v6 != v7 );
LABEL_8:
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
                  goto LABEL_16;
              }
              v10 -= 4;
            }
            while ( v11 != v10 );
LABEL_16:
            operator delete((void *)v4, 0x3A0u);
          }
          else
          {
            v12 = *(unsigned int *)(v5 + 14976);
            *(_DWORD *)(v5 + 14976) = v12 + 1;
            *(_QWORD *)(v5 + 8 * v12 + 14848) = v4;
          }
        }
      }
    }
    while ( v2 != v3 );
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}
