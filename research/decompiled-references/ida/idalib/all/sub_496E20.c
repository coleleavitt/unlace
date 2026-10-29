void __fastcall sub_496E20(char *a1)
{
  char *v2; // rdi
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 j; // rbp
  char *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi

  v2 = a1 + 128;
  *((_QWORD *)v2 - 16) = &off_2B2C8A8;
  *((_QWORD *)v2 - 8) = off_2B2C648;
  sub_496580((__int64)v2);
  v3 = *((char **)a1 + 9);
  *((_QWORD *)a1 + 8) = &off_2BFAE90;
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 10);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[144 * i];
        clear_tinfo_t(v6 + 64);
        v7 = *((void **)v6 + 5);
        if ( v7 )
        {
          *((_QWORD *)v6 + 6) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 2);
        if ( v8 )
        {
          *((_QWORD *)v6 + 3) = 0;
          qfree(v8);
        }
        v3 = *((char **)a1 + 9);
      }
    }
    *((_QWORD *)a1 + 10) = 0;
    qfree(v3);
  }
  v9 = *((char **)a1 + 5);
  *(_QWORD *)a1 = &off_2B2C7F0;
  if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 6);
    if ( v10 )
    {
      v11 = 0;
      for ( j = 0; j != v10; ++j )
      {
        v13 = &v9[v11];
        clear_tinfo_t(&v9[v11 + 64]);
        v14 = *(void **)&v9[v11 + 40];
        if ( v14 )
        {
          *((_QWORD *)v13 + 6) = 0;
          qfree(v14);
        }
        v15 = *((void **)v13 + 2);
        if ( v15 )
        {
          *((_QWORD *)v13 + 3) = 0;
          qfree(v15);
        }
        v9 = *((char **)a1 + 5);
        v11 += 184;
      }
    }
    *((_QWORD *)a1 + 6) = 0;
    qfree(v9);
  }
  operator delete(a1, 0x228u);
}
