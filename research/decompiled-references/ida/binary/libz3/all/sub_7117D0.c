bool __fastcall sub_7117D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  char *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // r8
  char *v12; // rax
  __int64 v13; // rdx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  bool v18; // zf
  __int64 v19; // rax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(unsigned int *)(a1 + 200);
  v6 = *(char **)(a1 + 192);
  v7 = *(_DWORD *)(v3 + 12);
  v8 = v4 - 1;
  v4 *= 16;
  v9 = &v6[v4];
  v10 = 16LL * (v7 & v8);
  v11 = &v6[v10];
  if ( v10 == v4 )
  {
LABEL_16:
    while ( v11 != v6 )
    {
      v19 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 > 1u )
      {
        if ( *(_DWORD *)(v19 + 12) == v7 && v3 == v19 )
        {
          v12 = v6;
          goto LABEL_10;
        }
      }
      else if ( !v19 )
      {
        return 0;
      }
      v6 += 16;
    }
    return 0;
  }
  v12 = &v6[v10];
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 > 1u )
      break;
    if ( !v13 )
      return 0;
LABEL_5:
    v12 += 16;
    if ( v9 == v12 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)(v13 + 12) != v7 || v3 != v13 )
    goto LABEL_5;
LABEL_10:
  v15 = *((_DWORD *)v12 + 2);
  v16 = *((_DWORD *)v12 + 3);
  if ( v15 != -1 )
  {
    v17 = v15;
    if ( v16 >= v15 )
      v17 = v16;
    v18 = v16 == -1;
    v16 = v15;
    if ( !v18 )
      v16 = v17;
  }
  return v16 < a3;
}

