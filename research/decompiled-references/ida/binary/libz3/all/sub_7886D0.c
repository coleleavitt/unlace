__int64 __fastcall sub_7886D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  int v5; // r8d
  char *v6; // rcx
  unsigned int v7; // edx
  char *v8; // rdi
  __int64 v9; // rdx
  char *v10; // r9
  char *i; // rax
  __int64 v12; // rdx
  unsigned int v14; // eax
  __int64 v15; // rax

  v3 = sub_7E6C80(*(_QWORD *)(a1 + 200));
  if ( v3 != 0x7FFFFFFF || *(_WORD *)(a2 + 4) )
    return v3;
  v4 = *(unsigned int *)(a1 + 104);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(char **)(a1 + 96);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = &v6[v4];
  v9 = 16LL * (v5 & v7);
  v10 = &v6[v9];
  if ( v9 != v4 )
  {
    for ( i = &v6[v9]; v8 != i; i += 16 )
    {
      v12 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v5 && a2 == v12 )
          goto LABEL_12;
      }
      else if ( !v12 )
      {
        return v3;
      }
    }
  }
  if ( v6 == v10 )
    return v3;
  while ( 1 )
  {
    v15 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 > 1u )
      break;
    if ( !v15 )
      return v3;
LABEL_19:
    v6 += 16;
    if ( v10 == v6 )
      return v3;
  }
  if ( *(_DWORD *)(v15 + 12) != v5 || a2 != v15 )
    goto LABEL_19;
  i = v6;
LABEL_12:
  v14 = *((_DWORD *)i + 2);
  if ( (v14 & 1) == 0 )
    return v14 >> 1;
  return v3;
}

