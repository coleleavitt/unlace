void __fastcall sub_8B6E00(_QWORD *a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rdi
  __int64 i; // rbx
  void **v5; // rbp
  void *v6; // rdi

  v2 = a1[32];
  v3 = (_QWORD *)a1[31];
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = (void **)v3[i];
      if ( v5 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = nullptr;
          qfree(v6);
        }
        qfree(v5);
        v3 = (_QWORD *)a1[31];
      }
    }
  }
  if ( v3 )
  {
    a1[32] = 0;
    qfree(v3);
    a1[31] = 0;
    a1[33] = 0;
  }
}
