__int64 __fastcall sub_38A740(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+8h] [rbp-E8h]
  int v21; // [rsp+10h] [rbp-E0h]
  int v22; // [rsp+18h] [rbp-D8h]
  int v23; // [rsp+20h] [rbp-D0h]
  __int64 v24; // [rsp+28h] [rbp-C8h]
  __int64 v25; // [rsp+68h] [rbp-88h]
  __int64 v26; // [rsp+78h] [rbp-78h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-70h] BYREF
  __int64 v28; // [rsp+88h] [rbp-68h] BYREF
  __int64 v29; // [rsp+90h] [rbp-60h] BYREF
  __int64 v30; // [rsp+98h] [rbp-58h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-40h] BYREF
  _QWORD v34[7]; // [rsp+B8h] [rbp-38h] BYREF

  v26 = 0;
  sub_1862300(&v26, "elim_and", 1);
  sub_1862300(&v26, "sort_store", 1);
  sub_1858590(v27, a2);
  sub_1862300(v27, "som", 1);
  sub_1862300(v27, "pull_cheap_ite", 1);
  sub_1862300(v27, "push_ite_bv", 0);
  sub_1862300(v27, "local_ctx", 1);
  sub_1862370(v27, "local_ctx_limit", 10000000);
  v2 = sub_D968B0(a1, a2);
  v3 = sub_EE90C0(v2);
  v24 = sub_EE9080(v3);
  v34[0] = 0;
  v25 = sub_186B270(0x160u);
  *(_QWORD *)v25 = qword_1C636A0;
  *(_DWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 16) = qword_1C63778;
  *(_DWORD *)(v25 + 24) = 0;
  *(_BYTE *)(v25 + 28) = 0;
  *(_QWORD *)(v25 + 32) = 0;
  *(_DWORD *)(v25 + 40) = 0;
  *(_QWORD *)(v25 + 48) = &off_1C62200;
  *(_QWORD *)(v25 + 64) = 0;
  *(_QWORD *)(v25 + 72) = 0;
  *(_QWORD *)(v25 + 88) = 0;
  *(_QWORD *)(v25 + 96) = 0;
  *(_QWORD *)(v25 + 104) = a1;
  *(_QWORD *)(v25 + 112) = 0;
  *(_QWORD *)(v25 + 120) = 0;
  *(_QWORD *)(v25 + 128) = 0;
  sub_180C0A0(v25 + 136);
  *(_QWORD *)(v25 + 16) = &off_1C4C6F0;
  *(_QWORD *)v25 = &off_1C4C5D8;
  *(_QWORD *)(v25 + 176) = a1;
  sub_1858590(v25 + 184, v34);
  *(_OWORD *)(v25 + 192) = 0;
  sub_180C0A0(v25 + 208);
  v4 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v25 + 248) = 0;
  *(_QWORD *)(v25 + 256) = a1;
  *(_QWORD *)(v25 + 264) = v4;
  *(_QWORD *)(v25 + 272) = 0;
  *(_QWORD *)(v25 + 280) = 0;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v33 = 0;
  *(_QWORD *)(v25 + 304) = sub_F72960;
  *(_QWORD *)(v25 + 312) = a1;
  *(_QWORD *)(v25 + 320) = 0;
  *(_QWORD *)(v25 + 328) = 0;
  *(_QWORD *)(v25 + 336) = 0;
  *(_BYTE *)(v25 + 344) = 0;
  *(_OWORD *)(v25 + 288) = 0;
  v5 = sub_D156B0(a1, (unsigned int)&v33);
  v23 = sub_EE8E00(v5, v27);
  v32 = 0;
  v6 = sub_74D390(a1, &v32);
  v7 = sub_EE90C0(v6);
  v22 = sub_EE9080(v7);
  v31 = 0;
  v21 = sub_CF8250(a1, &v31);
  v30 = 0;
  v8 = sub_186B270(0x160u);
  *(_QWORD *)v8 = qword_1C636A0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = qword_1C63778;
  *(_DWORD *)(v8 + 24) = 0;
  *(_BYTE *)(v8 + 28) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = &off_1C62200;
  *(_QWORD *)(v8 + 64) = 0;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = a1;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  sub_180C0A0(v8 + 136);
  *(_QWORD *)v8 = &off_1C4C5D8;
  *(_QWORD *)(v8 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v8 + 176) = a1;
  sub_1858590(v8 + 184, &v30);
  *(_OWORD *)(v8 + 192) = 0;
  sub_180C0A0(v8 + 208);
  v9 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v8 + 248) = 0;
  *(_QWORD *)(v8 + 256) = a1;
  *(_QWORD *)(v8 + 264) = v9;
  *(_QWORD *)(v8 + 272) = 0;
  *(_QWORD *)(v8 + 280) = 0;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  *(_QWORD *)(v8 + 312) = a1;
  *(_QWORD *)(v8 + 304) = sub_230350;
  *(_QWORD *)(v8 + 320) = 0;
  *(_QWORD *)(v8 + 328) = 0;
  *(_QWORD *)(v8 + 336) = 0;
  *(_BYTE *)(v8 + 344) = 0;
  *(_OWORD *)(v8 + 288) = 0;
  v29 = 0;
  v20 = sub_CF56E0(a1, (unsigned int)&v29);
  v28 = 0;
  v10 = sub_D156B0(a1, (unsigned int)&v28);
  v11 = sub_EE80A0(v10, v20, v8, v21, v22, v23, v25, v24);
  sub_18572D0(&v28);
  sub_18572D0(&v29);
  sub_18572D0(&v30);
  sub_18572D0(&v31);
  sub_18572D0(&v32);
  sub_18572D0(&v33);
  sub_18572D0(v34);
  sub_18572D0(v27);
  v12 = sub_388500(a1, a2);
  v34[0] = 0;
  v13 = v12;
  v14 = sub_38ADB0(a1, v34);
  v15 = sub_EF4120();
  v16 = sub_EE8F50(v15, v14, v13);
  v17 = sub_EE7A70(v11, v16);
  v18 = sub_EE8E00(v17, &v26);
  sub_18572D0(v34);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 112LL))(v18, a2);
  sub_18572D0(&v26);
  return v18;
}

