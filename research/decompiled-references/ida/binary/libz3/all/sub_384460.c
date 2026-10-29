__int64 __fastcall sub_384460(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  void *v47; // r14
  void *v48; // r15
  void *v49; // r13
  __int64 v50; // rax
  __int64 v51; // r12
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // r12
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rdi
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbx
  int v90; // [rsp+0h] [rbp-118h]
  int v91; // [rsp+0h] [rbp-118h]
  int v92; // [rsp+8h] [rbp-110h]
  void *v93; // [rsp+8h] [rbp-110h]
  void *v94; // [rsp+10h] [rbp-108h]
  void *v95; // [rsp+10h] [rbp-108h]
  void *v96; // [rsp+20h] [rbp-F8h]
  __int64 v97; // [rsp+48h] [rbp-D0h]
  __int64 v98; // [rsp+50h] [rbp-C8h]
  __int64 v99; // [rsp+58h] [rbp-C0h]
  __int64 v100; // [rsp+60h] [rbp-B8h]
  __int64 v101; // [rsp+68h] [rbp-B0h]
  __int64 v103; // [rsp+78h] [rbp-A0h]
  __int64 v104; // [rsp+80h] [rbp-98h] BYREF
  __int64 v105; // [rsp+88h] [rbp-90h] BYREF
  __int64 v106; // [rsp+90h] [rbp-88h] BYREF
  __int64 v107; // [rsp+98h] [rbp-80h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v110; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v111; // [rsp+B8h] [rbp-60h] BYREF
  int v112[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v113; // [rsp+C8h] [rbp-50h]
  __int64 v114; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v115; // [rsp+D8h] [rbp-40h]

  v104 = 0;
  sub_1862300(&v104, "elim_and", 1);
  sub_1862300(&v104, "som", 1);
  sub_1862300(&v104, "blast_distinct", 1);
  sub_1862370(&v104, "blast_distinct_threshold", 128);
  sub_1862370(&v104, "lia2card.max_range", 1);
  sub_1862370(&v104, "lia2card.max_ite_nesting", 1);
  v105 = 0;
  sub_1862370(&v105, "lia2pb_max_bits", 64);
  v106 = 0;
  sub_1862300(&v106, "arith_lhs", 1);
  v107 = 0;
  v97 = sub_388500(a1, &v107);
  v3 = ((__int64 (*)(void))sub_EE4EC0)();
  v4 = sub_383640(a1, 0x12Cu);
  v5 = sub_EE8DB0(v4, 15000);
  v111 = 0;
  sub_1862370(&v111, "arith.branch_cut_ratio", 10000000);
  sub_1862370(&v111, "random_seed", 200);
  sub_1862370(&v111, "relevancy", 0);
  *(_QWORD *)v112 = 0;
  v6 = sub_3885C0(a1, 0, v112);
  sub_EE8E00(v6, &v111);
  v7 = sub_EE8E80("no-cut-relevancy-tactic");
  sub_18572D0(v112);
  sub_18572D0(&v111);
  v8 = sub_EE8DB0(v7, 5000);
  v9 = sub_383640(a1, 0x64u);
  v10 = sub_EE8DB0(v9, 5000);
  v11 = sub_EE91D0(v10, v8, v5);
  v12 = sub_C80E20();
  v13 = sub_EE9010(v12);
  v14 = sub_EE7AC0(v13, v11, v3);
  v99 = sub_EE8E80("bounded-tactic");
  v15 = sub_EE4EC0("bounded-tactic", v14);
  v16 = sub_3840E0(a1);
  v17 = sub_EE8E00(v16, &v105);
  v18 = sub_186B270(0x10u);
  *(_DWORD *)(v18 + 8) = 0;
  v19 = v18;
  *(_QWORD *)v18 = off_1C4DCF0;
  v20 = sub_C80E20();
  v21 = sub_EF3D00(v20);
  v22 = sub_EF3D30(v21, v19);
  v23 = sub_EE9040(v22);
  v98 = sub_EE7AC0(v23, v17, v15);
  v110 = 0;
  sub_1862370(&v110, "pb2bv_all_clauses_limit", 8);
  v111 = 0;
  sub_1862300(&v111, "ite_extra", 1);
  v24 = sub_383BE0(a1);
  v25 = sub_EE8E00(v24, &v111);
  v26 = sub_EF4120();
  v27 = sub_EE9040(v26);
  *(_QWORD *)v112 = 0;
  v28 = sub_C9F310(a1, v112);
  v29 = sub_EE8E00(v28, &v110);
  v30 = v27;
  v31 = sub_EE7AC0(v29, v27, v25);
  v32 = sub_EE4EC0(v29, v30);
  v33 = sub_C98AF0();
  v34 = sub_EE9040(v33);
  v35 = sub_EF3CC0(80000.0);
  v36 = sub_EF3C90();
  v37 = sub_EF3EF0(v36, v35);
  v38 = sub_EE9010(v37);
  v39 = sub_EE7AC0(v38, v34, v32);
  v40 = sub_EE9140(v39, v31);
  v41 = sub_EF42F0();
  v42 = sub_EE9010(v41);
  v43 = sub_EF4290();
  v44 = sub_EE9010(v43);
  v45 = sub_C9F220();
  v46 = sub_EE9040(v45);
  sub_EE7B50(v46, v44, v42, v40);
  v100 = sub_EE8E80("pb-tactic");
  sub_18572D0(v112);
  sub_18572D0(&v111);
  sub_18572D0(&v110);
  *(_QWORD *)v112 = 4294967280LL;
  v108 = 0;
  v113 = 0;
  v114 = 1;
  v115 = 0;
  sub_182CBA0(qword_1C7F2C0, &v114);
  BYTE4(v114) &= ~1u;
  LODWORD(v114) = 1;
  sub_1862540(&v108, "add_bound_lower", v112);
  v47 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v112);
  sub_182CBA0(v47, &v114);
  *(_QWORD *)v112 = 15;
  v113 = 0;
  v114 = 1;
  v115 = 0;
  sub_182CBA0(qword_1C7F2C0, &v114);
  BYTE4(v114) &= ~1u;
  LODWORD(v114) = 1;
  sub_1862540(&v108, "add_bound_upper", v112);
  v96 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v112);
  sub_182CBA0(v96, &v114);
  *(_QWORD *)v112 = 4294967264LL;
  v109 = 0;
  v113 = 0;
  v114 = 1;
  v115 = 0;
  sub_182CBA0(qword_1C7F2C0, &v114);
  BYTE4(v114) &= ~1u;
  LODWORD(v114) = 1;
  sub_1862540(&v109, "add_bound_lower", v112);
  v48 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v112);
  sub_182CBA0(v48, &v114);
  *(_QWORD *)v112 = 31;
  v113 = 0;
  v114 = 1;
  v115 = 0;
  sub_182CBA0(qword_1C7F2C0, &v114);
  BYTE4(v114) &= ~1u;
  LODWORD(v114) = 1;
  sub_1862540(&v109, "add_bound_upper", v112);
  v49 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v112);
  sub_182CBA0(v49, &v114);
  v101 = sub_EE4EC0(v49, &v114);
  v50 = sub_3840E0(a1);
  v51 = sub_EE8DB0(v50, 10000);
  *(_QWORD *)v112 = 0;
  v56 = sub_C80E50(a1, (int)v112, v52, v53, v54, v55, v90, (int)&v111, &v110);
  v57 = sub_EE8E00(v56, &v109);
  v58 = sub_EE7A70(v57, v51);
  v59 = sub_383640(a1, 0xC8u);
  v60 = sub_EE8DB0(v59, 5000);
  v61 = sub_3840E0(a1);
  v62 = sub_EE8DB0(v61, 5000);
  v111 = 0;
  v67 = sub_C80E50(a1, v92, v63, v64, v65, v66, v91, v92, v94);
  v68 = sub_EE8E00(v67, &v108);
  v69 = sub_EE7A70(v68, v62);
  v70 = sub_383640(a1, 0x64u);
  v71 = sub_EE8DB0(v70, 2000);
  v72 = sub_EE92B0(v71, v69, v60, v58);
  v110 = 0;
  v73 = sub_186B270(0x160u);
  *(_QWORD *)v73 = qword_1C636A0;
  *(_QWORD *)(v73 + 16) = qword_1C63778;
  *(_DWORD *)(v73 + 8) = 0;
  *(_BYTE *)(v73 + 28) = 0;
  *(_DWORD *)(v73 + 24) = 0;
  *(_QWORD *)(v73 + 32) = 0;
  *(_DWORD *)(v73 + 40) = 0;
  *(_QWORD *)(v73 + 48) = &off_1C62200;
  *(_QWORD *)(v73 + 64) = 0;
  *(_QWORD *)(v73 + 72) = 0;
  *(_QWORD *)(v73 + 88) = 0;
  *(_QWORD *)(v73 + 96) = 0;
  *(_QWORD *)(v73 + 104) = a1;
  *(_QWORD *)(v73 + 112) = 0;
  *(_QWORD *)(v73 + 120) = 0;
  *(_QWORD *)(v73 + 128) = 0;
  sub_180C0A0(v73 + 136);
  *(_QWORD *)(v73 + 176) = a1;
  *(_QWORD *)v73 = &off_1C4C5D8;
  *(_QWORD *)(v73 + 16) = &off_1C4C6F0;
  sub_1858590(v73 + 184, v95);
  *(_OWORD *)(v73 + 192) = 0;
  sub_180C0A0(v73 + 208);
  v74 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v73 + 248) = 0;
  *(_QWORD *)(v73 + 256) = a1;
  *(_QWORD *)(v73 + 264) = v74;
  *(_QWORD *)(v73 + 272) = 0;
  *(_QWORD *)(v73 + 280) = 0;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  *(_QWORD *)(v73 + 312) = a1;
  *(_QWORD *)(v73 + 304) = sub_2339C0;
  *(_QWORD *)(v73 + 320) = 0;
  *(_QWORD *)(v73 + 328) = 0;
  *(_QWORD *)(v73 + 336) = 0;
  *(_BYTE *)(v73 + 344) = 0;
  *(_OWORD *)(v73 + 288) = 0;
  v75 = sub_EF42F0();
  v76 = sub_EE9010(v75);
  v77 = sub_EF4290();
  v78 = sub_EE9010(v77);
  v103 = sub_C80E20();
  v79 = sub_C98AF0();
  v80 = sub_EF3D30(v79, v103);
  v81 = sub_EE9040(v80);
  sub_EE7D40(v81, v78, v76, v73, v72, v101);
  v82 = sub_EE8E80("ilp-model-finder-tactic");
  sub_18572D0(v95);
  sub_18572D0(v93);
  sub_18572D0(v112);
  sub_18572D0(&v109);
  sub_18572D0(&v108);
  v83 = sub_EE9500(v82, v100, v98, v99, v97);
  *(_QWORD *)v112 = 0;
  v84 = sub_D156B0(a1, (unsigned int)v112);
  v85 = sub_EE8E00(v84, &v106);
  v86 = sub_383760(a1);
  v87 = sub_EE7AC0(v86, v85, v83);
  v88 = sub_EE8E00(v87, &v104);
  sub_18572D0(v112);
  sub_18572D0(&v107);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v88 + 112LL))(v88, a2);
  sub_18572D0(&v106);
  sub_18572D0(&v105);
  sub_18572D0(&v104);
  return v88;
}

