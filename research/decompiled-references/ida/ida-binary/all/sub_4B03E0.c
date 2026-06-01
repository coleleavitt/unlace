void __fastcall sub_4B03E0(__int64 **a1, const char *a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rdi
  __int64 *v7; // rbp
  __int64 v8; // rdi

  if ( (_BYTE)a2 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = 0;
        qfree(v4, a2);
      }
      qfree(v3, a2);
      a1[2] = nullptr;
    }
  }
  else
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v6, a2);
      }
      qfree(v5, a2);
      a1[1] = nullptr;
    }
    v7 = *a1;
    if ( *a1 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        v7[1] = 0;
        qfree(v8, a2);
      }
      qfree(v7, a2);
      *a1 = nullptr;
    }
  }
}
