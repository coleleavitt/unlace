unsigned __int64 __fastcall sub_7AEC10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r15
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int16 v17; // ax
  _DWORD *v19; // rdi
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax

  v7 = *(_QWORD *)(a1[264] + 80LL);
  v8 = *(_QWORD *)(v7 + 72);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) == 0 )
  {
    if ( v9 <= 3 )
    {
LABEL_8:
      v13 = 0;
      v14 = 0;
      v15 = sub_79A610(136, a1, 0, 0);
      *(_QWORD *)v15 = off_49F5208;
      goto LABEL_9;
    }
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 2) == 0 )
      goto LABEL_16;
    v11 = sub_6D4E90(v10, v7);
    v9 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v8 = v11 | 1;
    *(_QWORD *)(v7 + 72) = v8;
  }
  if ( !v9 )
    goto LABEL_8;
  v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v12 = v10;
  if ( (v9 & 4) != 0 )
  {
    if ( !v10 )
      goto LABEL_8;
    v19 = (_DWORD *)*v10;
    v20 = v19[3];
    if ( *((_DWORD *)v12 + 2) != v20 )
    {
      *((_DWORD *)v12 + 2) = v20;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v19 + 144LL))(v19, v7);
    }
    v10 = (_QWORD *)v12[2];
  }
  if ( !v10 )
    goto LABEL_8;
LABEL_16:
  v21 = (_QWORD *)sub_79A610(136, a1, (__int64)(v10 + 5), 0);
  v22 = (__int64)(v10 + 5);
  v13 = v22 & 0xFFFFFFFFFFFFFFFBLL;
  v15 = (unsigned __int64)v21;
  *v21 = off_49F5208;
  v23 = sub_79A2E0(v22);
  v14 = *(_QWORD *)(v23 + 8) & 7LL;
  if ( (*(_QWORD *)(v23 + 8) & 7) != 0 && *(char *)(v23 + 29) < 0 && !sub_7946A0(v23) )
    v14 = 0;
LABEL_9:
  *(_QWORD *)(v15 + 8) = v14;
  v16 = *(_QWORD *)(v15 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(v15 + 16) = v13;
  *(_QWORD *)(v15 + 24) = v16 | 0x601D00000000LL;
  v17 = sub_799DF0(0x1Du);
  *(_BYTE *)(v15 + 32) &= 0xF8u;
  *(_WORD *)(v15 + 30) = v17 & 0x3FFF | *(_WORD *)(v15 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(29);
  *(_BYTE *)(v15 + 84) &= ~1u;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = a2;
  *(_QWORD *)v15 = &off_49F5DD0;
  *(_QWORD *)(v15 + 56) = 0;
  *(_QWORD *)(v15 + 64) = a3;
  *(_QWORD *)(v15 + 72) = a4;
  *(_DWORD *)(v15 + 80) = 0;
  return v15;
}

