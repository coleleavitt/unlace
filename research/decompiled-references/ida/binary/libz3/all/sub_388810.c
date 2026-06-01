__int64 __fastcall sub_388810(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  int v21; // r13d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // r12
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  int v53; // [rsp+10h] [rbp-120h]
  int v54; // [rsp+18h] [rbp-118h]
  __int64 v55; // [rsp+20h] [rbp-110h]
  __int64 v56; // [rsp+20h] [rbp-110h]
  void *v57; // [rsp+58h] [rbp-D8h]
  void *v58; // [rsp+60h] [rbp-D0h]
  void *v59; // [rsp+70h] [rbp-C0h]
  __int64 v60; // [rsp+88h] [rbp-A8h]
  __int64 v61; // [rsp+88h] [rbp-A8h]
  __int64 v62; // [rsp+88h] [rbp-A8h]
  __int64 v63; // [rsp+88h] [rbp-A8h]
  __int64 v64; // [rsp+88h] [rbp-A8h]
  __int64 v65; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+98h] [rbp-98h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-88h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v76; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-40h] BYREF
  _QWORD v78[7]; // [rsp+F8h] [rbp-38h] BYREF

  v65 = 0;
  sub_1862300(&v65, "elim_and", 1);
  sub_1862300(&v65, "blast_distinct", 1);
  sub_1862300(&v65, "som", 1);
  v66 = 0;
  sub_1862300(&v66, "arith_lhs", 1);
  v67 = 0;
  sub_1862370(&v67, "lia2pb_max_bits", 4);
  v68 = 0;
  sub_1862370(&v68, "pb2bv_all_clauses_limit", 8);
  v69 = 0;
  sub_1862300(&v69, "pull_cheap_ite", 1);
  sub_1862300(&v69, "local_ctx", 1);
  sub_1862370(&v69, "local_ctx_limit", 10000000);
  v78[0] = 0;
  v2 = sub_186B270(0x160u);
  *(_QWORD *)v2 = qword_1C636A0;
  *(_QWORD *)(v2 + 16) = qword_1C63778;
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = &off_1C62200;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = a1;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  sub_180C0A0(v2 + 136);
  *(_QWORD *)(v2 + 176) = a1;
  *(_QWORD *)v2 = &off_1C4C5D8;
  *(_QWORD *)(v2 + 16) = &off_1C4C6F0;
  sub_1858590(v2 + 184, v78);
  *(_OWORD *)(v2 + 192) = 0;
  sub_180C0A0(v2 + 208);
  v3 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = a1;
  *(_QWORD *)(v2 + 264) = v3;
  *(_QWORD *)(v2 + 272) = 0;
  *(_QWORD *)(v2 + 280) = 0;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  *(_QWORD *)(v2 + 312) = a1;
  *(_QWORD *)(v2 + 304) = sub_230350;
  *(_QWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 328) = 0;
  *(_QWORD *)(v2 + 336) = 0;
  *(_BYTE *)(v2 + 344) = 0;
  *(_OWORD *)(v2 + 288) = 0;
  v77 = 0;
  v58 = (void *)sub_C88A90(a1, &v77);
  v76 = 0;
  v57 = (void *)sub_CF56E0(a1, (unsigned int)&v76);
  v75 = 0;
  v4 = sub_D156B0(a1, (unsigned int)&v75);
  v5 = sub_EE8E00(v4, &v66);
  v74 = 0;
  v6 = sub_186B270(0x160u);
  *(_BYTE *)(v6 + 28) = 0;
  *(_QWORD *)v6 = qword_1C636A0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = qword_1C63778;
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  v60 = v6;
  *(_QWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 48) = &off_1C62200;
  *(_QWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 104) = a1;
  *(_QWORD *)(v6 + 112) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  sub_180C0A0(v6 + 136);
  *(_QWORD *)v60 = &off_1C4C5D8;
  *(_QWORD *)(v60 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v60 + 176) = a1;
  sub_1858590(v60 + 184, &v74);
  *(_OWORD *)(v60 + 192) = 0;
  sub_180C0A0(v60 + 208);
  v7 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v60 + 248) = 0;
  *(_QWORD *)(v60 + 256) = a1;
  *(_QWORD *)(v60 + 264) = v7;
  *(_QWORD *)(v60 + 272) = 0;
  *(_QWORD *)(v60 + 280) = 0;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  *(_QWORD *)(v60 + 304) = sub_230350;
  *(_QWORD *)(v60 + 312) = a1;
  *(_QWORD *)(v60 + 320) = 0;
  *(_QWORD *)(v60 + 328) = 0;
  *(_QWORD *)(v60 + 336) = 0;
  *(_BYTE *)(v60 + 344) = 0;
  *(_OWORD *)(v60 + 288) = 0;
  v61 = sub_EE7C20(v60, v5, v57, v58, v2);
  v73 = 0;
  v55 = sub_CF8250(a1, &v73);
  v72 = 0;
  v8 = sub_CF56E0(a1, (unsigned int)&v72);
  v71 = 0;
  v9 = v8;
  v10 = sub_C84040(a1, &v71);
  v70 = 0;
  v11 = v10;
  v12 = sub_D156B0(a1, (unsigned int)&v70);
  v13 = sub_EE7B50(v12, v11, v9, v55);
  v56 = sub_EE7A70(v13, v61);
  sub_18572D0(&v70);
  sub_18572D0(&v71);
  sub_18572D0(&v72);
  sub_18572D0(&v73);
  sub_18572D0(&v74);
  sub_18572D0(&v75);
  sub_18572D0(&v76);
  sub_18572D0(&v77);
  sub_18572D0(v78);
  v71 = 0;
  sub_1862300(&v71, "flat", 0);
  sub_1862300(&v71, "som", 0);
  sub_180C5A0(v78, "dyn_psm");
  sub_18625B0(&v71, "gc", v78);
  v78[0] = 0;
  v14 = sub_7844E0(a1, v78);
  v77 = 0;
  v15 = v14;
  v54 = sub_DAFDA0(&v77);
  v76 = 0;
  v53 = sub_769490(a1, &v76);
  v75 = 0;
  v16 = sub_186B270(0x160u);
  *(_QWORD *)v16 = qword_1C636A0;
  *(_QWORD *)(v16 + 16) = qword_1C63778;
  *(_DWORD *)(v16 + 8) = 0;
  *(_BYTE *)(v16 + 28) = 0;
  *(_DWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = &off_1C62200;
  *(_QWORD *)(v16 + 64) = 0;
  *(_QWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 96) = 0;
  *(_QWORD *)(v16 + 104) = a1;
  *(_QWORD *)(v16 + 112) = 0;
  *(_QWORD *)(v16 + 120) = 0;
  *(_QWORD *)(v16 + 128) = 0;
  sub_180C0A0(v16 + 136);
  *(_QWORD *)(v16 + 176) = a1;
  *(_QWORD *)v16 = &off_1C4C5D8;
  *(_QWORD *)(v16 + 16) = &off_1C4C6F0;
  sub_1858590(v16 + 184, &v75);
  *(_OWORD *)(v16 + 192) = 0;
  sub_180C0A0(v16 + 208);
  v17 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v16 + 248) = 0;
  *(_QWORD *)(v16 + 256) = a1;
  *(_QWORD *)(v16 + 264) = v17;
  *(_QWORD *)(v16 + 272) = 0;
  *(_QWORD *)(v16 + 280) = 0;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  *(_QWORD *)(v16 + 312) = a1;
  *(_QWORD *)(v16 + 320) = 0;
  *(_QWORD *)(v16 + 304) = sub_F72960;
  *(_QWORD *)(v16 + 328) = 0;
  *(_QWORD *)(v16 + 336) = 0;
  *(_BYTE *)(v16 + 344) = 0;
  *(_OWORD *)(v16 + 288) = 0;
  v74 = 0;
  v18 = sub_186B270(0x160u);
  *(_BYTE *)(v18 + 28) = 0;
  *(_QWORD *)v18 = qword_1C636A0;
  *(_DWORD *)(v18 + 8) = 0;
  *(_QWORD *)(v18 + 16) = qword_1C63778;
  *(_DWORD *)(v18 + 24) = 0;
  *(_QWORD *)(v18 + 32) = 0;
  *(_DWORD *)(v18 + 40) = 0;
  v62 = v18;
  *(_QWORD *)(v18 + 64) = 0;
  *(_QWORD *)(v18 + 72) = 0;
  *(_QWORD *)(v18 + 48) = &off_1C62200;
  *(_QWORD *)(v18 + 88) = 0;
  *(_QWORD *)(v18 + 96) = 0;
  *(_QWORD *)(v18 + 104) = a1;
  *(_QWORD *)(v18 + 112) = 0;
  *(_QWORD *)(v18 + 120) = 0;
  *(_QWORD *)(v18 + 128) = 0;
  sub_180C0A0(v18 + 136);
  *(_QWORD *)v62 = &off_1C4C5D8;
  *(_QWORD *)(v62 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v62 + 176) = a1;
  sub_1858590(v62 + 184, &v74);
  *(_OWORD *)(v62 + 192) = 0;
  sub_180C0A0(v62 + 208);
  v19 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v62 + 248) = 0;
  *(_QWORD *)(v62 + 256) = a1;
  *(_QWORD *)(v62 + 264) = v19;
  *(_QWORD *)(v62 + 272) = 0;
  *(_QWORD *)(v62 + 280) = 0;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v73 = 0;
  *(_QWORD *)(v62 + 304) = sub_230350;
  *(_QWORD *)(v62 + 312) = a1;
  *(_QWORD *)(v62 + 320) = 0;
  *(_QWORD *)(v62 + 328) = 0;
  *(_QWORD *)(v62 + 336) = 0;
  *(_BYTE *)(v62 + 344) = 0;
  *(_OWORD *)(v62 + 288) = 0;
  v20 = sub_CF56E0(a1, (unsigned int)&v73);
  v72 = 0;
  v21 = v20;
  v22 = sub_D156B0(a1, (unsigned int)&v72);
  v23 = sub_EE7EC0(v22, v21, v62, v16, v53, v54, v15);
  v24 = sub_EE8E00(v23, &v71);
  sub_18572D0(&v72);
  sub_18572D0(&v73);
  sub_18572D0(&v74);
  sub_18572D0(&v75);
  sub_18572D0(&v76);
  sub_18572D0(&v77);
  sub_18572D0(v78);
  v25 = sub_EF4120();
  v26 = sub_EF3D00(v25);
  v27 = sub_EE9010(v26);
  v78[0] = 0;
  v28 = v27;
  v29 = sub_C9F310(a1, v78);
  v59 = (void *)sub_EE8E00(v29, &v68);
  v77 = 0;
  v30 = sub_186B270(0x160u);
  *(_DWORD *)(v30 + 8) = 0;
  *(_QWORD *)v30 = qword_1C636A0;
  *(_QWORD *)(v30 + 16) = qword_1C63778;
  *(_DWORD *)(v30 + 24) = 0;
  *(_BYTE *)(v30 + 28) = 0;
  *(_QWORD *)(v30 + 32) = 0;
  *(_DWORD *)(v30 + 40) = 0;
  v63 = v30;
  *(_QWORD *)(v30 + 64) = 0;
  *(_QWORD *)(v30 + 72) = 0;
  *(_QWORD *)(v30 + 48) = &off_1C62200;
  *(_QWORD *)(v30 + 88) = 0;
  *(_QWORD *)(v30 + 96) = 0;
  *(_QWORD *)(v30 + 104) = a1;
  *(_QWORD *)(v30 + 112) = 0;
  *(_QWORD *)(v30 + 120) = 0;
  *(_QWORD *)(v30 + 128) = 0;
  sub_180C0A0(v30 + 136);
  *(_QWORD *)(v63 + 16) = &off_1C4C6F0;
  *(_QWORD *)v63 = &off_1C4C5D8;
  *(_QWORD *)(v63 + 176) = a1;
  sub_1858590(v63 + 184, &v77);
  *(_OWORD *)(v63 + 192) = 0;
  sub_180C0A0(v63 + 208);
  v31 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v63 + 248) = 0;
  *(_QWORD *)(v63 + 256) = a1;
  *(_QWORD *)(v63 + 264) = v31;
  *(_QWORD *)(v63 + 272) = 0;
  *(_QWORD *)(v63 + 280) = 0;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v76 = 0;
  *(_QWORD *)(v63 + 304) = sub_2339C0;
  *(_QWORD *)(v63 + 312) = a1;
  *(_QWORD *)(v63 + 320) = 0;
  *(_QWORD *)(v63 + 328) = 0;
  *(_QWORD *)(v63 + 336) = 0;
  *(_BYTE *)(v63 + 344) = 0;
  *(_OWORD *)(v63 + 288) = 0;
  v32 = sub_CBF8F0(a1, &v76);
  v33 = sub_EE8E00(v32, &v67);
  v34 = sub_EE7C20(v33, v63, v59, v28, v24);
  sub_18572D0(&v76);
  sub_18572D0(&v77);
  sub_18572D0(v78);
  v75 = 0;
  sub_1862370(&v75, "diff_neq_max_k", 25);
  v78[0] = 0;
  v64 = sub_388500(a1, (__int64)v78);
  v77 = 0;
  v35 = sub_388500(a1, (__int64)&v77);
  v76 = 0;
  v36 = v35;
  v37 = sub_CC96A0(a1, &v76);
  v38 = sub_EE8E00(v37, &v75);
  v39 = sub_EE91D0(v38, v34, v36);
  v40 = sub_EE7A70(v56, v39);
  v41 = sub_EE8E00(v40, &v65);
  v42 = sub_EF42F0();
  v43 = sub_EF3D00(v42);
  v44 = sub_EF4290();
  v45 = sub_EF3D00(v44);
  v46 = sub_EF3D30(v45, v43);
  v47 = sub_EF3CC0(5000.0);
  v48 = sub_EF41B0();
  v49 = sub_EF3F30(v48, v47);
  v50 = sub_EF3D30(v49, v46);
  v51 = sub_EE8F50(v50, v41, v64);
  sub_18572D0(&v76);
  sub_18572D0(&v77);
  sub_18572D0(v78);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 112LL))(v51, a2);
  sub_18572D0(&v75);
  sub_18572D0(&v71);
  sub_18572D0(&v69);
  sub_18572D0(&v68);
  sub_18572D0(&v67);
  sub_18572D0(&v66);
  sub_18572D0(&v65);
  return v51;
}

