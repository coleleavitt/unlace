void __fastcall sub_556EF0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  *a1 = &off_2B2E4F8;
  v3 = a1[15];
  if ( v3 != get_idati(a1, a2) )
  {
    v4 = (_QWORD *)a1[16];
    if ( v4 )
    {
      delete_dirtree(*v4);
      operator delete(v4, 8u);
    }
  }
  v5 = (void *)a1[11];
  *a1 = &unk_2BFB060;
  *(_OWORD *)(a1 + 15) = 0;
  if ( v5 )
  {
    a1[12] = 0;
    qfree(v5);
  }
  v6 = (void *)a1[8];
  if ( v6 )
  {
    a1[9] = 0;
    qfree(v6);
  }
  v7 = (void *)a1[4];
  if ( v7 )
  {
    a1[5] = 0;
    qfree(v7);
  }
  v8 = (void *)a1[1];
  if ( v8 )
  {
    a1[2] = 0;
    qfree(v8);
  }
}
