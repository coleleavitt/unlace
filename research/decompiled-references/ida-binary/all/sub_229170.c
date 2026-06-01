void __fastcall sub_229170(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7, a2);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
