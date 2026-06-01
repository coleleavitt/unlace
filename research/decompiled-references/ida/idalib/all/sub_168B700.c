void __fastcall sub_168B700(__int64 a1)
{
  void *v1; // rbp
  unsigned int v3; // esi
  void *v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rdi
  void **v11; // rbx
  void **v12; // r12
  __int64 v13; // rdx
  void *v14; // rdi
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  void *v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  void *v21; // rdi

  v1 = (void *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v3 = *(_DWORD *)(a1 + 80);
    *(_WORD *)(a1 + 64) = 0;
    sub_16049B0(*(_QWORD *)(a1 + 72), v3, (__int64 *)a1);
    if ( *(_BYTE *)(a1 + 64) )
    {
      sub_FC7790(*(_QWORD *)(a1 + 16), (__int64 *)a1, *(_BYTE *)(a1 + 65));
      v4 = *(void **)(a1 + 32);
      *(_QWORD *)(a1 + 16) = 0;
      *(_WORD *)(a1 + 64) = 0;
      if ( v4 == v1 )
        goto LABEL_5;
    }
    else
    {
      v4 = *(void **)(a1 + 32);
      if ( v4 == v1 )
      {
LABEL_5:
        v5 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 )
        {
          v6 = *(_QWORD *)(a1 + 8);
          if ( v6 )
          {
            if ( v5 < v6 || v5 > v6 + 14848 )
            {
              v7 = *(_QWORD **)(v5 + 528);
              v8 = &v7[8 * (unsigned __int64)*(unsigned int *)(v5 + 536)];
              if ( v7 != v8 )
              {
                do
                {
                  while ( 1 )
                  {
                    v8 -= 8;
                    v9 = (_QWORD *)v8[3];
                    if ( v9 == v8 + 5 )
                      break;
                    operator delete(v9);
                    if ( v7 == v8 )
                      goto LABEL_12;
                  }
                }
                while ( v7 != v8 );
LABEL_12:
                v8 = *(_QWORD **)(v5 + 528);
              }
              if ( v8 != (_QWORD *)(v5 + 544) )
                free(v8);
              v10 = *(void **)(v5 + 416);
              if ( v10 != (void *)(v5 + 432) )
                free(v10);
              v11 = (void **)(v5 + 384);
              v12 = (void **)(v5 + 64);
              do
              {
                while ( *v11 != v11 + 2 )
                {
                  operator delete(*v11);
                  v11 -= 4;
                  if ( v12 == v11 )
                    goto LABEL_20;
                }
                v11 -= 4;
              }
              while ( v11 != v12 );
LABEL_20:
              operator delete((void *)v5, 0x3A0u);
              return;
            }
LABEL_22:
            v13 = *(unsigned int *)(v6 + 14976);
            *(_DWORD *)(v6 + 14976) = v13 + 1;
            *(_QWORD *)(v6 + 8 * v13 + 14848) = v5;
            return;
          }
        }
        return;
      }
    }
    operator delete(v4);
    goto LABEL_5;
  }
  v14 = *(void **)(a1 + 32);
  if ( v14 != v1 )
    operator delete(v14);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      if ( v5 < v6 || v5 > v6 + 14848 )
      {
        v15 = *(_QWORD **)(v5 + 528);
        v16 = &v15[8 * (unsigned __int64)*(unsigned int *)(v5 + 536)];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v16 -= 8;
              v17 = (_QWORD *)v16[3];
              if ( v17 == v16 + 5 )
                break;
              operator delete(v17);
              if ( v15 == v16 )
                goto LABEL_34;
            }
          }
          while ( v15 != v16 );
LABEL_34:
          v16 = *(_QWORD **)(v5 + 528);
        }
        if ( v16 != (_QWORD *)(v5 + 544) )
          free(v16);
        v18 = *(void **)(v5 + 416);
        if ( v18 != (void *)(v5 + 432) )
          free(v18);
        v19 = (void **)(v5 + 384);
        v20 = (void **)(v5 + 64);
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 != v19 + 2 )
            break;
LABEL_43:
          v19 -= 4;
          if ( v20 == v19 )
            goto LABEL_20;
        }
        while ( 1 )
        {
          operator delete(v21);
          v19 -= 4;
          if ( v20 == v19 )
            goto LABEL_20;
          v21 = *v19;
          if ( *v19 == v19 + 2 )
            goto LABEL_43;
        }
      }
      goto LABEL_22;
    }
  }
}
