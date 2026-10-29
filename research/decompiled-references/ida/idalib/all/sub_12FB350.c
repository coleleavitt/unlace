void __fastcall sub_12FB350(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  void **v4; // r12
  void **v5; // rbp
  void **v6; // r12
  void **v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi

  v2 = (_QWORD *)a1[23];
  if ( v2 != a1 + 25 )
    operator delete(v2);
  v3 = (_QWORD *)a1[19];
  if ( v3 != a1 + 21 )
    operator delete(v3);
  v4 = (void **)a1[17];
  v5 = (void **)a1[16];
  if ( v4 != v5 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 5;
        if ( v4 == v5 )
          goto LABEL_8;
      }
      v5 += 5;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = (void **)a1[16];
  }
  if ( v5 )
    operator delete(v5);
  v6 = (void **)a1[14];
  v7 = (void **)a1[13];
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
    v7 = (void **)a1[13];
  }
  if ( v7 )
    operator delete(v7);
  v8 = (_QWORD *)a1[9];
  if ( v8 != a1 + 11 )
    operator delete(v8);
  v9 = (_QWORD *)a1[5];
  if ( v9 != a1 + 7 )
    operator delete(v9);
}
