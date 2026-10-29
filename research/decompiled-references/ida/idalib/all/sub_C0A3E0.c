unsigned __int64 __fastcall sub_C0A3E0(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r11
  __int64 v8; // r10
  __int16 v10; // r13
  __int64 v11; // rdx
  int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  char v16; // al
  char v17; // r9
  __int16 v18; // dx
  unsigned __int8 v19; // al
  unsigned __int16 v20; // ax
  _QWORD *v21; // rax
  size_t v23; // rdx
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  char v29; // [rsp+1Ch] [rbp-3Ch]
  char v30; // [rsp+1Ch] [rbp-3Ch]

  v7 = a2;
  v8 = a4;
  LOBYTE(v10) = a3;
  if ( a5 )
  {
    v11 = *(unsigned int *)(a5 + 8);
    v12 = *(_DWORD *)(a5 + 8);
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  v13 = 8 * (v11 + (HIDWORD(a7) != 0)) + 24;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v15 && v14 )
  {
    a1[294] = v13 + v15;
  }
  else
  {
    v30 = a6;
    v26 = v7;
    v24 = sub_986170((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    LOBYTE(a6) = v30;
    v8 = a4;
    v15 = v24;
    v7 = v26;
  }
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x4F;
  if ( unk_2CD7484 )
    goto LABEL_18;
  while ( 1 )
  {
    *(_QWORD *)(v15 + 8) = v7;
    v16 = 2 * (a6 & 3);
    v17 = *(_BYTE *)(v15 + 1);
    v10 = 8 * (v10 & 0x7F);
    *(_QWORD *)(v15 + 16) = v8;
    *(_DWORD *)(v15 + 4) = v12;
    *(_BYTE *)(v15 + 1) = v16 | v17 & 0xF9;
    *(_WORD *)(v15 + 1) &= 0xF807u;
    v18 = v10 | *(_WORD *)(v15 + 2) & 0xFC07;
    *(_WORD *)(v15 + 2) = v18;
    *(_BYTE *)(v15 + 3) = (8 * (HIDWORD(a7) != 0)) | HIBYTE(v18) & 0xF3;
    v19 = sub_B62AE0(v15);
    *(_BYTE *)(v15 + 1) = (v19 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
    *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v19 >> 2) & 7;
    if ( (*(_QWORD *)v15 & 0x8000000LL) == 0 )
      break;
    v20 = *(_WORD *)v15 & 0x1FF;
    if ( v20 == 81 )
    {
      v21 = (_QWORD *)(v15 + 8LL * *(unsigned int *)(v15 + 4) + 48);
      goto LABEL_12;
    }
    if ( v20 <= 0x51u )
    {
      if ( v20 == 79 )
      {
        v21 = (_QWORD *)(v15 + 8LL * *(unsigned int *)(v15 + 4) + 24);
        goto LABEL_12;
      }
    }
    else if ( v20 == 86 || v20 == 87 )
    {
      v21 = (_QWORD *)(v15 + 8LL * *(unsigned int *)(v15 + 4) + 40);
LABEL_12:
      *v21 = a7;
      break;
    }
LABEL_18:
    v29 = a6;
    v27 = v8;
    v25 = v7;
    sub_EE9B50(79);
    LOBYTE(a6) = v29;
    v8 = v27;
    v7 = v25;
  }
  if ( v12 )
  {
    v23 = 8LL * *(unsigned int *)(a5 + 8);
    if ( v23 )
      memmove((void *)(v15 + 24), *(const void **)a5, v23);
  }
  return v15;
}
