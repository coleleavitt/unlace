unsigned __int64 __fastcall sub_BE79E0(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10)
{
  int v10; // r13d
  __int64 v11; // r11
  __int64 v15; // rdx
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  char v20; // al
  char v21; // r12
  __int16 v22; // ax
  unsigned __int8 v23; // al
  unsigned __int16 v24; // ax
  _QWORD *v25; // rax
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v11 = a2;
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
  LOBYTE(v10) = HIDWORD(a7) != 0;
  v17 = 8 * (v15 + (HIDWORD(a7) != 0)) + 40;
  v18 = a1[294];
  a1[304] += v17;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v17 + v19 && v18 )
  {
    a1[294] = v17 + v19;
  }
  else
  {
    v32 = a5;
    v30 = v11;
    v28 = sub_962430((__int64)(a1 + 294), v17, v17, 3, a5, a6);
    a5 = v32;
    v11 = v30;
    v19 = v28;
  }
  *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x57;
  if ( unk_2CAD564 )
    goto LABEL_18;
  while ( 1 )
  {
    *(_QWORD *)(v19 + 8) = v11;
    v20 = 2 * (a3 & 3);
    v21 = *(_BYTE *)(v19 + 1);
    *(_QWORD *)(v19 + 16) = a5;
    *(_DWORD *)(v19 + 4) = v16;
    a3 = v20 | v21 & 0xF9;
    *(_BYTE *)(v19 + 1) = a3;
    *(_WORD *)(v19 + 1) &= 0xF807u;
    v22 = (8 * (a4 & 0x7F)) | *(_WORD *)(v19 + 2) & 0xFC07;
    a4 = 8 * v10;
    *(_WORD *)(v19 + 2) = v22;
    v10 = (8 * v10) | HIBYTE(v22) & 0xF3;
    *(_BYTE *)(v19 + 3) = a4 | HIBYTE(v22) & 0xF3;
    *(_QWORD *)(v19 + 24) = a8;
    v23 = sub_B3EE40(v19);
    *(_BYTE *)(v19 + 1) = (v23 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
    *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v23 >> 2) & 7;
    *(_DWORD *)(v19 + 32) = a9;
    *(_DWORD *)(v19 + 36) = a10;
    if ( (*(_QWORD *)v19 & 0x8000000LL) == 0 )
      break;
    v24 = *(_WORD *)v19 & 0x1FF;
    if ( v24 == 81 )
    {
      v25 = (_QWORD *)(v19 + 8LL * *(unsigned int *)(v19 + 4) + 48);
      goto LABEL_12;
    }
    if ( v24 <= 0x51u )
    {
      if ( v24 == 79 )
      {
        v25 = (_QWORD *)(v19 + 8LL * *(unsigned int *)(v19 + 4) + 24);
        goto LABEL_12;
      }
    }
    else if ( v24 == 86 || v24 == 87 )
    {
      v25 = (_QWORD *)(v19 + 8LL * *(unsigned int *)(v19 + 4) + 40);
LABEL_12:
      *v25 = a7;
      break;
    }
LABEL_18:
    v31 = a5;
    v29 = v11;
    sub_EC5E10(87);
    a5 = v31;
    v11 = v29;
  }
  if ( v16 )
  {
    v27 = 8LL * *(unsigned int *)(a6 + 8);
    if ( v27 )
      memmove((void *)(v19 + 40), *(const void **)a6, v27);
  }
  return v19;
}

