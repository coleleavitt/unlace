__int64 __fastcall sub_7FE010(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 *v10; // rbx
  unsigned int v11; // r12d
  __int64 v13; // rsi
  __int64 *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // r14
  __int64 v17; // r9
  __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = *(unsigned int **)(a2 + 40);
  v8 = 2LL * *v7;
  v9 = (__int64)&v7[v8 + 4];
  v10 = (__int64 *)(v7 + 4);
  if ( v8 * 4 )
  {
    while ( (unsigned __int8)sub_7FD860(a1, *v10, a3, a4, a5, a6) )
    {
      if ( (__int64 *)v9 == ++v10 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v13 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v13 = sub_79AC10(a2);
  v11 = sub_7E1600(a1, v13);
  if ( !(_BYTE)v11 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = nullptr;
    v15 = sub_79A2B0(a2);
    v16 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v14 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v16 != v14 )
    {
      while ( 1 )
      {
        v17 = *a1;
        v18[0] = *v14;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v18[0], v18[0], v18, a1, v17) )
          break;
        if ( (__int64 *)v16 == ++v14 )
          return v11;
      }
      return 0;
    }
  }
  return v11;
}

