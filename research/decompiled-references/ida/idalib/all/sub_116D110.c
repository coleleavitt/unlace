void __fastcall sub_116D110(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  void **v4; // r12
  void **v5; // rbp
  void **v6; // r12
  void **v7; // rbp
  void **v8; // r12
  void **v9; // rbp
  void **v10; // r12
  void **v11; // rbp
  void **v12; // r12
  void **v13; // rbp
  void *v14; // rdi

  v2 = (_QWORD *)a1[40];
  if ( v2 != a1 + 42 )
    operator delete(v2);
  v3 = (_QWORD *)a1[34];
  if ( v3 != a1 + 36 )
    operator delete(v3);
  v4 = (void **)a1[26];
  v5 = (void **)a1[25];
  if ( v4 != v5 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 4;
        if ( v4 == v5 )
          goto LABEL_8;
      }
      v5 += 4;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = (void **)a1[25];
  }
  if ( v5 )
    operator delete(v5);
  v6 = (void **)a1[23];
  v7 = (void **)a1[22];
  if ( v6 != v7 )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v6 == v7 )
          goto LABEL_14;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_14:
    v7 = (void **)a1[22];
  }
  if ( v7 )
    operator delete(v7);
  v8 = (void **)a1[20];
  v9 = (void **)a1[19];
  if ( v8 != v9 )
  {
    do
    {
      while ( *v9 != v9 + 2 )
      {
        operator delete(*v9);
        v9 += 4;
        if ( v9 == v8 )
          goto LABEL_20;
      }
      v9 += 4;
    }
    while ( v8 != v9 );
LABEL_20:
    v9 = (void **)a1[19];
  }
  if ( v9 )
    operator delete(v9);
  v10 = (void **)a1[17];
  v11 = (void **)a1[16];
  if ( v10 != v11 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_26;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_26:
    v11 = (void **)a1[16];
  }
  if ( v11 )
    operator delete(v11);
  v12 = (void **)a1[14];
  v13 = (void **)a1[13];
  if ( v12 != v13 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_32;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_32:
    v13 = (void **)a1[13];
  }
  if ( v13 )
    operator delete(v13);
  v14 = (void *)a1[8];
  if ( v14 )
    operator delete(v14);
}
