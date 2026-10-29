__int64 __fastcall sub_788FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  char *v4; // rcx
  unsigned int v5; // edx
  char *v6; // rdi
  __int64 v7; // rdx
  char *v8; // r9
  char *i; // rax
  __int64 v10; // rdx
  __int64 v12; // rax

  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(char **)(a1 + 96);
  v5 = v2 - 1;
  v2 *= 16;
  v6 = &v4[v2];
  v7 = 16LL * (v3 & v5);
  v8 = &v4[v7];
  if ( v7 != v2 )
  {
    for ( i = &v4[v7]; v6 != i; i += 16 )
    {
      v10 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v10 + 12) == v3 && a2 == v10 )
          return *((unsigned int *)i + 2);
      }
      else if ( !v10 )
      {
        return 4294967294LL;
      }
    }
  }
  if ( v4 == v8 )
    return 4294967294LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)v4;
    if ( *(_QWORD *)v4 <= 1u )
      break;
    if ( *(_DWORD *)(v12 + 12) == v3 && a2 == v12 )
    {
      i = v4;
      return *((unsigned int *)i + 2);
    }
LABEL_15:
    v4 += 16;
    if ( v8 == v4 )
      return 4294967294LL;
  }
  if ( v12 )
    goto LABEL_15;
  return 4294967294LL;
}

