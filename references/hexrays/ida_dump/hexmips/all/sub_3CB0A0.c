void *__fastcall sub_3CB0A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  void *result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi

  *a1 = off_4C9B60;
  v2 = a1[26];
  if ( v2 )
  {
    a1[27] = 0;
    qfree(v2);
  }
  v3 = a1[23];
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v3);
  }
  result = &unk_4CBCC8;
  v9 = a1 + 22;
  v10 = a1 + 10;
  *(v10 - 10) = &unk_4CBCC8;
  do
  {
    v11 = *(v9 - 3);
    v9 -= 3;
    if ( v11 )
    {
      v9[1] = 0;
      result = (void *)qfree(v11);
    }
  }
  while ( v10 != v9 );
  return result;
}
