void __fastcall sub_21036C0(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  _QWORD *v4; // r14
  __int64 v5; // r12
  _QWORD *v6; // rbp
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rdi
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // r14
  _QWORD *v14; // rax
  void **v15; // r14
  void **v16; // rbp
  void **v17; // r14
  void **v18; // rbp

  if ( a2 )
  {
    for ( i = a2; ; i = v5 )
    {
      sub_21036C0(a1, *(_QWORD *)(i + 24));
      v4 = *(_QWORD **)(i + 584);
      v5 = *(_QWORD *)(i + 16);
      v6 = &v4[4 * *(unsigned int *)(i + 592)];
      if ( v4 != v6 )
      {
        do
        {
          while ( 1 )
          {
            v6 -= 4;
            v7 = (void *)v6[1];
            if ( !v7 )
              break;
            operator delete(v7);
            if ( v4 == v6 )
              goto LABEL_6;
          }
        }
        while ( v4 != v6 );
LABEL_6:
        v6 = *(_QWORD **)(i + 584);
      }
      if ( v6 != (_QWORD *)(i + 600) )
        free(v6);
      operator delete(*(_QWORD *)(i + 560), 16LL * *(unsigned int *)(i + 576), 8);
      v8 = *(void **)(i + 472);
      if ( v8 != (void *)(i + 488) )
        operator delete(v8);
      v9 = *(void **)(i + 440);
      if ( v9 != (void *)(i + 456) )
        operator delete(v9);
      v10 = *(char **)(i + 416);
      if ( *(_DWORD *)(i + 428) )
      {
        v11 = *(_DWORD *)(i + 424);
        if ( v11 )
        {
          v12 = 0;
          v13 = 8LL * (unsigned int)(v11 - 1) + 8;
          do
          {
            v14 = *(_QWORD **)&v10[v12];
            if ( v14 != (_QWORD *)-8LL && v14 )
            {
              operator delete(*(_QWORD *)&v10[v12], *v14 + 17LL, 8);
              v10 = *(char **)(i + 416);
            }
            v12 += 8;
          }
          while ( v13 != v12 );
        }
      }
      free(v10);
      v15 = *(void ***)(i + 160);
      v16 = &v15[10 * *(unsigned int *)(i + 168)];
      if ( v15 != v16 )
      {
        do
        {
          while ( 1 )
          {
            v16 -= 10;
            if ( *v16 == v16 + 2 )
              break;
            operator delete(*v16);
            if ( v15 == v16 )
              goto LABEL_23;
          }
        }
        while ( v15 != v16 );
LABEL_23:
        v16 = *(void ***)(i + 160);
      }
      if ( v16 != (void **)(i + 176) )
        free(v16);
      v17 = *(void ***)(i + 48);
      v18 = &v17[4 * *(unsigned int *)(i + 56)];
      if ( v17 != v18 )
      {
        do
        {
          while ( 1 )
          {
            v18 -= 4;
            if ( *v18 == v18 + 2 )
              break;
            operator delete(*v18);
            if ( v17 == v18 )
              goto LABEL_29;
          }
        }
        while ( v17 != v18 );
LABEL_29:
        v18 = *(void ***)(i + 48);
      }
      if ( v18 == (void **)(i + 64) )
      {
        operator delete((void *)i);
        if ( !v5 )
          return;
      }
      else
      {
        free(v18);
        operator delete((void *)i);
        if ( !v5 )
          return;
      }
    }
  }
}
