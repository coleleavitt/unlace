void __fastcall sub_57EF80(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  _QWORD *i; // rbp
  _QWORD *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[8];
    if ( v2 )
    {
      a1[9] = 0;
      qfree(v2);
    }
    v3 = (void *)a1[5];
    if ( v3 )
    {
      a1[6] = 0;
      qfree(v3);
    }
    for ( i = (_QWORD *)a1[1]; a1 + 1 != i; --a1[3] )
    {
      v5 = i;
      i = (_QWORD *)*i;
      *(_QWORD *)v5[1] = i;
      i[1] = v5[1];
      v6 = (void *)v5[5];
      if ( v6 )
      {
        v5[6] = 0;
        qfree(v6);
      }
      v7 = (void *)v5[2];
      if ( v7 )
      {
        v5[3] = 0;
        qfree(v7);
      }
      qfree(v5);
    }
    operator delete(a1, 0x80u);
  }
}
