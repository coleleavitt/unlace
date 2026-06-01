__int64 __fastcall sub_389CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r13d
  int v33; // eax
  int v34; // r12d
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v39; // [rsp+0h] [rbp-100h]
  __int64 v40; // [rsp+8h] [rbp-F8h]
  __int64 v41; // [rsp+10h] [rbp-F0h]
  int v42; // [rsp+10h] [rbp-F0h]
  __int64 v43; // [rsp+18h] [rbp-E8h]
  int v44; // [rsp+18h] [rbp-E8h]
  __int64 v45; // [rsp+20h] [rbp-E0h]
  int v46; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+28h] [rbp-D8h]
  __int64 v48; // [rsp+28h] [rbp-D8h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+30h] [rbp-D0h]
  _BYTE v51[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v52[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v53[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v60[7]; // [rsp+C8h] [rbp-38h] BYREF

  v49 = sub_389BE0(a1, a2);
  sub_1858590(&v59, a2);
  sub_1862300(&v59, "som", 1);
  sub_1862300(&v59, "factor", 0);
  v2 = sub_EE4EC0(&v59, "factor");
  v3 = sub_77C950(a1, (unsigned int)&v59);
  v4 = sub_EE8DB0(v3, 3000);
  v60[0] = 0;
  v5 = sub_D156B0(a1, (unsigned int)v60);
  v6 = sub_EE8E00(v5, &v59);
  v43 = sub_EE7AC0(v6, v4, v2);
  sub_18572D0(v60);
  sub_18572D0(&v59);
  v7 = sub_389BE0(a1, a2);
  v47 = sub_EE8DB0(v7, 2000);
  sub_1858590(v51, a2);
  sub_1862370(v51, "nla2bv_max_bv_size", 64);
  sub_1858590(v52, a2);
  sub_1862300(v52, "hoist_mul", 1);
  v45 = sub_EE4EC0(v52, "hoist_mul");
  sub_1858590(v53, a2);
  sub_1862300(v53, "flat", 0);
  sub_1862300(v53, "hi_div0", 1);
  sub_1862300(v53, "elim_and", 1);
  sub_1862300(v53, "blast_distinct", 1);
  sub_1858590(&v54, v53);
  sub_1862300(&v54, "local_ctx", 1);
  sub_1862370(&v54, "local_ctx_limit", 10000000);
  sub_1858590(&v55, v53);
  sub_1862370(&v55, "max_memory", 100);
  sub_1862370(&v55, "max_conflicts", 500);
  v41 = sub_7844E0(a1, &v55);
  v60[0] = 0;
  v8 = sub_769490(a1, v60);
  v40 = sub_EE8E00(v8, &v55);
  v59 = 0;
  v9 = sub_186B270(0x160u);
  *(_QWORD *)v9 = qword_1C636A0;
  *(_QWORD *)(v9 + 16) = qword_1C63778;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_BYTE *)(v9 + 28) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = &off_1C62200;
  *(_QWORD *)(v9 + 64) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = a1;
  *(_QWORD *)(v9 + 112) = 0;
  *(_QWORD *)(v9 + 120) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  sub_180C0A0(v9 + 136);
  *(_QWORD *)v9 = &off_1C4C5D8;
  *(_QWORD *)(v9 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v9 + 176) = a1;
  sub_1858590(v9 + 184, &v59);
  *(_OWORD *)(v9 + 192) = 0;
  sub_180C0A0(v9 + 208);
  *(_QWORD *)(v9 + 248) = 0;
  *(_QWORD *)(v9 + 272) = 0;
  v10 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v9 + 256) = a1;
  *(_QWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 264) = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  *(_QWORD *)(v9 + 320) = 0;
  *(_QWORD *)(v9 + 328) = 0;
  *(_QWORD *)(v9 + 304) = sub_F72960;
  *(_QWORD *)(v9 + 312) = a1;
  *(_QWORD *)(v9 + 336) = 0;
  *(_BYTE *)(v9 + 344) = 0;
  *(_OWORD *)(v9 + 288) = 0;
  v58 = 0;
  v11 = sub_D156B0(a1, (unsigned int)&v58);
  v39 = sub_EE8E00(v11, &v54);
  v57 = 0;
  v12 = sub_CF56E0(a1, (unsigned int)&v57);
  v56 = 0;
  v13 = v12;
  v14 = sub_D156B0(a1, (unsigned int)&v56);
  v15 = sub_EE7D40(v14, v13, v39, v9, v40, v41);
  v16 = sub_EE8E00(v15, v53);
  sub_18572D0(&v56);
  sub_18572D0(&v57);
  sub_18572D0(&v58);
  sub_18572D0(&v59);
  sub_18572D0(v60);
  sub_18572D0(&v55);
  sub_18572D0(&v54);
  sub_18572D0(v53);
  v17 = sub_EE9410(v16);
  v18 = sub_C37940(a1, v51);
  v60[0] = 0;
  v19 = v18;
  v20 = sub_D156B0(a1, (unsigned int)v60);
  v21 = sub_EE8E00(v20, v52);
  v22 = sub_EE7B50(v21, v19, v17, v45);
  sub_18572D0(v60);
  sub_18572D0(v52);
  sub_18572D0(v51);
  v50 = sub_EE92B0(v22, v47, v43, v49);
  sub_1858590(v51, a2);
  sub_1862300(v51, "pull_cheap_ite", 1);
  sub_1862300(v51, "local_ctx", 1);
  sub_1862370(v51, "local_ctx_limit", 10000000);
  sub_1858590(v52, a2);
  sub_1862370(v52, "max_depth", 30);
  sub_1862370(v52, "max_steps", 5000000);
  sub_1858590(v53, a2);
  sub_1862370(v53, "max_memory", 20);
  v60[0] = 0;
  v23 = sub_CE5610(a1, v60);
  v24 = sub_EE8E00(v23, v53);
  v48 = sub_EE9410(v24);
  v25 = sub_186B270(0x160u);
  *(_QWORD *)v25 = qword_1C636A0;
  *(_QWORD *)(v25 + 16) = qword_1C63778;
  *(_DWORD *)(v25 + 8) = 0;
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
  *(_QWORD *)v25 = &off_1C4C5D8;
  *(_QWORD *)(v25 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v25 + 176) = a1;
  sub_1858590(v25 + 184, a2);
  *(_OWORD *)(v25 + 192) = 0;
  sub_180C0A0(v25 + 208);
  *(_QWORD *)(v25 + 248) = 0;
  *(_QWORD *)(v25 + 272) = 0;
  v29 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v25 + 256) = a1;
  *(_QWORD *)(v25 + 280) = 0;
  *(_QWORD *)(v25 + 264) = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  *(_QWORD *)(v25 + 320) = 0;
  *(_QWORD *)(v25 + 304) = sub_2307F0;
  *(_QWORD *)(v25 + 312) = a1;
  *(_QWORD *)(v25 + 328) = 0;
  *(_QWORD *)(v25 + 336) = 0;
  *(_BYTE *)(v25 + 344) = 0;
  *(_OWORD *)(v25 + 288) = 0;
  v59 = 0;
  v46 = sub_C41930(a1, (unsigned int)&v59, v26, a1, v27, v28);
  v58 = 0;
  v44 = sub_CF8250(a1, &v58);
  v57 = 0;
  v30 = sub_D156B0(a1, (unsigned int)&v57);
  v42 = sub_EE8E00(v30, v51);
  v56 = 0;
  v31 = sub_CCFC80(a1, &v56);
  v32 = sub_EE8E00(v31, v52);
  v55 = 0;
  v33 = sub_CF56E0(a1, (unsigned int)&v55);
  v54 = 0;
  v34 = v33;
  v35 = sub_D156B0(a1, (unsigned int)&v54);
  v36 = sub_EE80A0(v35, v34, v32, v42, v44, v46, v25, v48);
  sub_18572D0(&v54);
  sub_18572D0(&v55);
  sub_18572D0(&v56);
  sub_18572D0(&v57);
  sub_18572D0(&v58);
  sub_18572D0(&v59);
  sub_18572D0(v60);
  sub_18572D0(v53);
  sub_18572D0(v52);
  sub_18572D0(v51);
  v37 = sub_EE4E50("(qfnia-tactic)", 10);
  return sub_EE7AC0(v37, v36, v50);
}

