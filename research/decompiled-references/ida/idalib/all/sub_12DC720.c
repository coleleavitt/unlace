void __fastcall sub_12DC720(_QWORD *a1)
{
  void **v2; // r12
  void **v3; // rbp
  void **v4; // r12
  void **v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // r12
  void **v12; // r12
  void **v13; // rbp
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  void **v16; // r12
  void **v17; // rbp
  void **v18; // r12
  void **v19; // rbp
  void **v20; // r12
  void **v21; // rbp

  v2 = (void **)a1[39];
  v3 = (void **)a1[38];
  if ( v2 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (void **)a1[38];
  }
  if ( v3 )
    operator delete(v3);
  v4 = (void **)a1[36];
  v5 = (void **)a1[35];
  if ( v4 != v5 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 5;
        if ( v4 == v5 )
          goto LABEL_10;
      }
      v5 += 5;
    }
    while ( v4 != v5 );
LABEL_10:
    v5 = (void **)a1[35];
  }
  if ( v5 )
    operator delete(v5);
  v6 = a1[33];
  v7 = a1[32];
  if ( v6 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(void **)(v7 + 32);
        if ( v8 != (void *)(v7 + 48) )
          operator delete(v8);
        if ( *(_QWORD *)v7 == v7 + 16 )
          break;
        operator delete(*(void **)v7);
        v7 += 64;
        if ( v6 == v7 )
          goto LABEL_18;
      }
      v7 += 64;
    }
    while ( v6 != v7 );
LABEL_18:
    v7 = a1[32];
  }
  if ( v7 )
    operator delete((void *)v7);
  v9 = a1[26];
  if ( v9 )
  {
    while ( 1 )
    {
      sub_F7EAE0((__int64)(a1 + 24), *(_QWORD **)(v9 + 24));
      v10 = *(void **)(v9 + 32);
      v11 = *(_QWORD *)(v9 + 16);
      if ( v10 == (void *)(v9 + 48) )
      {
        operator delete((void *)v9);
        if ( !v11 )
          break;
      }
      else
      {
        operator delete(v10);
        operator delete((void *)v9);
        if ( !v11 )
          break;
      }
      v9 = v11;
    }
  }
  v12 = (void **)a1[21];
  v13 = (void **)a1[20];
  if ( v12 != v13 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_35;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_35:
    v13 = (void **)a1[20];
  }
  if ( v13 )
    operator delete(v13);
  v14 = (_QWORD *)a1[16];
  if ( v14 != a1 + 18 )
    operator delete(v14);
  v15 = (_QWORD *)a1[12];
  if ( v15 != a1 + 14 )
    operator delete(v15);
  v16 = (void **)a1[9];
  v17 = (void **)a1[8];
  if ( v16 != v17 )
  {
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 += 4;
        if ( v16 == v17 )
          goto LABEL_45;
      }
      v17 += 4;
    }
    while ( v16 != v17 );
LABEL_45:
    v17 = (void **)a1[8];
  }
  if ( v17 )
    operator delete(v17);
  v18 = (void **)a1[6];
  v19 = (void **)a1[5];
  if ( v18 != v19 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_51;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_51:
    v19 = (void **)a1[5];
  }
  if ( v19 )
    operator delete(v19);
  v20 = (void **)a1[3];
  v21 = (void **)a1[2];
  if ( v20 != v21 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 5;
        if ( v21 == v20 )
          goto LABEL_57;
      }
      v21 += 5;
    }
    while ( v20 != v21 );
LABEL_57:
    v21 = (void **)a1[2];
  }
  if ( v21 )
    operator delete(v21);
}
