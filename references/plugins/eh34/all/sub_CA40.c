void __fastcall sub_CA40(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_CA40(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 8);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[9] = 0;
        qfree(v3);
      }
      v4 = v2[5];
      if ( v4 )
      {
        v2[6] = 0;
        qfree(v4);
      }
      operator delete(v2, 0x58u);
    }
    while ( v1 );
  }
}
