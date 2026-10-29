unsigned __int64 __fastcall sub_C99830(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v15; // rdx
  int v16; // r13d
  bool v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  char v22; // r12
  __int16 v23; // ax
  unsigned __int8 v24; // al
  size_t v26; // rdx
  __int64 v27; // rax
  bool v28; // [rsp+Fh] [rbp-49h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  if ( a6 )
  {
    v15 = *(unsigned int *)(a6 + 8);
    v16 = *(_DWORD *)(a6 + 8);
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  v17 = HIDWORD(a8) != 0;
  v18 = 8 * (v15 + (HIDWORD(a8) != 0)) + 48;
  v19 = a1[294];
  a1[304] += v18;
  v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v18 + v20 && v19 )
  {
    a1[294] = v18 + v20;
  }
  else
  {
    v32 = a5;
    v30 = a2;
    v27 = sub_986170((__int64)(a1 + 294), v18, v18, 3, a5, a6);
    a5 = v32;
    a2 = v30;
    v20 = v27;
    v17 = HIDWORD(a8) != 0;
  }
  *(_WORD *)v20 = *(_WORD *)v20 & 0xFE00 | 0x51;
  if ( unk_2CD7484 )
  {
    v31 = a5;
    v29 = a2;
    v28 = v17;
    sub_EE9B50(81);
    a5 = v31;
    a2 = v29;
    v17 = v28;
  }
  *(_QWORD *)(v20 + 8) = a2;
  v21 = 2 * (a3 & 3);
  v22 = *(_BYTE *)(v20 + 1);
  *(_QWORD *)(v20 + 16) = a5;
  *(_DWORD *)(v20 + 4) = v16;
  *(_BYTE *)(v20 + 1) = v21 | v22 & 0xF9;
  *(_WORD *)(v20 + 1) &= 0xF807u;
  v23 = (8 * (a4 & 0x7F)) | *(_WORD *)(v20 + 2) & 0xFC07;
  *(_WORD *)(v20 + 2) = v23;
  *(_BYTE *)(v20 + 3) = (8 * v17) | HIBYTE(v23) & 0xF3;
  *(_QWORD *)(v20 + 24) = a7;
  v24 = sub_B62B80(v20);
  *(_BYTE *)(v20 + 1) = (v24 << 6) | *(_BYTE *)(v20 + 1) & 0x3F;
  *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & 0xF8 | (v24 >> 2) & 7;
  *(_DWORD *)(v20 + 32) = a9;
  *(_DWORD *)(v20 + 36) = a10;
  *(_QWORD *)(v20 + 40) = a11;
  if ( (*(_QWORD *)v20 & 0x8000000LL) != 0 )
    *(_QWORD *)sub_BFA6D0(v20) = a8;
  if ( v16 )
  {
    v26 = 8LL * *(unsigned int *)(a6 + 8);
    if ( v26 )
      memmove((void *)(v20 + 48), *(const void **)a6, v26);
  }
  return v20;
}
