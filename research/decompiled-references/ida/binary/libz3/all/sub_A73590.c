__int64 __fastcall sub_A73590(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  char *v9; // rsi
  __int64 v10; // rcx
  char *v11; // r8
  char *v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // r12d
  int v15; // eax
  unsigned int v16; // eax
  int v18; // eax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(unsigned int *)(v4 + 224);
  v6 = *(char **)(v4 + 216);
  v7 = v5 - 1;
  v5 *= 24;
  v8 = 3LL * (a2 & v7);
  v9 = &v6[v5];
  v10 = 8 * v8;
  v11 = &v6[v10];
  if ( v10 != v5 )
  {
    v12 = &v6[v10];
    do
    {
      v10 = *((unsigned int *)v12 + 1);
      if ( (_DWORD)v10 == 2 )
      {
        if ( a2 == *(_DWORD *)v12 && a2 == *((_DWORD *)v12 + 2) )
          goto LABEL_8;
      }
      else if ( !(_DWORD)v10 )
      {
        return 0;
      }
      v12 += 24;
    }
    while ( v9 != v12 );
  }
  if ( v6 == v11 )
    return 0;
  while ( 1 )
  {
    v18 = *((_DWORD *)v6 + 1);
    if ( v18 != 2 )
    {
      if ( !v18 )
        return 0;
      goto LABEL_16;
    }
    if ( a2 == *(_DWORD *)v6 && a2 == *((_DWORD *)v6 + 2) )
      break;
LABEL_16:
    v6 += 24;
    if ( v11 == v6 )
      return 0;
  }
  v12 = v6;
LABEL_8:
  v13 = *((_QWORD *)v12 + 2);
  v14 = 2;
  v15 = *(_DWORD *)(v13 + 56);
  if ( v15 )
    v14 = 2 * (v15 != 1) - 2;
  v16 = sub_A7A1D0(v4, *(unsigned int *)(v13 + 12), v6, v10, v11);
  if ( v16 != -1 )
    return (unsigned __int8)sub_FFE6B0(*(_QWORD *)(v4 + 504), v16, v14, v13 + 24) == 0 ? -1 : 1;
  return 0;
}

