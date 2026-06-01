char __fastcall sub_1A3F940(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  char result; // al
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) < 0 )
  {
    if ( v2 )
    {
      v3 = sub_B8C660(a2);
      if ( *(_DWORD *)(v3 + 36) <= 1u )
        return 0;
      goto LABEL_6;
    }
LABEL_45:
    BUG();
  }
  if ( !v2 )
    goto LABEL_45;
  v3 = *(_QWORD *)(a2 - 8);
  if ( *(_DWORD *)(v3 + 36) <= 1u )
    return 0;
LABEL_6:
  if ( !sub_B8D690(a2) )
    return 1;
  if ( (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
    return 0;
  v5 = sub_FEEE40(v3);
  if ( ((*(_DWORD *)(v5 + 36) - 2) & 0xFFFFFFFD) == 0 )
    return 1;
  v6 = *(unsigned int *)(a1 + 10152);
  if ( !(_DWORD)v6 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v6 - 40);
  if ( !v7 )
    return 0;
  v8 = sub_FEEE40(v7);
  if ( *(_DWORD *)(v8 + 928) )
  {
    v16[0] = v5;
    return sub_1A3F8D0((__int64 *)(v8 + 920), v16) != nullptr;
  }
  v9 = *(_QWORD **)(v8 + 944);
  v10 = *(unsigned int *)(v8 + 952);
  v11 = &v9[v10];
  v12 = (v10 * 8) >> 5;
  if ( v12 )
  {
    if ( v5 == *v9 )
      return v9 != v11;
    if ( v5 == v9[1] )
      return v11 != v9 + 1;
    if ( v5 == v9[2] )
      return v11 != v9 + 2;
    v13 = &v9[4 * v12];
    if ( v5 == v9[3] )
      return v11 != v9 + 3;
    while ( 1 )
    {
      v14 = v9 + 4;
      if ( v9 + 4 == v13 )
        break;
      if ( v5 == v9[4] )
        return v11 != v14;
      if ( v5 == v9[5] )
        return v11 != v9 + 5;
      if ( v5 == v9[6] )
        return v11 != v9 + 6;
      if ( v5 == v9[7] )
        return v11 != v9 + 7;
      v9 += 4;
    }
  }
  else
  {
    v14 = v9;
  }
  v15 = v11 - v14;
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
      if ( v15 != 1 )
        return 0;
      goto LABEL_27;
    }
    if ( v5 == *v14 )
      return v11 != v14;
    ++v14;
  }
  if ( v5 == *v14 )
    return v11 != v14;
  ++v14;
LABEL_27:
  result = 0;
  if ( v5 == *v14 )
    return v11 != v14;
  return result;
}
