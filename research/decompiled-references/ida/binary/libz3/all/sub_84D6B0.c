__int64 __fastcall sub_84D6B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **v3; // rbp
  char **v4; // rbx
  char **exception; // rbp
  char **v6; // rbp
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rbp
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // r9d
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 v41; // rdi
  unsigned int v42; // r15d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 i; // r12
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdi
  __int64 (*v53)(void); // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ecx
  unsigned int v57; // edx
  __int64 v58; // r15
  __int64 *v59; // rsi
  __int64 v60; // rbp
  unsigned int *v61; // r13
  bool v62; // dl
  bool v63; // al
  unsigned __int64 v64; // r13
  __int64 *v65; // rbp
  __int64 v66; // rsi
  __int64 *v67; // rbp
  unsigned __int64 v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v77; // rdi
  _QWORD *v78; // rax
  unsigned int v79; // ecx
  int v80; // edx
  char *v81; // rsi
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rbp
  unsigned int v85; // eax
  __int64 v86; // rdx
  int v87; // eax
  __int64 *v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rbp
  unsigned int v92; // eax
  __int64 v93; // rdx
  int v94; // eax
  __int64 *v95; // rdx
  unsigned __int64 v96; // rsi
  unsigned __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rbp
  __int64 v101; // rax
  __int64 v102; // rdi
  __int64 v103; // r13
  __int64 v104; // r15
  _QWORD *v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // rcx
  int v108; // eax
  __int64 *v109; // rcx
  __int64 *v110; // rbp
  unsigned __int64 v111; // r13
  __int64 v112; // rsi
  __int64 *v113; // rbp
  unsigned __int64 v114; // r13
  __int64 v115; // rsi
  __int64 v116; // rsi
  __int64 v117; // rdi
  unsigned __int64 v118; // rsi
  unsigned __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rdi
  unsigned int v128; // r13d
  unsigned int v129; // ecx
  unsigned int *v130; // rax
  __int64 v131; // rcx
  unsigned int v132; // edx
  unsigned int v133; // ecx
  unsigned int *v134; // rax
  _DWORD *v135; // rcx
  unsigned int v136; // edx
  unsigned int v137; // ecx
  unsigned int *v138; // rax
  _DWORD *v139; // rcx
  _QWORD *v140; // rdx
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  int v143; // [rsp+0h] [rbp-358h]
  int v144; // [rsp+0h] [rbp-358h]
  _QWORD *v145; // [rsp+8h] [rbp-350h]
  __m128i *v146; // [rsp+10h] [rbp-348h]
  int v147; // [rsp+10h] [rbp-348h]
  __int64 v148; // [rsp+10h] [rbp-348h]
  __int64 v149; // [rsp+18h] [rbp-340h]
  int v150; // [rsp+18h] [rbp-340h]
  unsigned int v151; // [rsp+18h] [rbp-340h]
  __int64 v152; // [rsp+20h] [rbp-338h]
  int v153; // [rsp+20h] [rbp-338h]
  _QWORD *v154; // [rsp+20h] [rbp-338h]
  __m128 *v155; // [rsp+28h] [rbp-330h]
  int v156; // [rsp+28h] [rbp-330h]
  int v157[2]; // [rsp+28h] [rbp-330h]
  __int64 v158; // [rsp+30h] [rbp-328h]
  __int64 v159; // [rsp+30h] [rbp-328h]
  _QWORD *v160; // [rsp+30h] [rbp-328h]
  void *v161; // [rsp+38h] [rbp-320h]
  void *v162; // [rsp+38h] [rbp-320h]
  bool v163; // [rsp+3Fh] [rbp-319h]
  __int64 v164; // [rsp+40h] [rbp-318h]
  __int64 v165; // [rsp+48h] [rbp-310h]
  int v166; // [rsp+68h] [rbp-2F0h]
  unsigned int v167; // [rsp+6Ch] [rbp-2ECh]
  unsigned int v168; // [rsp+6Ch] [rbp-2ECh]
  unsigned int v169; // [rsp+6Ch] [rbp-2ECh]
  int v170[2]; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 v171; // [rsp+98h] [rbp-2C0h]
  __m128 v172; // [rsp+A0h] [rbp-2B8h] BYREF
  int v173[2]; // [rsp+B0h] [rbp-2A8h] BYREF
  __int64 v174; // [rsp+B8h] [rbp-2A0h] BYREF
  void *ptr; // [rsp+C0h] [rbp-298h]
  int v176[2]; // [rsp+D0h] [rbp-288h] BYREF
  __int64 v177; // [rsp+D8h] [rbp-280h]
  _QWORD v178[19]; // [rsp+F0h] [rbp-268h] BYREF
  int v179; // [rsp+188h] [rbp-1D0h]
  __int64 v180; // [rsp+190h] [rbp-1C8h]
  _QWORD v181[19]; // [rsp+198h] [rbp-1C0h] BYREF
  int v182; // [rsp+230h] [rbp-128h]
  _QWORD v183[18]; // [rsp+238h] [rbp-120h] BYREF
  int v184; // [rsp+2C8h] [rbp-90h]
  __int64 v185; // [rsp+2D0h] [rbp-88h]
  __int64 v186; // [rsp+2D8h] [rbp-80h]
  __int64 v187; // [rsp+2E0h] [rbp-78h]
  __int64 v188; // [rsp+2E8h] [rbp-70h]
  __int64 v189; // [rsp+2F0h] [rbp-68h]
  __int64 v190; // [rsp+2F8h] [rbp-60h]
  __int64 v191; // [rsp+300h] [rbp-58h]
  _BYTE v192[80]; // [rsp+308h] [rbp-50h] BYREF

  v9 = (_QWORD *)a3[8];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a3[7];
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_8:
    v9 = (_QWORD *)a3[8];
    if ( v9 )
LABEL_9:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = *(_QWORD *)(a1 + 16);
  v145 = v178;
  sub_1584DD0(v178, v14, 0);
  v178[0] = &off_1C4CA60;
  v178[18] = v192;
  v179 = 0;
  v180 = 0;
  sub_1584DD0(v181, v14, 0);
  v181[18] = 0;
  v182 = 0;
  v181[0] = &off_1C61DB8;
  sub_1584DD0(v183, v14, 0);
  v15 = a3[9];
  v184 = 0;
  v185 = 0;
  v186 = v14;
  v183[0] = &off_1C61DE0;
  v187 = 0;
  v188 = v14;
  v189 = 0;
  v190 = v14;
  v191 = 0;
  v178[0] = &off_1C4CA80;
  v192[8] = 1;
  if ( v15 )
  {
    v152 = v15 + 16LL * *(unsigned int *)(v15 - 4);
    if ( v15 != v152 )
    {
      v146 = (__m128i *)v170;
      v149 = a1 + 32;
      v155 = &v172;
      while ( 1 )
      {
        sub_842CF0(v146, v149, *(_QWORD *)v15, *(_DWORD *)(v15 + 8));
        v29 = *(_QWORD *)v170;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL) == *(_QWORD *)v170 )
        {
          if ( *(_QWORD *)v170 )
          {
            v77 = v171;
            v13 = (*(_DWORD *)(*(_QWORD *)v170 + 8LL))-- == 1;
            if ( v13 )
              sub_15D7BC0(v77, v29);
          }
LABEL_28:
          v15 += 16;
          if ( v152 == v15 )
            break;
        }
        else
        {
          v30 = a3[1];
          if ( v30 )
            v31 = *(_DWORD *)(v30 - 4);
          else
            v31 = 0;
          sub_157BE40(
            (int)v155,
            (int)v145,
            v170[0],
            v31,
            v30,
            v28,
            v143,
            (__int64)v145,
            (int)v146,
            v149,
            v152,
            (int)v155,
            v158,
            v161);
          v32 = *(_QWORD *)(a1 + 16);
          v33 = *(_QWORD *)(a1 + 176);
          *(_QWORD *)v173 = 0;
          v174 = v32;
          if ( !(unsigned __int8)sub_1373520(v33, *(_QWORD *)v170, v173, 1) )
          {
            v116 = *(_QWORD *)v173;
            if ( *(_QWORD *)v173 )
            {
              v117 = v174;
              v13 = (*(_DWORD *)(*(_QWORD *)v173 + 8LL))-- == 1;
              if ( v13 )
                sub_15D7BC0(v117, v116);
            }
            v118 = v172.m128_u64[0];
            if ( v172.m128_u64[0] )
            {
              v119 = v172.m128_u64[1];
              v13 = (*(_DWORD *)(v172.m128_u64[0] + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v119, v118);
            }
            v120 = *(_QWORD *)v170;
            if ( *(_QWORD *)v170 )
            {
              v121 = v171;
              v13 = (*(_DWORD *)(*(_QWORD *)v170 + 8LL))-- == 1;
              if ( v13 )
                sub_15D7BC0(v121, v120);
            }
            v178[0] = &off_1C4CA60;
            if ( v191 )
              sub_186B220((void *)(v191 - 8));
            v122 = v189;
            if ( v189 )
            {
              v123 = v190;
              v13 = (*(_DWORD *)(v189 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v123, v122);
            }
            v124 = v187;
            if ( v187 )
            {
              v125 = v188;
              v13 = (*(_DWORD *)(v187 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v125, v124);
            }
            v126 = v185;
            if ( v185 )
            {
              v127 = v186;
              v13 = (*(_DWORD *)(v185 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v127, v126);
            }
            v183[0] = &qword_1C637E8;
            sub_15841B0(v183);
            v181[0] = &qword_1C637E8;
            sub_15841B0(v181);
            if ( v180 )
              goto LABEL_91;
            return sub_15841B0(v145);
          }
          v35 = a3[1];
          if ( v35 )
            v36 = *(_DWORD *)(v35 - 4);
          else
            v36 = 0;
          sub_157BE40(
            (int)v176,
            (int)v145,
            v173[0],
            v36,
            v35,
            v34,
            v144,
            (__int64)v145,
            v147,
            v150,
            v153,
            v156,
            v159,
            v162);
          v37 = *(_QWORD *)v173;
          v38 = *(_QWORD *)v176;
          *(_QWORD *)v176 = *(_QWORD *)v173;
          *(_QWORD *)v173 = v38;
          if ( *(_QWORD *)v176 )
          {
            v39 = v177;
            v13 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v13 )
            {
              sub_15D7BC0(v39, v37);
              v38 = *(_QWORD *)v173;
            }
          }
          v40 = *(_QWORD *)(a1 + 16);
          v41 = *(_QWORD *)(a1 + 192);
          if ( v38 )
          {
            ++*(_DWORD *)(v38 + 8);
            sub_E5EBF0(v41, v38);
            v13 = (*(_DWORD *)(v38 + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v40, v38);
          }
          else
          {
            sub_E5EBF0(v41, 0);
          }
          v16 = v172.m128_u64[0];
          if ( v172.m128_u64[0] )
            ++*(_DWORD *)(v172.m128_u64[0] + 8);
          v17 = (_QWORD *)a3[8];
          if ( v17 )
          {
            v18 = *((_DWORD *)v17 - 1);
            if ( v18 == *((_DWORD *)v17 - 2) )
            {
              v42 = (3 * v18 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * v18 + 8 >= (unsigned int)v43 || v18 >= v42 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v176, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v176);
                sub_233E40((__int64)v176);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v44 = (unsigned int *)sub_186B300(v17 - 1, v43);
              v45 = v44[1];
              v17 = v44 + 2;
              *v44 = v42;
              a3[8] = v44 + 2;
              LODWORD(v44) = v45;
              v21 = &v17[v45];
              v20 = (_DWORD)v44 + 1;
            }
            else
            {
              v19 = v18;
              v20 = v18 + 1;
              v21 = &v17[v19];
            }
          }
          else
          {
            v78 = (_QWORD *)sub_186B270(0x18u);
            v17 = v78 + 1;
            *v78 = 2;
            v20 = 1;
            a3[8] = v17;
            v21 = v17;
          }
          *v21 = v16;
          v22 = *(_QWORD *)v173;
          *((_DWORD *)v17 - 1) = v20;
          if ( v22 )
          {
            v23 = v174;
            v13 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v23, v22);
          }
          v24 = v172.m128_u64[0];
          if ( v172.m128_u64[0] )
          {
            v25 = v172.m128_u64[1];
            v13 = (*(_DWORD *)(v172.m128_u64[0] + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v25, v24);
          }
          v26 = *(_QWORD *)v170;
          if ( !*(_QWORD *)v170 )
            goto LABEL_28;
          v27 = v171;
          v13 = (*(_DWORD *)(*(_QWORD *)v170 + 8LL))-- == 1;
          if ( !v13 )
            goto LABEL_28;
          sub_15D7BC0(v27, v26);
          v15 += 16;
          if ( v152 == v15 )
            break;
        }
      }
    }
  }
  v46 = a3[1];
  if ( !v46 )
    goto LABEL_81;
  v47 = *(unsigned int *)(v46 - 4);
  if ( !(_DWORD)v47 )
    goto LABEL_81;
  v165 = v47;
  for ( i = 0; i != v165; ++i )
  {
LABEL_47:
    v49 = a3[2];
    if ( !v49 || (unsigned int)i >= *(_DWORD *)(v49 - 4) || !*(_BYTE *)(v49 + i) )
      continue;
    v50 = a3[1];
    v51 = v50 ? *(_DWORD *)(v50 - 4) : 0;
    *(_QWORD *)v157 = sub_15D1F10(*(_QWORD *)(v50 + 8LL * (unsigned int)(v51 - i - 1)));
    v52 = *(_QWORD *)a1;
    v164 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v170 = v164;
    v53 = *(__int64 (**)(void))(*(_QWORD *)v52 + 440LL);
    if ( (char *)v53 == (char *)sub_79F010 )
    {
      v54 = v52 + 1592;
      v148 = v52 + 1592;
    }
    else
    {
      v54 = v53();
      v148 = v54;
    }
    v55 = *(_QWORD *)(v54 + 176);
    if ( !v55 )
      continue;
    v56 = *(_DWORD *)(a1 + 248);
    v57 = *(_DWORD *)(v55 - 4);
    v174 = 0;
    ptr = nullptr;
    v166 = v56;
    v151 = v57;
    v163 = v57 != 0 && v56 != 0;
    if ( !v163 )
      continue;
    v160 = nullptr;
    v58 = 0;
    v154 = nullptr;
    while ( 1 )
    {
      v59 = *(__int64 **)(v55 + 8 * v58);
      v60 = *v59;
      v61 = (unsigned int *)sub_792660(*(_QWORD *)a1, (__int64)v59);
      if ( !v61 || *(_QWORD *)v157 != sub_15D1F10(v60) || (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 16), v60) )
      {
LABEL_60:
        v62 = v163;
        goto LABEL_61;
      }
      v79 = *v61;
      if ( *v61 < (unsigned int)v174 )
      {
        v81 = (char *)ptr + 4 * (v79 >> 5);
        v82 = *(_DWORD *)v81;
        v80 = 1 << v79;
        if ( ((1 << v79) & *(_DWORD *)v81) != 0 )
          goto LABEL_60;
      }
      else
      {
        v167 = *v61;
        sub_186B510(&v174, v79 + 1, 0);
        v80 = 1 << v167;
        v81 = (char *)ptr + 4 * (v167 >> 5);
        v82 = *(_DWORD *)v81;
      }
      *(_DWORD *)v81 = v80 | v82;
      sub_848420(&v172, a1, (__int64)v61);
      v83 = sub_15E1B70(*(_QWORD *)(a1 + 16));
      v84 = v83;
      if ( v83 )
        ++*(_DWORD *)(v83 + 8);
      if ( v154 )
      {
        v85 = *((_DWORD *)v154 - 1);
        if ( v85 == *((_DWORD *)v154 - 2) )
        {
          v136 = (3 * v85 + 1) >> 1;
          v137 = 8 * v136 + 8;
          if ( 8 * v85 + 8 >= v137 || v85 >= v136 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v176, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v176);
            sub_233E40((__int64)v176);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v169 = (3 * v85 + 1) >> 1;
          v138 = (unsigned int *)sub_186B300(v154 - 1, v137);
          v139 = v138 + 2;
          v154 = v138 + 2;
          *v138 = v169;
          LODWORD(v138) = v138[1];
          v88 = (__int64 *)&v139[2 * (unsigned int)v138];
          v87 = (_DWORD)v138 + 1;
        }
        else
        {
          v86 = v85;
          v87 = v85 + 1;
          v88 = &v154[v86];
        }
      }
      else
      {
        v142 = (_QWORD *)sub_186B270(0x18u);
        *v142 = 2;
        v154 = v142 + 1;
        v88 = v142 + 1;
        v87 = 1;
      }
      v89 = *(_QWORD *)(a1 + 16);
      *v88 = v84;
      *((_DWORD *)v154 - 1) = v87;
      v90 = sub_15E1B70(v89);
      v91 = v90;
      if ( v90 )
        ++*(_DWORD *)(v90 + 8);
      if ( v160 )
      {
        v92 = *((_DWORD *)v160 - 1);
        if ( v92 == *((_DWORD *)v160 - 2) )
        {
          v132 = (3 * v92 + 1) >> 1;
          v133 = 8 * v132 + 8;
          if ( 8 * v92 + 8 >= v133 || v92 >= v132 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v176, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v176);
            sub_233E40((__int64)v176);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v168 = (3 * v92 + 1) >> 1;
          v134 = (unsigned int *)sub_186B300(v160 - 1, v133);
          v135 = v134 + 2;
          v160 = v134 + 2;
          *v134 = v168;
          LODWORD(v134) = v134[1];
          v95 = (__int64 *)&v135[2 * (unsigned int)v134];
          v94 = (_DWORD)v134 + 1;
        }
        else
        {
          v93 = v92;
          v94 = v92 + 1;
          v95 = &v160[v93];
        }
      }
      else
      {
        v141 = (_QWORD *)sub_186B270(0x18u);
        *v141 = 2;
        v160 = v141 + 1;
        v95 = v141 + 1;
        v94 = 1;
      }
      *v95 = v91;
      v96 = v172.m128_u64[0];
      --v166;
      *((_DWORD *)v160 - 1) = v94;
      if ( v96 )
      {
        v97 = v172.m128_u64[1];
        v13 = (*(_DWORD *)(v96 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(v97, v96);
      }
      v62 = v166 != 0;
LABEL_61:
      v63 = (int)v58++ + 1 < v151;
      if ( !v62 || !v63 )
        break;
      v55 = *(_QWORD *)(v148 + 176);
    }
    if ( !v154 )
    {
      if ( ptr )
        sub_186B220(ptr);
      if ( !v160 )
        continue;
      v64 = (unsigned __int64)&v160[*((unsigned int *)v160 - 1)];
      if ( (unsigned __int64)v160 >= v64 )
      {
        sub_186B220(v160 - 1);
        continue;
      }
      goto LABEL_67;
    }
    if ( *((_DWORD *)v154 - 1) )
    {
      if ( v160 )
        v98 = *((unsigned int *)v160 - 1);
      else
        v98 = 0;
      v99 = sub_15EC240(v164, v98);
      v100 = v99;
      if ( v99 )
        ++*(_DWORD *)(v99 + 8);
      v101 = sub_15EC240(v164, *((unsigned int *)v154 - 1));
      v102 = *(_QWORD *)(a1 + 192);
      v103 = *(_QWORD *)(a1 + 16);
      v104 = v101;
      if ( v101 )
      {
        ++*(_DWORD *)(v101 + 8);
        if ( v100 )
          goto LABEL_122;
        sub_E5EBF0(v102, 0);
LABEL_125:
        ++*(_DWORD *)(v104 + 8);
      }
      else if ( v100 )
      {
LABEL_122:
        ++*(_DWORD *)(v100 + 8);
        sub_E5EBF0(v102, v100);
        v13 = (*(_DWORD *)(v100 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(v103, v100);
        if ( v104 )
          goto LABEL_125;
      }
      else
      {
        sub_E5EBF0(v102, 0);
      }
      v105 = (_QWORD *)a3[8];
      if ( v105 )
      {
        v106 = *((_DWORD *)v105 - 1);
        if ( v106 == *((_DWORD *)v105 - 2) )
        {
          v128 = (3 * v106 + 1) >> 1;
          v129 = 8 * v128 + 8;
          if ( 8 * v106 + 8 >= v129 || v106 >= v128 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v176, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v176);
            sub_233E40((__int64)v176);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v130 = (unsigned int *)sub_186B300(v105 - 1, v129);
          v131 = v130[1];
          v105 = v130 + 2;
          *v130 = v128;
          a3[8] = v130 + 2;
          LODWORD(v130) = v131;
          v109 = &v105[v131];
          v108 = (_DWORD)v130 + 1;
        }
        else
        {
          v107 = v106;
          v108 = v106 + 1;
          v109 = &v105[v107];
        }
      }
      else
      {
        v140 = (_QWORD *)sub_186B270(0x18u);
        *v140 = 2;
        v108 = 1;
        v105 = v140 + 1;
        a3[8] = v105;
        v109 = v105;
      }
      *v109 = v104;
      *((_DWORD *)v105 - 1) = v108;
      if ( v104 )
      {
        v13 = (*(_DWORD *)(v104 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(v164, v104);
      }
      if ( v100 )
      {
        v13 = (*(_DWORD *)(v100 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(v164, v100);
      }
      if ( ptr )
        sub_186B220(ptr);
      if ( v160 )
      {
        v110 = v160;
        v111 = (unsigned __int64)&v160[*((unsigned int *)v160 - 1)];
        if ( (unsigned __int64)v160 < v111 )
        {
          do
          {
            while ( 1 )
            {
              v112 = *v110;
              if ( *v110 )
              {
                v13 = (*(_DWORD *)(v112 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( (unsigned __int64)++v110 >= v111 )
                goto LABEL_144;
            }
            ++v110;
            sub_15D7BC0(v164, v112);
          }
          while ( (unsigned __int64)v110 < v111 );
        }
LABEL_144:
        sub_186B220(v160 - 1);
      }
      v113 = v154;
      v114 = (unsigned __int64)&v154[*((unsigned int *)v154 - 1)];
      if ( (unsigned __int64)v154 < v114 )
      {
        do
        {
          while ( 1 )
          {
            v115 = *v113;
            if ( *v113 )
            {
              v13 = (*(_DWORD *)(v115 + 8))-- == 1;
              if ( v13 )
                break;
            }
            if ( (unsigned __int64)++v113 >= v114 )
              goto LABEL_151;
          }
          ++v113;
          sub_15D7BC0(v164, v115);
        }
        while ( (unsigned __int64)v113 < v114 );
      }
LABEL_151:
      ++i;
      sub_186B220(v154 - 1);
      if ( i == v165 )
        break;
      goto LABEL_47;
    }
    if ( !ptr )
    {
      if ( !v160 )
        goto LABEL_79;
LABEL_66:
      v64 = (unsigned __int64)&v160[*((unsigned int *)v160 - 1)];
      if ( (unsigned __int64)v160 >= v64 )
      {
        sub_186B220(v160 - 1);
        goto LABEL_73;
      }
LABEL_67:
      v65 = v160;
      do
      {
        while ( 1 )
        {
          v66 = *v65;
          if ( *v65 )
          {
            v13 = (*(_DWORD *)(v66 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v65 >= v64 )
            goto LABEL_72;
        }
        ++v65;
        sub_15D7BC0(v164, v66);
      }
      while ( (unsigned __int64)v65 < v64 );
LABEL_72:
      sub_186B220(v160 - 1);
      if ( v154 )
        goto LABEL_73;
      continue;
    }
    sub_186B220(ptr);
    if ( v160 )
      goto LABEL_66;
LABEL_73:
    v67 = v154;
    v68 = (unsigned __int64)&v154[*((unsigned int *)v154 - 1)];
    if ( (unsigned __int64)v154 < v68 )
    {
      do
      {
        while ( 1 )
        {
          v69 = *v67;
          if ( *v67 )
          {
            v13 = (*(_DWORD *)(v69 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v67 >= v68 )
            goto LABEL_79;
        }
        ++v67;
        sub_15D7BC0(v164, v69);
      }
      while ( (unsigned __int64)v67 < v68 );
    }
LABEL_79:
    sub_186B220(v154 - 1);
  }
LABEL_81:
  v178[0] = &off_1C4CA60;
  if ( v191 )
    sub_186B220((void *)(v191 - 8));
  v70 = v189;
  if ( v189 && (v71 = v190, v13 = *(_DWORD *)(v189 + 8) == 1, --*(_DWORD *)(v189 + 8), v13) )
  {
    sub_15D7BC0(v71, v70);
    v72 = v187;
    if ( !v187 )
      goto LABEL_87;
LABEL_86:
    v73 = v188;
    v13 = (*(_DWORD *)(v72 + 8))-- == 1;
    if ( !v13 )
      goto LABEL_87;
    sub_15D7BC0(v73, v72);
    v74 = v185;
    if ( v185 )
    {
LABEL_88:
      v75 = v186;
      v13 = (*(_DWORD *)(v74 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v75, v74);
    }
  }
  else
  {
    v72 = v187;
    if ( v187 )
      goto LABEL_86;
LABEL_87:
    v74 = v185;
    if ( v185 )
      goto LABEL_88;
  }
  v183[0] = &qword_1C637E8;
  sub_15841B0(v183);
  v181[0] = &qword_1C637E8;
  sub_15841B0(v181);
  if ( v180 )
LABEL_91:
    sub_186B220((void *)(v180 - 8));
  return sub_15841B0(v145);
}

