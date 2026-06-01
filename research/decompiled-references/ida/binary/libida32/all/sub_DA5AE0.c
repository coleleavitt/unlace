_BOOL8 __fastcall sub_DA5AE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int8 **v16; // rax
  __int64 v18[6]; // [rsp+0h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  if ( v3 == 1 )
    return 0;
  if ( v3 )
  {
    if ( v3 == 2 || v3 == 3 )
      BUG();
    return !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 32LL) + 56LL);
  }
  v4 = *(_QWORD *)(a3 + 32);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 32);
    v6 = *(unsigned int *)(a3 + 40);
    if ( *(_DWORD *)(v5 + 24) != (_DWORD)v6 && (_DWORD)v6 )
    {
      if ( (*(_BYTE *)(v4 + v6 + 28) & 1) == 0 )
        return 1;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = 64;
  }
  if ( !*(_BYTE *)(v5 + 56) )
    return 1;
LABEL_7:
  if ( !(unsigned __int8)sub_CDA840(a3) && (*(_BYTE *)(v4 + *(unsigned int *)(a3 + 40) + 28) & 0x40) != 0 )
    return 1;
  v9 = *(_QWORD **)(a1 + 504);
  v10 = 8LL * *(unsigned int *)(a1 + 512);
  v11 = &v9[(unsigned __int64)v10 / 8];
  v12 = v10 >> 3;
  v13 = v10 >> 5;
  if ( !v13 )
    goto LABEL_21;
  if ( v4 == *v9 )
    return 1;
  if ( v4 == v9[1] )
  {
    v11 = v9 + 1;
    goto LABEL_24;
  }
  if ( v4 == v9[2] || v4 == v9[3] )
    return 1;
  v14 = &v9[4 * v13];
  while ( 1 )
  {
    v9 += 4;
    if ( v9 == v14 )
      break;
    if ( *v9 == v4 || v9[1] == v4 || v4 == v9[2] || v4 == v9[3] )
      return 1;
  }
  v12 = v11 - v9;
LABEL_21:
  if ( v12 != 2 )
  {
    if ( v12 != 3 )
    {
      if ( v12 != 1 )
        goto LABEL_24;
      goto LABEL_40;
    }
    if ( v4 == *v9 )
      return 1;
    ++v9;
  }
  if ( v4 == *v9 )
    return 1;
  ++v9;
LABEL_40:
  if ( v4 == *v9 )
    return 1;
LABEL_24:
  if ( v11 )
    return 1;
  v15 = sub_CDA510(a3, 0);
  v18[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v16 = (unsigned __int8 **)sub_E0FE60(a1, v18, 2442, 0);
  if ( v16 )
    sub_AC60B0(v16, v15, 8u);
  return 0;
}

