void __fastcall sub_5149B0(void *a1)
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
      sub_5149B0(*((void **)v1 + 3));
      v3 = *((void **)v1 + 9);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[10] = 0;
        qfree(v3);
      }
      v4 = (void *)v2[5];
      if ( v4 )
      {
        v2[6] = 0;
        qfree(v4);
      }
      operator delete(v2, 0x68u);
    }
    while ( v1 );
  }
}
