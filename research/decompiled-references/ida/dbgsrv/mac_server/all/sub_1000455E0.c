/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000455E0
// Address: 0x00000001000455E0

//----- (00000001000455E0) ----------------------------------------------------
void __fastcall sub_1000455E0(_QWORD *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  void *v11; // rdi
  void **v12; // r14
  void *v13; // rdi
  void *v14; // rdi
  void **v15; // r15

  sub_100045830((__int64)a1, 1);
  sub_100045990((__int64)a1);
  v2 = (_QWORD *)a1[68];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_10004CE40((__int64)(v2 + 2));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)a1[66];
  a1[66] = 0;
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
          *(_QWORD *)(v10 + v9 + 8) = 0;
          qfree(v11);
          *(_QWORD *)(v10 + v9) = 0;
          *(_QWORD *)(v10 + v9 + 16) = 0;
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
  v12 = (void **)a1[13];
  if ( v12 )
  {
    do
    {
      v15 = (void **)*v12;
      if ( ((_BYTE)v12[2] & 1) != 0 )
        operator delete(v12[4]);
      operator delete(v12);
      v12 = v15;
    }
    while ( v15 );
  }
  v13 = (void *)a1[11];
  a1[11] = 0;
  if ( v13 )
    operator delete(v13);
  if ( a1[7] )
  {
    sub_10004CD30(a1 + 7, 0);
    qfree((void *)a1[7]);
    a1[7] = 0;
    a1[9] = 0;
  }
  v14 = (void *)a1[4];
  if ( v14 )
  {
    a1[5] = 0;
    qfree(v14);
    a1[4] = 0;
    a1[6] = 0;
  }
}
