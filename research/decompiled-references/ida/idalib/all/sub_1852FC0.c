__int64 __fastcall sub_1852FC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  bool v19; // [rsp+3h] [rbp-C5h] BYREF
  int v20; // [rsp+4h] [rbp-C4h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v22[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  v4 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
  if ( !v4 )
    BUG();
  if ( *(_BYTE *)(v4 + 9) >> 5 != 2 )
    return 0;
  v2 = *(unsigned __int8 *)(a1 + 40);
  if ( !(_BYTE)v2 )
    return 0;
  v5 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
  v9 = v5 - 64;
  if ( v5 )
    v5 -= 64LL;
  v10 = sub_B7E900(v5, a2, v9, v6, v7, v8);
  if ( !v10 )
    return 0;
LABEL_10:
  if ( (*(_BYTE *)(v10 + 68) & 1) != 0 && !*(_QWORD *)(v10 + 40) )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v18;
      if ( !v18 )
        return 0;
      if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_10;
    }
  }
  v11 = *(unsigned __int8 *)(a1 + 35);
  if ( (_BYTE)v11 )
  {
    v12 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    v13 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
    if ( !v13 )
      BUG();
    sub_168B9F0((__int64)v22, v12, *(_DWORD *)(v13 - 40), 0x1711u, 0);
    v19 = *(_QWORD *)(a1 + 24) != 0;
    v14 = sub_1588420((__int64)v22, (unsigned __int8 *)&v19);
    v15 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
    v16 = v14;
    v2 = v11;
    if ( v15 )
      v15 -= 64LL;
    v21 = v15;
    v17 = sub_1852F10(v16, (__int64 *)&v21);
    v20 = 0;
    sub_1587D10(v17, &v20);
    sub_15F7200(v22);
  }
  return v2;
}
