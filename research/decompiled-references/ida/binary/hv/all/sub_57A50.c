void __fastcall sub_57A50(_QWORD *a1)
{
  __int64 v2; // r13
  void **v3; // rbx
  void **i; // r13
  void **v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // rdi
  void *v12; // rdi

  v2 = a1[23];
  v3 = (void **)a1[22];
  *a1 = &off_164848;
  for ( i = &v3[2 * v2]; i != v3; v3 += 2 )
  {
    v5 = (void **)*v3;
    if ( *v3 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = nullptr;
        j__free(v6);
      }
      j__free(v5);
    }
  }
  v7 = (void *)a1[26];
  if ( v7 )
  {
    a1[27] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[22];
  if ( v8 )
  {
    a1[23] = 0;
    j__free(v8);
  }
  v9 = a1[18];
  while ( v9 )
  {
    v10 = (_QWORD *)v9;
    sub_57670(*(_QWORD **)(v9 + 24));
    v11 = *(void **)(v9 + 32);
    v9 = *(_QWORD *)(v9 + 16);
    if ( v11 )
    {
      v10[5] = 0;
      j__free(v11);
    }
    operator delete(v10, 0x40u);
  }
  v12 = (void *)a1[11];
  if ( v12 )
  {
    a1[12] = 0;
    j__free(v12);
  }
  sub_67790(a1);
  operator delete(a1, 0xE8u);
}

