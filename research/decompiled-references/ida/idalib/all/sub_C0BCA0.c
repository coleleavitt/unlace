unsigned __int64 __fastcall sub_C0BCA0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v14; // rax
  bool v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  char v18; // dl
  char v19; // r9
  __int16 v20; // cx
  __int16 v21; // cx
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+0h] [rbp-48h]
  char v28; // [rsp+Ch] [rbp-3Ch]
  char v29; // [rsp+Ch] [rbp-3Ch]

  v14 = a1[294];
  v15 = HIDWORD(a9) != 0;
  v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = 8 * (unsigned int)v15 + 48LL;
  a1[304] += v17;
  if ( a1[295] >= v17 + v16 && v14 )
  {
    a1[294] = v17 + v16;
  }
  else
  {
    v27 = a5;
    v29 = a6;
    v25 = sub_986170((__int64)(a1 + 294), v17, 8 * (unsigned int)v15 + 48LL, 3, a5, a6);
    LOBYTE(a6) = v29;
    a5 = v27;
    v16 = v25;
  }
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x77;
  if ( unk_2CD7484 )
  {
    v28 = a6;
    v26 = a5;
    sub_EE9B50(119);
    LOBYTE(a6) = v28;
    a5 = v26;
  }
  *(_BYTE *)(v16 + 2) &= 0xF8u;
  v18 = 2 * (a6 & 3);
  v19 = *(_BYTE *)(v16 + 1);
  v20 = *(_WORD *)(v16 + 2) & 0xFE07;
  *(_QWORD *)(v16 + 8) = a5;
  v21 = (8 * (a4 & 0x3F)) | v20;
  *(_QWORD *)(v16 + 16) = a2;
  *(_WORD *)(v16 + 2) = v21;
  *(_QWORD *)(v16 + 24) = a3;
  *(_BYTE *)(v16 + 1) = (8 * (a7 & 7)) | v18 | v19 & 1;
  *(_DWORD *)(v16 + 4) = a8;
  *(_BYTE *)(v16 + 3) = (2 * v15) | HIBYTE(v21) & 0xF9;
  if ( (*(_QWORD *)v16 & 0x2000000LL) != 0 )
  {
    v22 = 48;
    if ( (*(_WORD *)v16 & 0x1FF) != 0x77 )
      v22 = 32;
    *(_QWORD *)(v16 + v22) = a9;
  }
  v23 = sub_B62CB0(v16);
  *(_BYTE *)(v16 + 1) = (v23 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v23 >> 2) & 7;
  *(_QWORD *)(v16 + 32) = a10;
  *(_QWORD *)(v16 + 40) = a11;
  return v16;
}
