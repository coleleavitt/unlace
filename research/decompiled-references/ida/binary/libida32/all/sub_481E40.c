void __fastcall sub_481E40(_QWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  __int64 v10; // r13
  __int64 j; // rbp
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi

  v2 = (__int64)(a1 + 16);
  *(_QWORD *)(v2 - 128) = &off_2B028E8;
  *(_QWORD *)(v2 - 64) = off_2B02688;
  sub_481890(v2);
  v3 = (char *)a1[9];
  a1[8] = &off_2BD0E90;
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[128 * i];
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
        v3 = (char *)a1[9];
      }
    }
    a1[10] = 0;
    qfree(v3);
  }
  v9 = (char *)a1[5];
  *a1 = &off_2B02830;
  if ( v9 )
  {
    v10 = a1[6];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = &v9[160 * j];
        clear_tinfo_t(v12 + 64);
        v13 = *((void **)v12 + 5);
        if ( v13 )
        {
          *((_QWORD *)v12 + 6) = 0;
          qfree(v13);
        }
        v14 = *((void **)v12 + 2);
        if ( v14 )
        {
          *((_QWORD *)v12 + 3) = 0;
          qfree(v14);
        }
        v9 = (char *)a1[5];
      }
    }
    a1[6] = 0;
    qfree(v9);
  }
}

