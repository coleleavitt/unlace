bool __fastcall sub_789040(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rax
  char *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  char *v14; // r8
  char *i; // rax
  __int64 v16; // rdx
  __int64 v18; // rax

  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL);
  if ( v7 != sub_788FA0 )
    return a3 == ((unsigned int (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, __int64, __int64))v7)(
                   a1,
                   a2,
                   sub_788FA0,
                   a4,
                   a5,
                   a2);
  v8 = *(unsigned int *)(a1 + 104);
  v9 = *(char **)(a1 + 96);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = &v9[v8];
  v13 = 16LL * (v10 & v11);
  v14 = &v9[v13];
  if ( v13 != v8 )
  {
    for ( i = &v9[v13]; v12 != i; i += 16 )
    {
      v16 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
          return a3 == *((_DWORD *)i + 2);
      }
      else if ( !v16 )
      {
        return a3 == -2;
      }
    }
  }
  for ( ; v14 != v9; v9 += 16 )
  {
    v18 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 > 1u )
    {
      if ( *(_DWORD *)(v18 + 12) == v10 && a2 == v18 )
      {
        i = v9;
        return a3 == *((_DWORD *)i + 2);
      }
    }
    else if ( !v18 )
    {
      return a3 == -2;
    }
  }
  return a3 == -2;
}

