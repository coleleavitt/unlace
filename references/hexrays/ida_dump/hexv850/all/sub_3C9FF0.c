__int64 __fastcall sub_3C9FF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdi

  *a1 = off_4BCDC0;
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
  v8 = a1 + 22;
  *a1 = &unk_4BEC88;
  do
  {
    v9 = *(v8 - 3);
    v8 -= 3;
    if ( v9 )
    {
      v8[1] = 0;
      qfree(v9);
    }
  }
  while ( a1 + 10 != v8 );
  return qfree(a1);
}
