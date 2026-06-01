__int64 __fastcall sub_4C6D40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // r8
  char *i; // rax
  __int64 v14; // rdx
  __int64 v16; // rax

  v3 = *(unsigned int *)(a1 + 184);
  v7 = *(char **)(a1 + 176);
  v8 = *(_DWORD *)(a3 + 12);
  v9 = v3 - 1;
  v3 *= 16;
  v10 = &v7[v3];
  v11 = 16LL * (v8 & v9);
  v12 = &v7[v11];
  if ( v11 != v3 )
  {
    for ( i = &v7[v11]; v10 != i; i += 16 )
    {
      v14 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && a3 == v14 )
          return sub_4C6C30(a1, a2, a3, *((_DWORD *)i + 2));
      }
      else if ( !v14 )
      {
        return sub_4C6C30(a1, a2, a3, 0xFFFFFFFF);
      }
    }
  }
  for ( ; v12 != v7; v7 += 16 )
  {
    v16 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 > 1u )
    {
      if ( *(_DWORD *)(v16 + 12) == v8 && a3 == v16 )
      {
        i = v7;
        return sub_4C6C30(a1, a2, a3, *((_DWORD *)i + 2));
      }
    }
    else if ( !v16 )
    {
      return sub_4C6C30(a1, a2, a3, 0xFFFFFFFF);
    }
  }
  return sub_4C6C30(a1, a2, a3, 0xFFFFFFFF);
}

