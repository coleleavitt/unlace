__int64 __fastcall sub_657920(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char *v7; // rbx
  char v8; // r8
  __int64 v9; // rdx
  char *v10; // r14
  bool v11; // al
  char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  char v21; // [rsp+Fh] [rbp-39h]

  if ( !a2 )
    return 0;
  if ( (a3 >= a4) | (*(_BYTE *)(a2 + 9) >> 7) )
    return 0;
  sub_656C10(a1, a2);
  v7 = *(char **)(a2 + 64);
  v8 = 0;
  v9 = 32LL * *(int *)(a2 + 56);
  v10 = &v7[v9];
  if ( v7 == &v7[v9] )
    return 0;
  while ( *(_DWORD *)v7 < a3 )
  {
    v11 = *((_DWORD *)v7 + 1) < a4 && a3 < *((_DWORD *)v7 + 1);
    if ( v11 )
    {
      *((_DWORD *)v7 + 1) = a3;
      v8 = v11;
    }
    v7 += 32;
    if ( v10 == v7 )
      goto LABEL_26;
  }
  if ( v10 != v7 )
  {
    v12 = v7;
    do
    {
      if ( *(_DWORD *)v12 >= a4 )
        break;
      if ( *((_DWORD *)v12 + 1) < a4 )
      {
        free_regvar(v12);
        v8 = 1;
      }
      else
      {
        if ( v7 < v12 )
        {
          v21 = v8;
          free_regvar(v7);
          v13 = *(_QWORD *)v12;
          *((_QWORD *)v7 + 3) = 0;
          v14 = *((_QWORD *)v12 + 1);
          *(_OWORD *)(v7 + 8) = 0;
          *(_QWORD *)v7 = v13;
          v15 = qstrdup(v14);
          v16 = *((_QWORD *)v12 + 2);
          *((_QWORD *)v7 + 1) = v15;
          v17 = qstrdup(v16);
          v18 = *((_QWORD *)v12 + 3);
          *((_QWORD *)v7 + 2) = v17;
          v19 = qstrdup(v18);
          v8 = v21;
          *((_QWORD *)v7 + 3) = v19;
        }
        if ( a3 < *(_DWORD *)v7 )
        {
          *(_DWORD *)v7 = a3;
          v8 = 1;
        }
        v7 += 32;
      }
      v12 += 32;
    }
    while ( v10 != v12 );
    if ( !v8 )
      return 0;
    if ( v7 < v12 )
    {
      *(_DWORD *)(a2 + 56) -= (v12 - v7) >> 5;
      if ( v12 < v10 )
        memmove(v7, v12, v10 - v12);
    }
LABEL_25:
    sub_656810(a1, a2, 1);
    return 1;
  }
LABEL_26:
  if ( v8 )
    goto LABEL_25;
  return 0;
}

