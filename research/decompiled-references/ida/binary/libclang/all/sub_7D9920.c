unsigned __int64 __fastcall sub_7D9920(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rdi
  int v23; // eax

  v5 = *(_QWORD *)(a1[264] + 80LL);
  v6 = *(_QWORD *)(v5 + 72);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) != 0 )
    goto LABEL_2;
  if ( v7 <= 3 )
    goto LABEL_5;
  v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v7 & 2) != 0 )
  {
    v16 = *(_QWORD *)(v8 + 18200);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v8 + 2192);
      *(_QWORD *)(v8 + 2272) += 24LL;
      v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v8 + 2200) >= v18 + 24 && v17 )
        *(_QWORD *)(v8 + 2192) = v18 + 24;
      else
        v18 = sub_7CF9B0(v8 + 2192, 24, 3);
      *(_QWORD *)v18 = v16;
      *(_DWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = v5;
      *(_QWORD *)(v5 + 72) = v18 | 5;
      v8 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v18 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_4:
      if ( !v8 )
        goto LABEL_5;
      v22 = *(_DWORD **)v8;
      v23 = v22[3];
      if ( *(_DWORD *)(v9 + 8) != v23 )
      {
        *(_DWORD *)(v9 + 8) = v23;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v22 + 144LL))(v22, v5);
      }
      v8 = *(_QWORD *)(v9 + 16);
LABEL_16:
      if ( !v8 )
        goto LABEL_5;
      goto LABEL_17;
    }
    v7 = v5 & 0xFFFFFFFFFFFFFFFALL;
    v6 = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v5 + 72) = v6;
LABEL_2:
    if ( !v7 )
    {
LABEL_5:
      v10 = 0;
      v11 = 0;
      v12 = sub_79A610(120, a1, 0, 0);
      *(_QWORD *)v12 = off_49F5208;
      goto LABEL_6;
    }
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v8;
    if ( (v7 & 4) == 0 )
      goto LABEL_16;
    goto LABEL_4;
  }
LABEL_17:
  v19 = (_QWORD *)sub_79A610(120, a1, v8 + 40, 0);
  v20 = v8 + 40;
  v10 = v20 & 0xFFFFFFFFFFFFFFFBLL;
  v12 = (unsigned __int64)v19;
  *v19 = off_49F5208;
  v21 = sub_79A2E0(v20);
  v11 = *(_QWORD *)(v21 + 8) & 7LL;
  if ( (*(_QWORD *)(v21 + 8) & 7) != 0 && *(char *)(v21 + 29) < 0 && !sub_7946A0(v21) )
    v11 = 0;
LABEL_6:
  *(_QWORD *)(v12 + 8) = v11;
  v13 = *(_QWORD *)(v12 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(v12 + 16) = v10;
  *(_QWORD *)(v12 + 24) = v13 | 0x601C00000000LL;
  v14 = sub_799DF0(0x1Cu);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v14 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(28);
  *(_QWORD *)(v12 + 48) = a2;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)v12 = &off_49F6C40;
  sub_6A4260(v12 + 64, a3);
  sub_6B5A70((__int64)a1, (__int64)sub_778160, v12 + 64);
  return v12;
}

