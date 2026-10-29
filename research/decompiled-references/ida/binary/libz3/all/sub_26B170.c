void __fastcall sub_26B170(_QWORD **a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r12
  void *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // r12
  void *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r12
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rdi
  void *v22; // rdi
  __int64 v23; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (_QWORD *)v1[22];
    if ( v2 )
    {
      v3 = *((unsigned int *)v2 - 1);
      if ( (_DWORD)v3 )
      {
        v4 = &v2[v3];
        do
        {
          while ( *v2 )
          {
            v5 = (void *)(*v2++ - 8LL);
            sub_186B220(v5);
            if ( v4 == v2 )
              goto LABEL_7;
          }
          ++v2;
        }
        while ( v4 != v2 );
LABEL_7:
        v2 = (_QWORD *)v1[22];
      }
      sub_186B220(v2 - 1);
    }
    v6 = (_QWORD *)v1[21];
    if ( v6 )
    {
      v7 = *((unsigned int *)v6 - 1);
      if ( (_DWORD)v7 )
      {
        v8 = &v6[v7];
        do
        {
          while ( *v6 )
          {
            v9 = (void *)(*v6++ - 8LL);
            sub_186B220(v9);
            if ( v6 == v8 )
              goto LABEL_14;
          }
          ++v6;
        }
        while ( v6 != v8 );
LABEL_14:
        v6 = (_QWORD *)v1[21];
      }
      sub_186B220(v6 - 1);
    }
    v10 = (_QWORD *)v1[20];
    if ( v10 )
    {
      v11 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v11 )
      {
        v12 = &v10[v11];
        do
        {
          while ( *v10 )
          {
            v13 = (void *)(*v10++ - 8LL);
            sub_186B220(v13);
            if ( v10 == v12 )
              goto LABEL_21;
          }
          ++v10;
        }
        while ( v10 != v12 );
LABEL_21:
        v10 = (_QWORD *)v1[20];
      }
      sub_186B220(v10 - 1);
    }
    v14 = (_QWORD *)v1[19];
    if ( v14 )
    {
      v15 = *((unsigned int *)v14 - 1);
      if ( (_DWORD)v15 )
      {
        v16 = &v14[v15];
        do
        {
          while ( *v14 )
          {
            v17 = (void *)(*v14++ - 8LL);
            sub_186B220(v17);
            if ( v16 == v14 )
              goto LABEL_28;
          }
          ++v14;
        }
        while ( v14 != v16 );
LABEL_28:
        v14 = (_QWORD *)v1[19];
      }
      sub_186B220(v14 - 1);
    }
    v18 = v1[17];
    if ( v18 )
      sub_186B220((void *)(v18 - 8));
    v19 = v1[15];
    v20 = v1[14];
    if ( v19 != v20 )
    {
      do
      {
        if ( *(_QWORD *)v20 != v20 + 16 )
          operator delete(*(void **)v20, *(_QWORD *)(v20 + 16) + 1LL);
        v20 += 32;
      }
      while ( v19 != v20 );
      v20 = v1[14];
    }
    if ( v20 )
      operator delete((void *)v20, v1[16] - v20);
    v21 = v1[13];
    if ( v21 )
      sub_186B220((void *)(v21 - 8));
    v22 = (void *)v1[10];
    if ( v22 )
      sub_186B220(v22);
    v23 = v1[3];
    if ( v23 )
      sub_186B220((void *)(v23 - 8));
    sub_186B220(v1);
  }
}

