/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003FDFC
// Address: 0x000000010003FDFC

//----- (000000010003FDFC) ----------------------------------------------------
_QWORD *__fastcall sub_10003FDFC(_QWORD *a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x8
  void *v11; // x0
  _QWORD *v12; // x22
  void **v13; // x20
  void *v14; // x0
  void *v15; // x0
  void **v17; // x21

  lex_term_file_0((__int64)a1, 1);
  sub_100040098((__int64)a1);
  v2 = (_QWORD *)a1[73];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_100046F58((__int64)(v2 + 2));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)a1[71];
  a1[71] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[37];
  if ( v5 )
  {
    a1[38] = 0;
    qfree(v5);
    a1[37] = 0;
    a1[39] = 0;
  }
  v6 = (void *)a1[31];
  if ( v6 )
  {
    a1[32] = 0;
    qfree(v6);
    a1[31] = 0;
    a1[33] = 0;
  }
  v7 = (void *)a1[28];
  if ( v7 )
  {
    v8 = a1[29];
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = a1[28];
        v11 = *(void **)(v10 + v9);
        if ( v11 )
        {
          v12 = (_QWORD *)(v10 + v9);
          *(_QWORD *)(v10 + v9 + 8) = 0;
          qfree(v11);
          *v12 = 0;
          v12[2] = 0;
        }
        v9 += 24;
        --v8;
      }
      while ( v8 );
      v7 = (void *)a1[28];
    }
    a1[29] = 0;
    qfree(v7);
    a1[28] = 0;
    a1[30] = 0;
  }
  v13 = (void **)a1[13];
  if ( v13 )
  {
    do
    {
      v17 = (void **)*v13;
      if ( *((char *)v13 + 39) < 0 )
        operator delete(v13[2]);
      operator delete(v13);
      v13 = v17;
    }
    while ( v17 );
  }
  v14 = (void *)a1[11];
  a1[11] = 0;
  if ( v14 )
    operator delete(v14);
  if ( a1[7] )
  {
    sub_100046E7C(a1 + 7, 0);
    qfree((void *)a1[7]);
    a1[7] = 0;
    a1[9] = 0;
  }
  v15 = (void *)a1[4];
  if ( v15 )
  {
    a1[5] = 0;
    qfree(v15);
    a1[4] = 0;
    a1[6] = 0;
  }
  return a1;
}
