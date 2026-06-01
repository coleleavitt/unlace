__int64 __fastcall sub_38ADB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r12
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdi
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rbx
  int v53; // [rsp+0h] [rbp-150h]
  int v54; // [rsp+8h] [rbp-148h]
  void *v55; // [rsp+10h] [rbp-140h]
  int v56; // [rsp+18h] [rbp-138h]
  int v57; // [rsp+20h] [rbp-130h]
  __int64 v58; // [rsp+28h] [rbp-128h]
  __int64 v59; // [rsp+30h] [rbp-120h]
  __int64 v60; // [rsp+30h] [rbp-120h]
  __int64 v61; // [rsp+38h] [rbp-118h]
  __int64 v62; // [rsp+40h] [rbp-110h]
  _BYTE v63[8]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-98h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-90h] BYREF
  _BYTE v66[8]; // [rsp+C8h] [rbp-88h] BYREF
  _BYTE v67[8]; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v73; // [rsp+100h] [rbp-50h] BYREF
  __int64 v74; // [rsp+108h] [rbp-48h] BYREF
  __int64 v75; // [rsp+110h] [rbp-40h] BYREF
  _QWORD v76[7]; // [rsp+118h] [rbp-38h] BYREF

  v3 = sub_68D4D0(a1, a2);
  v4 = sub_388500(a1, a2);
  v76[0] = 0;
  v5 = v4;
  v6 = sub_D156B0(a1, (unsigned int)v76);
  v7 = sub_EE7A70(v6, v5);
  v8 = sub_EF4290();
  v62 = sub_EE8F50(v8, v7, v3);
  sub_18572D0(v76);
  v61 = sub_388500(a1, a2);
  sub_1858590(v63, a2);
  sub_1862300(v63, "local_ctx", 1);
  sub_1862300(v63, "flat", 0);
  sub_1862300(v63, "flat_and_or", 0);
  v64 = 0;
  sub_1862300(&v64, "preprocess", 0);
  v65 = 0;
  sub_1862370(&v65, "solve_eqs_max_occs", 2);
  sub_1858590(v66, a2);
  sub_1862300(v66, "flat_and_or", 0);
  sub_1858590(v67, a2);
  sub_1862300(v67, "som", 1);
  sub_1862300(v67, "pull_cheap_ite", 1);
  sub_1862300(v67, "push_ite_bv", 0);
  sub_1862300(v67, "local_ctx", 1);
  sub_1862370(v67, "local_ctx_limit", 10000000);
  sub_1862300(v67, "flat", 1);
  sub_1862300(v67, "hoist_mul", 0);
  sub_1862300(v67, "flat_and_or", 0);
  v68 = 0;
  sub_1862300(&v68, "hoist_mul", 1);
  sub_1862300(&v68, "som", 0);
  sub_1862300(&v68, "flat_and_or", 0);
  v9 = sub_D968B0(a1, a2);
  v10 = sub_EE90C0(v9);
  v59 = sub_EE9080(v10);
  v76[0] = 0;
  v11 = sub_186B270(0x160u);
  *(_QWORD *)v11 = qword_1C636A0;
  *(_QWORD *)(v11 + 16) = qword_1C63778;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_BYTE *)(v11 + 28) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = &off_1C62200;
  *(_QWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = a1;
  *(_QWORD *)(v11 + 112) = 0;
  *(_QWORD *)(v11 + 120) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  sub_180C0A0(v11 + 136);
  *(_QWORD *)v11 = &off_1C4C5D8;
  *(_QWORD *)(v11 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v11 + 176) = a1;
  sub_1858590(v11 + 184, v76);
  *(_OWORD *)(v11 + 192) = 0;
  sub_180C0A0(v11 + 208);
  *(_QWORD *)(v11 + 248) = 0;
  *(_QWORD *)(v11 + 272) = 0;
  v12 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v11 + 256) = a1;
  *(_QWORD *)(v11 + 280) = 0;
  *(_QWORD *)(v11 + 264) = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  *(_QWORD *)(v11 + 320) = 0;
  *(_QWORD *)(v11 + 328) = 0;
  *(_QWORD *)(v11 + 304) = sub_F72960;
  *(_QWORD *)(v11 + 312) = a1;
  *(_QWORD *)(v11 + 336) = 0;
  *(_BYTE *)(v11 + 344) = 0;
  *(_OWORD *)(v11 + 288) = 0;
  v75 = 0;
  v13 = sub_D156B0(a1, (unsigned int)&v75);
  v58 = sub_EE8E00(v13, &v68);
  v74 = 0;
  v14 = sub_D156B0(a1, (unsigned int)&v74);
  v57 = sub_EE8E00(v14, v67);
  v73 = 0;
  v15 = sub_74D390(a1, &v73);
  v16 = sub_EE90C0(v15);
  v56 = sub_EE9080(v16);
  v72 = 0;
  v55 = (void *)sub_CF8250(a1, &v72);
  v71 = 0;
  v17 = sub_186B270(0x160u);
  *(_QWORD *)v17 = qword_1C636A0;
  *(_QWORD *)(v17 + 16) = qword_1C63778;
  *(_DWORD *)(v17 + 8) = 0;
  *(_BYTE *)(v17 + 28) = 0;
  *(_QWORD *)(v17 + 48) = &off_1C62200;
  *(_DWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_QWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 96) = 0;
  *(_QWORD *)(v17 + 104) = a1;
  *(_QWORD *)(v17 + 112) = 0;
  *(_QWORD *)(v17 + 120) = 0;
  *(_QWORD *)(v17 + 128) = 0;
  sub_180C0A0(v17 + 136);
  *(_QWORD *)(v17 + 16) = &off_1C4C6F0;
  *(_QWORD *)v17 = &off_1C4C5D8;
  *(_QWORD *)(v17 + 176) = a1;
  sub_1858590(v17 + 184, &v71);
  *(_OWORD *)(v17 + 192) = 0;
  sub_180C0A0(v17 + 208);
  *(_QWORD *)(v17 + 248) = 0;
  *(_QWORD *)(v17 + 272) = 0;
  v18 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v17 + 256) = a1;
  *(_QWORD *)(v17 + 280) = 0;
  *(_QWORD *)(v17 + 264) = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  *(_QWORD *)(v17 + 320) = 0;
  *(_QWORD *)(v17 + 304) = sub_230350;
  *(_QWORD *)(v17 + 328) = 0;
  *(_QWORD *)(v17 + 312) = a1;
  *(_QWORD *)(v17 + 336) = 0;
  *(_BYTE *)(v17 + 344) = 0;
  *(_OWORD *)(v17 + 288) = 0;
  v54 = sub_EE8E00(v17, &v65);
  v70 = 0;
  v19 = sub_CF56E0(a1, (unsigned int)&v70);
  v53 = sub_EE8E00(v19, v66);
  v69 = 0;
  v20 = sub_D156B0(a1, (unsigned int)&v69);
  v21 = sub_EE8E00(v20, v66);
  v60 = sub_EE82D0(v21, v53, v54, (_DWORD)v55, v56, v57, v58, v11, v59);
  sub_18572D0(&v69);
  sub_18572D0(&v70);
  sub_18572D0(&v71);
  sub_18572D0(&v72);
  sub_18572D0(&v73);
  sub_18572D0(&v74);
  sub_18572D0(&v75);
  sub_18572D0(v76);
  sub_18572D0(&v68);
  sub_18572D0(v67);
  sub_18572D0(v66);
  sub_18572D0(&v65);
  v75 = 0;
  v22 = sub_DAFDA0(&v75);
  v23 = sub_EE9080(v22);
  v74 = 0;
  v24 = v23;
  v25 = sub_186B270(0x160u);
  *(_QWORD *)v25 = qword_1C636A0;
  *(_QWORD *)(v25 + 16) = qword_1C63778;
  *(_DWORD *)(v25 + 8) = 0;
  *(_DWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 48) = &off_1C62200;
  *(_BYTE *)(v25 + 28) = 0;
  *(_QWORD *)(v25 + 32) = 0;
  *(_DWORD *)(v25 + 40) = 0;
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
  sub_1858590(v25 + 184, &v74);
  *(_OWORD *)(v25 + 192) = 0;
  sub_180C0A0(v25 + 208);
  *(_QWORD *)(v25 + 248) = 0;
  *(_QWORD *)(v25 + 272) = 0;
  v26 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v25 + 256) = a1;
  *(_QWORD *)(v25 + 280) = 0;
  *(_QWORD *)(v25 + 264) = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  *(_QWORD *)(v25 + 320) = 0;
  *(_QWORD *)(v25 + 304) = sub_230350;
  *(_QWORD *)(v25 + 328) = 0;
  *(_QWORD *)(v25 + 312) = a1;
  *(_QWORD *)(v25 + 336) = 0;
  *(_BYTE *)(v25 + 344) = 0;
  *(_OWORD *)(v25 + 288) = 0;
  v73 = 0;
  v27 = sub_D156B0(a1, (unsigned int)&v73);
  v28 = sub_EE7A70(v27, v25);
  v29 = sub_EE8E00(v28, v63);
  v30 = sub_EE7A70(v29, v24);
  v31 = sub_EF3CC0(300.0);
  v32 = sub_EF3C00();
  v33 = sub_EF3F30(v32, v31);
  v34 = sub_EE8FB0(v33, v30);
  v72 = 0;
  v35 = v34;
  v36 = sub_769490(a1, &v72);
  v37 = sub_EE7AC0(v36, v35, v62);
  v38 = sub_EF4120();
  v39 = sub_EE8F50(v38, v37, v61);
  v40 = sub_EE8E00(v61, &v64);
  v71 = 0;
  v41 = v40;
  v46 = sub_75C370(a1, (int)&v71, v42, v43, v44, v45, v53, v54, v55);
  v47 = sub_EE7A70(v46, v41);
  v48 = sub_75C340();
  v49 = sub_EE8F50(v48, v47, v39);
  v50 = sub_EE7A70(v60, v49);
  v76[0] = 0;
  sub_1862300(v76, "elim_and", 1);
  sub_1862300(v76, "push_ite_bv", 1);
  sub_1862300(v76, "blast_distinct", 1);
  v51 = sub_EE8E00(v50, v76);
  sub_18572D0(v76);
  sub_18572D0(&v71);
  sub_18572D0(&v72);
  sub_18572D0(&v73);
  sub_18572D0(&v74);
  sub_18572D0(&v75);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 112LL))(v51, a2);
  sub_18572D0(&v64);
  sub_18572D0(v63);
  return v51;
}

