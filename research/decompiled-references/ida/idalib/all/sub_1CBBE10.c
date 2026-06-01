unsigned __int64 __fastcall sub_1CBBE10(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7)
{
  __int64 v9; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rsi
  __int64 v22; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v23[168]; // [rsp+10h] [rbp-A8h] BYREF

  v22 = a2;
  v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v9 + 17) & 8) != 0 )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a3, 0x153Au, 0);
    sub_1605D30((__int64)v23, &v22);
    sub_15F7200(v23);
    return 0;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  if ( (_BYTE)v12 == 13 )
  {
    v13 = (*(_WORD *)(v11 + 18) >> 3) & 0x1FF;
    if ( ((v13 + 76) & 0x1FFu) <= 0x13 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( (_BYTE)v12 != 47 )
  {
    if ( (unsigned __int8)v12 <= 0x2Bu )
    {
      v16 = 0xC0200000400LL;
      if ( _bittest64(&v16, v12) )
        goto LABEL_6;
    }
    goto LABEL_14;
  }
  v15 = sub_F60F10(v11, a2, v9, a4, a5, a6);
  if ( (*((_BYTE *)v15 + 74) & 1) == 0 )
  {
    v9 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v15[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_6;
    v19 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *(unsigned __int8 *)(v19 + 16);
    a2 = (unsigned int)(v20 - 42);
    if ( (unsigned __int8)(v20 - 42) <= 1u || (_BYTE)v20 == 33 )
      goto LABEL_6;
    if ( (_BYTE)v20 != 13 )
      goto LABEL_14;
    v13 = (*(_WORD *)(v19 + 18) >> 3) & 0x1FF;
LABEL_5:
    if ( v13 == 488 )
      goto LABEL_6;
LABEL_14:
    v17 = sub_F57E80(v9);
    if ( v17 )
    {
      v9 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v17 + 17) & 4) == 0 )
        goto LABEL_6;
    }
    else
    {
      v9 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)(v18 - 2) <= 4u || (unsigned __int8)(v18 - 25) <= 1u )
      return sub_A75D20(*(_QWORD **)(a1 + 248), v22);
    if ( (*(_BYTE *)(v9 + 17) & 4) != 0 )
      return sub_6D5440(&v22);
    if ( !(unsigned __int8)sub_1CBB850((__int64 *)a1, v22, a3, a7) )
    {
      v21 = (__int64 *)(a1 + 8);
      if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0 )
      {
        sub_168B9F0((__int64)v23, v21, a3, 0x1A58u, 0);
        sub_1605D30((__int64)v23, &v22);
        sub_15F7200(v23);
        return sub_6D5440(&v22);
      }
      sub_168B9F0((__int64)v23, v21, a3, 0x140Cu, 0);
      sub_1605D30((__int64)v23, &v22);
      sub_15F7200(v23);
    }
    return 0;
  }
  v9 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_6:
  v14 = *(_QWORD *)(v9 + 8) & 7LL | (*(__int64 *)(v9 + 8) >> 3) & 1;
  if ( v14 )
    return sub_F64F00(v22, a2, v9, v14, a5) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v9 & 0xFFFFFFFFFFFFFFF0LL;
}
