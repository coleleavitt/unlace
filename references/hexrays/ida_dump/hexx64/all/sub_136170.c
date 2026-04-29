__int64 __fastcall sub_136170(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  *a1 = off_4DD9D8;
  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        v6 = v5[5];
        if ( v6 )
        {
          v5[6] = 0;
          qfree(v6);
        }
        v7 = v5[2];
        if ( v7 )
        {
          v5[3] = 0;
          qfree(v7);
        }
        v2 = a1[9];
      }
    }
    a1[10] = 0;
    qfree(v2);
  }
  v8 = a1[2];
  if ( v8 )
  {
    a1[3] = 0;
    qfree(v8);
  }
  return qfree(a1);
}
