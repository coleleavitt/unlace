__int64 __fastcall sub_AF36E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  char v7; // r12
  int v8; // r13d
  unsigned int i; // r12d
  bool v10; // al
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int *v13; // rsi
  _DWORD *v14; // rdi
  size_t v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( ((*(_QWORD *)(a2 + 56) & 0x20000LL) != 0) != ((*(_QWORD *)(a3 + 56) & 0x20000LL) != 0) )
    return 0;
  if ( ((*(_QWORD *)(a3 + 56) & 0x40000LL) != 0) != ((*(_QWORD *)(a2 + 56) & 0x40000LL) != 0) )
    return 0;
  v7 = sub_BA7E40(a2);
  if ( v7 != (unsigned __int8)sub_BA7E40(a3) )
    return 0;
  v22 = *(_QWORD *)(a2 + 40);
  v23[0] = *(_QWORD *)(a3 + 40);
  v8 = sub_FDE930(&v22);
  if ( v8 != (unsigned int)sub_FDE930(v23) )
    return 0;
  if ( !v8 )
    v8 = 1;
  for ( i = 0; i != v8; ++i )
  {
    v11 = sub_FDE960(v23, i);
    v12 = sub_FDE960(&v22, i);
    if ( !v12 || !v11 )
    {
      v10 = v11 == v12;
LABEL_12:
      if ( !v10 )
        return 0;
      continue;
    }
    v13 = *(unsigned int **)(v11 + 16);
    v14 = *(_DWORD **)(v12 + 16);
    v15 = *v13;
    if ( v15 != *v14 )
      return 0;
    if ( *v13 )
    {
      v10 = memcmp(v14 + 4, v13 + 4, v15) == 0;
      goto LABEL_12;
    }
  }
  v3 = sub_AF1C90(a1, *(_QWORD *)(a2 + 80), *(_QWORD *)(a3 + 80));
  if ( !(_BYTE)v3 )
    return 0;
  v16 = *(unsigned int *)(a2 + 104);
  v17 = *(_QWORD *)(a2 + 96);
  v18 = *(_QWORD *)(a3 + 96);
  v19 = v17 + 8 * v16;
  v20 = v18 + 8LL * *(unsigned int *)(a3 + 104);
  if ( v18 != v20 && v17 != v19 )
  {
    while ( (unsigned __int8)sub_AF1C90(a1, *(_QWORD *)(*(_QWORD *)v17 + 48LL), *(_QWORD *)(*(_QWORD *)v18 + 48LL)) )
    {
      v17 += 8;
      v18 += 8;
      if ( v20 == v18 || v19 == v17 )
        return v3;
    }
    return 0;
  }
  return v3;
}
