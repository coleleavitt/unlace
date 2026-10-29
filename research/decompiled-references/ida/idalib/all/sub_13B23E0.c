void __fastcall sub_13B23E0(_QWORD *a1)
{
  void *v2; // rdi
  _QWORD *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  _QWORD *v11; // rdi
  _QWORD *v12; // r12
  _QWORD *v13; // rbp
  _QWORD *v14; // rdi

  *a1 = &off_2C44388;
  v2 = (void *)a1[14];
  if ( v2 )
    operator delete(v2);
  v3 = (_QWORD *)a1[12];
  v4 = (_QWORD *)a1[11];
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = (_QWORD *)v4[1];
        if ( v5 == v4 + 3 )
          break;
        operator delete(v5);
        v4 += 5;
        if ( v3 == v4 )
          goto LABEL_6;
      }
      v4 += 5;
    }
    while ( v3 != v4 );
LABEL_6:
    v4 = (_QWORD *)a1[11];
  }
  if ( v4 )
    operator delete(v4);
  v6 = (_QWORD *)a1[9];
  v7 = (_QWORD *)a1[8];
  if ( v6 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v7[1];
        if ( v8 == v7 + 3 )
          break;
        operator delete(v8);
        v7 += 5;
        if ( v6 == v7 )
          goto LABEL_12;
      }
      v7 += 5;
    }
    while ( v6 != v7 );
LABEL_12:
    v7 = (_QWORD *)a1[8];
  }
  if ( v7 )
    operator delete(v7);
  v9 = (_QWORD *)a1[6];
  v10 = (_QWORD *)a1[5];
  if ( v9 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v11 = (_QWORD *)v10[1];
        if ( v11 == v10 + 3 )
          break;
        operator delete(v11);
        v10 += 5;
        if ( v10 == v9 )
          goto LABEL_18;
      }
      v10 += 5;
    }
    while ( v9 != v10 );
LABEL_18:
    v10 = (_QWORD *)a1[5];
  }
  if ( v10 )
    operator delete(v10);
  v12 = (_QWORD *)a1[3];
  v13 = (_QWORD *)a1[2];
  if ( v12 != v13 )
  {
    do
    {
      while ( 1 )
      {
        v14 = (_QWORD *)v13[1];
        if ( v14 == v13 + 3 )
          break;
        operator delete(v14);
        v13 += 5;
        if ( v12 == v13 )
          goto LABEL_24;
      }
      v13 += 5;
    }
    while ( v12 != v13 );
LABEL_24:
    v13 = (_QWORD *)a1[2];
  }
  if ( v13 )
    operator delete(v13);
  nullsub_558();
  operator delete(a1, 0x88u);
}
