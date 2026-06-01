void __fastcall sub_1396280(_QWORD *a1)
{
  __int64 v2; // r12
  char *v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // r13
  char *v10; // rbx
  char *v11; // rdi
  _QWORD *v12; // rdi
  void *v13; // rbx
  void (__fastcall *v14)(_QWORD *); // rax
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // r14
  void **v18; // r15
  void **v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  v2 = a1[9];
  *a1 = &off_2C44180;
  if ( v2 )
  {
    v3 = *(char **)(v2 + 4696);
    if ( *(_DWORD *)(v2 + 4708) )
    {
      v15 = *(_DWORD *)(v2 + 4704);
      if ( v15 )
      {
        v16 = 0;
        v22 = 8LL * (unsigned int)(v15 - 1) + 8;
        do
        {
          v17 = *(_QWORD *)&v3[v16];
          if ( v17 != -8 && v17 )
          {
            v18 = *(void ***)(v17 + 104);
            v19 = &v18[4 * *(unsigned int *)(v17 + 112)];
            v23 = *(_QWORD *)v17 + 249LL;
            if ( v18 != v19 )
            {
              do
              {
                while ( 1 )
                {
                  v19 -= 4;
                  if ( *v19 == v19 + 2 )
                    break;
                  operator delete(*v19);
                  if ( v18 == v19 )
                    goto LABEL_36;
                }
              }
              while ( v18 != v19 );
LABEL_36:
              v19 = *(void ***)(v17 + 104);
            }
            if ( v19 != (void **)(v17 + 120) )
              free(v19);
            v20 = *(void **)(v17 + 72);
            if ( v20 != (void *)(v17 + 88) )
              operator delete(v20);
            v21 = *(void **)(v17 + 32);
            if ( v21 != (void *)(v17 + 48) )
              operator delete(v21);
            operator delete(v17, v23, 8);
            v3 = *(char **)(v2 + 4696);
          }
          v16 += 8;
        }
        while ( v22 != v16 );
      }
    }
    free(v3);
    v4 = *(_QWORD *)(v2 + 72);
    v5 = v4 + 144LL * *(unsigned int *)(v2 + 80);
    if ( v4 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 144;
          v6 = *(void **)(v5 + 96);
          if ( v6 != (void *)(v5 + 112) )
            operator delete(v6);
          v7 = *(void **)(v5 + 64);
          if ( v7 != (void *)(v5 + 80) )
            operator delete(v7);
          v8 = *(void **)(v5 + 32);
          if ( v8 != (void *)(v5 + 48) )
            operator delete(v8);
          if ( *(_QWORD *)v5 == v5 + 16 )
            break;
          operator delete(*(void **)v5);
          if ( v4 == v5 )
            goto LABEL_12;
        }
      }
      while ( v4 != v5 );
LABEL_12:
      v5 = *(_QWORD *)(v2 + 72);
    }
    if ( v5 != v2 + 88 )
      free((void *)v5);
    v9 = *(char **)(v2 + 56);
    v10 = *(char **)(v2 + 48);
    if ( v9 != v10 )
    {
      do
      {
        v11 = v10;
        v10 += 40;
        sub_222B2A0(v11);
      }
      while ( v9 != v10 );
      v10 = *(char **)(v2 + 48);
    }
    if ( v10 )
      operator delete(v10);
    operator delete((void *)v2, 0x1270u);
  }
  v12 = (_QWORD *)a1[5];
  if ( v12 != a1 + 7 )
    operator delete(v12);
  v13 = (void *)a1[4];
  if ( v13 )
  {
    v14 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v13 + 8LL);
    if ( v14 == sub_1393170 )
    {
      *(_QWORD *)v13 = &off_2BB2510;
      nullsub_646();
      operator delete(v13, 0x30u);
    }
    else
    {
      v14((_QWORD *)a1[4]);
    }
  }
  nullsub_558();
}
