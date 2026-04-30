double __fastcall sub_29DB80(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 v6; // rbx
  void *v7; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_QWORD *)(v3 + 48 * i + 16);
        if ( v6 )
        {
          do
          {
            sub_290E80(*(_QWORD **)(v6 + 24));
            v7 = (void *)v6;
            v6 = *(_QWORD *)(v6 + 16);
            a2 = (const char *)&word_38;
            operator delete(v7, 0x38u);
          }
          while ( v6 );
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
