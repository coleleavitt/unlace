void __fastcall sub_4968E0(_QWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

  v2 = (__int64)(a1 + 14);
  *(_QWORD *)(v2 - 112) = &off_2B2C680;
  *(_QWORD *)(v2 - 64) = off_2B2C648;
  sub_496580(v2);
  v3 = (char *)a1[7];
  a1[6] = &off_2BFAE90;
  if ( v3 )
  {
    v4 = a1[8];
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
        v3 = (char *)a1[7];
      }
    }
    a1[8] = 0;
    qfree(v3);
  }
}
