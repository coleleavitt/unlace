void __fastcall sub_53D5C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  *a1 = &off_2BD0F38;
  v7 = (void *)a1[39];
  if ( v7 )
  {
    a1[40] = 0;
    qfree(v7);
  }
  v8 = (void *)a1[36];
  if ( v8 )
  {
    a1[37] = 0;
    qfree(v8);
  }
  v9 = (void *)a1[27];
  if ( v9 )
  {
    a1[28] = 0;
    qfree(v9);
  }
  sub_557A80(a1, a2, a3, a4, a5, a6);
  operator delete(a1, 0x160u);
}

