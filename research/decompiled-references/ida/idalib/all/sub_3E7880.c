void __fastcall sub_3E7880(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = (char *)a1[22];
  *a1 = &unk_2BF9E80;
  if ( v2 )
  {
    v3 = a1[23];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)a1[22];
        }
      }
    }
    a1[23] = 0;
    qfree(v2);
  }
  v7 = (void *)a1[19];
  if ( v7 )
  {
    a1[20] = 0;
    qfree(v7);
  }
  *a1 = &off_2B26160;
  merge_handler_dtr((int)a1);
  v8 = (void *)a1[12];
  if ( v8 )
  {
    a1[13] = 0;
    qfree(v8);
  }
  v9 = (void *)a1[2];
  if ( v9 )
  {
    a1[3] = 0;
    qfree(v9);
  }
  operator delete(a1, 0xC8u);
}
