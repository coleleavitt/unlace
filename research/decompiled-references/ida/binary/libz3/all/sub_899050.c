__int64 __fastcall sub_899050(_QWORD *a1)
{
  __int64 *v1; // r13
  __int64 *i; // r14
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 j; // rbp
  __int64 v6; // r15

  v1 = (__int64 *)a1[1];
  if ( v1 )
  {
    for ( i = &v1[2 * *((unsigned int *)v1 - 1)]; i != v1; v1 += 2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        result = 5LL * *(unsigned int *)(v3 - 4);
        for ( j = v3 + 40LL * *(unsigned int *)(v3 - 4); j != v3; *(_DWORD *)(v3 - 24) = 1 )
        {
          v6 = *a1;
          sub_182F200(*a1, v3);
          result = sub_182EF00(v6, v3 + 16);
          *(_BYTE *)(v3 + 20) &= ~1u;
          v3 += 40;
        }
      }
    }
  }
  return result;
}

