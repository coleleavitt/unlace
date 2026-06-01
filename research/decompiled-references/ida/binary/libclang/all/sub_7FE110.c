__int64 __fastcall sub_7FE110(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rbx
  unsigned int v13; // r13d
  unsigned int *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r14
  __int64 v23; // r9
  __int64 v24[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_ACED50(*(_QWORD *)(a2 + 40));
  v5 = *(_QWORD *)(a2 + 40);
  v6 = (__int64 *)(v4 + 8LL * *(unsigned int *)(v5 + 4));
  v7 = sub_ACED50(v5);
  if ( v6 != (__int64 *)v7 )
  {
    v12 = (__int64 *)v7;
    while ( (unsigned __int8)sub_7EBA80(a1, *v12) )
    {
      if ( v6 == ++v12 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v15 = *(unsigned int **)(a2 + 40);
  v16 = 2LL * *v15;
  v17 = (__int64)&v15[v16 + 4];
  v18 = (__int64 *)(v15 + 4);
  if ( v16 * 4 )
  {
    while ( (unsigned __int8)sub_7FD860(a1, *v18, v8, v9, v10, v11) )
    {
      if ( (__int64 *)v17 == ++v18 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v19 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v19 = sub_79AC10(a2);
  v13 = sub_7E1600(a1, v19);
  if ( !(_BYTE)v13 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v20 = nullptr;
    v21 = sub_79A2B0(a2);
    v22 = *v21 + 8LL * *((unsigned int *)v21 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v20 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v22 != v20 )
    {
      while ( 1 )
      {
        v23 = *a1;
        v24[0] = *v20;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v24[0], v24[0], v24, a1, v23) )
          break;
        if ( (__int64 *)v22 == ++v20 )
          return v13;
      }
      return 0;
    }
  }
  return v13;
}

