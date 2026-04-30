double __fastcall sub_383810(__int64 *a1, const char *a2)
{
  char *v3; // rdi
  char *v4; // rdx
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rdi
  double result; // xmm0_8
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 i; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi

  v3 = (char *)qword_8CF2A0;
  v4 = (char *)(qword_8CF2A0 + 8 * xmmword_8CF2A8);
  if ( (char *)qword_8CF2A0 != v4 )
  {
    while ( a1 != *(__int64 **)v3 )
    {
      v3 += 8;
      if ( v4 == v3 )
        goto LABEL_7;
    }
    if ( v3 != v4 )
    {
      a2 = v3 + 8;
      memmove(v3, v3 + 8, v4 - v3 - 8);
      *(_QWORD *)&xmmword_8CF2A8 = xmmword_8CF2A8 - 1;
    }
  }
LABEL_7:
  v5 = a1[19];
  while ( v5 )
  {
    sub_382200(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v6, 0x30u);
  }
  v7 = a1[13];
  while ( v7 )
  {
    sub_382730(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v8, 0x28u);
  }
  v9 = a1[7];
  if ( v9 )
  {
    a1[8] = 0;
    result = qfree(v9, a2);
  }
  v11 = a1[6];
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
      (**(void (__fastcall ***)(__int64))a1[6])(a1[6]);
  }
  v13 = *a1;
  if ( *a1 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v16 = (__int64 *)(v13 + 32 * i);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, a2);
          v13 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v13, a2);
  }
  return result;
}
