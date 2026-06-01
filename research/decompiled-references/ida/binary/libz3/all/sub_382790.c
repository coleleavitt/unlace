__int64 __fastcall sub_382790(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  int v46; // [rsp+10h] [rbp-90h]
  int v47; // [rsp+18h] [rbp-88h]
  int v48; // [rsp+20h] [rbp-80h]
  __int64 v49; // [rsp+28h] [rbp-78h]
  __int64 v50; // [rsp+30h] [rbp-70h]
  __int64 v51; // [rsp+38h] [rbp-68h]
  __int64 v52; // [rsp+40h] [rbp-60h]
  __int64 v53; // [rsp+48h] [rbp-58h]
  _BYTE v54[8]; // [rsp+60h] [rbp-40h] BYREF
  _BYTE v55[56]; // [rsp+68h] [rbp-38h] BYREF

  sub_1858590(v54, a2);
  sub_1862300(v54, "mbqi", 1);
  sub_1862370(v54, "mbqi.max_iterations", 0xFFFFFFFFLL);
  sub_1862300(v54, "elim_and", 1);
  v53 = sub_3885C0(a1, 0, v54);
  sub_1858590(v55, v54);
  sub_1862300(v55, "elim_and", 0);
  v52 = sub_EE4E90("ufbv_post");
  v51 = sub_D156B0(a1, (unsigned int)v54);
  v2 = sub_D156B0(a1, (unsigned int)v54);
  v3 = sub_D156B0(a1, (unsigned int)v54);
  v4 = sub_CD66F0(a1);
  v5 = sub_EE7A70(v4, v3);
  v6 = sub_EE8CD0(v5, 5);
  v50 = sub_EE7A70(v6, v2);
  v7 = sub_D156B0(a1, (unsigned int)v54);
  v8 = sub_37D970(a1, (__int64)v54);
  v9 = sub_EE7A70(v8, v7);
  v10 = sub_D156B0(a1, (unsigned int)v54);
  v11 = sub_382E30(a1, v54);
  v12 = sub_EE7A70(v11, v10);
  v13 = sub_D156B0(a1, (unsigned int)v54);
  v14 = sub_380040(a1, (__int64)v54);
  v15 = sub_EE7A70(v14, v13);
  v16 = sub_D156B0(a1, (unsigned int)v54);
  v17 = sub_D262E0(a1, v54);
  v18 = sub_EE7A70(v17, v16);
  v19 = sub_EE7B50(v18, v15, v12, v9);
  v49 = sub_EE90C0(v19);
  v20 = sub_D156B0(a1, (unsigned int)v54);
  v21 = sub_186B270(0x160u);
  *(_DWORD *)(v21 + 8) = 0;
  *(_QWORD *)v21 = qword_1C636A0;
  *(_QWORD *)(v21 + 16) = qword_1C63778;
  *(_DWORD *)(v21 + 24) = 0;
  *(_BYTE *)(v21 + 28) = 0;
  *(_QWORD *)(v21 + 32) = 0;
  *(_DWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 48) = &off_1C62200;
  *(_QWORD *)(v21 + 64) = 0;
  *(_QWORD *)(v21 + 72) = 0;
  *(_QWORD *)(v21 + 88) = 0;
  *(_QWORD *)(v21 + 96) = 0;
  *(_QWORD *)(v21 + 104) = a1;
  *(_QWORD *)(v21 + 112) = 0;
  *(_QWORD *)(v21 + 120) = 0;
  *(_QWORD *)(v21 + 128) = 0;
  sub_180C0A0(v21 + 136);
  *(_QWORD *)v21 = &off_1C4C5D8;
  *(_QWORD *)(v21 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v21 + 176) = a1;
  sub_1858590(v21 + 184, v54);
  *(_OWORD *)(v21 + 192) = 0;
  sub_180C0A0(v21 + 208);
  *(_QWORD *)(v21 + 248) = 0;
  *(_QWORD *)(v21 + 272) = 0;
  v22 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v21 + 256) = a1;
  *(_QWORD *)(v21 + 280) = 0;
  *(_QWORD *)(v21 + 264) = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  *(_QWORD *)(v21 + 320) = 0;
  *(_QWORD *)(v21 + 304) = sub_230310;
  *(_QWORD *)(v21 + 328) = 0;
  *(_QWORD *)(v21 + 312) = a1;
  *(_QWORD *)(v21 + 336) = 0;
  *(_BYTE *)(v21 + 344) = 0;
  *(_OWORD *)(v21 + 288) = 0;
  v23 = sub_EE7A70(v21, v20);
  v24 = sub_D156B0(a1, (unsigned int)v54);
  v25 = sub_D156B0(a1, (unsigned int)v54);
  v26 = sub_CD66F0(a1);
  v27 = sub_EE7A70(v26, v25);
  v28 = sub_EE8CD0(v27, 5);
  v29 = sub_EE7A70(v28, v24);
  v30 = sub_186B270(0x160u);
  *(_QWORD *)v30 = qword_1C636A0;
  *(_QWORD *)(v30 + 16) = qword_1C63778;
  *(_DWORD *)(v30 + 8) = 0;
  *(_DWORD *)(v30 + 24) = 0;
  *(_BYTE *)(v30 + 28) = 0;
  *(_QWORD *)(v30 + 32) = 0;
  *(_DWORD *)(v30 + 40) = 0;
  *(_QWORD *)(v30 + 48) = &off_1C62200;
  *(_QWORD *)(v30 + 64) = 0;
  *(_QWORD *)(v30 + 72) = 0;
  *(_QWORD *)(v30 + 88) = 0;
  *(_QWORD *)(v30 + 96) = 0;
  *(_QWORD *)(v30 + 104) = a1;
  *(_QWORD *)(v30 + 112) = 0;
  *(_QWORD *)(v30 + 120) = 0;
  *(_QWORD *)(v30 + 128) = 0;
  sub_180C0A0(v30 + 136);
  *(_QWORD *)v30 = &off_1C4C5D8;
  *(_QWORD *)(v30 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v30 + 176) = a1;
  sub_1858590(v30 + 184, v54);
  *(_OWORD *)(v30 + 192) = 0;
  sub_180C0A0(v30 + 208);
  *(_QWORD *)(v30 + 248) = 0;
  *(_QWORD *)(v30 + 272) = 0;
  v31 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v30 + 256) = a1;
  *(_QWORD *)(v30 + 280) = 0;
  *(_QWORD *)(v30 + 264) = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  *(_QWORD *)(v30 + 320) = 0;
  *(_QWORD *)(v30 + 304) = sub_230350;
  *(_QWORD *)(v30 + 312) = a1;
  *(_QWORD *)(v30 + 328) = 0;
  *(_QWORD *)(v30 + 336) = 0;
  *(_BYTE *)(v30 + 344) = 0;
  *(_OWORD *)(v30 + 288) = 0;
  v48 = sub_D15740(a1);
  v32 = sub_D156B0(a1, (unsigned int)v54);
  v33 = sub_CEBBB0(a1, v54);
  v47 = sub_EE7A70(v33, v32);
  v34 = sub_D156B0(a1, (unsigned int)v54);
  v35 = sub_380040(a1, (__int64)v55);
  v36 = sub_EE8E00(v35, v55);
  v37 = sub_EE90C0(v36);
  v38 = sub_EE9080(v37);
  v46 = sub_EE7A70(v38, v34);
  LODWORD(v34) = sub_CF56E0(a1, (unsigned int)v54);
  v39 = sub_D156B0(a1, (unsigned int)v54);
  v40 = sub_EE80A0(v39, v34, v46, v47, v48, v30, v29, v23);
  v41 = sub_EE4E90("ufbv_pre");
  v42 = sub_EE7D40(v41, v40, v49, v50, v51, v52);
  sub_18572D0(v55);
  v43 = sub_EE8CD0(v42, 2);
  v44 = sub_EE7A70(v43, v53);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 112LL))(v44, a2);
  sub_18572D0(v54);
  return v44;
}

