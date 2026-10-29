__int64 *__fastcall sub_D53E50(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // eax
  int v10; // edi
  __int64 *v11; // rcx
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  int v21; // r12d
  int v22; // r15d
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  int v26; // r15d
  int v27; // r9d
  int v28; // r15d
  int v29; // eax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // r12
  unsigned int v34; // r8d
  __int64 v35; // r9
  __int64 v36; // r12
  unsigned __int64 *v37; // rdx
  int v38; // ecx
  __int64 v39; // r8
  unsigned __int64 *v40; // rsi
  unsigned __int64 *v41; // rax
  unsigned __int64 *v42; // rdi
  unsigned __int64 *v43; // r10
  unsigned __int64 v44; // rdx
  unsigned __int64 *v45; // rax
  unsigned __int64 *v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  void *v52; // r14
  __int64 v53; // rax
  __int64 v54; // r13
  int v55; // r9d
  __int64 v56; // rsi
  __int64 v57; // rdi
  bool v58; // zf
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v64; // rax
  __m128 *v65; // rax
  int v66; // ecx
  __m128 *v67; // rsi
  __m128 *v68; // rdx
  const double *v69; // r15
  double *v70; // rax
  __m128 *v71; // r11
  __int64 v72; // rdx
  __m128 *v73; // rdi
  __m128 *v74; // rdx
  int v75; // [rsp-8h] [rbp-E8h]
  int v76; // [rsp-8h] [rbp-E8h]
  int v77; // [rsp+0h] [rbp-E0h]
  int v78; // [rsp+0h] [rbp-E0h]
  int v79; // [rsp+0h] [rbp-E0h]
  int v80; // [rsp+0h] [rbp-E0h]
  int v81; // [rsp+0h] [rbp-E0h]
  int v82; // [rsp+8h] [rbp-D8h]
  int v83; // [rsp+8h] [rbp-D8h]
  int v84; // [rsp+8h] [rbp-D8h]
  int v85; // [rsp+8h] [rbp-D8h]
  __int64 v86; // [rsp+8h] [rbp-D8h]
  __int64 v87; // [rsp+8h] [rbp-D8h]
  __int64 v88; // [rsp+8h] [rbp-D8h]
  int v89; // [rsp+8h] [rbp-D8h]
  int v90; // [rsp+10h] [rbp-D0h]
  int v91; // [rsp+10h] [rbp-D0h]
  int v92; // [rsp+10h] [rbp-D0h]
  int v93; // [rsp+10h] [rbp-D0h]
  __int64 v94; // [rsp+10h] [rbp-D0h]
  __int64 v95; // [rsp+10h] [rbp-D0h]
  size_t v96; // [rsp+10h] [rbp-D0h]
  unsigned int v97; // [rsp+10h] [rbp-D0h]
  int v98; // [rsp+18h] [rbp-C8h]
  int v99; // [rsp+18h] [rbp-C8h]
  int v100; // [rsp+18h] [rbp-C8h]
  int v101; // [rsp+18h] [rbp-C8h]
  void *v102; // [rsp+18h] [rbp-C8h]
  void *v103; // [rsp+18h] [rbp-C8h]
  __int64 v104; // [rsp+18h] [rbp-C8h]
  __int64 v105; // [rsp+18h] [rbp-C8h]
  __int64 v106; // [rsp+20h] [rbp-C0h]
  int v107; // [rsp+20h] [rbp-C0h]
  int v108; // [rsp+20h] [rbp-C0h]
  int v109; // [rsp+20h] [rbp-C0h]
  __int64 v110; // [rsp+20h] [rbp-C0h]
  __int64 v111; // [rsp+28h] [rbp-B8h]
  char v112; // [rsp+28h] [rbp-B8h]
  int v113; // [rsp+28h] [rbp-B8h]
  char v114; // [rsp+28h] [rbp-B8h]
  __int64 v115; // [rsp+28h] [rbp-B8h]
  char v116; // [rsp+30h] [rbp-B0h]
  int v117; // [rsp+30h] [rbp-B0h]
  char v118; // [rsp+30h] [rbp-B0h]
  int v119; // [rsp+30h] [rbp-B0h]
  __int64 v120; // [rsp+30h] [rbp-B0h]
  int v121; // [rsp+30h] [rbp-B0h]
  int v122; // [rsp+38h] [rbp-A8h]
  int v123; // [rsp+38h] [rbp-A8h]
  int v124; // [rsp+38h] [rbp-A8h]
  int v125; // [rsp+38h] [rbp-A8h]
  unsigned __int64 v126; // [rsp+38h] [rbp-A8h]
  void *v127; // [rsp+38h] [rbp-A8h]
  __int64 v128; // [rsp+38h] [rbp-A8h]
  __int64 v129; // [rsp+40h] [rbp-A0h]
  int v130; // [rsp+40h] [rbp-A0h]
  int v131; // [rsp+40h] [rbp-A0h]
  int v132; // [rsp+40h] [rbp-A0h]
  __int64 v133; // [rsp+40h] [rbp-A0h]
  __int64 v134; // [rsp+48h] [rbp-98h]
  void *v135; // [rsp+48h] [rbp-98h]
  int v136; // [rsp+48h] [rbp-98h]
  void *v137; // [rsp+48h] [rbp-98h]
  __int64 v138; // [rsp+48h] [rbp-98h]
  __int64 *v139; // [rsp+48h] [rbp-98h]
  __int64 v140; // [rsp+50h] [rbp-90h]
  __int64 v141; // [rsp+50h] [rbp-90h]
  __int64 v142; // [rsp+50h] [rbp-90h]
  __int64 v143; // [rsp+50h] [rbp-90h]
  void *v144; // [rsp+58h] [rbp-88h]
  void *v145; // [rsp+58h] [rbp-88h]
  void *v146; // [rsp+58h] [rbp-88h]
  void *v147; // [rsp+58h] [rbp-88h]
  __m128 *v148; // [rsp+58h] [rbp-88h]
  __int64 v149; // [rsp+60h] [rbp-80h] BYREF
  __int64 v150; // [rsp+68h] [rbp-78h]
  __int64 v151; // [rsp+70h] [rbp-70h] BYREF
  __int64 v152; // [rsp+78h] [rbp-68h]
  int v153[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v154; // [rsp+88h] [rbp-58h]
  __m128 v155; // [rsp+90h] [rbp-50h] BYREF
  __int64 v156; // [rsp+A0h] [rbp-40h] BYREF
  void *v157; // [rsp+A8h] [rbp-38h]
  int v158; // [rsp+B0h] [rbp-30h]
  __int64 v159; // [rsp+B8h] [rbp-28h]

  v134 = (__int64)a1;
  v111 = a4;
  v106 = a5;
  HIDWORD(v129) = sub_15C5540((int)a2 + 432, *(_QWORD *)(a3 + 40), a3, a4, a5, a6);
  v9 = sub_15C5560(a2 + 432, *(_QWORD *)(a3 + 40));
  v10 = *(_DWORD *)(a3 + 12);
  v11 = *(__int64 **)(a2 + 600);
  v12 = v9;
  v13 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  a1[1] = v13;
  v14 = *(unsigned int *)(a2 + 608);
  v15 = v14 - 1;
  v14 *= 24;
  v16 = (__int64 *)((char *)v11 + v14);
  v17 = 24LL * (v10 & v15);
  v18 = &v11[(unsigned __int64)v17 / 8];
  if ( v17 != v14 )
  {
    for ( i = &v11[(unsigned __int64)v17 / 8]; v16 != i; i += 3 )
    {
      v20 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v20 + 12) == v10 && a3 == v20 )
        {
LABEL_29:
          v120 = i[2];
          v141 = a2 + 232;
          goto LABEL_30;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v18 != v11; v11 += 3 )
  {
    v64 = *v11;
    if ( (unsigned __int64)*v11 > 1 )
    {
      if ( *(_DWORD *)(v64 + 12) == v10 && a3 == v64 )
      {
        i = v11;
        goto LABEL_29;
      }
    }
    else if ( !v64 )
    {
      break;
    }
  }
LABEL_8:
  v144 = *(void **)(a2 + 8);
  v21 = sub_1674700(a2 + 232, 1);
  sub_180C5A0(&v151, 0);
  v22 = (int)v144;
  v23 = sub_15E3D10(
          (int)v144,
          (int)&v151,
          (int)&qword_18D6CD0,
          0,
          0,
          v21,
          1,
          v75,
          v77,
          v82,
          v90,
          v98,
          v106,
          v111,
          v116,
          v122,
          v129,
          v134,
          (int)a2 + 232,
          (int)v144,
          v149,
          v150,
          v151,
          v152,
          v153[0],
          v154,
          v155.m128_i32[0],
          v155.m128_i32[2],
          v156,
          v157,
          v158,
          v159);
  v124 = sub_15DC610(v22, v23, 0, 0, v24, v25, v78, v83, v91, v99, v107, v112, v117, v123, v130, v135);
  v145 = *(void **)(a2 + 8);
  v26 = sub_1674700(v140, 1);
  sub_180C5A0(v153, 0);
  v27 = v26;
  v28 = (int)v145;
  v29 = sub_15E3D10(
          (int)v145,
          (int)v153,
          (int)&qword_18D6CD0,
          0,
          0,
          v27,
          1,
          v76,
          v79,
          v84,
          v92,
          v100,
          v108,
          v113,
          v118,
          v124,
          v131,
          v136,
          v140,
          (int)v145,
          v149,
          v150,
          v151,
          v152,
          v153[0],
          v154,
          v155.m128_i32[0],
          v155.m128_i32[2],
          v156,
          v157,
          v158,
          v159);
  v32 = sub_15DC610(v28, v29, 0, 0, v30, v31, v80, v85, v93, v101, v109, v114, v119, v125, v132, v137);
  v33 = *(unsigned int *)(a2 + 608);
  v120 = v32;
  if ( 3 * (int)v33 < (unsigned int)(4 * (*(_DWORD *)(a2 + 612) + *(_DWORD *)(a2 + 616))) )
  {
    v96 = 24LL * (unsigned int)(2 * v33);
    v65 = (__m128 *)sub_186B270(v96);
    v66 = 2 * v33;
    v148 = v65;
    v35 = v96;
    if ( 2 * (_DWORD)v33 )
    {
      v67 = v65;
      v68 = &v65[3 * (v33 & 0x7FFFFFFF)];
      do
      {
        *v65 = 0;
        v65 += 3;
        v65[-2] = 0;
        v65[-1] = 0;
      }
      while ( v65 != v68 );
      v148 = v67;
    }
    v69 = *(const double **)(a2 + 600);
    v34 = v66 - 1;
    v70 = (double *)&v69[3 * *(unsigned int *)(a2 + 608)];
    v36 = (__int64)v148 + v96;
    if ( v69 != v70 )
    {
      do
      {
        while ( *(_QWORD *)v69 <= 1u )
        {
          v69 += 3;
          if ( v70 == v69 )
            goto LABEL_79;
        }
        v71 = v148;
        v72 = 24LL * (*(_DWORD *)(*(_QWORD *)v69 + 12LL) & v34);
        v73 = (__m128 *)((char *)v148 + v72);
        if ( v96 == v72 )
        {
LABEL_84:
          v71 = v148;
          if ( v148 == v73 )
          {
LABEL_89:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v74 = v148;
          while ( v74->m128_u64[0] )
          {
            v74 = (__m128 *)((char *)v74 + 24);
            if ( v73 == v74 )
              goto LABEL_89;
          }
        }
        else
        {
          v74 = (__m128 *)((char *)v148 + v72);
          while ( v74->m128_u64[0] )
          {
            v74 = (__m128 *)((char *)v74 + 24);
            if ( (__m128 *)v36 == v74 )
              goto LABEL_84;
          }
        }
        v148 = v71;
        v69 += 3;
        *v74 = _mm_loadh_ps(v69 - 2);
        *(double *)v74[1].m128_u64 = *(v69 - 1);
      }
      while ( v70 != v69 );
LABEL_79:
      v70 = *(double **)(a2 + 600);
    }
    if ( v70 )
    {
      v89 = v66;
      v97 = v66 - 1;
      v105 = v35;
      sub_186B220(v70);
      v66 = v89;
      v34 = v97;
      v35 = v105;
    }
    *(_DWORD *)(a2 + 608) = v66;
    *(_DWORD *)(a2 + 616) = 0;
    *(_QWORD *)(a2 + 600) = v148;
    v37 = (unsigned __int64 *)v148;
  }
  else
  {
    v34 = v33 - 1;
    v35 = 24 * v33;
    v36 = *(_QWORD *)(a2 + 600) + 24 * v33;
    v37 = *(unsigned __int64 **)(a2 + 600);
  }
  v38 = *(_DWORD *)(a3 + 12);
  v39 = v38 & v34;
  v40 = &v37[3 * v39];
  if ( v35 == 24 * v39 )
  {
    v42 = nullptr;
    v45 = v37;
LABEL_19:
    if ( v40 == v45 )
    {
LABEL_27:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v46 = v45;
    while ( 1 )
    {
      while ( 1 )
      {
        v47 = *v46;
        if ( *v46 > 1 )
          break;
        if ( !v47 )
        {
          v41 = v46;
          goto LABEL_59;
        }
        v42 = v46;
        v46 += 3;
        if ( v40 == v46 )
          goto LABEL_27;
      }
      if ( *(_DWORD *)(v47 + 12) == v38 && a3 == v47 )
        break;
      v46 += 3;
      if ( v40 == v46 )
        goto LABEL_27;
    }
    v41 = v46;
LABEL_91:
    *v41 = a3;
    v41[1] = v126;
    v41[2] = v120;
  }
  else
  {
    v41 = &v37[3 * v39];
    v42 = nullptr;
    v43 = v37;
    while ( 1 )
    {
      while ( 1 )
      {
        v44 = *v41;
        if ( *v41 <= 1 )
          break;
        if ( *(_DWORD *)(v44 + 12) == v38 && a3 == v44 )
          goto LABEL_91;
        v41 += 3;
        if ( (unsigned __int64 *)v36 == v41 )
        {
LABEL_18:
          v45 = v43;
          goto LABEL_19;
        }
      }
      if ( !v44 )
        break;
      v42 = v41;
      v41 += 3;
      if ( (unsigned __int64 *)v36 == v41 )
        goto LABEL_18;
    }
LABEL_59:
    if ( v42 )
      --*(_DWORD *)(a2 + 616);
    else
      v42 = v41;
    *v42 = a3;
    v42[1] = v126;
    v42[2] = v120;
    ++*(_DWORD *)(a2 + 612);
  }
  ++*(_DWORD *)(a3 + 8);
  if ( v126 )
    ++*(_DWORD *)(v126 + 8);
  if ( v120 )
    ++*(_DWORD *)(v120 + 8);
LABEL_30:
  v48 = *(_QWORD *)(a2 + 8);
  v155 = 0u;
  v86 = v48;
  v156 = 1;
  v157 = nullptr;
  sub_182CBA0(qword_1C7F2C0, &v156);
  BYTE4(v156) &= ~1u;
  LODWORD(v156) = 1;
  sub_1674520(v141, &v155, (unsigned int)(v12 - 1));
  v102 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v155);
  sub_182CBA0(v102, &v156);
  v155 = 0u;
  v156 = 1;
  v157 = nullptr;
  sub_182CBA0(qword_1C7F2C0, &v156);
  LODWORD(v156) = 1;
  BYTE4(v156) &= ~1u;
  v94 = sub_1674520(v141, &v155, HIDWORD(v129));
  v103 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v155);
  sub_182CBA0(v103, &v156);
  v49 = sub_15E1BF0(*(_QWORD *)(a2 + 432));
  v50 = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  v155 = 0u;
  v156 = 1;
  v157 = nullptr;
  sub_182CBA0(qword_1C7F2C0, &v156);
  LODWORD(v156) = 1;
  BYTE4(v156) &= ~1u;
  sub_1674520(v141, &v155, (unsigned int)(v12 - 1));
  v127 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v155);
  sub_182CBA0(v127, &v156);
  v155 = 0u;
  v156 = 1;
  v157 = nullptr;
  sub_182CBA0(qword_1C7F2C0, &v156);
  LODWORD(v156) = 1;
  BYTE4(v156) &= ~1u;
  v51 = sub_1674520(v141, &v155, HIDWORD(v129));
  v52 = qword_1C7F2C0;
  v142 = v51;
  sub_182CBA0(qword_1C7F2C0, &v155);
  sub_182CBA0(v52, &v156);
  v53 = sub_15E1BF0(*(_QWORD *)(a2 + 432));
  v54 = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  v154 = *(_QWORD *)(a2 + 8);
  sub_D53A50(
    a2,
    v111,
    (__int64)&v149,
    v77,
    v86,
    v94,
    (__int64)v103,
    v106,
    v111,
    v120,
    (__int64)v127,
    v129,
    v134,
    v142,
    (__int64)&v155,
    0,
    v154,
    0,
    v154,
    0);
  sub_D53650(
    a2,
    v110,
    (__int64)&v151,
    v81,
    v87,
    v95,
    v104,
    v110,
    v115,
    v121,
    v128,
    v133,
    v138,
    v143,
    (__int64)v146,
    v149,
    v150,
    v151,
    v152,
    *(__int64 *)v153);
  v155 = _mm_loadh_ps((const double *)&v151);
  sub_D502F0(a2 + 16, v147, v153);
  sub_D51DB0(a2, *(__int64 *)v153, v50, v54, v139, v55);
  v56 = *(_QWORD *)v153;
  if ( *(_QWORD *)v153 )
  {
    v57 = v154;
    v58 = (*(_DWORD *)(*(_QWORD *)v153 + 8LL))-- == 1;
    if ( v58 )
      sub_15D7BC0(v57, v56);
  }
  v59 = v151;
  if ( v151 )
  {
    v60 = v152;
    v58 = (*(_DWORD *)(v151 + 8))-- == 1;
    if ( v58 )
      sub_15D7BC0(v60, v59);
  }
  v61 = v149;
  if ( v149 )
  {
    v62 = v150;
    v58 = (*(_DWORD *)(v149 + 8))-- == 1;
    if ( v58 )
      sub_15D7BC0(v62, v61);
  }
  if ( v54 )
  {
    v58 = (*(_DWORD *)(v54 + 8))-- == 1;
    if ( v58 )
      sub_15D7BC0(v88, v54);
  }
  if ( v50 )
  {
    v58 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v58 )
      sub_15D7BC0(v88, v50);
  }
  return v139;
}

