__int64 (__fastcall **__fastcall sub_3B7720(_QWORD *a1))()
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1[24];
  *(a1 - 4) = &unk_4D9410;
  *a1 = &unk_4D9448;
  a1[23] = &off_4D9508;
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree(v6);
          v2 = a1[24];
        }
      }
    }
    a1[25] = 0;
    qfree(v2);
  }
  v7 = a1 + 19;
  *a1 = &unk_4D8D28;
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      v7[1] = 0;
      qfree(v8);
    }
    v7 -= 3;
  }
  while ( a1 + 7 != v7 );
  v9 = *(a1 - 3);
  result = &off_4D4688;
  *(a1 - 4) = &off_4D4688;
  if ( v9 )
  {
    *(a1 - 2) = 0;
    return (__int64 (__fastcall **)())qfree(v9);
  }
  return result;
}
