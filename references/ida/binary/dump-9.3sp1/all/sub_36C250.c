void *__fastcall sub_36C250(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  __int64 v6; // rbx
  void *v7; // rdi
  void *result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rdi

  *a1 = off_4E6358;
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
        clear_tinfo_t();
        v6 = *(_QWORD *)(v3 + (i << 6) + 16);
        while ( v6 )
        {
          sub_36BBD0(*(_QWORD **)(v6 + 24));
          v7 = (void *)v6;
          v6 = *(_QWORD *)(v6 + 16);
          operator delete(v7, 0x28u);
        }
        v3 = a1[24];
      }
    }
    a1[25] = 0;
    qfree(v3);
  }
  result = &unk_4EBE48;
  v9 = a1 + 19;
  v10 = a1 + 7;
  *(v10 - 7) = (__int64)&unk_4EBE48;
  do
  {
    v11 = *v9;
    if ( *v9 )
    {
      v9[1] = 0;
      result = (void *)qfree(v11);
    }
    v9 -= 3;
  }
  while ( v10 != v9 );
  return result;
}
