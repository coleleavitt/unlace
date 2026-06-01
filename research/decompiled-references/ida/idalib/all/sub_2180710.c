void __fastcall sub_2180710(_QWORD *a1)
{
  void **v2; // r13
  void **v3; // rbp
  void **v4; // r13
  void **v5; // rbp
  _QWORD *v6; // rdi
  void *v7; // rdi

  v2 = (void **)a1[20];
  v3 = &v2[4 * *((unsigned int *)a1 + 42)];
  *a1 = &off_2C73AC8;
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 4;
        if ( *v3 == v3 + 2 )
          break;
        operator delete(*v3);
        if ( v2 == v3 )
          goto LABEL_4;
      }
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (void **)a1[20];
  }
  if ( v3 != a1 + 22 )
    free(v3);
  v4 = (void **)a1[18];
  v5 = &v4[2 * *((unsigned int *)a1 + 38)];
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 2;
        if ( *v5 == v5 + 2 )
          break;
        free(*v5);
        if ( v4 == v5 )
          goto LABEL_10;
      }
    }
    while ( v4 != v5 );
LABEL_10:
    v5 = (void **)a1[18];
  }
  if ( a1 + 20 != v5 )
    free(v5);
  v6 = (_QWORD *)a1[12];
  if ( v6 != a1 + 15 )
    free(v6);
  v7 = (void *)a1[9];
  if ( v7 )
    operator delete(v7);
  *a1 = &unk_2C74610;
  sub_21A25E0(a1);
  operator delete(a1, 0xB8u);
}
