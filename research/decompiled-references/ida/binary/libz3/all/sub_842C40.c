__int64 __fastcall sub_842C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edi
  char *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // r8
  char *i; // rax
  __int64 v13; // rdx
  __int64 v15; // rax

  v4 = sub_792250(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a3 + 12);
  v6 = *(char **)v4;
  v7 = *(unsigned int *)(v4 + 8);
  v8 = v7 - 1;
  v7 *= 16;
  v9 = &v6[v7];
  v10 = 16LL * (v5 & v8);
  v11 = &v6[v10];
  if ( v10 != v7 )
  {
    for ( i = &v6[v10]; v9 != i; i += 16 )
    {
      v13 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v13 + 12) == v5 && a3 == v13 )
          return **((_QWORD **)i + 1);
      }
      else if ( !v13 )
      {
        return a3;
      }
    }
  }
  if ( v6 == v11 )
    return a3;
  while ( 1 )
  {
    v15 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 <= 1u )
      break;
    if ( *(_DWORD *)(v15 + 12) == v5 && a3 == v15 )
    {
      i = v6;
      return **((_QWORD **)i + 1);
    }
LABEL_15:
    v6 += 16;
    if ( v11 == v6 )
      return a3;
  }
  if ( v15 )
    goto LABEL_15;
  return a3;
}

