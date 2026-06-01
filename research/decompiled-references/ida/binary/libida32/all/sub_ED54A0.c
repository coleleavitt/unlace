unsigned __int64 __fastcall sub_ED54A0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const void *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v12; // r15
  unsigned int *v13; // rbp
  __int16 v14; // dx
  bool v15; // zf
  __int64 v16; // rax
  unsigned int *v17; // rax
  char *v18; // rsi
  char *v19; // rsi
  char *v20; // rsi
  char *v21; // rsi
  char *v22; // rsi
  char *v23; // rsi
  char *v24; // rsi
  char *v25; // rax
  unsigned int v28; // [rsp+Ch] [rbp-4Ch]
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h]

  v28 = sub_ED1500(57, a2) + 8 * a4;
  v12 = sub_ED2130(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a6 + (unsigned __int64)(v28 + (a7 != 0))) + 15) >> 3) + 48,
          3u);
  v13 = (unsigned int *)sub_ED15F0(v12 + 40, a5, a6, a7, v28);
  v14 = *(_WORD *)v12 & 0xFE00;
  LOBYTE(v14) = -47;
  v15 = unk_2CAD564 == 0;
  *(_WORD *)v12 = v14;
  if ( !v15 )
    sub_EC5E10(209);
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 16) = a3;
  *(_DWORD *)(v12 + 32) = a4;
  v16 = *v13;
  *(_QWORD *)(v12 + 24) = v13;
  *(_DWORD *)(v12 + 8) = 57;
  v17 = &v13[2 * v16 + 4];
  *(_BYTE *)(v12 + 36) = 0;
  *(_QWORD *)v17 = *(_QWORD *)a8;
  *((_QWORD *)v17 + 1) = *(_QWORD *)(a8 + 8);
  *((_QWORD *)v17 + 2) = *(_QWORD *)(a8 + 24);
  *((_QWORD *)v17 + 3) = *(_QWORD *)(a8 + 32);
  *((_QWORD *)v17 + 4) = *(_QWORD *)(a8 + 40);
  *((_QWORD *)v17 + 5) = *(_QWORD *)(a8 + 48);
  *((_QWORD *)v17 + 6) = *(_QWORD *)(a8 + 56);
  *((_QWORD *)v17 + 8) = *(_QWORD *)(a8 + 64);
  *((_QWORD *)v17 + 9) = *(_QWORD *)(a8 + 72);
  *((_QWORD *)v17 + 10) = *(_QWORD *)(a8 + 80);
  *((_QWORD *)v17 + 11) = *(_QWORD *)(a8 + 88);
  *((_QWORD *)v17 + 12) = *(_QWORD *)(a8 + 96);
  *((_QWORD *)v17 + 13) = *(_QWORD *)(a8 + 104);
  *((_QWORD *)v17 + 14) = *(_QWORD *)(a8 + 112);
  *((_QWORD *)v17 + 15) = *(_QWORD *)(a8 + 16);
  v29 = *(_QWORD *)(a8 + 152);
  v30 = *(unsigned int *)(a8 + 160);
  v18 = (char *)sub_ED1090(v12, (__int64)a5);
  sub_E942E0((__int64)&v29, v18);
  v29 = *(_QWORD *)(a8 + 200);
  v30 = *(unsigned int *)(a8 + 208);
  v19 = (char *)sub_ED1110(v12, (__int64)v18);
  sub_E942E0((__int64)&v29, v19);
  v29 = *(_QWORD *)(a8 + 248);
  v30 = *(unsigned int *)(a8 + 256);
  v20 = (char *)sub_ED11A0(v12, (__int64)v19);
  sub_E942E0((__int64)&v29, v20);
  v29 = *(_QWORD *)(a8 + 296);
  v30 = *(unsigned int *)(a8 + 304);
  v21 = (char *)sub_ED1230(v12, (__int64)v20);
  sub_E942E0((__int64)&v29, v21);
  v29 = *(_QWORD *)(a8 + 344);
  v30 = *(unsigned int *)(a8 + 352);
  v22 = (char *)sub_ED12C0(v12, (__int64)v21);
  sub_E942E0((__int64)&v29, v22);
  v29 = *(_QWORD *)(a8 + 392);
  v30 = *(unsigned int *)(a8 + 400);
  v23 = (char *)sub_ED1350(v12, (__int64)v22);
  sub_E942E0((__int64)&v29, v23);
  v29 = *(_QWORD *)(a8 + 440);
  v30 = *(unsigned int *)(a8 + 448);
  v24 = (char *)sub_ED13E0(v12, (__int64)v23);
  sub_E942E0((__int64)&v29, v24);
  v29 = *(_QWORD *)(a8 + 488);
  v30 = *(unsigned int *)(a8 + 496);
  v25 = (char *)sub_ED1470(v12, (__int64)v24);
  sub_E942E0((__int64)&v29, v25);
  *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * **(unsigned int **)(v12 + 24) + 72) = *(_QWORD *)(a8 + 536);
  *(_BYTE *)(v12 + 36) = a9;
  return v12;
}

