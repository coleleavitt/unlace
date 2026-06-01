unsigned __int64 __fastcall sub_7AE860(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  _DWORD *v17; // rdi
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax

  v5 = *(_QWORD *)(a1[264] + 80LL);
  v6 = *(_QWORD *)(v5 + 72);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) == 0 )
  {
    if ( v7 <= 3 )
    {
LABEL_8:
      v11 = 0;
      v12 = 0;
      v13 = sub_79A610(120, a1, 0, 0);
      *(_QWORD *)v13 = off_49F5208;
      goto LABEL_9;
    }
    v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) == 0 )
      goto LABEL_18;
    v9 = sub_6D4E90(v8, v5);
    v7 = v9 & 0xFFFFFFFFFFFFFFFELL;
    v6 = v9 | 1;
    *(_QWORD *)(v5 + 72) = v6;
  }
  if ( !v7 )
    goto LABEL_8;
  v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v10 = v8;
  if ( (v7 & 4) != 0 )
  {
    if ( !v8 )
      goto LABEL_8;
    v17 = (_DWORD *)*v8;
    v18 = v17[3];
    if ( *((_DWORD *)v10 + 2) != v18 )
    {
      *((_DWORD *)v10 + 2) = v18;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v17 + 144LL))(v17, v5);
    }
    v8 = (_QWORD *)v10[2];
  }
  if ( !v8 )
    goto LABEL_8;
LABEL_18:
  v19 = (_QWORD *)sub_79A610(120, a1, (__int64)(v8 + 5), 0);
  v20 = (__int64)(v8 + 5);
  v11 = v20 & 0xFFFFFFFFFFFFFFFBLL;
  v13 = (unsigned __int64)v19;
  *v19 = off_49F5208;
  v21 = sub_79A2E0(v20);
  v12 = *(_QWORD *)(v21 + 8) & 7LL;
  if ( (*(_QWORD *)(v21 + 8) & 7) != 0 && *(char *)(v21 + 29) < 0 && !sub_7946A0(v21) )
    v12 = 0;
LABEL_9:
  *(_QWORD *)(v13 + 8) = v12;
  v14 = *(_QWORD *)(v13 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(v13 + 16) = v11;
  *(_QWORD *)(v13 + 24) = v14 | 0x601B00000000LL;
  v15 = sub_799DF0(0x1Bu);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v15 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(27);
  *(_QWORD *)(v13 + 48) = a2;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)v13 = &off_49F5E88;
  sub_6A4260(v13 + 64, a3);
  if ( sub_6A0220(v13 + 64) )
    sub_6B5A70((__int64)a1, (__int64)sub_778160, v13 + 64);
  return v13;
}

