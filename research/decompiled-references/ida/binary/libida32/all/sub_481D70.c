void __fastcall sub_481D70(char *a1)
{
  char *v2; // rdi
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

  v2 = a1 + 64;
  *((_QWORD *)v2 - 8) = off_2B02688;
  sub_481890((__int64)v2);
  v3 = *((char **)a1 + 1);
  *(_QWORD *)a1 = &off_2BD0E90;
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 2);
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
        v3 = *((char **)a1 + 1);
      }
    }
    *((_QWORD *)a1 + 2) = 0;
    qfree(v3);
  }
  operator delete(a1, 0x1E0u);
}

