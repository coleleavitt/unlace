__int64 __fastcall sub_78A3D0(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // ax
  __int16 v17; // ax
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  __int64 result; // rax
  char v24; // al
  unsigned __int64 v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_49F5208;
  if ( !a5
    || (v14 = sub_79A2E0(a5), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) == 0)
    || *(char *)(v14 + 29) < 0 && (v26 = *(_QWORD *)(v14 + 8) & 7LL, v24 = sub_7946A0(v14), v15 = v26, !v24) )
  {
    v15 = 0;
  }
  *(_QWORD *)(a1 + 8) = v15;
  *(_DWORD *)(a1 + 24) = a7;
  LOBYTE(v16) = a2 & 0x7F;
  *(_QWORD *)(a1 + 16) = a5 & 0xFFFFFFFFFFFFFFFBLL;
  HIBYTE(v16) = 96;
  *(_WORD *)(a1 + 28) = v16;
  v17 = sub_799DF0(a2);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v17 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(a2);
  *(_DWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = a8;
  *(_QWORD *)a1 = &off_47DA4B0;
  sub_79B760(a1 + 64, a2);
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 112) = 0;
  v18 = a4 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 96) = v18;
  *(_QWORD *)a1 = &off_47D9E28;
  if ( !a9 )
  {
    v22 = a4 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v21 = a1;
LABEL_13:
    if ( v22 > 3 )
    {
      *(_QWORD *)(v21 + 96) = sub_6D4E90((_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL), a1) | 1;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v19 = *(_QWORD *)(a9 + 104);
  *(_QWORD *)(a1 + 104) = v19;
  v20 = sub_6E77B0((unsigned __int64 *)(v19 + 96), v19);
  v21 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 96) = v20 & 0xFFFFFFFFFFFFFFFCLL;
  *(_WORD *)(a1 + 30) |= *(_WORD *)(v20 + 30) & 0x26;
  v18 = *(_QWORD *)(v21 + 96);
  v22 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) == 0 )
    goto LABEL_13;
  if ( v22 )
  {
    if ( (v18 & 4) != 0 )
    {
      v25 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v25 )
      {
        *(_QWORD *)(v25 + 16) = a1;
        goto LABEL_10;
      }
    }
  }
LABEL_9:
  v22 = a1 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_10:
  *(_QWORD *)(v21 + 96) = v22 | 1;
LABEL_11:
  *(_QWORD *)a1 = &off_47D9F18;
  result = *(_QWORD *)(a1 + 72) & 0x101FFFLL;
  *(_QWORD *)(a1 + 72) = result | ((unsigned __int64)(a3 & 7) << 13);
  return result;
}

