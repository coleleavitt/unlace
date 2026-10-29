void __fastcall sub_211C370(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 *v3; // r14
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  void *v8; // rcx
  _QWORD *v9; // r15
  _QWORD *v10; // r13
  void *v11; // rdi
  void *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // r13
  _QWORD *v15; // r12
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void (*v21)(void); // rax
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  *a1 = off_2C73160;
  v2 = (_QWORD *)a1[15];
  if ( v2 != a1 + 17 )
    free(v2);
  v3 = (__int64 *)a1[11];
  v4 = (__int64 *)a1[10];
  if ( v3 != v4 )
  {
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = *(_QWORD *)(v5 + 176);
        v7 = *(_QWORD *)(v5 + 168);
        if ( v6 != v7 )
        {
          do
          {
            while ( 1 )
            {
              v8 = *(void **)(v7 + 56);
              v22 = v7 + 72;
              if ( v8 == (void *)(v7 + 72) )
                break;
              free(v8);
              operator delete(*(_QWORD *)(v7 + 32), 16LL * *(unsigned int *)(v7 + 48), 8);
              v7 += 72;
              if ( v6 == v22 )
                goto LABEL_8;
            }
            v23 = *(_QWORD *)(v7 + 56);
            operator delete(*(_QWORD *)(v7 + 32), 16LL * *(unsigned int *)(v7 + 48), 8);
            v7 = v23;
          }
          while ( v6 != v23 );
LABEL_8:
          v7 = *(_QWORD *)(v5 + 168);
        }
        if ( v7 )
          operator delete((void *)v7);
        v9 = *(_QWORD **)(v5 + 152);
        v10 = &v9[9 * *(unsigned int *)(v5 + 160)];
        if ( v9 != v10 )
        {
          do
          {
            while ( 1 )
            {
              v10 -= 9;
              v11 = (void *)v10[1];
              if ( !v11 )
                break;
              operator delete(v11);
              if ( v9 == v10 )
                goto LABEL_14;
            }
          }
          while ( v9 != v10 );
LABEL_14:
          v10 = *(_QWORD **)(v5 + 152);
        }
        if ( (_QWORD *)(v5 + 168) != v10 )
          free(v10);
        operator delete(*(_QWORD *)(v5 + 128), 16LL * *(unsigned int *)(v5 + 144), 8);
        v12 = *(void **)(v5 + 104);
        if ( v12 )
          operator delete(v12);
        operator delete((void *)v5, 0xC0u);
      }
      ++v4;
    }
    while ( v3 != v4 );
    v4 = (__int64 *)a1[10];
  }
  if ( v4 )
    operator delete(v4);
  v13 = (_QWORD *)a1[6];
  if ( v13 != a1 + 8 )
    free(v13);
  v14 = (_QWORD *)a1[4];
  v15 = (_QWORD *)a1[3];
  if ( v14 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v16 = (_QWORD *)v15[5];
        v17 = (_QWORD *)v15[4];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v18 = (_QWORD *)v17[9];
              if ( v18 != v17 + 11 )
                operator delete(v18);
              v19 = (void *)v17[6];
              if ( !v19 )
                break;
              operator delete(v19);
              v17 += 13;
              if ( v16 == v17 )
                goto LABEL_32;
            }
            v17 += 13;
          }
          while ( v16 != v17 );
LABEL_32:
          v17 = (_QWORD *)v15[4];
        }
        if ( !v17 )
          break;
        v15 += 12;
        operator delete(v17);
        if ( v14 == v15 )
          goto LABEL_35;
      }
      v15 += 12;
    }
    while ( v14 != v15 );
LABEL_35:
    v15 = (_QWORD *)a1[3];
  }
  if ( v15 )
    operator delete(v15);
  v20 = (void *)a1[2];
  if ( v20 )
  {
    v21 = *(void (**)(void))(*(_QWORD *)v20 + 8LL);
    if ( (char *)v21 == (char *)sub_2119DF0 )
      operator delete(v20, 0x10u);
    else
      v21();
  }
}
