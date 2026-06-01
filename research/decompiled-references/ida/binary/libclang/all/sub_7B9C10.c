void __fastcall sub_7B9C10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        char a9)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // ax
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdi
  _QWORD *v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  bool v30; // al
  unsigned __int64 v31; // rbp
  __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  *(_QWORD *)a1 = off_49F5208;
  if ( !a3
    || (v32 = a3, v13 = sub_79A2E0(a3), a3 = v32, v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0
    && (v35 = v32, v33 = *(_QWORD *)(v13 + 8) & 7LL, v30 = sub_7946A0(v13), v14 = v33, a3 = v35, !v30) )
  {
    v14 = 0;
  }
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(a1 + 24) = a7;
  *(_WORD *)(a1 + 28) = 24594;
  v15 = sub_799DF0(0x12u);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v15 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(18);
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)a1 = &off_47D9B58;
  sub_79B760(a1 + 48, 18);
  *(_DWORD *)(a1 + 60) = a4;
  *(_QWORD *)(a1 + 80) = 0;
  v16 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 96) = a1;
  *(_QWORD *)(a1 + 88) = v16;
  *(_QWORD *)a1 = &off_49F5F80;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  if ( !a8 )
  {
    if ( v16 <= 3
      || (v26 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFCLL),
          v19 = a1,
          (v27 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFCLL) + 18200)) == 0) )
    {
      *(_QWORD *)(a1 + 88) = a1 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(a8 + 96);
  *(_QWORD *)(a1 + 96) = v17;
  v18 = sub_7B9840((unsigned __int64 *)(v17 + 88), v17);
  v19 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 88) = v18 & 0xFFFFFFFFFFFFFFFCLL;
  *(_WORD *)(a1 + 30) |= *(_WORD *)(v18 + 30) & 0x26;
  v20 = *(_QWORD *)(v19 + 88);
  v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v20 & 1) == 0 )
  {
    if ( v21 <= 3 )
      goto LABEL_9;
    v26 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
    v27 = v26[2275];
    if ( !v27 )
      goto LABEL_9;
LABEL_17:
    v28 = v26[274];
    v26[284] += 24LL;
    v29 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v26[275] >= v29 + 24 && v28 )
    {
      v26[274] = v29 + 24;
    }
    else
    {
      v34 = v27;
      v29 = sub_7B4EB0((__int64)(v26 + 274), 24, 3);
      v27 = v34;
    }
    *(_QWORD *)v29 = v27;
    *(_DWORD *)(v29 + 8) = 0;
    *(_QWORD *)(v29 + 16) = a1;
    *(_QWORD *)(v19 + 88) = v29 | 5;
LABEL_21:
    if ( !a8 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v21 && (v20 & 4) != 0 )
  {
    v31 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v31 )
      *(_QWORD *)(v31 + 16) = a1;
    else
      v21 = a1 & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(v19 + 88) = v21 | 1;
    goto LABEL_21;
  }
LABEL_9:
  *(_QWORD *)(v19 + 88) = a1 & 0xFFFFFFFFFFFFFFFALL | 1;
LABEL_10:
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a8 + 120);
LABEL_11:
  *(_QWORD *)(a1 + 112) = a6;
  *(_BYTE *)(a1 + 29) = (2 * (a9 & 1)) | *(_BYTE *)(a1 + 29) & 0xFD;
  if ( a6 )
  {
    v22 = (__int64 *)(a6 + 16);
    v23 = 8LL * *(unsigned int *)(a6 + 8);
    v24 = a6 + v23 + 16;
    if ( v23 )
    {
      do
      {
        v25 = *v22++;
        sub_798630(v25, a1 + 48);
      }
      while ( (__int64 *)v24 != v22 );
    }
  }
}

