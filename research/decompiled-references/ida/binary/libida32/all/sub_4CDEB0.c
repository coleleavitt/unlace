void __fastcall sub_4CDEB0(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v1 = a1[2];
  while ( v1 )
  {
    v2 = (_QWORD *)v1;
    sub_4CDE20(*(void **)(v1 + 24));
    v3 = *(void **)(v1 + 80);
    v1 = *(_QWORD *)(v1 + 16);
    if ( v3 )
    {
      v2[11] = 0;
      qfree(v3);
    }
    v4 = (void *)v2[7];
    if ( v4 )
    {
      v2[8] = 0;
      qfree(v4);
    }
    v5 = (void *)v2[4];
    if ( v5 )
    {
      v2[5] = 0;
      qfree(v5);
    }
    operator delete(v2, 0x68u);
  }
}

