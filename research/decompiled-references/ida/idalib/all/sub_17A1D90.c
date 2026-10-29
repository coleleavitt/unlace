void __fastcall sub_17A1D90(_QWORD *a1)
{
  unsigned __int64 *v2; // r13
  unsigned __int64 *v3; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void *v9; // rdi
  void **v10; // rbx
  void **v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx

  v2 = (unsigned __int64 *)a1[9];
  v3 = (unsigned __int64 *)a1[8];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = v3[1];
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
            v13 = *(unsigned int *)(v5 + 14976);
            *(_DWORD *)(v5 + 14976) = v13 + 1;
            *(_QWORD *)(v5 + 8 * v13 + 14848) = v4;
          }
        }
      }
      v3 += 3;
    }
    while ( v2 != v3 );
    v3 = (unsigned __int64 *)a1[8];
  }
  if ( v3 )
    operator delete(v3);
  v12 = (_QWORD *)a1[2];
  if ( v12 != a1 + 4 )
    free(v12);
}
