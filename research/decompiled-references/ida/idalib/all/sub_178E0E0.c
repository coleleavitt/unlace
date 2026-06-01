__int64 __fastcall sub_178E0E0(_QWORD **a1, _QWORD **a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 *i; // rax
  __int64 v23; // rcx

  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 53 <= 1 )
    a3 = *(_QWORD *)(a3 + 64);
  v4 = sub_B8BF30(a3);
  v9 = v4;
  if ( !v4 || (*(_BYTE *)(v4 + 29) & 1) == 0 )
    return 0;
  v11 = sub_B8C3D0(v4, (__int64)a2, v5, v6, v7, v8);
  v15 = *v11;
  v16 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( *v11 >= v16 )
  {
    if ( v15 == v16 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 160 )
    {
      v16 += 8LL;
      if ( v15 == v16 )
        return 0;
    }
  }
  else
  {
    v17 = (__int64 *)*v11;
    while ( 1 )
    {
      v12 = *v17;
      if ( *(_WORD *)(*v17 + 36) == 160 )
        break;
      if ( (__int64 *)v16 == ++v17 )
        return 0;
    }
    if ( (__int64 *)v16 == v17 )
      return 0;
  }
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    return (unsigned int)sub_1BDCB50(**a1, **a2, v9, 0, 0) ^ 1;
  v18 = sub_B8C3D0(v9, v16, v12, v15, v13, v14);
  v19 = (__int64 *)*v18;
  v20 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( *v18 >= v20 )
  {
    if ( v19 == (__int64 *)v20 )
      return (unsigned int)sub_1BDCB50(**a1, **a2, v9, 0, 0) ^ 1;
    if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 165 )
    {
      for ( i = (__int64 *)(v20 + 8); v19 != i; ++i )
      {
        v23 = *i;
        if ( *(_WORD *)(v23 + 36) == 165 )
          return 0;
      }
      return (unsigned int)sub_1BDCB50(**a1, **a2, v9, 0, 0) ^ 1;
    }
    return 0;
  }
  v21 = *v18;
  while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 165 )
  {
    v21 += 8LL;
    if ( v20 == v21 )
      return (unsigned int)sub_1BDCB50(**a1, **a2, v9, 0, 0) ^ 1;
  }
  if ( v20 != v21 )
    return 0;
  return (unsigned int)sub_1BDCB50(**a1, **a2, v9, 0, 0) ^ 1;
}
