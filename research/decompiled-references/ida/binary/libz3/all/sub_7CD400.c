__int64 __fastcall sub_7CD400(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // r14d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdi
  int v14; // ebp
  __int64 *v15; // rbp
  __int64 *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int *v19; // r13
  __int64 result; // rax
  unsigned int v21; // edx
  unsigned int v22; // ebp
  __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned int v26; // edx

  sub_7CD0E0((_QWORD *)a1);
  if ( !a2 )
    goto LABEL_13;
  v4 = *(_QWORD *)(a1 + 2136);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = *(_QWORD *)(a1 + 2128);
  v8 = *(unsigned int *)(v4 + 4LL * v6);
  v9 = 8 * v8;
  v10 = v7 + 8 * v8;
  if ( !v7 )
  {
    v12 = 0;
    if ( !v9 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v11 = 8LL * *(unsigned int *)(v7 - 4);
  v12 = v7 + v11;
  if ( v9 != v11 )
  {
    do
    {
LABEL_6:
      v13 = *(_QWORD *)(v12 - 8);
      v12 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    while ( v10 != v12 );
    v7 = *(_QWORD *)(a1 + 2128);
    v4 = *(_QWORD *)(a1 + 2136);
    if ( !v7 )
      goto LABEL_9;
  }
  *(_DWORD *)(v7 - 4) = v8;
LABEL_9:
  if ( v4 )
    *(_DWORD *)(v4 - 4) = v6;
  v14 = 0;
  do
  {
    ++v14;
    sub_180C2E0(a1 + 2144);
  }
  while ( a2 != v14 );
LABEL_13:
  v15 = *(__int64 **)(a1 + 2392);
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    while ( v16 != v15 )
    {
      v17 = *v15++;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 152LL))(v17, a2);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 88LL))(*(_QWORD *)(a1 + 152), a2);
  sub_13D5430(a1 + 1592, a2);
  sub_7F0B60(a1 + 160, a2);
  v18 = *(_QWORD *)(a1 + 2384);
  if ( v18 )
  {
    v19 = (unsigned int *)(v18 + 4LL * (*(_DWORD *)(v18 - 4) - a2));
    result = *(_QWORD *)(a1 + 2376);
    if ( result )
    {
      v21 = *(_DWORD *)(result - 4);
      v22 = v21 - 1;
      if ( *v19 < v21 )
        goto LABEL_19;
      *(_DWORD *)(result - 4) = *v19;
    }
LABEL_23:
    *(_DWORD *)(v18 - 4) -= a2;
    return result;
  }
  result = *(_QWORD *)(a1 + 2376);
  if ( !result )
    return result;
  v26 = *(_DWORD *)(result - 4);
  v19 = (unsigned int *)(4LL * -a2);
  v22 = v26 - 1;
  if ( *v19 >= v26 )
  {
    *(_DWORD *)(result - 4) = *v19;
    return result;
  }
  do
  {
LABEL_19:
    v23 = *(_QWORD *)(a1 + 24);
    v24 = *(unsigned int *)(result + 4LL * v22);
    *(_QWORD *)(*(_QWORD *)(a1 + 2328) + 8 * v24) = 0;
    sub_11B3D30(v23, v24);
    v25 = v22;
    result = *(_QWORD *)(a1 + 2376);
    --v22;
  }
  while ( *v19 < v25 );
  v18 = *(_QWORD *)(a1 + 2384);
  if ( result )
    *(_DWORD *)(result - 4) = *v19;
  if ( v18 )
    goto LABEL_23;
  return result;
}

