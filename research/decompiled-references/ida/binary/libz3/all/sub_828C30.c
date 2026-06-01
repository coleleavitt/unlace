__int64 __fastcall sub_828C30(__int64 a1, int a2)
{
  __int64 v4; // rax
  char *v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  char *v8; // rsi
  __int64 v9; // rcx
  char *v10; // r8
  char *v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // r12d
  int v14; // eax
  unsigned int v15; // eax
  int v17; // eax

  v4 = *(unsigned int *)(a1 + 304);
  v5 = *(char **)(a1 + 296);
  v6 = v4 - 1;
  v4 *= 24;
  v7 = 3LL * (a2 & v6);
  v8 = &v5[v4];
  v9 = 8 * v7;
  v10 = &v5[v9];
  if ( v9 != v4 )
  {
    v11 = &v5[v9];
    do
    {
      v9 = *((unsigned int *)v11 + 1);
      if ( (_DWORD)v9 == 2 )
      {
        if ( a2 == *(_DWORD *)v11 && a2 == *((_DWORD *)v11 + 2) )
          goto LABEL_8;
      }
      else if ( !(_DWORD)v9 )
      {
        return 0;
      }
      v11 += 24;
    }
    while ( v8 != v11 );
  }
  if ( v5 == v10 )
    return 0;
  while ( 1 )
  {
    v17 = *((_DWORD *)v5 + 1);
    if ( v17 != 2 )
    {
      if ( !v17 )
        return 0;
      goto LABEL_16;
    }
    if ( a2 == *(_DWORD *)v5 && a2 == *((_DWORD *)v5 + 2) )
      break;
LABEL_16:
    v5 += 24;
    if ( v10 == v5 )
      return 0;
  }
  v11 = v5;
LABEL_8:
  v12 = *((_QWORD *)v11 + 2);
  v13 = 2;
  v14 = *(_DWORD *)(v12 + 56);
  if ( v14 )
    v13 = 2 * (v14 != 1) - 2;
  v15 = sub_852640(a1, *(unsigned int *)(v12 + 12), v5, v9, v10);
  if ( v15 != -1 )
    return (unsigned __int8)sub_FFE6B0(*(_QWORD *)(a1 + 496), v15, v13, v12 + 24) == 0 ? -1 : 1;
  return 0;
}

