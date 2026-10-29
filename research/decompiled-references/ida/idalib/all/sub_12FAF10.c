void __fastcall sub_12FAF10(_QWORD *a1)
{
  void **v1; // r12
  void **v3; // rbp
  void **v4; // r12
  void **v5; // rbp
  void **v6; // r12
  void **v7; // rbp
  void **v8; // r12
  void **v9; // rbp
  void **v10; // r12
  void **v11; // rbp
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi

  v1 = (void **)a1[33];
  v3 = (void **)a1[32];
  if ( v1 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v1 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v1 != v3 );
LABEL_4:
    v3 = (void **)a1[32];
  }
  if ( v3 )
    operator delete(v3);
  v4 = (void **)a1[30];
  v5 = (void **)a1[29];
  if ( v4 != v5 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 4;
        if ( v4 == v5 )
          goto LABEL_10;
      }
      v5 += 4;
    }
    while ( v4 != v5 );
LABEL_10:
    v5 = (void **)a1[29];
  }
  if ( v5 )
    operator delete(v5);
  v6 = (void **)a1[27];
  v7 = (void **)a1[26];
  if ( v6 != v7 )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v6 == v7 )
          goto LABEL_16;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_16:
    v7 = (void **)a1[26];
  }
  if ( v7 )
    operator delete(v7);
  v8 = (void **)a1[24];
  v9 = (void **)a1[23];
  if ( v8 != v9 )
  {
    do
    {
      while ( *v9 != v9 + 2 )
      {
        operator delete(*v9);
        v9 += 4;
        if ( v8 == v9 )
          goto LABEL_22;
      }
      v9 += 4;
    }
    while ( v8 != v9 );
LABEL_22:
    v9 = (void **)a1[23];
  }
  if ( v9 )
    operator delete(v9);
  v10 = (void **)a1[21];
  v11 = (void **)a1[20];
  if ( v10 != v11 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_28;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_28:
    v11 = (void **)a1[20];
  }
  if ( v11 )
    operator delete(v11);
  v12 = (_QWORD *)a1[16];
  if ( v12 != a1 + 18 )
    operator delete(v12);
  v13 = (_QWORD *)a1[12];
  if ( v13 != a1 + 14 )
    operator delete(v13);
  v14 = (_QWORD *)a1[8];
  if ( v14 != a1 + 10 )
    operator delete(v14);
}
