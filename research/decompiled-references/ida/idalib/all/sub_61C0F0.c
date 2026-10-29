void __fastcall sub_61C0F0(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_61C0F0(*((void **)v1 + 3));
      v3 = *((void **)v1 + 10);
      v1 = *((void **)v1 + 2);
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
      operator delete(v2, 0x70u);
    }
    while ( v1 );
  }
}
