__int64 __fastcall sub_367440(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rdi

  *a1 = off_4C6A78;
  v2 = a1[27];
  if ( v2 )
  {
    a1[28] = 0;
    qfree(v2);
  }
  v3 = a1[24];
  if ( v3 )
  {
    v4 = a1[25];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + (i << 6);
        clear_tinfo_t(v6 + 48);
        v7 = *(_QWORD *)(v6 + 16);
        while ( v7 )
        {
          sub_366CD0(*(_QWORD **)(v7 + 24));
          v8 = (void *)v7;
          v7 = *(_QWORD *)(v7 + 16);
          operator delete(v8, 0x28u);
        }
        v3 = a1[24];
      }
    }
    a1[25] = 0;
    qfree(v3);
  }
  v9 = a1 + 19;
  *a1 = &unk_4CBCC8;
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      v9[1] = 0;
      qfree(v10);
    }
    v9 -= 3;
  }
  while ( a1 + 7 != v9 );
  return qfree(a1);
}
