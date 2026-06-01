__int64 __fastcall sub_38BA10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+10h] [rbp-100h]
  int v20; // [rsp+18h] [rbp-F8h]
  int v21; // [rsp+20h] [rbp-F0h]
  int v22; // [rsp+28h] [rbp-E8h]
  __int64 v23; // [rsp+30h] [rbp-E0h]
  __int64 v24; // [rsp+78h] [rbp-98h]
  _BYTE v25[8]; // [rsp+88h] [rbp-88h] BYREF
  _BYTE v26[8]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v27; // [rsp+98h] [rbp-78h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-68h] BYREF
  int v30[2]; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v35[7]; // [rsp+D8h] [rbp-38h] BYREF

  sub_1858590(v25, a2);
  sub_1858590(v26, a2);
  sub_1862300(v26, "flat_and_or", 0);
  sub_1862300(v25, "pull_cheap_ite", 1);
  sub_1862300(v25, "push_ite_bv", 0);
  sub_1862300(v25, "local_ctx", 1);
  sub_1862370(v25, "local_ctx_limit", 10000000);
  sub_1862300(v25, "ite_extra_rules", 1);
  sub_1862300(v25, "mul2concat", 1);
  sub_1862300(v25, "flat_and_or", 0);
  v27 = 0;
  sub_1862370(&v27, "max_depth", 32);
  sub_1862370(&v27, "max_steps", 5000000);
  v35[0] = 0;
  v2 = sub_D156B0(a1, (unsigned int)v35);
  v23 = sub_EE8E00(v2, v25);
  v34 = 0;
  v24 = sub_186B270(0x160u);
  *(_QWORD *)v24 = qword_1C636A0;
  *(_DWORD *)(v24 + 8) = 0;
  *(_QWORD *)(v24 + 16) = qword_1C63778;
  *(_DWORD *)(v24 + 24) = 0;
  *(_BYTE *)(v24 + 28) = 0;
  *(_QWORD *)(v24 + 32) = 0;
  *(_DWORD *)(v24 + 40) = 0;
  *(_QWORD *)(v24 + 48) = &off_1C62200;
  *(_QWORD *)(v24 + 64) = 0;
  *(_QWORD *)(v24 + 72) = 0;
  *(_QWORD *)(v24 + 88) = 0;
  *(_QWORD *)(v24 + 96) = 0;
  *(_QWORD *)(v24 + 104) = a1;
  *(_QWORD *)(v24 + 112) = 0;
  *(_QWORD *)(v24 + 120) = 0;
  *(_QWORD *)(v24 + 128) = 0;
  sub_180C0A0(v24 + 136);
  *(_QWORD *)(v24 + 16) = &off_1C4C6F0;
  *(_QWORD *)v24 = &off_1C4C5D8;
  *(_QWORD *)(v24 + 176) = a1;
  sub_1858590(v24 + 184, &v34);
  *(_OWORD *)(v24 + 192) = 0;
  sub_180C0A0(v24 + 208);
  v3 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v24 + 248) = 0;
  *(_QWORD *)(v24 + 256) = a1;
  *(_QWORD *)(v24 + 264) = v3;
  *(_QWORD *)(v24 + 272) = 0;
  *(_QWORD *)(v24 + 280) = 0;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v33 = 0;
  *(_QWORD *)(v24 + 304) = sub_F72960;
  *(_QWORD *)(v24 + 312) = a1;
  *(_QWORD *)(v24 + 320) = 0;
  *(_QWORD *)(v24 + 328) = 0;
  *(_QWORD *)(v24 + 336) = 0;
  *(_BYTE *)(v24 + 344) = 0;
  *(_OWORD *)(v24 + 288) = 0;
  v4 = sub_74D390(a1, &v33);
  v5 = sub_EE90C0(v4);
  v22 = sub_EE9080(v5);
  v32 = 0;
  v21 = sub_CF8250(a1, &v32);
  v31 = 0;
  v6 = sub_186B270(0x160u);
  *(_QWORD *)v6 = qword_1C636A0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = qword_1C63778;
  *(_DWORD *)(v6 + 24) = 0;
  *(_BYTE *)(v6 + 28) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = &off_1C62200;
  *(_QWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 104) = a1;
  *(_QWORD *)(v6 + 112) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  sub_180C0A0(v6 + 136);
  *(_QWORD *)v6 = &off_1C4C5D8;
  *(_QWORD *)(v6 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v6 + 176) = a1;
  sub_1858590(v6 + 184, &v31);
  *(_OWORD *)(v6 + 192) = 0;
  sub_180C0A0(v6 + 208);
  v7 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v6 + 248) = 0;
  *(_QWORD *)(v6 + 256) = a1;
  *(_QWORD *)(v6 + 264) = v7;
  *(_QWORD *)(v6 + 272) = 0;
  *(_QWORD *)(v6 + 280) = 0;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  *(_QWORD *)(v6 + 312) = a1;
  *(_QWORD *)(v6 + 304) = sub_230350;
  *(_QWORD *)(v6 + 320) = 0;
  *(_QWORD *)(v6 + 328) = 0;
  *(_QWORD *)(v6 + 336) = 0;
  *(_BYTE *)(v6 + 344) = 0;
  *(_OWORD *)(v6 + 288) = 0;
  *(_QWORD *)v30 = 0;
  v8 = sub_737E40(a1, (int)v30);
  v9 = sub_EE90C0(v8);
  v20 = sub_EE9080(v9);
  v29 = 0;
  v10 = sub_CF56E0(a1, (unsigned int)&v29);
  v19 = sub_EE8E00(v10, v26);
  v28 = 0;
  v11 = sub_D156B0(a1, (unsigned int)&v28);
  v12 = sub_EE8E00(v11, v26);
  v13 = sub_EE80A0(v12, v19, v20, v6, v21, v22, v24, v23);
  sub_18572D0(&v28);
  sub_18572D0(&v29);
  sub_18572D0(v30);
  sub_18572D0(&v31);
  sub_18572D0(&v32);
  sub_18572D0(&v33);
  sub_18572D0(&v34);
  sub_18572D0(v35);
  sub_18572D0(&v27);
  sub_18572D0(v26);
  sub_18572D0(v25);
  v14 = sub_186B270(0x30u);
  *(_DWORD *)(v14 + 8) = 0;
  *(_QWORD *)v14 = &off_1C4DD78;
  *(_QWORD *)(v14 + 16) = a1;
  sub_1858590(v14 + 24, a2);
  *(_WORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  v15 = sub_388500(a1, a2);
  v16 = sub_EF4180();
  v17 = sub_EE8F50(v16, v14, v15);
  return sub_EE7A70(v13, v17);
}

