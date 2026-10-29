__int64 __fastcall sub_D73200(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128 v37; // xmm0
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // r13
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 result; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // [rsp-10h] [rbp-1E0h]
  __int64 v75; // [rsp+0h] [rbp-1D0h]
  __int64 v76; // [rsp+8h] [rbp-1C8h]
  __int64 v77; // [rsp+10h] [rbp-1C0h]
  __int64 v78; // [rsp+18h] [rbp-1B8h]
  __int64 v79; // [rsp+20h] [rbp-1B0h]
  __int64 v80; // [rsp+28h] [rbp-1A8h]
  __int64 v81; // [rsp+30h] [rbp-1A0h]
  __int64 v82; // [rsp+38h] [rbp-198h]
  __int64 v84; // [rsp+48h] [rbp-188h]
  unsigned int v85; // [rsp+50h] [rbp-180h]
  __int64 v86; // [rsp+50h] [rbp-180h]
  unsigned int v87; // [rsp+58h] [rbp-178h]
  __int64 v88; // [rsp+58h] [rbp-178h]
  __int64 v89; // [rsp+60h] [rbp-170h]
  __int64 v90; // [rsp+60h] [rbp-170h]
  __int64 v91; // [rsp+68h] [rbp-168h]
  __int64 v92; // [rsp+70h] [rbp-160h]
  __int64 v93; // [rsp+78h] [rbp-158h]
  __int64 v94; // [rsp+80h] [rbp-150h] BYREF
  __int64 v95; // [rsp+88h] [rbp-148h]
  __m128 *v96; // [rsp+90h] [rbp-140h]
  __int64 v97; // [rsp+98h] [rbp-138h]
  __int64 v98; // [rsp+A0h] [rbp-130h]
  __int64 v99; // [rsp+A8h] [rbp-128h]
  __int64 v100; // [rsp+B0h] [rbp-120h]
  __int64 v101; // [rsp+B8h] [rbp-118h]
  __int64 v102; // [rsp+C0h] [rbp-110h]
  __int64 v103; // [rsp+C8h] [rbp-108h]
  __int64 v104; // [rsp+D0h] [rbp-100h]
  __int64 v105; // [rsp+D8h] [rbp-F8h]
  int v106[2]; // [rsp+E8h] [rbp-E8h] BYREF
  __m128 v107; // [rsp+F0h] [rbp-E0h] BYREF
  __int64 v108; // [rsp+100h] [rbp-D0h] BYREF
  __int64 v109; // [rsp+108h] [rbp-C8h]
  __int64 v110; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v111; // [rsp+118h] [rbp-B8h]
  __int64 v112; // [rsp+120h] [rbp-B0h] BYREF
  __int64 v113; // [rsp+128h] [rbp-A8h]
  __int64 v114; // [rsp+130h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+138h] [rbp-98h]
  __int64 v116; // [rsp+140h] [rbp-90h] BYREF
  __int64 v117; // [rsp+148h] [rbp-88h]
  __int64 v118; // [rsp+150h] [rbp-80h] BYREF
  __int64 v119; // [rsp+158h] [rbp-78h]
  __int64 v120; // [rsp+160h] [rbp-70h] BYREF
  __int64 v121; // [rsp+168h] [rbp-68h]
  __int64 v122; // [rsp+170h] [rbp-60h] BYREF
  __int64 v123; // [rsp+178h] [rbp-58h]
  __m128 v124; // [rsp+180h] [rbp-50h] BYREF
  _QWORD v125[8]; // [rsp+190h] [rbp-40h] BYREF

  v94 = a1[1];
  v7 = *(_QWORD *)(*a4 + 32LL);
  v97 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = a4[1];
  v103 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v108 = 0;
  v109 = v94;
  sub_D504D0((__int64)a1, v97, &v108);
  v13 = sub_15C5540((int)a1 + 432, *(_QWORD *)(a2 + 40), v9, v10, v11, v12);
  v14 = *(_QWORD *)(a2 + 40);
  LODWORD(v101) = v13;
  LODWORD(v104) = sub_15C5560(a1 + 54, v14);
  v84 = (__int64)(a1 + 29);
  v15 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v103) + 24) + 8LL);
  if ( *(_BYTE *)(v15 + 8) )
    sub_DBF6E(0);
  v16 = *(_DWORD *)v15;
  v81 = a1[1];
  v17 = sub_D50430((__int64)(a1 + 29), 1u);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = sub_D50430((__int64)(a1 + 29), v16);
  v95 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v93 = a1[1];
  v20 = sub_15E1B70(v93);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v22 = *(_QWORD *)(a2 + 40);
  v110 = 0;
  v111 = v93;
  sub_D518E0((__int64)a1, v22, &v110);
  v112 = 0;
  v23 = *(_QWORD *)(a2 + 40);
  v105 = v110;
  v79 = v111;
  v113 = v93;
  sub_D51670((__int64)a1, v23, &v112);
  v91 = v112;
  v80 = v113;
  v98 = a1[1];
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  if ( v105 )
    ++*(_DWORD *)(v105 + 8);
  v114 = 0;
  v115 = v98;
  sub_D55100((__int64)a1, v103, v16, &v114);
  v78 = a1[1];
  v24 = sub_15E1B70(a1[30]);
  v100 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v82 = a1[1];
  v25 = v104 + 4;
  v87 = v104 + 4;
  if ( v16 >= (int)v104 + 4 )
  {
    LODWORD(v104) = v16 - v25;
    v26 = sub_D81CD0(v84, v16 - 1, v16 - v25 + 1, v100);
    v99 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v27 = sub_D50160((__int64)(a1 + 29), v104, v100);
    v104 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v28 = sub_15E1A70(a1[1]);
    v92 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    v29 = a1[30];
    v120 = v99;
    v121 = v28;
    v30 = sub_15E1AF0(v29);
    v102 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v31 = v99;
    if ( v99
      && (LODWORD(v96) = *(_DWORD *)(v99 + 8), v32 = (_DWORD)v96 == 1, *(_DWORD *)(v99 + 8) = (_DWORD)v96 - 1, v32) )
    {
      sub_15D7BC0(v98, v31);
      v33 = v104;
      if ( v104 )
      {
LABEL_30:
        LODWORD(v99) = *(_DWORD *)(v33 + 8);
        v32 = (_DWORD)v99 == 1;
        *(_DWORD *)(v33 + 8) = v99 - 1;
        if ( v32 )
          sub_15D7BC0(v82, v33);
      }
    }
    else
    {
      v33 = v104;
      if ( v104 )
        goto LABEL_30;
    }
    v104 = v114;
    goto LABEL_33;
  }
  LODWORD(v104) = v25 - v16;
  v58 = sub_D50430(v84, v25 - v16);
  v59 = v58;
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  v60 = a1[30];
  v123 = v58;
  v122 = v100;
  v61 = sub_15E1AF0(v60);
  v102 = v61;
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  v62 = sub_D81BF0(a1 + 29, (unsigned int)v104, v87);
  v63 = a1[30];
  v104 = v62;
  v124 = _mm_loadh_ps((const double *)&v114);
  sub_15E1AF0(v63);
  v64 = sub_15E1B70(a1[30]);
  v104 = v64;
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  v65 = v114;
  if ( v114 )
  {
    v66 = v115;
    v32 = (*(_DWORD *)(v114 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v66, v65);
  }
  v114 = v104;
  if ( v59 )
  {
    v32 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v32 )
    {
      sub_15D7BC0(v82, v59);
      v104 = v114;
    }
  }
  v92 = 0;
  v16 = v87;
LABEL_33:
  v77 = a1[1];
  sub_D81BF0(a1 + 29, v16 - 2, v16);
  v34 = sub_15E1B70(a1[30]);
  v99 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v124.m128_i8[8] = 0;
  *(_QWORD *)v106 = v34;
  v125[0] = 0;
  v35 = a1[30];
  v124.m128_i32[0] = v101 + 1;
  v85 = v101 + 2;
  v125[1] = 0;
  v96 = &v124;
  v104 = sub_15DCAD0(v35, (int)v106, 0);
  sub_15D0DF0(v125);
  sub_15D0DF0(&v124);
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  v101 = a1[1];
  v36 = *(_QWORD *)(v101 + 864);
  v89 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  if ( v85 < (int)(log((double)(int)v16) / 0.6931471805599453 + 1.0) )
  {
    v116 = 0;
    v117 = v101;
    sub_D657D0((__int64)a1, v85, &v116);
    v75 = v117;
    v76 = v116;
    v67 = sub_D81D60(v84, v16 - v85, v116);
    v86 = v67;
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    sub_D50390((__int64)(a1 + 29), v16);
    sub_15E1B70(a1[30]);
    v68 = sub_15E1B70(a1[30]);
    v69 = v68;
    if ( v68 )
      ++*(_DWORD *)(v68 + 8);
    sub_D50200(v89, v98);
    v70 = sub_D50430((__int64)(a1 + 29), v87);
    v88 = v70;
    if ( v70 )
      ++*(_DWORD *)(v70 + 8);
    v71 = sub_15E1BF0(a1[1]);
    v90 = v71;
    if ( v71 )
      ++*(_DWORD *)(v71 + 8);
    sub_D50200(v102, v98);
    v72 = sub_15E1BF0(a1[1]);
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    v102 = v72;
    sub_D50200(v104, v98);
    v104 = v102;
    sub_D50200(v88, v101);
    sub_D50200(v86, v101);
    sub_D50200(v76, v75);
    v101 = a1[1];
    v73 = v90;
    v89 = v69;
    v102 = v73;
  }
  v122 = 0;
  v124.m128_u64[0] = 0;
  v121 = v101;
  v123 = v101;
  v37 = _mm_loadh_ps((const double *)&v94);
  v124.m128_u64[1] = v101;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  if ( v102 )
  {
    v122 = v102;
    ++*(_DWORD *)(v102 + 8);
  }
  if ( v104 )
  {
    v124.m128_u64[0] = v104;
    ++*(_DWORD *)(v104 + 8);
  }
  v120 = v18;
  v38 = *(_QWORD *)(a2 + 40);
  v118 = 0;
  v107 = v37;
  v119 = v101;
  sub_D66E50(a1, v38, (__int64 *)&v107, &v120, &v122, (__int64 *)v96, &v118);
  v39 = v118;
  v40 = v119;
  sub_D51DB0((__int64)a1, v21, v105, v118, a5, v74);
  if ( v39 )
  {
    v32 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v40, v39);
  }
  v41 = v124.m128_u64[0];
  if ( v124.m128_u64[0] )
  {
    v42 = v124.m128_u64[1];
    v32 = (*(_DWORD *)(v124.m128_u64[0] + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v42, v41);
  }
  v43 = v122;
  if ( v122 )
  {
    v44 = v123;
    v32 = (*(_DWORD *)(v122 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v44, v43);
  }
  if ( v18 )
  {
    v32 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v101, v18);
  }
  v45 = v99;
  if ( v99 )
  {
    LODWORD(v101) = *(_DWORD *)(v99 + 8);
    v32 = (_DWORD)v101 == 1;
    *(_DWORD *)(v99 + 8) = v101 - 1;
    if ( v32 )
      sub_15D7BC0(v77, v45);
  }
  if ( v92 )
  {
    LODWORD(v101) = *(_DWORD *)(v92 + 8);
    v32 = (_DWORD)v101 == 1;
    *(_DWORD *)(v92 + 8) = v101 - 1;
    if ( v32 )
      sub_15D7BC0(v82, v92);
  }
  v46 = v100;
  if ( v100 )
  {
    LODWORD(v101) = *(_DWORD *)(v100 + 8);
    v32 = (_DWORD)v101 == 1;
    *(_DWORD *)(v100 + 8) = v101 - 1;
    if ( v32 )
      sub_15D7BC0(v78, v46);
  }
  v47 = v114;
  if ( v114 )
  {
    v48 = v115;
    v32 = (*(_DWORD *)(v114 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v48, v47);
  }
  v49 = v104;
  if ( v104 )
  {
    LODWORD(v101) = *(_DWORD *)(v104 + 8);
    v32 = (_DWORD)v101 == 1;
    *(_DWORD *)(v104 + 8) = v101 - 1;
    if ( v32 )
      sub_15D7BC0(v98, v49);
  }
  v50 = v102;
  if ( v102 )
  {
    LODWORD(v104) = *(_DWORD *)(v102 + 8);
    v32 = (_DWORD)v104 == 1;
    *(_DWORD *)(v102 + 8) = v104 - 1;
    if ( v32 )
      sub_15D7BC0(v98, v50);
  }
  if ( v89 && (LODWORD(v104) = *(_DWORD *)(v89 + 8), v32 = (_DWORD)v104 == 1, *(_DWORD *)(v89 + 8) = v104 - 1, v32) )
  {
    sub_15D7BC0(v98, v89);
    if ( v105 )
    {
LABEL_79:
      v51 = v105;
      LODWORD(v104) = *(_DWORD *)(v105 + 8);
      v32 = (_DWORD)v104 == 1;
      *(_DWORD *)(v105 + 8) = v104 - 1;
      if ( v32 )
      {
        sub_15D7BC0(v98, v51);
        if ( v21 )
        {
LABEL_81:
          v32 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( !v32 )
          {
            if ( !v91 )
              goto LABEL_85;
            LODWORD(v104) = *(_DWORD *)(v91 + 8);
            v32 = (_DWORD)v104 == 1;
            *(_DWORD *)(v91 + 8) = v104 - 1;
            if ( !v32 )
              goto LABEL_84;
            goto LABEL_123;
          }
          goto LABEL_138;
        }
      }
      else if ( v21 )
      {
        goto LABEL_81;
      }
      if ( v91 )
      {
        LODWORD(v104) = *(_DWORD *)(v91 + 8);
        v32 = (_DWORD)v104 == 1;
        *(_DWORD *)(v91 + 8) = v104 - 1;
        if ( !v32 )
          goto LABEL_85;
        goto LABEL_123;
      }
      LODWORD(v104) = *(_DWORD *)(v105 + 8);
      v32 = (_DWORD)v104 == 1;
      *(_DWORD *)(v105 + 8) = v104 - 1;
      if ( !v32 )
        goto LABEL_89;
LABEL_143:
      sub_15D7BC0(v79, v105);
LABEL_86:
      if ( !v21 )
        goto LABEL_89;
      goto LABEL_87;
    }
  }
  else if ( v105 )
  {
    goto LABEL_79;
  }
  if ( !v21 )
  {
    if ( !v91 )
      goto LABEL_89;
    LODWORD(v104) = *(_DWORD *)(v91 + 8);
    v32 = (_DWORD)v104 == 1;
    *(_DWORD *)(v91 + 8) = v104 - 1;
    if ( !v32 )
      goto LABEL_89;
    goto LABEL_123;
  }
  v32 = (*(_DWORD *)(v21 + 8))-- == 1;
  if ( !v32 )
  {
    if ( !v91 )
      goto LABEL_87;
    LODWORD(v104) = *(_DWORD *)(v91 + 8);
    v32 = (_DWORD)v104 == 1;
    *(_DWORD *)(v91 + 8) = v104 - 1;
    if ( !v32 )
      goto LABEL_87;
LABEL_123:
    sub_15D7BC0(v80, v91);
LABEL_84:
    if ( !v105 )
      goto LABEL_86;
LABEL_85:
    LODWORD(v104) = *(_DWORD *)(v105 + 8);
    v32 = (_DWORD)v104 == 1;
    *(_DWORD *)(v105 + 8) = v104 - 1;
    if ( !v32 )
      goto LABEL_86;
    goto LABEL_143;
  }
LABEL_138:
  sub_15D7BC0(v98, v21);
  if ( !v91 )
  {
    if ( !v105 )
      goto LABEL_87;
    LODWORD(v104) = *(_DWORD *)(v105 + 8);
    v32 = (_DWORD)v104 == 1;
    *(_DWORD *)(v105 + 8) = v104 - 1;
    if ( !v32 )
      goto LABEL_87;
    goto LABEL_143;
  }
  LODWORD(v104) = *(_DWORD *)(v91 + 8);
  v32 = (_DWORD)v104 == 1;
  *(_DWORD *)(v91 + 8) = v104 - 1;
  if ( v32 )
    goto LABEL_123;
  if ( v105 )
    goto LABEL_85;
LABEL_87:
  v32 = (*(_DWORD *)(v21 + 8))-- == 1;
  if ( v32 )
    sub_15D7BC0(v93, v21);
LABEL_89:
  v52 = v95;
  if ( v95 )
  {
    LODWORD(v105) = *(_DWORD *)(v95 + 8);
    v32 = (_DWORD)v105 == 1;
    *(_DWORD *)(v95 + 8) = v105 - 1;
    if ( v32 )
      sub_15D7BC0(v81, v52);
  }
  if ( v18 )
  {
    v32 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v81, v18);
  }
  v53 = v108;
  if ( v108 )
  {
    v54 = v109;
    v32 = (*(_DWORD *)(v108 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v54, v53);
  }
  v55 = v103;
  LODWORD(v105) = *(_DWORD *)(v103 + 8);
  v32 = (_DWORD)v105 == 1;
  result = (unsigned int)(v105 - 1);
  *(_DWORD *)(v103 + 8) = result;
  if ( v32 )
    result = sub_15D7BC0(v94, v55);
  v57 = v97;
  if ( v97 )
  {
    LODWORD(v105) = *(_DWORD *)(v97 + 8);
    v32 = (_DWORD)v105 == 1;
    result = (unsigned int)(v105 - 1);
    *(_DWORD *)(v97 + 8) = result;
    if ( v32 )
      return sub_15D7BC0(v94, v57);
  }
  return result;
}

