void __fastcall sub_5E0830(void *a1)
{
  void *v1; // rbx
  _QWORD *v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_5E0830(*((void **)v1 + 3));
      v3 = *((void **)v1 + 9);
      v1 = *((void **)v1 + 2);
      sub_5E07C0(v3);
      v4 = (void *)v2[4];
      if ( v4 )
      {
        v2[5] = 0;
        qfree(v4);
      }
      operator delete(v2, 0x68u);
    }
    while ( v1 );
  }
}

