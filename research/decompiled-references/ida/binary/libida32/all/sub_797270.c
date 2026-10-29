void __fastcall sub_797270(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_797270(*((void **)v1 + 3));
      v3 = *((void **)v1 + 7);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[8] = 0;
        qfree(v3);
      }
      v4 = (void *)v2[4];
      if ( v4 )
      {
        v2[5] = 0;
        qfree(v4);
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}

