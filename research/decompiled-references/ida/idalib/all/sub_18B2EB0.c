__int64 __fastcall sub_18B2EB0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 v10; // r13
  bool v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  int v15; // esi
  int v16; // eax
  __int64 v17; // rax
  unsigned int *v18; // rdx
  __int64 v19; // rax
  bool v20; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v22; // [rsp+20h] [rbp-48h]

  v3 = a1[68];
  v4 = a1[30];
  if ( (*(_BYTE *)(v3 + 8) & 0x7Fu) - 59 > 2 )
  {
    sub_142E840(v4, 0x1339FABu);
    return 0;
  }
  v5 = sub_142E840(v4, 0x1339FABu);
  if ( v3 == 64 )
    return 0;
  if ( v5 != 1 )
    return 0;
  v6 = *(_QWORD *)(v3 - 24);
  if ( (v6 & 7) != 0 )
    return 0;
  if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  if ( !sub_B97230(v3 - 64) )
    return 0;
  if ( *(_DWORD *)(a2 + 56) )
    return 0;
  v8 = *(_QWORD *)(a2 + 64);
  if ( !v8 )
    return 0;
  v9 = *(_DWORD **)(v8 + 16);
  if ( *v9 != 4 || v9[4] != 1885435763 )
    return 0;
  v10 = *(_QWORD *)(v3 - 48) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v3 - 48) & 4) != 0 )
    v10 = *(_QWORD *)v10;
  if ( (*(_BYTE *)(v10 + 8) & 0x7F) != 0x18 || v10 == 48 )
    return 0;
  v11 = sub_B8EBA0(v10);
  if ( !v11 )
  {
    v12 = *(_QWORD *)(v10 - 8);
    if ( (v12 & 7) != 0 )
      return 0;
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v13 )
      return 0;
    v14 = *(_QWORD *)(v13 + 16);
    if ( (unsigned int)*(_QWORD *)v14 == 7 )
    {
      if ( *(_DWORD *)(v14 + 16) != 1701076831 || *(_WORD *)(v14 + 20) != 30050 || *(_BYTE *)(v14 + 22) != 103 )
        return 0;
    }
    else if ( (unsigned int)*(_QWORD *)v14 != 9
           || *(_QWORD *)(v14 + 16) != 0x6C69666F72705F5FLL
           || *(_BYTE *)(v14 + 24) != 101 )
    {
      return 0;
    }
    if ( !sub_B8EC80(v10 - 48) )
      return 0;
  }
  v15 = *(_DWORD *)(a2 + 88);
  if ( !v15 )
    return 0;
  v16 = sub_1021680(*(_QWORD *)(a1[31] + 2312LL), v15);
  if ( !v16 || v16 == 3 )
    return 0;
  v17 = *(_QWORD *)(v3 - 24);
  if ( (v17 & 7) != 0 )
    BUG();
  v18 = *(unsigned int **)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v19 = *v18;
  HIBYTE(v22) = 0;
  v21[0] = v18 + 4;
  v21[1] = v19;
  if ( v19 == 5 )
  {
    if ( !memcmp(v18 + 4, "array", 5u) )
      v22 = 257;
  }
  else if ( v19 == 4 && v18[4] == 1919508848 )
  {
    LOBYTE(v22) = v11;
    HIBYTE(v22) = 1;
  }
  v20 = v11;
  sub_B7E0A0((__int64)v21, (char *)&v20, "priority_queue", 14);
  v20 = v11;
  sub_B7E0A0((__int64)v21, (char *)&v20, "stack", 5);
  v20 = v11;
  sub_B7E0A0((__int64)v21, (char *)&v20, "queue", 5);
  result = HIBYTE(v22);
  if ( HIBYTE(v22) )
    return (unsigned __int8)v22;
  return result;
}
