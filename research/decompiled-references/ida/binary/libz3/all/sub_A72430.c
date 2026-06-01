__int64 __fastcall sub_A72430(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rsi
  _QWORD **v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD **v15; // rbp
  _QWORD *v16; // r12

  v2 = *(_QWORD **)(a1 + 64);
  v3 = v2[24];
  if ( !v3 )
    return 0;
  v4 = *(unsigned int *)(v3 - 4);
  if ( !(_DWORD)v4 )
    return 0;
  v5 = *v2;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v2 + 32LL) + 8LL * a2) + 8LL);
  v7 = *(_QWORD ***)(v6 + 56);
  if ( !v7 )
    return 0;
  v8 = *((unsigned int *)v7 - 1);
  if ( 2 * (int)v4 < (unsigned int)v8 )
  {
    v9 = (__int64 *)v2[24];
    v10 = (__int64 *)(v3 + 8 * v4);
    while ( 1 )
    {
      v11 = *v9;
      v12 = *(unsigned int *)(*v9 + 24);
      if ( (_DWORD)v12 )
        break;
LABEL_13:
      if ( v10 == ++v9 )
        return 0;
    }
    v13 = v11 + 8 * v12;
    while ( v6 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL)
                                        + 8LL * **(unsigned int **)(v11 + 32))
                            + 8LL) )
    {
      v11 += 8;
      if ( v13 == v11 )
        goto LABEL_13;
    }
    return 1;
  }
  v15 = &v7[v8];
  if ( v7 == v15 )
    return 0;
  v16 = v2 + 2;
  while ( !(unsigned __int8)sub_1668690(v16, **v7) )
  {
    if ( v15 == ++v7 )
      return 0;
  }
  return 1;
}

