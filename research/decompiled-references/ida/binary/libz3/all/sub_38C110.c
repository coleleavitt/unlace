__int64 __fastcall sub_38C110(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // [rsp+0h] [rbp-F0h]
  int v25; // [rsp+8h] [rbp-E8h]
  int v26; // [rsp+10h] [rbp-E0h]
  int v27; // [rsp+18h] [rbp-D8h]
  __int64 v28; // [rsp+20h] [rbp-D0h]
  __int64 v29; // [rsp+68h] [rbp-88h]
  __int64 v30; // [rsp+70h] [rbp-80h] BYREF
  _BYTE v31[8]; // [rsp+78h] [rbp-78h] BYREF
  _BYTE v32[8]; // [rsp+80h] [rbp-70h] BYREF
  __int64 v33; // [rsp+88h] [rbp-68h] BYREF
  __int64 v34; // [rsp+90h] [rbp-60h] BYREF
  __int64 v35; // [rsp+98h] [rbp-58h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-48h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-40h] BYREF
  _QWORD v39[7]; // [rsp+B8h] [rbp-38h] BYREF

  v30 = 0;
  sub_1862300(&v30, "elim_and", 1);
  sub_1862300(&v30, "blast_distinct", 1);
  sub_1858590(v31, a2);
  sub_1858590(v32, a2);
  sub_1862300(v32, "flat_and_or", 0);
  v2 = sub_D968B0(a1, a2);
  v3 = sub_EE90C0(v2);
  v28 = sub_EE9080(v3);
  v39[0] = 0;
  v4 = sub_186B270(0x160u);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = qword_1C636A0;
  *(_QWORD *)(v4 + 16) = qword_1C63778;
  *(_DWORD *)(v4 + 24) = 0;
  *(_BYTE *)(v4 + 28) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  v29 = v4;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 48) = &off_1C62200;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = a1;
  *(_QWORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 128) = 0;
  sub_180C0A0(v4 + 136);
  *(_QWORD *)(v29 + 16) = &off_1C4C6F0;
  *(_QWORD *)v29 = &off_1C4C5D8;
  *(_QWORD *)(v29 + 176) = a1;
  sub_1858590(v29 + 184, v39);
  *(_OWORD *)(v29 + 192) = 0;
  sub_180C0A0(v29 + 208);
  v5 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v29 + 248) = 0;
  *(_QWORD *)(v29 + 256) = a1;
  *(_QWORD *)(v29 + 264) = v5;
  *(_QWORD *)(v29 + 272) = 0;
  *(_QWORD *)(v29 + 280) = 0;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v38 = 0;
  *(_QWORD *)(v29 + 304) = sub_F72960;
  *(_QWORD *)(v29 + 312) = a1;
  *(_QWORD *)(v29 + 320) = 0;
  *(_QWORD *)(v29 + 328) = 0;
  *(_QWORD *)(v29 + 336) = 0;
  *(_BYTE *)(v29 + 344) = 0;
  *(_OWORD *)(v29 + 288) = 0;
  v6 = sub_74D390(a1, &v38);
  v7 = sub_EE90C0(v6);
  v27 = sub_EE9080(v7);
  v37 = 0;
  v8 = sub_D262E0(a1, &v37);
  v9 = sub_EE90C0(v8);
  v26 = sub_EE9080(v9);
  v36 = 0;
  v25 = sub_CF8250(a1, &v36);
  v35 = 0;
  v10 = sub_186B270(0x160u);
  *(_QWORD *)v10 = qword_1C636A0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = qword_1C63778;
  *(_DWORD *)(v10 + 24) = 0;
  *(_BYTE *)(v10 + 28) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 48) = &off_1C62200;
  *(_QWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_QWORD *)(v10 + 104) = a1;
  *(_QWORD *)(v10 + 112) = 0;
  *(_QWORD *)(v10 + 120) = 0;
  *(_QWORD *)(v10 + 128) = 0;
  sub_180C0A0(v10 + 136);
  *(_QWORD *)v10 = &off_1C4C5D8;
  *(_QWORD *)(v10 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v10 + 176) = a1;
  sub_1858590(v10 + 184, &v35);
  *(_OWORD *)(v10 + 192) = 0;
  sub_180C0A0(v10 + 208);
  v11 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v10 + 248) = 0;
  *(_QWORD *)(v10 + 256) = a1;
  *(_QWORD *)(v10 + 264) = v11;
  *(_QWORD *)(v10 + 272) = 0;
  *(_QWORD *)(v10 + 280) = 0;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  *(_QWORD *)(v10 + 312) = a1;
  *(_QWORD *)(v10 + 304) = sub_230350;
  *(_QWORD *)(v10 + 320) = 0;
  *(_QWORD *)(v10 + 328) = 0;
  *(_QWORD *)(v10 + 336) = 0;
  *(_BYTE *)(v10 + 344) = 0;
  *(_OWORD *)(v10 + 288) = 0;
  v34 = 0;
  v12 = sub_CF56E0(a1, (unsigned int)&v34);
  v24 = sub_EE8E00(v12, v32);
  v33 = 0;
  v13 = sub_D156B0(a1, (unsigned int)&v33);
  v14 = sub_EE8E00(v13, v32);
  v15 = sub_EE80A0(v14, v24, v10, v25, v26, v27, v29, v28);
  sub_18572D0(&v33);
  sub_18572D0(&v34);
  sub_18572D0(&v35);
  sub_18572D0(&v36);
  sub_18572D0(&v37);
  sub_18572D0(&v38);
  sub_18572D0(v39);
  sub_18572D0(v32);
  sub_18572D0(v31);
  v16 = sub_388500(a1, a2);
  v39[0] = 0;
  v17 = v16;
  v18 = sub_38ADB0(a1, (__int64)v39);
  v19 = sub_EF4120();
  v20 = sub_EE8F50(v19, v18, v17);
  v21 = sub_EE7A70(v15, v20);
  v22 = sub_EE8E00(v21, &v30);
  sub_18572D0(v39);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 112LL))(v22, a2);
  sub_18572D0(&v30);
  return v22;
}

