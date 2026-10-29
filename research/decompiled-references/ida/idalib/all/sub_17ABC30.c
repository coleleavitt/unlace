__int64 __fastcall sub_17ABC30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned __int64 v28; // rax

  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) & 0x7F;
  if ( v3 <= 0x39u )
  {
    if ( v3 > 0x12u )
    {
      if ( ((v3 + 94) & 0x7Fu) > 5 )
        return (*(_DWORD *)(a3 + 8) >> 8) & 1;
    }
    else if ( ((1LL << v3) & 0x40182) == 0 )
    {
      return (*(_DWORD *)(a3 + 8) >> 8) & 1;
    }
    return 1;
  }
  if ( v3 > 0x3Du )
    return (*(_DWORD *)(a3 + 8) >> 8) & 1;
  if ( (unsigned int)sub_E90000(*(_QWORD *)(a2 + 8)) != 5 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = 0;
    if ( ((*(__int64 *)(v8 + 8) >> 1) & 3) == 2 )
      v9 = *(_QWORD *)(v8 + 16);
    v10 = *(_QWORD *)(a1 + 544);
    if ( !v10 )
      BUG();
    sub_7052B0((__int64 *)(*(_QWORD *)(v10 + 40) + 96LL), *(_QWORD *)(v10 + 40), v8, v5, v6, v7);
    v15 = *(_QWORD *)(v10 + 64);
    if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
      v16 = sub_B96980(v15);
    else
      v16 = *(_QWORD *)(v15 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(v10 + 40) + 96LL), *(_QWORD *)(v10 + 40), v11, v12, v13, v14);
    v17 = *(_QWORD *)(v10 + 40);
    v18 = v16 + 24LL * *(unsigned int *)(*(_QWORD *)(v10 + 64) + 16LL);
    sub_7052B0((__int64 *)(v17 + 96), v17, v19, v20, v21, v22);
    v26 = *(_QWORD *)(v10 + 64);
    if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
      v27 = sub_B96980(v26);
    else
      v27 = *(_QWORD *)(v26 + 24);
    if ( v27 == v18 || !v9 )
      return (*(_DWORD *)(a3 + 8) >> 8) & 1;
    while ( 1 )
    {
      v28 = *(_QWORD *)(**(_QWORD **)(v27 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v28 + 8) & 0xF) != 0 )
        v28 = sub_F64F00(**(_QWORD **)(v27 + 16), v17, (__int64)v23, v24, v25);
      v23 = (_QWORD *)(*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *v23 == *(_QWORD *)(*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
        break;
      v27 += 24;
      if ( v27 == v18 )
        return (*(_DWORD *)(a3 + 8) >> 8) & 1;
    }
  }
  return 1;
}
