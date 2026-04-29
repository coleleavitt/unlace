void __fastcall sub_3EC640(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &unk_4EBF30;
  v2 = a1[32];
  if ( v2 )
  {
    a1[33] = 0;
    qfree(v2);
  }
  v3 = a1[29];
  if ( v3 )
  {
    a1[30] = 0;
    qfree(v3);
  }
  v4 = a1[22];
  if ( v4 )
  {
    a1[23] = 0;
    qfree(v4);
  }
  v5 = a1[19];
  if ( v5 )
  {
    a1[20] = 0;
    qfree(v5);
  }
  v6 = a1[15];
  if ( v6 )
  {
    a1[16] = 0;
    qfree(v6);
  }
  v7 = a1[12];
  if ( v7 )
  {
    a1[13] = 0;
    qfree(v7);
  }
  v8 = a1[5];
  if ( v8 )
  {
    a1[6] = 0;
    qfree(v8);
  }
  v9 = a1[2];
  if ( v9 )
  {
    a1[3] = 0;
    qfree(v9);
  }
  operator delete(a1, 0x190u);
}
