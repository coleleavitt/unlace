unsigned __int64 __fastcall sub_C754D0(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  char v18; // al
  char v19; // r14
  __int16 v20; // cx
  unsigned __int8 v21; // al
  size_t v23; // rdx
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  if ( a6 )
  {
    v14 = *(unsigned int *)(a6 + 8);
    v15 = 8 * v14 + 48;
  }
  else
  {
    v15 = 48;
    LODWORD(v14) = 0;
  }
  v16 = a1[294];
  a1[304] += v15;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v17 + v15 && v16 )
  {
    a1[294] = v17 + v15;
  }
  else
  {
    v26 = a5;
    v24 = sub_962430((__int64)(a1 + 294), v15, v15, 3, a5, a6);
    a5 = v26;
    v17 = v24;
  }
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x52;
  if ( unk_2CAD564 )
  {
    v25 = a5;
    sub_EC5E10(82);
    a5 = v25;
  }
  *(_QWORD *)(v17 + 8) = a2;
  v18 = 2 * (a3 & 3);
  v19 = *(_BYTE *)(v17 + 1);
  *(_QWORD *)(v17 + 16) = a5;
  *(_DWORD *)(v17 + 4) = v14;
  *(_BYTE *)(v17 + 1) = v18 | v19 & 0xF9;
  *(_WORD *)(v17 + 1) &= 0xF807u;
  v20 = (8 * (a4 & 0x7F)) | *(_WORD *)(v17 + 2) & 0xFC07;
  *(_WORD *)(v17 + 2) = v20;
  *(_BYTE *)(v17 + 3) = HIBYTE(v20) & 0xF3;
  *(_QWORD *)(v17 + 24) = a7;
  v21 = sub_B3EE40(v17);
  *(_BYTE *)(v17 + 1) = (v21 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v21 >> 2) & 7;
  *(_DWORD *)(v17 + 32) = a8;
  *(_DWORD *)(v17 + 36) = a9;
  *(_QWORD *)(v17 + 40) = a10;
  if ( (_DWORD)v14 )
  {
    v23 = 8LL * *(unsigned int *)(a6 + 8);
    if ( v23 )
      memmove((void *)(v17 + 48), *(const void **)a6, v23);
  }
  return v17;
}

