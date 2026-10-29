void __fastcall sub_6703E0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // r12
  void *v8; // rdi
  void *v9; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[14];
    if ( v2 )
    {
      a1[15] = 0;
      qfree(v2);
    }
    v3 = (void *)a1[10];
    a1[8] = &off_2B0D7F0;
    if ( v3 )
    {
      a1[11] = 0;
      qfree(v3);
    }
    v4 = (_QWORD *)a1[5];
    if ( v4 )
    {
      v5 = a1[6];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (_QWORD *)v4[i];
          if ( v7 )
          {
            v8 = (void *)v7[1];
            if ( v8 )
            {
              v7[2] = 0;
              qfree(v8);
            }
            operator delete(v7, 0x28u);
            v4 = (_QWORD *)a1[5];
          }
        }
      }
      a1[6] = 0;
      qfree(v4);
    }
    v9 = (void *)a1[1];
    if ( v9 )
    {
      a1[2] = 0;
      qfree(v9);
    }
    operator delete(a1, 0x90u);
  }
}

