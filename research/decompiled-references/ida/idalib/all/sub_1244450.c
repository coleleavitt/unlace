void __fastcall sub_1244450(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  void **v6; // r12
  void **v7; // rbp

  *a1 = off_2C3C558;
  v2 = (_QWORD *)a1[640];
  if ( v2 != a1 + 642 )
    operator delete(v2);
  v3 = (_QWORD *)a1[636];
  if ( v3 != a1 + 638 )
    operator delete(v3);
  v4 = (_QWORD *)a1[632];
  if ( v4 != a1 + 634 )
    operator delete(v4);
  v5 = (_QWORD *)a1[626];
  if ( v5 != a1 + 628 )
    operator delete(v5);
  v6 = (void **)a1[624];
  v7 = (void **)a1[623];
  *a1 = off_2C3CFE0;
  if ( v6 != v7 )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v6 == v7 )
          goto LABEL_12;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_12:
    v7 = (void **)a1[623];
  }
  if ( v7 )
    operator delete(v7);
  *a1 = off_2C3B350;
  sub_12203A0((__int64)a1);
  operator delete(a1, 0x1420u);
}
