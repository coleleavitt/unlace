void __fastcall sub_53D640(char *a1)
{
  char *v1; // rbp
  _QWORD *v2; // rbx
  char *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_53D640(*((void **)v1 + 3));
      v3 = v1 + 128;
      v1 = *((char **)v1 + 2);
      clear_tinfo_t(v3);
      v4 = (void *)v2[12];
      if ( v4 )
      {
        v2[13] = 0;
        qfree(v4);
      }
      v5 = (void *)v2[9];
      if ( v5 )
      {
        v2[10] = 0;
        qfree(v5);
      }
      v6 = (void *)v2[6];
      if ( v6 )
      {
        v2[7] = 0;
        qfree(v6);
      }
      operator delete(v2, 0x90u);
    }
    while ( v1 );
  }
}

