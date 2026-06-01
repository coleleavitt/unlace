unsigned __int64 __fastcall sub_7AEF40(
        unsigned __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int16 v13; // ax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  bool v22; // al
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v29; // [rsp+18h] [rbp-40h]

  v10 = sub_79A610(112, (_QWORD *)a1, a2, 0);
  *(_QWORD *)v10 = off_49F5208;
  if ( !a2
    || (v11 = sub_79A2E0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && (v29 = *(_QWORD *)(v11 + 8) & 7LL, v22 = sub_7946A0(v11), v12 = v29, !v22) )
  {
    v12 = 0;
  }
  *(_QWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 24) = a5;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v10 + 28) = 24598;
  v13 = sub_799DF0(0x16u);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v13 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(22);
  v14 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v10 = &off_47D9B58;
  *(_QWORD *)(v10 + 40) = a6;
  sub_79B760(v10 + 48, 22);
  *(_QWORD *)(v10 + 80) = v14;
  *(_QWORD *)(v10 + 88) = v10;
  *(_DWORD *)(v10 + 100) = 0;
  *(_QWORD *)v10 = &off_49F56E8;
  *(_QWORD *)(v10 + 104) = 0;
  *(_DWORD *)(v10 + 96) = a4;
  *(_BYTE *)(v10 + 57) = *(_BYTE *)(v10 + 57) & 0x9F | ((32 * a3) | (a8 << 6)) & 0x60;
  if ( !a7 )
  {
    v20 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v15 = v10;
LABEL_28:
    if ( v20 > 3 )
    {
      *(_QWORD *)(v15 + 80) = sub_6D4E90((_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL), v10) | 1;
      return v10;
    }
    goto LABEL_15;
  }
  v15 = *(_QWORD *)(a7 + 88);
  *(_QWORD *)(v10 + 88) = v15;
  v16 = *(_QWORD *)(v15 + 80);
  v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v16 & 1) == 0 )
  {
    if ( v17 <= 3 )
      goto LABEL_11;
    v19 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v17 & 2) == 0 )
      goto LABEL_13;
    v23 = sub_6D4E90((_QWORD *)v19, v15);
    v17 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v16 = v23 | 1;
    *(_QWORD *)(v15 + 80) = v16;
  }
  v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v17 || (v17 & 4) == 0 )
    goto LABEL_12;
  if ( !v18 )
  {
LABEL_11:
    v19 = 0;
LABEL_12:
    v15 = *(_QWORD *)(v10 + 88);
    goto LABEL_13;
  }
  v25 = *(_QWORD *)v18;
  v26 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
  if ( *(_DWORD *)(v18 + 8) != v26 )
  {
    *(_DWORD *)(v18 + 8) = v26;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 144LL))(v25, v15);
  }
  v19 = *(_QWORD *)(v18 + 16);
  v15 = *(_QWORD *)(v10 + 88);
LABEL_13:
  *(_QWORD *)(v10 + 80) = v19 & 0xFFFFFFFFFFFFFFFCLL;
  *(_WORD *)(v10 + 30) |= *(_WORD *)(v19 + 30) & 0x26;
  v14 = *(_QWORD *)(v15 + 80);
  v20 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) == 0 )
    goto LABEL_28;
  if ( v20 )
  {
    if ( (v14 & 4) != 0 )
    {
      v24 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v24 )
      {
        *(_QWORD *)(v24 + 16) = v10;
        goto LABEL_16;
      }
    }
  }
LABEL_15:
  v20 = v10 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_16:
  *(_QWORD *)(v15 + 80) = v20 | 1;
  return v10;
}

