unsigned __int64 __fastcall sub_7BE180(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  bool v21; // al
  _QWORD *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v28; // [rsp+8h] [rbp-40h]

  v10 = sub_79A610(112, (_QWORD *)a1, a2, 0);
  *(_QWORD *)v10 = off_49F5208;
  if ( !a2
    || (v11 = sub_79A2E0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && (v28 = *(_QWORD *)(v11 + 8) & 7LL, v21 = sub_7946A0(v11), v12 = v28, !v21) )
  {
    v12 = 0;
  }
  *(_QWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v10 + 28) = 24593;
  v13 = sub_799DF0(0x11u);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v13 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(17);
  *(_QWORD *)(v10 + 40) = a3;
  *(_QWORD *)v10 = &off_47D9B58;
  sub_79B760(v10 + 48, 17);
  *(_QWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 96) = v10;
  *(_DWORD *)(v10 + 60) = a5;
  *(_QWORD *)v10 = &off_49F61E0;
  v14 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 88) = v14;
  if ( !a6 )
  {
    if ( v14 <= 3
      || (v17 = v10,
          v22 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCLL),
          (v23 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFCLL) + 18200)) == 0) )
    {
      *(_QWORD *)(v10 + 88) = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  v15 = *(_QWORD *)(a6 + 96);
  *(_QWORD *)(v10 + 96) = v15;
  v16 = sub_7BCDC0((unsigned __int64 *)(v15 + 88), v15);
  v17 = *(_QWORD *)(v10 + 96);
  *(_QWORD *)(v10 + 88) = v16 & 0xFFFFFFFFFFFFFFFCLL;
  *(_WORD *)(v10 + 30) |= *(_WORD *)(v16 + 30) & 0x26;
  v18 = *(_QWORD *)(v17 + 88);
  v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) == 0 )
  {
    if ( v19 <= 3 )
      goto LABEL_9;
    v22 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    v23 = v22[2275];
    if ( !v23 )
      goto LABEL_9;
LABEL_17:
    v24 = v22[274];
    v22[284] += 24LL;
    v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v22[275] >= v25 + 24 && v24 )
      v22[274] = v25 + 24;
    else
      v25 = sub_7B4EB0((__int64)(v22 + 274), 24, 3);
    *(_QWORD *)v25 = v23;
    *(_DWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = v10;
    *(_QWORD *)(v17 + 88) = v25 | 5;
LABEL_21:
    if ( !a6 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v19 && (v18 & 4) != 0 )
  {
    v26 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v26 )
      *(_QWORD *)(v26 + 16) = v10;
    else
      v19 = v10 & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(v17 + 88) = v19 | 1;
    goto LABEL_21;
  }
LABEL_9:
  *(_QWORD *)(v17 + 88) = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
LABEL_10:
  *(_QWORD *)(v10 + 104) = *(_QWORD *)(a6 + 104);
LABEL_11:
  *(_QWORD *)(v10 + 104) = *(_QWORD *)(v10 + 104) & 0xFFFFFFFFFFFFFFFBLL
                         | (4LL * (*(char *)(*(_QWORD *)(a1 + 2160) + 18LL) >= 0LL));
  return v10;
}

