__int64 __fastcall sub_D71FA0(_QWORD *a1, __int64 a2, int a3, _QWORD *a4, __int64 *a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rsi
  int *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 v21; // rdi
  __int64 v22; // r13
  __int32 v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rax
  __m128 v44; // xmm0
  __int64 v45; // rsi
  int v46; // r9d
  __int64 v47; // rcx
  bool v48; // zf
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 result; // rax
  __int64 v70; // rbx
  unsigned int v71; // r12d
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r14
  __int64 v84; // [rsp+8h] [rbp-1F8h]
  __int64 v85; // [rsp+10h] [rbp-1F0h]
  __int64 v86; // [rsp+18h] [rbp-1E8h]
  __int64 v87; // [rsp+20h] [rbp-1E0h]
  __int64 v88; // [rsp+28h] [rbp-1D8h]
  __int64 v89; // [rsp+30h] [rbp-1D0h]
  __int64 v90; // [rsp+38h] [rbp-1C8h]
  __int64 v92; // [rsp+48h] [rbp-1B8h]
  __int64 v93; // [rsp+50h] [rbp-1B0h]
  __int64 v94; // [rsp+58h] [rbp-1A8h]
  __int64 v95; // [rsp+60h] [rbp-1A0h] BYREF
  __int64 v96; // [rsp+68h] [rbp-198h]
  __int64 v97; // [rsp+70h] [rbp-190h]
  __int64 v98; // [rsp+78h] [rbp-188h]
  __int64 v99; // [rsp+80h] [rbp-180h]
  __int64 v100; // [rsp+88h] [rbp-178h]
  __int64 v101; // [rsp+90h] [rbp-170h]
  __int64 v102; // [rsp+98h] [rbp-168h]
  __int64 v103; // [rsp+A0h] [rbp-160h]
  __int64 v104; // [rsp+A8h] [rbp-158h]
  __int64 v105; // [rsp+B0h] [rbp-150h]
  __int64 v106; // [rsp+B8h] [rbp-148h]
  __int64 *v107; // [rsp+C0h] [rbp-140h]
  __int64 v108; // [rsp+C8h] [rbp-138h]
  __int64 v109; // [rsp+D0h] [rbp-130h]
  __int64 v110; // [rsp+D8h] [rbp-128h]
  __int64 v111; // [rsp+E0h] [rbp-120h]
  __int64 v112; // [rsp+E8h] [rbp-118h]
  __int64 v113; // [rsp+F0h] [rbp-110h]
  __m128 *v114; // [rsp+F8h] [rbp-108h]
  __int64 v115; // [rsp+100h] [rbp-100h]
  __int64 v116; // [rsp+108h] [rbp-F8h]
  int v117[2]; // [rsp+110h] [rbp-F0h] BYREF
  int v118[2]; // [rsp+118h] [rbp-E8h] BYREF
  __m128 v119; // [rsp+120h] [rbp-E0h] BYREF
  __int64 v120; // [rsp+130h] [rbp-D0h] BYREF
  __int64 v121; // [rsp+138h] [rbp-C8h]
  __int64 v122; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v123; // [rsp+148h] [rbp-B8h]
  __int64 v124; // [rsp+150h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+158h] [rbp-A8h]
  int v126[2]; // [rsp+160h] [rbp-A0h] BYREF
  __int64 v127; // [rsp+168h] [rbp-98h]
  __int64 v128; // [rsp+170h] [rbp-90h] BYREF
  __int64 v129; // [rsp+178h] [rbp-88h]
  __int64 v130; // [rsp+180h] [rbp-80h] BYREF
  __int64 v131; // [rsp+188h] [rbp-78h]
  __int64 v132; // [rsp+190h] [rbp-70h] BYREF
  __int64 v133; // [rsp+198h] [rbp-68h]
  __int64 v134; // [rsp+1A0h] [rbp-60h] BYREF
  __int64 v135; // [rsp+1A8h] [rbp-58h]
  __m128 v136; // [rsp+1B0h] [rbp-50h] BYREF
  __int64 v137; // [rsp+1C0h] [rbp-40h] BYREF
  __int64 v138; // [rsp+1C8h] [rbp-38h]

  v7 = a1[1];
  v106 = a2;
  v95 = v7;
  v8 = *(_QWORD *)(*a4 + 32LL);
  v108 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = a4[1];
  v115 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = sub_15C5540((int)a1 + 432, *(_QWORD *)(v106 + 40), a3, (_DWORD)a4, (_DWORD)a5, a6);
  v11 = *(_QWORD *)(v106 + 40);
  LODWORD(v99) = v10;
  LODWORD(v109) = sub_15C5560(a1 + 54, v11);
  v94 = (__int64)(a1 + 29);
  v12 = *(int **)(*(_QWORD *)(sub_15D1F10(v115) + 24) + 8LL);
  if ( *((_BYTE *)v12 + 8) )
    sub_DBF6E(0);
  v13 = *v12;
  v120 = 0;
  LODWORD(v116) = v13;
  v121 = a1[1];
  sub_D504D0((__int64)a1, v108, &v120);
  v90 = a1[1];
  v14 = sub_D50390((__int64)(a1 + 29), 1u);
  v101 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15 = sub_D50430((__int64)(a1 + 29), v116);
  v103 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v93 = a1[1];
  v16 = sub_15E1B70(v93);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v122 = 0;
  v18 = *(_QWORD *)(v106 + 40);
  v123 = v93;
  sub_D518E0((__int64)a1, v18, &v122);
  v19 = *(_QWORD *)(v106 + 40);
  v124 = 0;
  v113 = v122;
  v125 = v93;
  v88 = v123;
  sub_D51670((__int64)a1, v19, &v124);
  v98 = v124;
  v89 = v125;
  v112 = a1[1];
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  if ( v113 )
    ++*(_DWORD *)(v113 + 8);
  v136.m128_i8[8] = 0;
  LOBYTE(v138) = 0;
  v20 = v116 - 1;
  v114 = &v136;
  v136.m128_i32[0] = v116 - 1;
  v21 = a1[30];
  *(_QWORD *)v117 = v115;
  LODWORD(v137) = v116 - 1;
  v22 = sub_15DCAD0(v21, (int)v117, 0);
  v107 = &v137;
  sub_15D0DF0(&v137);
  sub_15D0DF0(&v136);
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v136.m128_i8[8] = 0;
  v137 = 0;
  v23 = v116 - 2;
  v138 = 0;
  if ( (_DWORD)v116 == 1 )
    v23 = 0;
  *(_QWORD *)v126 = v115;
  v24 = a1[30];
  v136.m128_i32[0] = v23;
  v102 = sub_15DCAD0(v24, (int)v126, 0);
  sub_15D0DF0(v107);
  sub_15D0DF0(v114);
  if ( v102 )
    ++*(_DWORD *)(v102 + 8);
  v25 = sub_15E1B70(a1[1]);
  v104 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = sub_15E1A70(a1[30]);
  v105 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v27 = sub_15E1BF0(a1[1]);
  v111 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v28 = v27;
  v29 = a1[1];
  *(_QWORD *)v126 = 0;
  v127 = v29;
  sub_D55100((__int64)a1, v28, v116, (__int64 *)v126);
  v86 = a1[1];
  v30 = sub_15E1B70(a1[30]);
  v110 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v92 = a1[1];
  v31 = v109 + 4;
  LODWORD(v97) = v109 + 4;
  if ( (unsigned int)v116 < (int)v109 + 4 )
  {
    v71 = v31 - v116;
    v72 = sub_D50430(v94, v31 - (int)v116);
    v116 = v72;
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    v73 = a1[30];
    v134 = v110;
    v135 = v116;
    v74 = sub_15E1AF0(v73);
    v39 = v74;
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    sub_D50200(0, v112);
    sub_D81BF0(a1 + 29, v71, (unsigned int)v97);
    v75 = a1[30];
    v136 = _mm_loadh_ps((const double *)v126);
    sub_15E1AF0(v75);
    v76 = sub_15E1B70(a1[30]);
    v77 = v76;
    if ( v76 )
      ++*(_DWORD *)(v76 + 8);
    sub_D50200(*(__int64 *)v126, v127);
    *(_QWORD *)v126 = v77;
    sub_D50200(v116, v92);
    v100 = 0;
    LODWORD(v116) = v97;
  }
  else
  {
    v32 = v116 - v31;
    v33 = sub_D81CD0(v94, v20, (unsigned int)(v116 - v31 + 1), v110);
    v109 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    sub_D50200(0, v112);
    v34 = sub_D50160((__int64)(a1 + 29), v32, v110);
    v35 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    v36 = sub_15E1A70(a1[1]);
    v100 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v37 = a1[30];
    v132 = v109;
    v133 = v100;
    v38 = sub_15E1AF0(v37);
    v39 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    sub_D50200(v109, v112);
    sub_D50200(v35, v92);
  }
  v87 = a1[1];
  sub_D81BF0(a1 + 29, (unsigned int)(v116 - 2), (unsigned int)v116);
  v40 = sub_15E1B70(a1[30]);
  v109 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v136.m128_i8[8] = 0;
  *(_QWORD *)v118 = v40;
  v137 = 0;
  v41 = a1[30];
  v136.m128_i32[0] = v99 + 1;
  LODWORD(v96) = v99 + 2;
  v138 = 0;
  v42 = sub_15DCAD0(v41, (int)v118, 0);
  sub_15D0DF0(v107);
  sub_15D0DF0(v114);
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v107 = (__int64 *)a1[1];
  v43 = v107[108];
  v99 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  if ( (int)(log((double)(int)v116) / 0.6931471805599453 + 1.0) >= (unsigned int)v96 )
  {
    v128 = 0;
    v129 = (__int64)v107;
    sub_D657D0((__int64)a1, v96, &v128);
    v84 = v129;
    v85 = v128;
    v78 = sub_D81D60(v94, (unsigned int)(v116 - v96), v128);
    v96 = v78;
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    sub_D50390((__int64)(a1 + 29), v116);
    sub_15E1B70(a1[30]);
    v79 = sub_15E1B70(a1[30]);
    v116 = v79;
    if ( v79 )
      ++*(_DWORD *)(v79 + 8);
    sub_D50200(v99, v112);
    v80 = sub_D50430((__int64)(a1 + 29), v97);
    v97 = v80;
    if ( v80 )
      ++*(_DWORD *)(v80 + 8);
    v81 = sub_15E1BF0(a1[1]);
    v99 = v81;
    if ( v81 )
      ++*(_DWORD *)(v81 + 8);
    sub_D50200(v39, v112);
    v82 = sub_15E1BF0(a1[1]);
    v83 = v82;
    if ( v82 )
      ++*(_DWORD *)(v82 + 8);
    sub_D50200(v42, v112);
    sub_D50200(v97, (__int64)v107);
    v42 = v83;
    sub_D50200(v96, (__int64)v107);
    sub_D50200(v85, v84);
    v39 = v99;
    v107 = (__int64 *)a1[1];
    v99 = v116;
  }
  v134 = 0;
  v136.m128_u64[0] = 0;
  v133 = (__int64)v107;
  v135 = (__int64)v107;
  v44 = _mm_loadh_ps((const double *)&v95);
  v136.m128_u64[1] = (unsigned __int64)v107;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  if ( v39 )
  {
    v134 = v39;
    ++*(_DWORD *)(v39 + 8);
  }
  if ( v42 )
  {
    v136.m128_u64[0] = v42;
    ++*(_DWORD *)(v42 + 8);
  }
  v132 = v22;
  v130 = 0;
  v119 = v44;
  v45 = *(_QWORD *)(v106 + 40);
  v131 = (__int64)v107;
  sub_D66E50(a1, v45, (__int64 *)&v119, &v132, &v134, (__int64 *)v114, &v130);
  v106 = v131;
  v116 = v130;
  sub_D51DB0((__int64)a1, v17, v113, v130, a5, v46);
  v47 = v116;
  if ( v116 )
  {
    LODWORD(v114) = *(_DWORD *)(v116 + 8);
    v48 = (_DWORD)v114 == 1;
    *(_DWORD *)(v116 + 8) = (_DWORD)v114 - 1;
    if ( v48 )
      sub_15D7BC0(v106, v47);
  }
  v49 = v136.m128_u64[0];
  if ( v136.m128_u64[0] )
  {
    v50 = v136.m128_u64[1];
    v48 = (*(_DWORD *)(v136.m128_u64[0] + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v50, v49);
  }
  v51 = v134;
  if ( v134 )
  {
    v52 = v135;
    v48 = (*(_DWORD *)(v134 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v52, v51);
  }
  if ( v22 )
  {
    v48 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v107, v22);
  }
  v53 = v109;
  if ( v109 )
  {
    LODWORD(v116) = *(_DWORD *)(v109 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v109 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v87, v53);
  }
  v54 = v100;
  if ( v100 )
  {
    LODWORD(v116) = *(_DWORD *)(v100 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v100 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v92, v54);
  }
  v55 = v110;
  if ( v110 )
  {
    LODWORD(v116) = *(_DWORD *)(v110 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v110 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v86, v55);
  }
  v56 = *(_QWORD *)v126;
  if ( *(_QWORD *)v126 )
  {
    v57 = v127;
    v48 = (*(_DWORD *)(*(_QWORD *)v126 + 8LL))-- == 1;
    if ( v48 )
      sub_15D7BC0(v57, v56);
  }
  v58 = v105;
  if ( v105 )
  {
    LODWORD(v116) = *(_DWORD *)(v105 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v105 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v112, v58);
  }
  v59 = v111;
  if ( v111 )
  {
    LODWORD(v116) = *(_DWORD *)(v111 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v111 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v112, v59);
  }
  v60 = v104;
  if ( v104 )
  {
    LODWORD(v116) = *(_DWORD *)(v104 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v104 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v112, v60);
  }
  v61 = v102;
  if ( v102 )
  {
    LODWORD(v116) = *(_DWORD *)(v102 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v102 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v112, v61);
  }
  if ( v42 )
  {
    v48 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v112, v42);
  }
  if ( v39 )
  {
    v48 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v112, v39);
  }
  v62 = v99;
  if ( v99 )
  {
    LODWORD(v116) = *(_DWORD *)(v99 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v99 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v112, v62);
  }
  if ( v22 && (v48 = *(_DWORD *)(v22 + 8) == 1, --*(_DWORD *)(v22 + 8), v48) )
  {
    sub_15D7BC0(v112, v22);
    if ( v113 )
    {
LABEL_101:
      v63 = v113;
      LODWORD(v116) = *(_DWORD *)(v113 + 8);
      v48 = (_DWORD)v116 == 1;
      *(_DWORD *)(v113 + 8) = v116 - 1;
      if ( v48 )
      {
        sub_15D7BC0(v112, v63);
        if ( v17 )
        {
LABEL_103:
          v48 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( !v48 )
          {
            if ( !v98 )
              goto LABEL_107;
            LODWORD(v116) = *(_DWORD *)(v98 + 8);
            v48 = (_DWORD)v116 == 1;
            *(_DWORD *)(v98 + 8) = v116 - 1;
            if ( !v48 )
              goto LABEL_106;
            goto LABEL_139;
          }
          goto LABEL_154;
        }
      }
      else if ( v17 )
      {
        goto LABEL_103;
      }
      if ( v98 )
      {
        LODWORD(v116) = *(_DWORD *)(v98 + 8);
        v48 = (_DWORD)v116 == 1;
        *(_DWORD *)(v98 + 8) = v116 - 1;
        if ( !v48 )
          goto LABEL_107;
        goto LABEL_139;
      }
      LODWORD(v116) = *(_DWORD *)(v113 + 8);
      v48 = (_DWORD)v116 == 1;
      *(_DWORD *)(v113 + 8) = v116 - 1;
      if ( !v48 )
        goto LABEL_111;
LABEL_160:
      sub_15D7BC0(v88, v113);
LABEL_108:
      if ( !v17 )
        goto LABEL_111;
      goto LABEL_109;
    }
  }
  else if ( v113 )
  {
    goto LABEL_101;
  }
  if ( !v17 )
  {
    if ( !v98 )
      goto LABEL_111;
    LODWORD(v116) = *(_DWORD *)(v98 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v98 + 8) = v116 - 1;
    if ( !v48 )
      goto LABEL_111;
    goto LABEL_139;
  }
  v48 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( !v48 )
  {
    if ( !v98 )
      goto LABEL_109;
    LODWORD(v116) = *(_DWORD *)(v98 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v98 + 8) = v116 - 1;
    if ( !v48 )
      goto LABEL_109;
LABEL_139:
    sub_15D7BC0(v89, v98);
LABEL_106:
    if ( !v113 )
      goto LABEL_108;
LABEL_107:
    LODWORD(v116) = *(_DWORD *)(v113 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v113 + 8) = v116 - 1;
    if ( !v48 )
      goto LABEL_108;
    goto LABEL_160;
  }
LABEL_154:
  sub_15D7BC0(v112, v17);
  if ( !v98 )
  {
    if ( !v113 )
      goto LABEL_109;
    LODWORD(v116) = *(_DWORD *)(v113 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v113 + 8) = v116 - 1;
    if ( !v48 )
      goto LABEL_109;
    goto LABEL_160;
  }
  LODWORD(v116) = *(_DWORD *)(v98 + 8);
  v48 = (_DWORD)v116 == 1;
  *(_DWORD *)(v98 + 8) = v116 - 1;
  if ( v48 )
    goto LABEL_139;
  if ( v113 )
    goto LABEL_107;
LABEL_109:
  v48 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( v48 )
    sub_15D7BC0(v93, v17);
LABEL_111:
  v64 = v103;
  if ( v103 )
  {
    LODWORD(v116) = *(_DWORD *)(v103 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v103 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v90, v64);
  }
  v65 = v101;
  if ( v101 )
  {
    LODWORD(v116) = *(_DWORD *)(v101 + 8);
    v48 = (_DWORD)v116 == 1;
    *(_DWORD *)(v101 + 8) = v116 - 1;
    if ( v48 )
      sub_15D7BC0(v90, v65);
  }
  v66 = v120;
  if ( v120 )
  {
    v67 = v121;
    v48 = (*(_DWORD *)(v120 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v67, v66);
  }
  v68 = v115;
  LODWORD(v116) = *(_DWORD *)(v115 + 8);
  v48 = (_DWORD)v116 == 1;
  result = (unsigned int)(v116 - 1);
  *(_DWORD *)(v115 + 8) = result;
  if ( v48 )
    result = sub_15D7BC0(v95, v68);
  v70 = v108;
  if ( v108 )
  {
    LODWORD(v116) = *(_DWORD *)(v108 + 8);
    v48 = (_DWORD)v116 == 1;
    result = (unsigned int)(v116 - 1);
    *(_DWORD *)(v108 + 8) = result;
    if ( v48 )
      return sub_15D7BC0(v95, v70);
  }
  return result;
}

