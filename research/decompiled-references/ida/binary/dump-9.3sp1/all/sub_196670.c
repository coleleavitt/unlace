void *__fastcall sub_196670(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  void *result; // rax

  *a1 = &off_4DE180;
  clear_tinfo_t();
  clear_tinfo_t();
  v2 = a1[53];
  if ( v2 )
  {
    a1[54] = 0;
    qfree(v2);
  }
  v3 = a1[50];
  if ( v3 )
  {
    a1[51] = 0;
    qfree(v3);
  }
  v4 = a1[46];
  if ( v4 )
  {
    a1[47] = 0;
    qfree(v4);
  }
  v5 = a1[30];
  if ( v5 )
  {
    a1[31] = 0;
    qfree(v5);
  }
  v6 = a1[15];
  if ( v6 )
  {
    v7 = a1[16];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = v6 + (i << 7);
        v10 = *(_QWORD *)(v9 + 96);
        if ( v10 )
        {
          *(_QWORD *)(v9 + 104) = 0;
          qfree(v10);
          v6 = a1[15];
        }
      }
    }
    a1[16] = 0;
    qfree(v6);
  }
  v11 = a1[3];
  result = &unk_4EBFA0;
  *a1 = &unk_4EBFA0;
  if ( v11 )
  {
    a1[4] = 0;
    return (void *)qfree(v11);
  }
  return result;
}
