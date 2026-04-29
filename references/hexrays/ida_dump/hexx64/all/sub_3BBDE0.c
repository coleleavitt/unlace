__int64 __fastcall sub_3BBDE0(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi

  v1 = a1 - 4;
  *(a1 - 4) = &unk_4EC530;
  v3 = a1[24];
  *a1 = &unk_4EC568;
  a1[23] = &off_4EC628;
  if ( v3 )
  {
    v4 = a1[25];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 40 * i;
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree(v7);
          v3 = a1[24];
        }
      }
    }
    a1[25] = 0;
    qfree(v3);
  }
  v8 = a1 + 22;
  *a1 = &unk_4EBE48;
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
  while ( v8 != a1 + 10 );
  v10 = *(a1 - 3);
  *(a1 - 4) = &off_4E7588;
  if ( v10 )
  {
    *(a1 - 2) = 0;
    qfree(v10);
  }
  return qfree(v1);
}
