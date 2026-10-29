__int64 __fastcall sub_DE2610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // r8d
  char *v7; // rsi
  unsigned int v8; // ecx
  char *v9; // rdi
  __int64 v10; // rcx
  char *v11; // r9
  char *i; // rcx
  __int64 v13; // rax
  __int64 v15; // rax

  v3 = *(unsigned int *)(a1 + 120);
  v4 = *(_DWORD *)(a3 + 12);
  v7 = *(char **)(a1 + 112);
  v8 = v3 - 1;
  v3 *= 16;
  v9 = &v7[v3];
  v10 = 16LL * (v4 & v8);
  v11 = &v7[v10];
  if ( v10 != v3 )
  {
    for ( i = &v7[v10]; v9 != i; i += 16 )
    {
      v13 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v13 + 12) == v4 && a3 == v13 )
          return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)i + 1) + 40LL))(
                   *((_QWORD *)i + 1),
                   a2,
                   a1);
      }
      else if ( !v13 )
      {
        return 0;
      }
    }
  }
  if ( v7 == v11 )
    return 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 <= 1u )
      break;
    if ( *(_DWORD *)(v15 + 12) == v4 && a3 == v15 )
    {
      i = v7;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)i + 1) + 40LL))(
               *((_QWORD *)i + 1),
               a2,
               a1);
    }
LABEL_15:
    v7 += 16;
    if ( v11 == v7 )
      return 0;
  }
  if ( v15 )
    goto LABEL_15;
  return 0;
}

