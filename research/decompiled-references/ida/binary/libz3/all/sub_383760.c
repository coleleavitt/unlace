__int64 __fastcall sub_383760(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v12; // [rsp+8h] [rbp-D8h]
  int v13; // [rsp+10h] [rbp-D0h]
  int v14; // [rsp+18h] [rbp-C8h]
  int v15; // [rsp+20h] [rbp-C0h]
  __int64 v16; // [rsp+28h] [rbp-B8h]
  __int64 v17; // [rsp+68h] [rbp-78h] BYREF
  __int64 v18; // [rsp+70h] [rbp-70h] BYREF
  __int64 v19; // [rsp+78h] [rbp-68h] BYREF
  __int64 v20; // [rsp+80h] [rbp-60h] BYREF
  __int64 v21; // [rsp+88h] [rbp-58h] BYREF
  __int64 v22; // [rsp+90h] [rbp-50h] BYREF
  __int64 v23; // [rsp+98h] [rbp-48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-40h] BYREF
  _QWORD v25[7]; // [rsp+A8h] [rbp-38h] BYREF

  v17 = 0;
  sub_1862300(&v17, "pull_cheap_ite", 1);
  sub_1862300(&v17, "push_ite_arith", 0);
  sub_1862300(&v17, "local_ctx", 1);
  sub_1862370(&v17, "local_ctx_limit", 10000000);
  sub_1862300(&v17, "hoist_ite", 1);
  v18 = 0;
  sub_1862370(&v18, "max_depth", 30);
  sub_1862370(&v18, "max_steps", 5000000);
  v19 = 0;
  sub_1862370(&v19, "lia2card.max_range", 1);
  sub_1862370(&v19, "lia2card.max_ite_nesting", 1);
  v25[0] = 0;
  v16 = sub_CF8250(a1, v25);
  v15 = sub_C41930(a1, (unsigned int)&v19, v1, v2, v3, v4);
  v24 = 0;
  v5 = sub_186B270(0x160u);
  *(_QWORD *)v5 = qword_1C636A0;
  *(_QWORD *)(v5 + 16) = qword_1C63778;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_BYTE *)(v5 + 28) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = &off_1C62200;
  *(_QWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = a1;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  sub_180C0A0(v5 + 136);
  *(_QWORD *)v5 = &off_1C4C5D8;
  *(_QWORD *)(v5 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v5 + 176) = a1;
  sub_1858590(v5 + 184, &v24);
  *(_OWORD *)(v5 + 192) = 0;
  sub_180C0A0(v5 + 208);
  *(_QWORD *)(v5 + 248) = 0;
  *(_QWORD *)(v5 + 272) = 0;
  v6 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v5 + 256) = a1;
  *(_QWORD *)(v5 + 280) = 0;
  *(_QWORD *)(v5 + 264) = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  *(_QWORD *)(v5 + 320) = 0;
  *(_QWORD *)(v5 + 304) = sub_230350;
  *(_QWORD *)(v5 + 312) = a1;
  *(_QWORD *)(v5 + 328) = 0;
  *(_QWORD *)(v5 + 336) = 0;
  *(_BYTE *)(v5 + 344) = 0;
  *(_OWORD *)(v5 + 288) = 0;
  v23 = 0;
  v7 = sub_D156B0(a1, (unsigned int)&v23);
  v14 = sub_EE8E00(v7, &v17);
  v22 = 0;
  v8 = sub_CCFC80(a1, &v22);
  v13 = sub_EE8E00(v8, &v18);
  v21 = 0;
  v12 = sub_CF56E0(a1, (unsigned int)&v21);
  v20 = 0;
  v9 = sub_D156B0(a1, (unsigned int)&v20);
  v10 = sub_EE7EC0(v9, v12, v13, v14, v5, v15, v16);
  sub_18572D0(&v20);
  sub_18572D0(&v21);
  sub_18572D0(&v22);
  sub_18572D0(&v23);
  sub_18572D0(&v24);
  sub_18572D0(v25);
  sub_18572D0(&v19);
  sub_18572D0(&v18);
  sub_18572D0(&v17);
  return v10;
}

