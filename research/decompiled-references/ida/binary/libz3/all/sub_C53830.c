__int64 __fastcall sub_C53830(__int64 *a1, __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  char **exception; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r15
  void *v12; // rbx
  void *v13; // rbx
  void *v14; // rbx
  void *v15; // rbx
  bool v16; // zf
  __int64 v18; // rdi
  char v19; // al
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  int *v24; // rax
  unsigned int v25; // r12d
  __int64 v26; // r13
  int v27; // r9d
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  _QWORD *v32; // r9
  __int64 v33; // r13
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  void *v42; // r12
  __int64 v43; // rcx
  __int64 *v44; // r13
  __int64 v45; // r12
  __int64 *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  int *v52; // rax
  unsigned int v53; // r12d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 *v57; // r13
  __int64 v58; // r12
  __int64 *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // r13
  int *v66; // rax
  unsigned int v67; // r12d
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // rax
  unsigned int v71; // r8d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rdi
  _QWORD *v81; // rax
  int v82; // [rsp-8h] [rbp-268h]
  int v83; // [rsp+0h] [rbp-260h]
  int v84; // [rsp+0h] [rbp-260h]
  int v85; // [rsp+8h] [rbp-258h]
  int v86; // [rsp+8h] [rbp-258h]
  int v87[2]; // [rsp+8h] [rbp-258h]
  int v88[2]; // [rsp+8h] [rbp-258h]
  int v89; // [rsp+10h] [rbp-250h]
  int v90; // [rsp+10h] [rbp-250h]
  __int64 *v91; // [rsp+10h] [rbp-250h]
  __int64 v92; // [rsp+10h] [rbp-250h]
  int v93; // [rsp+18h] [rbp-248h]
  int v94; // [rsp+18h] [rbp-248h]
  __int64 v95; // [rsp+18h] [rbp-248h]
  int v96; // [rsp+20h] [rbp-240h]
  int v97; // [rsp+20h] [rbp-240h]
  __int64 v98; // [rsp+20h] [rbp-240h]
  int v99; // [rsp+28h] [rbp-238h]
  char v100; // [rsp+28h] [rbp-238h]
  __int64 v101; // [rsp+28h] [rbp-238h]
  char v102; // [rsp+30h] [rbp-230h]
  int v103; // [rsp+30h] [rbp-230h]
  __int64 v104; // [rsp+30h] [rbp-230h]
  int v105; // [rsp+38h] [rbp-228h]
  int v106; // [rsp+38h] [rbp-228h]
  __int64 v107; // [rsp+38h] [rbp-228h]
  int v108; // [rsp+40h] [rbp-220h]
  int v109; // [rsp+40h] [rbp-220h]
  __int64 v110; // [rsp+40h] [rbp-220h]
  int v111; // [rsp+48h] [rbp-218h]
  void *v112; // [rsp+48h] [rbp-218h]
  __int64 v113; // [rsp+48h] [rbp-218h]
  char v115; // [rsp+50h] [rbp-210h]
  int v116[2]; // [rsp+50h] [rbp-210h]
  int v117[2]; // [rsp+50h] [rbp-210h]
  int v118; // [rsp+58h] [rbp-208h]
  __int64 v119; // [rsp+58h] [rbp-208h]
  int v120; // [rsp+60h] [rbp-200h]
  __int64 v121; // [rsp+60h] [rbp-200h]
  int v122; // [rsp+68h] [rbp-1F8h]
  __int64 v123; // [rsp+68h] [rbp-1F8h]
  __int64 v124; // [rsp+70h] [rbp-1F0h]
  int v125; // [rsp+70h] [rbp-1F0h]
  int v126[2]; // [rsp+78h] [rbp-1E8h]
  int v127[2]; // [rsp+78h] [rbp-1E8h]
  int v128[2]; // [rsp+78h] [rbp-1E8h]
  int v129[2]; // [rsp+78h] [rbp-1E8h]
  int v130[2]; // [rsp+78h] [rbp-1E8h]
  int v131[2]; // [rsp+78h] [rbp-1E8h]
  int v132[2]; // [rsp+80h] [rbp-1E0h]
  __int64 v133; // [rsp+80h] [rbp-1E0h]
  int v134; // [rsp+88h] [rbp-1D8h]
  __int64 *v135; // [rsp+88h] [rbp-1D8h]
  __int64 v136; // [rsp+88h] [rbp-1D8h]
  unsigned int v137; // [rsp+88h] [rbp-1D8h]
  __int64 *v139; // [rsp+90h] [rbp-1D0h]
  _QWORD *v140; // [rsp+98h] [rbp-1C8h]
  _QWORD *v141; // [rsp+A0h] [rbp-1C0h]
  _QWORD *v142; // [rsp+A8h] [rbp-1B8h]
  _QWORD *v143; // [rsp+A8h] [rbp-1B8h]
  __int64 v144; // [rsp+B0h] [rbp-1B0h]
  __int64 v145; // [rsp+B0h] [rbp-1B0h]
  __int64 v146; // [rsp+B8h] [rbp-1A8h]
  __int64 v147; // [rsp+B8h] [rbp-1A8h]
  unsigned __int8 v149; // [rsp+C7h] [rbp-199h]
  __int64 v150; // [rsp+D8h] [rbp-188h]
  __int64 v151; // [rsp+E0h] [rbp-180h]
  __int64 v152; // [rsp+E8h] [rbp-178h]
  __int64 v153; // [rsp+F0h] [rbp-170h]
  __int64 v154; // [rsp+F8h] [rbp-168h]
  int v156; // [rsp+108h] [rbp-158h]
  int v157; // [rsp+108h] [rbp-158h]
  void *v158; // [rsp+108h] [rbp-158h]
  __int64 v159; // [rsp+118h] [rbp-148h] BYREF
  __int64 v160; // [rsp+120h] [rbp-140h] BYREF
  __int64 v161; // [rsp+128h] [rbp-138h] BYREF
  int v162[2]; // [rsp+130h] [rbp-130h] BYREF
  __int64 v163; // [rsp+138h] [rbp-128h]
  int v164[2]; // [rsp+140h] [rbp-120h] BYREF
  __int64 v165; // [rsp+148h] [rbp-118h]
  __int64 v166; // [rsp+150h] [rbp-110h] BYREF
  __int64 v167; // [rsp+158h] [rbp-108h]
  __int64 v168; // [rsp+160h] [rbp-100h] BYREF
  __int64 v169; // [rsp+168h] [rbp-F8h]
  _QWORD v170[2]; // [rsp+170h] [rbp-F0h] BYREF
  _QWORD v171[2]; // [rsp+180h] [rbp-E0h] BYREF
  _QWORD v172[2]; // [rsp+190h] [rbp-D0h] BYREF
  _QWORD v173[2]; // [rsp+1A0h] [rbp-C0h] BYREF
  _QWORD v174[2]; // [rsp+1B0h] [rbp-B0h] BYREF
  _QWORD v175[2]; // [rsp+1C0h] [rbp-A0h] BYREF
  _QWORD v176[2]; // [rsp+1D0h] [rbp-90h] BYREF
  _QWORD v177[2]; // [rsp+1E0h] [rbp-80h] BYREF
  __int64 v178; // [rsp+1F0h] [rbp-70h] BYREF
  __int64 v179; // [rsp+1F8h] [rbp-68h]
  __int64 v180; // [rsp+200h] [rbp-60h] BYREF
  __int64 v181; // [rsp+208h] [rbp-58h]
  __int64 v182; // [rsp+210h] [rbp-50h] BYREF
  __int64 v183; // [rsp+218h] [rbp-48h]
  __int64 v184; // [rsp+220h] [rbp-40h] BYREF
  __int64 v185; // [rsp+228h] [rbp-38h]

  v8 = *a1;
  v170[0] = 0;
  v170[1] = 0;
  v171[0] = 1;
  v171[1] = 0;
  v172[0] = 0;
  v172[1] = 0;
  v173[0] = 1;
  v173[1] = 0;
  v174[0] = 0;
  v174[1] = 0;
  v175[0] = 1;
  v175[1] = 0;
  v176[0] = 0;
  v176[1] = 0;
  v9 = a1[1];
  v177[0] = 1;
  v177[1] = 0;
  *(_QWORD *)v162 = 0;
  v163 = v8;
  *(_QWORD *)v164 = 0;
  v154 = v8;
  v165 = v8;
  v141 = v174;
  v149 = sub_C50710(v9, a2, (__int64 *)v162, (__int64 *)v164, (__int64)v170, (__int64)v174);
  v10 = *(_QWORD *)v162;
  v11 = *(_QWORD *)v164;
  v146 = v165;
  v144 = v163;
  if ( v149 )
  {
    v18 = a1[1];
    v166 = 0;
    v167 = v154;
    v169 = v154;
    v140 = v176;
    v168 = 0;
    v19 = sub_C50710(v18, a3, &v166, &v168, (__int64)v172, (__int64)v176);
    v151 = v166;
    v124 = v169;
    v153 = v168;
    v154 = v167;
    if ( !v19
      || !sub_3ED680((__int64)qword_1C7F2C0, (__int64)v174, (__int64)v176)
      || (v182 = 2,
          v183 = 0,
          v184 = 1,
          v185 = 0,
          sub_182CBA0(qword_1C7F2C0, &v184),
          BYTE4(v184) &= ~1u,
          LODWORD(v184) = 1,
          v149 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v174, (__int64)&v182),
          sub_25A130((char *)&v182),
          !v149) )
    {
      v149 = 0;
      goto LABEL_3;
    }
    sub_C528A0((__int64 *)a1[1], (__int64 *)v162, (__int64 *)v164, &v166, &v168, (__int64)v170, (__int64)v172);
    v20 = *(_QWORD *)v162;
    v153 = v168;
    v125 = v169;
    v151 = v166;
    v21 = *(_QWORD *)v164;
    v154 = v167;
    v147 = v165;
    v145 = v163;
    v22 = sub_C4F690(a1[1], *(__int64 *)v162, v166);
    v10 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_C4E2C0(v20, v145);
    v23 = sub_C4F690(a1[1], v21, v153);
    v11 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_C4E2C0(v21, v147);
    v24 = *(int **)(*(_QWORD *)(sub_15D1F10(v11) + 24) + 8LL);
    if ( *((_BYTE *)v24 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v25 = *v24;
    *(_QWORD *)v132 = *a1;
    v26 = *(_QWORD *)(*a1 + 840);
    sub_180C5A0(&v182, "le_proxy");
    v27 = v26;
    LODWORD(v26) = v132[0];
    v28 = sub_15E3D10(
            v132[0],
            (int)&v182,
            (int)&qword_18D6CD0,
            0,
            0,
            v27,
            1,
            v82,
            v83,
            v85,
            v89,
            v93,
            v96,
            v99,
            v102,
            v105,
            v108,
            v111,
            a5,
            v118,
            v120,
            v122,
            v125,
            (int)a1 + 16,
            v132[0],
            v134,
            a6,
            (int)v176,
            (int)v174,
            &v168,
            v145,
            v147);
    v31 = sub_15DC610(v26, v28, 0, 0, v29, v30, v84, v86, v90, v94, v97, v100, v103, v106, v109, v112);
    v150 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    v32 = (_QWORD *)a1[1];
    v33 = *(_QWORD *)(v31 + 16);
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    v34 = (_QWORD *)v32[7];
    if ( v34 )
    {
      v35 = *((_DWORD *)v34 - 1);
      if ( v35 == *((_DWORD *)v34 - 2) )
      {
        v71 = (3 * v35 + 1) >> 1;
        v72 = 8 * v71 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v72 || v35 >= v71 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v182, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v182);
          sub_233E40((__int64)&v182);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v137 = (3 * v35 + 1) >> 1;
        v142 = v32;
        v73 = (unsigned int *)sub_186B300(v34 - 1, v72);
        v74 = v73[1];
        v34 = v73 + 2;
        v142[7] = v73 + 2;
        *v73 = v137;
        LODWORD(v73) = v74;
        v38 = &v34[v74];
        v37 = (_DWORD)v73 + 1;
      }
      else
      {
        v36 = v35;
        v37 = v35 + 1;
        v38 = &v34[v36];
      }
    }
    else
    {
      v143 = v32;
      v81 = (_QWORD *)sub_186B270(0x18u);
      v34 = v81 + 1;
      *v81 = 2;
      v37 = 1;
      v38 = v34;
      v143[7] = v34;
    }
    *v38 = v33;
    *((_DWORD *)v34 - 1) = v37;
    v101 = *a1;
    v39 = sub_15E1A70(*a1);
    v121 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    v40 = *a1;
    v182 = 0;
    v183 = 0;
    v104 = v40;
    v184 = 1;
    v185 = 0;
    sub_182CBA0(qword_1C7F2C0, &v184);
    LODWORD(v184) = 1;
    BYTE4(v184) &= ~1u;
    sub_1674520(*(_QWORD *)v126, &v182, v25);
    v41 = sub_15E1B70(a1[3]);
    v123 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v42 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v182);
    sub_182CBA0(v42, &v184);
    v43 = *a1;
    v182 = 5;
    v183 = 0;
    v107 = v43;
    v184 = 1;
    v44 = (__int64 *)a1[1];
    v185 = 0;
    sub_182CBA0(qword_1C7F2C0, &v184);
    BYTE4(v184) &= ~1u;
    LODWORD(v184) = 1;
    v45 = sub_C527D0(v44, (__int64)&v182, v11);
    v46 = (__int64 *)a1[1];
    v178 = 4;
    v179 = 0;
    v135 = v46;
    v180 = 1;
    v181 = 0;
    sub_182CBA0(qword_1C7F2C0, &v180);
    BYTE4(v180) &= ~1u;
    LODWORD(v180) = 1;
    v47 = sub_C527D0(v135, (__int64)&v178, v10);
    v51 = sub_C4F800((__int64)v44, v47, v45, v48, v49, v50);
    v136 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    sub_25A130((char *)&v178);
    sub_25A130((char *)&v182);
    v110 = *a1;
    v52 = *(int **)(*(_QWORD *)(sub_15D1F10(v136) + 24) + 8LL);
    if ( *((_BYTE *)v52 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v53 = *v52;
    v182 = 0;
    v183 = 0;
    v184 = 1;
    v185 = 0;
    sub_182CBA0(qword_1C7F2C0, &v184);
    LODWORD(v184) = 1;
    BYTE4(v184) &= ~1u;
    v54 = sub_1674520(*(_QWORD *)v126, &v182, v53);
    v119 = v54;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    sub_25A130((char *)&v182);
    v98 = *a1;
    v55 = sub_15E1B70(a1[3]);
    v113 = v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v56 = *a1;
    v182 = 3;
    v183 = 0;
    v57 = (__int64 *)a1[1];
    v95 = v56;
    v184 = 1;
    v185 = 0;
    sub_182CBA0(qword_1C7F2C0, &v184);
    BYTE4(v184) &= ~1u;
    LODWORD(v184) = 1;
    v58 = sub_C527D0(v57, (__int64)&v182, v11);
    v59 = (__int64 *)a1[1];
    v178 = 2;
    v179 = 0;
    v91 = v59;
    v180 = 1;
    v181 = 0;
    sub_182CBA0(qword_1C7F2C0, &v180);
    LODWORD(v180) = 1;
    BYTE4(v180) &= ~1u;
    v60 = sub_C527D0(v91, (__int64)&v178, v10);
    v64 = sub_C4F800((__int64)v57, v60, v58, v61, v62, v63);
    v65 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    sub_25A130((char *)&v178);
    sub_25A130((char *)&v182);
    v92 = *a1;
    v66 = *(int **)(*(_QWORD *)(sub_15D1F10(v65) + 24) + 8LL);
    if ( *((_BYTE *)v66 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v67 = *v66;
    v182 = 0;
    v183 = 0;
    v184 = 1;
    v185 = 0;
    sub_182CBA0(qword_1C7F2C0, &v184);
    LODWORD(v184) = 1;
    BYTE4(v184) &= ~1u;
    v68 = sub_1674520(*(_QWORD *)v126, &v182, v67);
    v69 = v68;
    if ( v68 )
      ++*(_DWORD *)(v68 + 8);
    sub_25A130((char *)&v182);
    v152 = *a1;
    v70 = sub_15E1B70(a1[3]);
    v158 = (void *)v70;
    if ( v70 )
      ++*(_DWORD *)(v70 + 8);
    if ( a4 )
    {
      *(_QWORD *)v127 = *a1;
      sub_15E1B70(*a1);
      *(_QWORD *)v87 = sub_15E1B70(v127[0]);
      *(_QWORD *)v128 = *a1;
      sub_15E1A70(*a1);
      sub_15E1B70(v128[0]);
      v75 = sub_15E1B70(v128[0]);
      v76 = a1[1];
      v159 = *(_QWORD *)v87;
      if ( *(_QWORD *)v87 )
        ++*(_DWORD *)(*(_QWORD *)v87 + 8LL);
      *(_QWORD *)v129 = v75;
      sub_C516F0((_QWORD *)(v76 + 104), &v159);
      v77 = a1[1];
      v160 = *(_QWORD *)v129;
      if ( *(_QWORD *)v129 )
        ++*(_DWORD *)(*(_QWORD *)v129 + 8LL);
      sub_C516F0((_QWORD *)(v77 + 104), &v160);
      if ( !v115 )
        goto LABEL_69;
    }
    else if ( !v115 )
    {
LABEL_52:
      if ( v121 != *v139 )
      {
        sub_C4E2C0(*v139, v139[1]);
        *v139 = v121;
        if ( v121 )
          ++*(_DWORD *)(v121 + 8);
      }
LABEL_55:
      sub_C4E2C0((__int64)v158, v152);
      sub_C4E2C0(v69, v92);
      sub_C4E2C0(v65, v95);
      sub_C4E2C0(v113, v98);
      sub_C4E2C0(v119, v110);
      sub_C4E2C0(v136, v107);
      sub_C4E2C0(v123, v104);
      sub_C4E2C0(v121, v101);
      sub_C4E2C0(v150, v133);
      goto LABEL_3;
    }
    *(_QWORD *)v116 = *a1;
    sub_15E1A70(*a1);
    *(_QWORD *)v88 = *a1;
    sub_15E1A70(*a1);
    sub_15E1B70(v88[0]);
    *(_QWORD *)v117 = sub_15E1B70(v116[0]);
    *(_QWORD *)v130 = *a1;
    sub_15E1A70(*a1);
    sub_15E1B70(*a1);
    v78 = sub_15E1B70(v130[0]);
    v79 = a1[1];
    v161 = *(_QWORD *)v117;
    if ( *(_QWORD *)v117 )
      ++*(_DWORD *)(*(_QWORD *)v117 + 8LL);
    *(_QWORD *)v131 = v78;
    sub_C516F0((_QWORD *)(v79 + 104), &v161);
    v80 = a1[1];
    v178 = *(_QWORD *)v131;
    if ( *(_QWORD *)v131 )
      ++*(_DWORD *)(*(_QWORD *)v131 + 8LL);
    sub_C516F0((_QWORD *)(v80 + 104), &v178);
    if ( !a4 )
      goto LABEL_52;
LABEL_69:
    if ( *v139 != v150 )
    {
      sub_C4E2C0(*v139, v139[1]);
      *v139 = v150;
      ++*(_DWORD *)(v150 + 8);
    }
    goto LABEL_55;
  }
  v153 = 0;
  v151 = 0;
  v124 = v154;
  v140 = v176;
LABEL_3:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v140);
  sub_182CBA0(v12, v177);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v141);
  sub_182CBA0(v13, v175);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v172);
  sub_182CBA0(v14, v173);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v170);
  sub_182CBA0(v15, v171);
  if ( v153 )
  {
    v156 = *(_DWORD *)(v153 + 8);
    *(_DWORD *)(v153 + 8) = v156 - 1;
    if ( v156 == 1 )
      sub_15D7BC0(v124, v153);
  }
  if ( v151 )
  {
    v157 = *(_DWORD *)(v151 + 8);
    *(_DWORD *)(v151 + 8) = v157 - 1;
    if ( v157 == 1 )
      sub_15D7BC0(v154, v151);
  }
  if ( v11 )
  {
    v16 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v146, v11);
  }
  if ( v10 )
  {
    v16 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v144, v10);
  }
  return v149;
}

