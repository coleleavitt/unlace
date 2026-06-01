unsigned __int64 __fastcall sub_EF7BA0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const void *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned __int64 v13; // r15
  unsigned int *v14; // rbp
  __int16 v15; // dx
  bool v16; // zf
  __int64 v17; // rax
  unsigned int *v18; // rax
  char *v19; // rsi
  char *v20; // rsi
  char *v21; // rsi
  char *v22; // rsi
  char *v23; // rsi
  char *v24; // rsi
  char *v25; // rsi
  char *v26; // rsi
  unsigned int *v27; // rbx
  int v28; // r13d
  __int64 v29; // rbp
  unsigned int v32; // [rsp+Ch] [rbp-4Ch]
  __int64 v33; // [rsp+10h] [rbp-48h] BYREF
  __int64 v34; // [rsp+18h] [rbp-40h]

  v32 = sub_EF5240(77, a2) + 8 * a4 + 1;
  v13 = sub_EF5E70(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a6 + (unsigned __int64)(v32 + (a7 != 0))) + 15) >> 3) + 48,
          3u);
  v14 = (unsigned int *)sub_EF5330(v13 + 40, a5, a6, a7, v32);
  v15 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v15) = -88;
  v16 = unk_2CD7484 == 0;
  *(_WORD *)v13 = v15;
  if ( !v16 )
    sub_EE9B50(168);
  *(_DWORD *)(v13 + 12) = a2;
  *(_DWORD *)(v13 + 16) = a3;
  *(_DWORD *)(v13 + 32) = a4;
  v17 = *v14;
  *(_QWORD *)(v13 + 24) = v14;
  *(_DWORD *)(v13 + 8) = 77;
  v18 = &v14[2 * v17 + 4];
  *(_BYTE *)(v13 + 36) = 0;
  *(_QWORD *)v18 = *(_QWORD *)a8;
  *((_QWORD *)v18 + 1) = *(_QWORD *)(a8 + 8);
  *((_QWORD *)v18 + 2) = *(_QWORD *)(a8 + 24);
  *((_QWORD *)v18 + 3) = *(_QWORD *)(a8 + 32);
  *((_QWORD *)v18 + 4) = *(_QWORD *)(a8 + 40);
  *((_QWORD *)v18 + 5) = *(_QWORD *)(a8 + 48);
  *((_QWORD *)v18 + 6) = *(_QWORD *)(a8 + 56);
  *((_QWORD *)v18 + 8) = *(_QWORD *)(a8 + 64);
  *((_QWORD *)v18 + 9) = *(_QWORD *)(a8 + 72);
  *((_QWORD *)v18 + 10) = *(_QWORD *)(a8 + 80);
  *((_QWORD *)v18 + 11) = *(_QWORD *)(a8 + 88);
  *((_QWORD *)v18 + 12) = *(_QWORD *)(a8 + 96);
  *((_QWORD *)v18 + 13) = *(_QWORD *)(a8 + 104);
  *((_QWORD *)v18 + 14) = *(_QWORD *)(a8 + 112);
  *((_QWORD *)v18 + 15) = *(_QWORD *)(a8 + 16);
  v33 = *(_QWORD *)(a8 + 152);
  v34 = *(unsigned int *)(a8 + 160);
  v19 = (char *)sub_EF4DD0(v13, (__int64)a5);
  sub_EB8020((__int64)&v33, v19);
  v33 = *(_QWORD *)(a8 + 200);
  v34 = *(unsigned int *)(a8 + 208);
  v20 = (char *)sub_EF4E50(v13, (__int64)v19);
  sub_EB8020((__int64)&v33, v20);
  v33 = *(_QWORD *)(a8 + 248);
  v34 = *(unsigned int *)(a8 + 256);
  v21 = (char *)sub_EF4EE0(v13, (__int64)v20);
  sub_EB8020((__int64)&v33, v21);
  v33 = *(_QWORD *)(a8 + 296);
  v34 = *(unsigned int *)(a8 + 304);
  v22 = (char *)sub_EF4F70(v13, (__int64)v21);
  sub_EB8020((__int64)&v33, v22);
  v33 = *(_QWORD *)(a8 + 344);
  v34 = *(unsigned int *)(a8 + 352);
  v23 = (char *)sub_EF5000(v13, (__int64)v22);
  sub_EB8020((__int64)&v33, v23);
  v33 = *(_QWORD *)(a8 + 392);
  v34 = *(unsigned int *)(a8 + 400);
  v24 = (char *)sub_EF5090(v13, (__int64)v23);
  sub_EB8020((__int64)&v33, v24);
  v33 = *(_QWORD *)(a8 + 440);
  v34 = *(unsigned int *)(a8 + 448);
  v25 = (char *)sub_EF5120(v13, (__int64)v24);
  sub_EB8020((__int64)&v33, v25);
  v33 = *(_QWORD *)(a8 + 488);
  v34 = *(unsigned int *)(a8 + 496);
  v26 = (char *)sub_EF51B0(v13, (__int64)v25);
  sub_EB8020((__int64)&v33, v26);
  v27 = *(unsigned int **)(v13 + 24);
  v28 = *(_DWORD *)(v13 + 32);
  v29 = 8LL * *v27 + 16;
  *(_QWORD *)((char *)v27 + v29 + 56) = *(_QWORD *)(a8 + 536);
  *(_QWORD *)((char *)&v27[16 * v28 + 2 * (unsigned int)sub_EF5240(77, (__int64)v26)] + v29) = a9;
  *(_BYTE *)(v13 + 36) = a10;
  return v13;
}
