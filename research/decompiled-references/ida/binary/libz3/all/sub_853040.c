__int64 __fastcall sub_853040(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v5; // r12
  _QWORD **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD **v13; // r12

  v2 = *(_QWORD *)(a1 + 264);
  if ( !v2 )
    return 0;
  v3 = *(unsigned int *)(v2 - 4);
  if ( !(_DWORD)v3 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2) + 64LL);
  v6 = *(_QWORD ***)(v5 + 48);
  if ( !v6 )
    return 0;
  v7 = *((unsigned int *)v6 - 1);
  if ( 2 * (int)v3 < (unsigned int)v7 )
  {
    v8 = 8 * v3;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v2 + v9);
      v11 = *(unsigned int *)(v10 + 24);
      v12 = v10 + 8 * v11;
      if ( (_DWORD)v11 )
        break;
LABEL_18:
      v9 += 8;
      if ( v9 == v8 )
        return 0;
      v2 = *(_QWORD *)(a1 + 264);
    }
    while ( v5 != *(_QWORD *)(sub_7E4F00(a1, *(unsigned int **)(v10 + 32)) + 64) )
    {
      v10 += 8;
      if ( v10 == v12 )
        goto LABEL_18;
    }
    return 1;
  }
  v13 = &v6[v7];
  if ( v6 == v13 )
    return 0;
  while ( !(unsigned __int8)sub_1668690(a1 + 832, **v6) )
  {
    if ( v13 == ++v6 )
      return 0;
  }
  return 1;
}

