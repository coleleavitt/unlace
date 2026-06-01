__int64 __fastcall sub_7F6160(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rbx
  unsigned int v9; // r12d
  __int64 v11; // rsi
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_ACED50(*(_QWORD *)(a2 + 40));
  v5 = *(_QWORD *)(a2 + 40);
  v6 = (__int64 *)(v4 + 8LL * *(unsigned int *)(v5 + 4));
  v7 = sub_ACED50(v5);
  if ( v6 != (__int64 *)v7 )
  {
    v8 = (__int64 *)v7;
    while ( (unsigned __int8)sub_7EBA80(a1, *v8) )
    {
      if ( v6 == ++v8 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v11 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v11 = sub_79AC10(a2);
  v9 = sub_7E1600(a1, v11);
  if ( !(_BYTE)v9 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v12 = nullptr;
    v13 = sub_79A2B0(a2);
    v14 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v12 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v14 != v12 )
    {
      while ( 1 )
      {
        v15 = *a1;
        v16[0] = *v12;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v16[0], v16[0], v16, a1, v15) )
          break;
        if ( (__int64 *)v14 == ++v12 )
          return v9;
      }
      return 0;
    }
  }
  return v9;
}

