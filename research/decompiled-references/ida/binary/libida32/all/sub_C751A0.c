unsigned __int64 __fastcall sub_C751A0(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10)
{
  __int64 v11; // r10
  char v13; // bl
  __int64 v14; // rdx
  int v15; // r12d
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  char v20; // al
  char v21; // bp
  __int16 v22; // bx
  unsigned __int8 v23; // al
  size_t v25; // rdx
  __int64 v26; // rax
  char v27; // [rsp+7h] [rbp-51h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v11 = a4;
  v13 = a5;
  if ( a7 )
  {
    v14 = *(unsigned int *)(a7 + 8);
    v15 = *(_DWORD *)(a7 + 8);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  LOBYTE(a5) = HIDWORD(a8) != 0;
  v16 = 8 * (v14 + (HIDWORD(a8) != 0)) + 40;
  v17 = a1[294];
  a1[304] += v16;
  v18 = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v18 && v17 )
  {
    a1[294] = v18;
    v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v33 = a6;
    v29 = a2;
    v26 = sub_962430((__int64)(a1 + 294), v16, v16, 3, a5, a6);
    a6 = v33;
    v11 = a4;
    v19 = v26;
    a2 = v29;
    LOBYTE(a5) = HIDWORD(a8) != 0;
  }
  *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x56;
  if ( unk_2CAD564 )
  {
    v32 = a6;
    v30 = v11;
    v28 = a2;
    v27 = a5;
    sub_EC5E10(86);
    a6 = v32;
    v11 = v30;
    a2 = v28;
    LOBYTE(a5) = v27;
  }
  *(_QWORD *)(v19 + 8) = a2;
  v20 = 2 * (a3 & 3);
  v21 = *(_BYTE *)(v19 + 1);
  *(_QWORD *)(v19 + 16) = a6;
  *(_DWORD *)(v19 + 4) = v15;
  *(_QWORD *)(v19 + 24) = v11;
  *(_BYTE *)(v19 + 1) = v20 | v21 & 0xF9;
  *(_WORD *)(v19 + 1) &= 0xF807u;
  v22 = (8 * (v13 & 0x7F)) | *(_WORD *)(v19 + 2) & 0xFC07;
  *(_WORD *)(v19 + 2) = v22;
  *(_BYTE *)(v19 + 3) = (8 * a5) | HIBYTE(v22) & 0xF3;
  v23 = sub_B3EE40(v19);
  *(_BYTE *)(v19 + 1) = (v23 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
  *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v23 >> 2) & 7;
  *(_DWORD *)(v19 + 32) = a9;
  *(_DWORD *)(v19 + 36) = a10;
  if ( (*(_QWORD *)v19 & 0x8000000LL) != 0 )
    *(_QWORD *)sub_BD6990(v19) = a8;
  if ( v15 )
  {
    v25 = 8LL * *(unsigned int *)(a7 + 8);
    if ( v25 )
      memmove((void *)(v19 + 40), *(const void **)a7, v25);
  }
  return v19;
}

