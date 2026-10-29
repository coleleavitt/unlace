__int64 __fastcall sub_19A7F40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 v9; // rsi
  _QWORD *v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v19; // r14
  __int16 v20; // ax
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v25[200]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a5;
  v9 = *(_QWORD *)a4;
  v10 = *(_QWORD **)(a1 + 248);
  v23 = 0;
  v11 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43 <= 1
    || (v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v22 <= 1)
    && (v11 = sub_F63050(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), v9, v22, a4)) != 0 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v11 + 32);
      if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v12 = v9 & 0xFFFFFFFFFFFFFFF0LL;
        v11 = *(_QWORD *)v12;
        v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v12 + 16LL) - 43;
        if ( (unsigned int)v13 <= 1 )
          break;
        v14 = sub_F63050(v11, v12, v13, a4);
        v9 = *(_QWORD *)(v14 + 32);
        if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v15 = sub_A725A0(v10, v9, &v23, a4, a5);
  v24 = v15;
  v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    if ( (unsigned __int8)sub_1E63CF0(a1, a3, v15, 1, 3972) )
      return 1;
    v16 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (*(_BYTE *)(v16 + 17) & 8) != 0 )
  {
    v17 = 1;
    sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), a3, 0x153Cu, 0);
    sub_1605D30((__int64)v25, (__int64 *)&v24);
    sub_15F7200(v25);
    return v17;
  }
  if ( (unsigned __int8)sub_1E6E920(a1, v24, a3) )
    return 1;
  v19 = a2 | 1;
  v17 = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x60;
  if ( unk_2CD7484 )
    sub_EE9B50(96);
  v20 = *(_WORD *)(v17 + 1);
  *(_QWORD *)(v17 + 8) = v19;
  *(_QWORD *)(v17 + 16) = a4 | 4;
  *(_DWORD *)(v17 + 24) = a3;
  *(_DWORD *)(v17 + 28) = v5;
  *(_WORD *)(v17 + 1) = v20 & 0xF801 | 2;
  v21 = sub_B633D0(v17);
  *(_BYTE *)(v17 + 1) = (v21 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v21 >> 2) & 7;
  return v17;
}
