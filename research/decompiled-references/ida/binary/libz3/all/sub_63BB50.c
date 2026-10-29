__int64 __fastcall sub_63BB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  char *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // r8
  char *i; // rax
  __int64 v12; // rdx
  __int64 v14; // rax

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_DWORD *)(a2 + 12);
  v5 = *(char **)(v2 + 88);
  v6 = *(unsigned int *)(v2 + 96);
  v7 = v6 - 1;
  v6 *= 16;
  v8 = &v5[v6];
  v9 = 16LL * (v3 & v7);
  v10 = &v5[v9];
  if ( v9 != v6 )
  {
    for ( i = &v5[v9]; v8 != i; i += 16 )
    {
      v12 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v3 && a2 == v12 )
          return *((unsigned int *)i + 2);
      }
      else if ( !v12 )
      {
        return 0;
      }
    }
  }
  if ( v5 == v10 )
    return 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 <= 1u )
      break;
    if ( *(_DWORD *)(v14 + 12) == v3 && a2 == v14 )
    {
      i = v5;
      return *((unsigned int *)i + 2);
    }
LABEL_15:
    v5 += 16;
    if ( v10 == v5 )
      return 0;
  }
  if ( v14 )
    goto LABEL_15;
  return 0;
}

