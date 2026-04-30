void __fastcall sub_2FF1C0(void *a1, const char *a2)
{
  void *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = v2;
      sub_2FF1C0(*((void **)v2 + 3));
      v4 = *((_QWORD *)v2 + 7);
      v2 = *((void **)v2 + 2);
      if ( v4 )
      {
        v3[8] = 0;
        qfree(v4, a2);
      }
      v5 = v3[4];
      if ( v5 )
      {
        v3[5] = 0;
        qfree(v5, a2);
      }
      a2 = (const char *)&qword_58;
      operator delete(v3, 0x58u);
    }
    while ( v2 );
  }
}
