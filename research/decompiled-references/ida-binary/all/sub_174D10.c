void __fastcall sub_174D10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  void *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi

  v6 = *a1;
  if ( v6 )
  {
    qfree(v6, a2, a3, a4, a5);
    *a1 = 0;
  }
  v7 = (void *)a1[12];
  if ( v7 )
  {
    QT::QTextLayout::~QTextLayout((QT::QTextLayout *)a1[12]);
    a2 = 8;
    operator delete(v7, 8u);
  }
  v8 = a1[29];
  a1[12] = 0;
  *((_BYTE *)a1 + 264) = 0;
  a1[7] = 0;
  a1[10] = 0;
  if ( v8 )
  {
    a1[30] = 0;
    qfree(v8, a2, a3, a4, a5);
  }
  v9 = a1[26];
  if ( v9 )
  {
    a1[27] = 0;
    qfree(v9, a2, a3, a4, a5);
  }
  v10 = a1[23];
  if ( v10 )
  {
    a1[24] = 0;
    qfree(v10, a2, a3, a4, a5);
  }
  v11 = a1[16];
  if ( v11 )
  {
    a1[17] = 0;
    qfree(v11, a2, a3, a4, a5);
  }
  v12 = a1[13];
  if ( v12 )
  {
    a1[14] = 0;
    qfree(v12, a2, a3, a4, a5);
  }
  v13 = a1[9];
  if ( v13 )
  {
    a1[10] = 0;
    qfree(v13, a2, a3, a4, a5);
  }
  v14 = a1[6];
  if ( v14 )
  {
    a1[7] = 0;
    qfree(v14, a2, a3, a4, a5);
  }
  v15 = a1[1];
  if ( v15 )
  {
    a1[2] = 0;
    qfree(v15, a2, a3, a4, a5);
  }
}
