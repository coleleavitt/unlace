unsigned __int64 __fastcall sub_ED6080(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const void *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v11; // rbx
  unsigned int *v12; // r12
  __int16 v13; // dx
  bool v14; // zf
  __int64 v15; // rax
  unsigned int *v16; // rax
  char *v17; // rsi
  char *v18; // rsi
  char *v19; // rsi
  char *v20; // rsi
  char *v21; // rsi
  char *v22; // rsi
  char *v23; // rsi
  char *v24; // rax
  unsigned int v27; // [rsp+Ch] [rbp-4Ch]
  __int64 v28; // [rsp+10h] [rbp-48h] BYREF
  __int64 v29; // [rsp+18h] [rbp-40h]

  v27 = sub_ED1500(18, a2) + 8 * a4;
  v11 = sub_ED2130(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a6 + (unsigned __int64)(v27 + (a7 != 0))) + 15) >> 3) + 48,
          3u);
  v12 = (unsigned int *)sub_ED15F0(v11 + 40, a5, a6, a7, v27);
  v13 = *(_WORD *)v11 & 0xFE00;
  LOBYTE(v13) = -31;
  v14 = unk_2CAD564 == 0;
  *(_WORD *)v11 = v13;
  if ( !v14 )
    sub_EC5E10(225);
  *(_DWORD *)(v11 + 12) = a2;
  *(_DWORD *)(v11 + 16) = a3;
  *(_DWORD *)(v11 + 32) = a4;
  v15 = *v12;
  *(_QWORD *)(v11 + 24) = v12;
  *(_DWORD *)(v11 + 8) = 18;
  v16 = &v12[2 * v15 + 4];
  *(_QWORD *)v16 = *(_QWORD *)a8;
  *((_QWORD *)v16 + 1) = *(_QWORD *)(a8 + 8);
  *((_QWORD *)v16 + 2) = *(_QWORD *)(a8 + 24);
  *((_QWORD *)v16 + 3) = *(_QWORD *)(a8 + 32);
  *((_QWORD *)v16 + 4) = *(_QWORD *)(a8 + 40);
  *((_QWORD *)v16 + 5) = *(_QWORD *)(a8 + 48);
  *((_QWORD *)v16 + 6) = *(_QWORD *)(a8 + 56);
  *((_QWORD *)v16 + 8) = *(_QWORD *)(a8 + 64);
  *((_QWORD *)v16 + 9) = *(_QWORD *)(a8 + 72);
  *((_QWORD *)v16 + 10) = *(_QWORD *)(a8 + 80);
  *((_QWORD *)v16 + 11) = *(_QWORD *)(a8 + 88);
  *((_QWORD *)v16 + 12) = *(_QWORD *)(a8 + 96);
  *((_QWORD *)v16 + 13) = *(_QWORD *)(a8 + 104);
  *((_QWORD *)v16 + 14) = *(_QWORD *)(a8 + 112);
  *((_QWORD *)v16 + 15) = *(_QWORD *)(a8 + 16);
  v28 = *(_QWORD *)(a8 + 152);
  v29 = *(unsigned int *)(a8 + 160);
  v17 = (char *)sub_ED1090(v11, (__int64)a5);
  sub_E942E0((__int64)&v28, v17);
  v28 = *(_QWORD *)(a8 + 200);
  v29 = *(unsigned int *)(a8 + 208);
  v18 = (char *)sub_ED1110(v11, (__int64)v17);
  sub_E942E0((__int64)&v28, v18);
  v28 = *(_QWORD *)(a8 + 248);
  v29 = *(unsigned int *)(a8 + 256);
  v19 = (char *)sub_ED11A0(v11, (__int64)v18);
  sub_E942E0((__int64)&v28, v19);
  v28 = *(_QWORD *)(a8 + 296);
  v29 = *(unsigned int *)(a8 + 304);
  v20 = (char *)sub_ED1230(v11, (__int64)v19);
  sub_E942E0((__int64)&v28, v20);
  v28 = *(_QWORD *)(a8 + 344);
  v29 = *(unsigned int *)(a8 + 352);
  v21 = (char *)sub_ED12C0(v11, (__int64)v20);
  sub_E942E0((__int64)&v28, v21);
  v28 = *(_QWORD *)(a8 + 392);
  v29 = *(unsigned int *)(a8 + 400);
  v22 = (char *)sub_ED1350(v11, (__int64)v21);
  sub_E942E0((__int64)&v28, v22);
  v28 = *(_QWORD *)(a8 + 440);
  v29 = *(unsigned int *)(a8 + 448);
  v23 = (char *)sub_ED13E0(v11, (__int64)v22);
  sub_E942E0((__int64)&v28, v23);
  v28 = *(_QWORD *)(a8 + 488);
  v29 = *(unsigned int *)(a8 + 496);
  v24 = (char *)sub_ED1470(v11, (__int64)v23);
  sub_E942E0((__int64)&v28, v24);
  *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * **(unsigned int **)(v11 + 24) + 72) = *(_QWORD *)(a8 + 536);
  return v11;
}

