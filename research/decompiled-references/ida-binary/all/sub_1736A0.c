void __fastcall sub_1736A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  v6 = (void *)a1[6];
  if ( v6 )
  {
    QT::QTextLayout::~QTextLayout((QT::QTextLayout *)a1[6]);
    a2 = 8;
    operator delete(v6, 8u);
  }
  v7 = a1[23];
  a1[6] = 0;
  *((_BYTE *)a1 + 216) = 0;
  a1[1] = 0;
  a1[4] = 0;
  if ( v7 )
  {
    a1[24] = 0;
    qfree(v7, a2, a3, a4, a5);
  }
  v8 = a1[20];
  if ( v8 )
  {
    a1[21] = 0;
    qfree(v8, a2, a3, a4, a5);
  }
  v9 = a1[17];
  if ( v9 )
  {
    a1[18] = 0;
    qfree(v9, a2, a3, a4, a5);
  }
  v10 = a1[10];
  if ( v10 )
  {
    a1[11] = 0;
    qfree(v10, a2, a3, a4, a5);
  }
  v11 = a1[7];
  if ( v11 )
  {
    a1[8] = 0;
    qfree(v11, a2, a3, a4, a5);
  }
  v12 = a1[3];
  if ( v12 )
  {
    a1[4] = 0;
    qfree(v12, a2, a3, a4, a5);
  }
  v13 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v13, a2, a3, a4, a5);
  }
}
