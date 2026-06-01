__int64 __fastcall sub_F58800(_QWORD *a1, __int64 **a2)
{
  unsigned int v2; // r12d
  __int64 *v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rax
  const void *v7; // r14
  const void *v8; // r13

  v2 = 1;
  v3 = a2[1];
  v4 = (__int64 *)a1[1];
  if ( *v4 >= *v3 )
  {
    if ( *v4 == *v3 )
    {
      v7 = v4 + 1;
      v8 = v3 + 1;
      if ( memcmp(v4 + 1, v3 + 1, 0x10u) < 0 )
        return v2;
      v2 = 0;
      if ( memcmp(v8, v7, 0x10u) < 0 )
        return v2;
    }
    else
    {
      v2 = 0;
      if ( *v4 > *v3 )
        return v2;
    }
    v2 = 1;
    v5 = **a2;
    if ( *(_QWORD *)*a1 >= v5 )
    {
      v2 = 0;
      if ( *(_QWORD *)*a1 == v5 )
        return (unsigned int)memcmp((const void *)(*a1 + 8LL), *a2 + 1, 8u) >> 31;
    }
  }
  return v2;
}

