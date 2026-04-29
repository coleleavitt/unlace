void *__fastcall sub_366FD0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  __int64 v6; // rbx
  __int64 v7; // rbx
  void *v8; // rdi
  void *result; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // rdi

  *a1 = off_4B8D78;
  v2 = a1[27];
  if ( v2 )
  {
    a1[28] = 0;
    qfree(v2);
  }
  v3 = a1[24];
  if ( v3 )
  {
    v4 = a1[25];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + (i << 6);
        clear_tinfo_t(v6 + 48);
        v7 = *(_QWORD *)(v6 + 16);
        while ( v7 )
        {
          sub_366950(*(_QWORD **)(v7 + 24));
          v8 = (void *)v7;
          v7 = *(_QWORD *)(v7 + 16);
          operator delete(v8, 0x28u);
        }
        v3 = a1[24];
      }
    }
    a1[25] = 0;
    qfree(v3);
  }
  result = &unk_4BDC88;
  v10 = a1 + 19;
  v11 = a1 + 7;
  *(v11 - 7) = (__int64)&unk_4BDC88;
  do
  {
    v12 = *v10;
    if ( *v10 )
    {
      v10[1] = 0;
      result = (void *)qfree(v12);
    }
    v10 -= 3;
  }
  while ( v11 != v10 );
  return result;
}
