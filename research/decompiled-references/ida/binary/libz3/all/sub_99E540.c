__int64 __fastcall sub_99E540(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // r11
  __int64 v15; // rax
  int *v16; // rcx
  int v17; // r8d
  unsigned int v18; // edx
  int *v19; // rdi
  __int64 v20; // rdx
  int *v21; // r9
  int *v22; // rax
  __int64 v23; // rdx
  __int64 v25; // rax

  v4 = *a2;
  if ( !v4 )
    return 0;
  v7 = v4 + 8LL * *(unsigned int *)(v4 - 4);
  if ( v4 == v7 )
    return 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 - 4);
      if ( v9 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 - 4) == 1 && v9 != 1 )
            break;
        }
      }
    }
LABEL_4:
    v4 += 8;
    if ( v7 == v4 )
      return 0;
  }
  v11 = v8 + 8;
  v12 = v8 + 8LL * (unsigned int)(v9 - 2) + 16;
  while ( 1 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)v11 + 32LL);
    if ( v13 )
    {
      if ( *((_DWORD *)v13 - 1) == 1 )
        break;
    }
LABEL_23:
    v11 += 8;
    if ( v12 == v11 )
      goto LABEL_4;
  }
  v14 = *v13;
  v15 = *(unsigned int *)(a3 + 72);
  v16 = *(int **)(a3 + 64);
  v17 = *(_DWORD *)(v14 + 12);
  v18 = v15 - 1;
  v15 *= 16;
  v19 = (int *)((char *)v16 + v15);
  v20 = 16LL * (v17 & v18);
  v21 = &v16[(unsigned __int64)v20 / 4];
  if ( v20 == v15 )
  {
LABEL_25:
    if ( v16 != v21 )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 > 1u )
        {
          if ( *(_DWORD *)(v25 + 12) == v17 && v14 == v25 )
          {
            v22 = v16;
            goto LABEL_22;
          }
        }
        else if ( !v25 )
        {
          goto LABEL_20;
        }
        v16 += 4;
        if ( v21 == v16 )
          goto LABEL_20;
      }
    }
    goto LABEL_20;
  }
  v22 = &v16[(unsigned __int64)v20 / 4];
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 > 1u )
      break;
    if ( !v23 )
      goto LABEL_20;
LABEL_17:
    v22 += 4;
    if ( v19 == v22 )
      goto LABEL_25;
  }
  if ( *(_DWORD *)(v23 + 12) != v17 || v14 != v23 )
    goto LABEL_17;
LABEL_22:
  if ( v22[2] > 7 )
    goto LABEL_23;
LABEL_20:
  sub_1590480(a3, v14, (unsigned int)*a4);
  ++*a4;
  sub_15955E0(a3);
  return 1;
}

