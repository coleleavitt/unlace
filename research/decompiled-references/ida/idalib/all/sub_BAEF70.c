void __fastcall sub_BAEF70(
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
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rdi

  sub_B725B0(a1, 0x14u, a3, a7);
  *(_QWORD *)(a1 + 40) = a5;
  v12 = a1 + 48;
  *(_QWORD *)a1 = &off_2B4A650;
  sub_B8E080(a1 + 48, 20);
  *(_DWORD *)(a1 + 60) = a4;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = a1;
  v17 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)a1 = &off_2C03910;
  *(_QWORD *)(a1 + 88) = v17;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  if ( a8 )
  {
    v18 = *(_QWORD *)(a8 + 96);
    *(_QWORD *)(a1 + 96) = v18;
    v19 = (unsigned __int64)sub_A794E0((__int64 *)(v18 + 88), v18, v13, v14, v15, v16);
    v20 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = v19 & 0xFFFFFFFFFFFFFFFCLL;
    v14 = *(_WORD *)(a1 + 30) & 0x3FFF;
    v13 = (unsigned int)v14 | *(_WORD *)(v19 + 30) & 0x26;
    *(_WORD *)(a1 + 30) = v14 | *(_WORD *)(v19 + 30) & 0x26 | *(_WORD *)(a1 + 30) & 0xC000;
    v17 = *(_QWORD *)(v20 + 88);
    if ( (v17 & 1) != 0 )
      goto LABEL_3;
  }
  else
  {
    v20 = a1;
    if ( (v17 & 1) != 0 )
    {
      v21 = v17;
      goto LABEL_4;
    }
  }
  if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    *(_QWORD *)(v20 + 88) = sub_6E2500((_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL), a1, v13, v14, v15, v16) | 1;
    goto LABEL_9;
  }
LABEL_3:
  v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v17 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
LABEL_15:
    v21 = a1 & 0xFFFFFFFFFFFFFFFALL;
    goto LABEL_16;
  }
LABEL_4:
  if ( (v21 & 4) == 0 )
    goto LABEL_15;
  v22 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v22 )
    goto LABEL_15;
  *(_QWORD *)(v22 + 16) = a1;
LABEL_16:
  *(_QWORD *)(v20 + 88) = v21 | 1;
LABEL_9:
  if ( a8 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a8 + 120);
  *(_QWORD *)(a1 + 112) = a6;
  *(_BYTE *)(a1 + 29) = (2 * (a9 & 1)) | *(_BYTE *)(a1 + 29) & 0xFD;
  if ( a6 )
  {
    v23 = (__int64 *)(a6 + 16);
    v24 = a6 + 8LL * *(unsigned int *)(a6 + 8) + 16;
    if ( a6 + 16 != v24 )
    {
      do
      {
        v25 = *v23++;
        sub_B8C080(v25, v12);
      }
      while ( (__int64 *)v24 != v23 );
    }
  }
}
