__int64 __fastcall sub_726800(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v17; // [rsp+40h] [rbp-B8h]
  __int64 v18; // [rsp+48h] [rbp-B0h]
  __int64 v19; // [rsp+50h] [rbp-A8h]
  __int64 v20; // [rsp+58h] [rbp-A0h]
  __int64 v21; // [rsp+60h] [rbp-98h]
  _BYTE v22[8]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v23[8]; // [rsp+78h] [rbp-80h] BYREF
  _BYTE v24[8]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v25; // [rsp+88h] [rbp-70h] BYREF
  __int64 v26; // [rsp+90h] [rbp-68h] BYREF
  __int64 v27; // [rsp+98h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-48h] BYREF
  _QWORD v31[8]; // [rsp+B8h] [rbp-40h] BYREF

  sub_1858590(v22, a2);
  sub_1862300(v22, "som", 1);
  sub_1862300(v22, "pull_cheap_ite", 1);
  sub_1862300(v22, "push_ite_bv", 0);
  sub_1862300(v22, "local_ctx", 1);
  sub_1862370(v22, "local_ctx_limit", 10000000);
  sub_1858590(v23, a2);
  sub_1862300(v23, "hoist_mul", 1);
  sub_1862300(v23, "som", 0);
  sub_1858590(v24, a2);
  sub_1862370(v24, "gaussian_max_occs", 2);
  if ( a3 )
    v4 = sub_CEBC00(a1, a2);
  else
    v4 = sub_EE4CD0();
  v17 = v4;
  v31[0] = 0;
  v5 = sub_186B270(0x160u);
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)v5 = qword_1C636A0;
  *(_QWORD *)(v5 + 16) = qword_1C63778;
  *(_DWORD *)(v5 + 24) = 0;
  *(_BYTE *)(v5 + 28) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 48) = &off_1C62200;
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = a1;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  sub_180C0A0(v5 + 136);
  *(_QWORD *)(v5 + 176) = a1;
  *(_QWORD *)v5 = &off_1C4C5D8;
  *(_QWORD *)(v5 + 16) = &off_1C4C6F0;
  sub_1858590(v5 + 184, v31);
  *(_OWORD *)(v5 + 192) = 0;
  sub_180C0A0(v5 + 208);
  v6 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v5 + 248) = 0;
  *(_QWORD *)(v5 + 256) = a1;
  *(_QWORD *)(v5 + 264) = v6;
  *(_QWORD *)(v5 + 272) = 0;
  *(_QWORD *)(v5 + 280) = 0;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  *(_QWORD *)(v5 + 312) = a1;
  *(_QWORD *)(v5 + 320) = 0;
  *(_QWORD *)(v5 + 304) = sub_F72960;
  *(_QWORD *)(v5 + 328) = 0;
  *(_QWORD *)(v5 + 336) = 0;
  *(_BYTE *)(v5 + 344) = 0;
  *(_OWORD *)(v5 + 288) = 0;
  v30 = 0;
  v7 = sub_D156B0(a1, (unsigned int)&v30);
  v18 = sub_EE8E00(v7, v23);
  v29 = 0;
  v8 = sub_D156B0(a1, (unsigned int)&v29);
  v19 = sub_EE8E00(v8, v22);
  v28 = 0;
  v20 = sub_74D390(a1, &v28);
  v27 = 0;
  v21 = sub_CF8250(a1, &v27);
  v26 = 0;
  v9 = sub_186B270(0x160u);
  *(_QWORD *)v9 = qword_1C636A0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = qword_1C63778;
  *(_DWORD *)(v9 + 24) = 0;
  *(_BYTE *)(v9 + 28) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 48) = &off_1C62200;
  *(_QWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = a1;
  *(_QWORD *)(v9 + 112) = 0;
  *(_QWORD *)(v9 + 120) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  sub_180C0A0(v9 + 136);
  *(_QWORD *)(v9 + 176) = a1;
  *(_QWORD *)v9 = &off_1C4C5D8;
  *(_QWORD *)(v9 + 16) = &off_1C4C6F0;
  sub_1858590(v9 + 184, &v26);
  *(_OWORD *)(v9 + 192) = 0;
  sub_180C0A0(v9 + 208);
  v10 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v9 + 248) = 0;
  *(_QWORD *)(v9 + 256) = a1;
  *(_QWORD *)(v9 + 264) = v10;
  *(_QWORD *)(v9 + 272) = 0;
  *(_QWORD *)(v9 + 280) = 0;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  *(_QWORD *)(v9 + 312) = a1;
  *(_QWORD *)(v9 + 304) = sub_230350;
  *(_QWORD *)(v9 + 320) = 0;
  *(_QWORD *)(v9 + 328) = 0;
  *(_QWORD *)(v9 + 336) = 0;
  *(_BYTE *)(v9 + 344) = 0;
  *(_OWORD *)(v9 + 288) = 0;
  v11 = sub_EE8E00(v9, v24);
  v25 = 0;
  v12 = sub_CF56E0(a1, (unsigned int)&v25);
  v13 = sub_D156B0(a1, a2);
  v14 = sub_EE7D40(v13, v12, v11, v21, v20, v19);
  v15 = sub_EE7B50(v14, v18, v5, v17);
  sub_18572D0(&v25);
  sub_18572D0(&v26);
  sub_18572D0(&v27);
  sub_18572D0(&v28);
  sub_18572D0(&v29);
  sub_18572D0(&v30);
  sub_18572D0(v31);
  sub_18572D0(v24);
  sub_18572D0(v23);
  sub_18572D0(v22);
  return v15;
}

