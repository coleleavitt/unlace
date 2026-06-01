void __fastcall sub_17235E0(__int64 *a1, __int64 a2, __int64 *a3, bool *a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  const __m128i *v13; // rcx
  __int64 (*v14)(void); // rax
  __int64 v15; // rdx
  char *v16; // rdx
  char *v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // r9
  void **v20; // r14
  __int64 *v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rax
  char *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r12
  __int64 v34; // rsi
  __m128 v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  char *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  char *v60; // rax
  char *v61; // rdi
  char *v62; // rdi
  char *v63; // rax
  __int64 *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdi
  __int64 v70; // rbp
  _QWORD *m128_u64; // rsi
  __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  char *v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdi
  __int64 v82; // rbp
  unsigned int *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int64 v87; // rax
  char *v88; // rdi
  char *v89; // rcx
  char *v90; // rax
  __int64 *v91; // r14
  _QWORD *v92; // r15
  __int64 v93; // rax
  bool v94; // dl
  char *v95; // rdi
  __int64 v96; // r9
  __int64 v97; // r8
  __int64 *v98; // rsi
  char *v99; // rcx
  char *v100; // rax
  __int64 v101; // rax
  bool v102; // zf
  unsigned __int64 v103; // rax
  unsigned int *v104; // rax
  __int64 v105; // rdx
  char *v106; // rbp
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  _QWORD *v111; // rsi
  unsigned __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // rax
  char **v116; // r14
  unsigned __int64 v117; // rax
  const void ***v118; // rsi
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  char *v127; // r14
  unsigned __int64 v128; // rax
  char **v129; // r14
  unsigned __int64 v130; // rax
  unsigned __int64 *v131; // rsi
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  char *v140; // r14
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rsi
  __int64 v143; // rdi
  unsigned __int64 *v144; // rdx
  char *v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  unsigned __int64 v148; // r14
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  unsigned __int64 v152; // rax
  unsigned int v153; // eax
  unsigned __int64 v154; // r14
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  unsigned __int64 v158; // rax
  unsigned int v159; // eax
  unsigned __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // [rsp-10h] [rbp-468h]
  __int64 *v164; // [rsp-8h] [rbp-460h]
  __m128 *v165; // [rsp+0h] [rbp-458h] BYREF
  const __m128i *v166; // [rsp+8h] [rbp-450h]
  unsigned int *v167; // [rsp+10h] [rbp-448h]
  int *v168; // [rsp+18h] [rbp-440h] BYREF
  void **p_ptr; // [rsp+20h] [rbp-438h]
  __int64 *v170; // [rsp+28h] [rbp-430h]
  const void ***v171; // [rsp+30h] [rbp-428h] BYREF
  const void ***v172; // [rsp+38h] [rbp-420h]
  __m128i *v173; // [rsp+40h] [rbp-418h]
  __int64 v174; // [rsp+48h] [rbp-410h]
  _QWORD *v175; // [rsp+50h] [rbp-408h]
  __int64 v176; // [rsp+58h] [rbp-400h] BYREF
  bool v177; // [rsp+67h] [rbp-3F1h] BYREF
  unsigned __int64 v178; // [rsp+68h] [rbp-3F0h] BYREF
  _QWORD v179[2]; // [rsp+70h] [rbp-3E8h] BYREF
  __m128 v180; // [rsp+80h] [rbp-3D8h] BYREF
  __int64 v181; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 *v182; // [rsp+98h] [rbp-3C0h]
  _QWORD *v183; // [rsp+A0h] [rbp-3B8h]
  void *v184[2]; // [rsp+B0h] [rbp-3A8h] BYREF
  _BYTE v185[16]; // [rsp+C0h] [rbp-398h] BYREF
  __m128i v186; // [rsp+D0h] [rbp-388h] BYREF
  _QWORD *v187; // [rsp+E0h] [rbp-378h]
  __int64 *v188; // [rsp+E8h] [rbp-370h]
  __int64 *v189; // [rsp+F0h] [rbp-368h]
  const void **v190[4]; // [rsp+100h] [rbp-358h] BYREF
  __int16 v191; // [rsp+120h] [rbp-338h]
  void *ptr; // [rsp+130h] [rbp-328h] BYREF
  __int64 v193; // [rsp+138h] [rbp-320h]
  int v194; // [rsp+140h] [rbp-318h]
  char v195; // [rsp+144h] [rbp-314h]
  char v196; // [rsp+148h] [rbp-310h] BYREF
  void *v197; // [rsp+170h] [rbp-2E8h] BYREF
  __int64 v198; // [rsp+178h] [rbp-2E0h]
  __int64 v199; // [rsp+180h] [rbp-2D8h]
  __int64 v200; // [rsp+188h] [rbp-2D0h]
  __int64 v201; // [rsp+190h] [rbp-2C8h]
  char v202; // [rsp+1C8h] [rbp-290h]
  char *v203; // [rsp+1D0h] [rbp-288h]
  __int64 v204; // [rsp+1D8h] [rbp-280h]
  int v205; // [rsp+1E0h] [rbp-278h]
  char v206; // [rsp+1E4h] [rbp-274h]
  char v207; // [rsp+1E8h] [rbp-270h] BYREF
  __int64 v208; // [rsp+230h] [rbp-228h] BYREF
  __int64 v209; // [rsp+238h] [rbp-220h]
  char **v210; // [rsp+2E8h] [rbp-170h]
  __int64 v211[40]; // [rsp+318h] [rbp-140h] BYREF

  v176 = a2;
  if ( !a2 )
    return;
  v7 = *a1;
  v165 = (__m128 *)a4;
  v170 = a3;
  sub_1CB44B0(v7, &v176);
  v9 = v176;
  if ( (*(_BYTE *)(v176 + 28) & 0x7F) != 0x26 )
    return;
  v10 = (_QWORD *)a1[1];
  LODWORD(v197) = 21;
  v167 = (unsigned int *)&v197;
  BYTE4(v197) = 0;
  v198 = 0;
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v203 = &v207;
  v11 = *v10;
  v202 = 0;
  v12 = *(__int64 (**)(void))(v11 + 48);
  v206 = 1;
  v204 = 8;
  v205 = 0;
  if ( (char *)v12 == (char *)sub_15A1860 )
  {
    v13 = (const __m128i *)(v10 + 3);
  }
  else
  {
    v162 = v12();
    v10 = (_QWORD *)a1[1];
    v13 = (const __m128i *)v162;
    v11 = *v10;
  }
  v14 = *(__int64 (**)(void))(v11 + 40);
  if ( (char *)v14 == (char *)sub_15A1850 )
  {
    v15 = v10[6];
  }
  else
  {
    v166 = v13;
    v161 = v14();
    v13 = v166;
    v15 = v161;
  }
  v168 = (int *)&v208;
  sub_16FF270((__int64)&v208, *a1, v15, (__int64)v13, v167, v8, 0);
  sub_17038E0((__int64)v167);
  sub_16FF160((__int64)v211, (std::__detail::_List_node_base *)v211);
  v193 = 4;
  p_ptr = &ptr;
  ptr = &v196;
  v194 = 0;
  v195 = 1;
  v197 = v167 + 6;
  v198 = 4;
  LODWORD(v199) = 0;
  BYTE4(v199) = 1;
  v18 = v163;
  v19 = v164;
  if ( (_DWORD)v165 )
  {
    v20 = p_ptr;
    v21 = v170;
    v22 = (__int64)&v170[(unsigned int)((_DWORD)v165 - 1) + 1];
    while ( 1 )
    {
      v23 = (*(__int64 *)*v21 >> 1) & 3;
      if ( ((*(__int64 *)*v21 >> 1) & 3) == 0 )
        break;
      v142 = *(_QWORD *)*v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v23 != 1 )
      {
        if ( v23 != 2 )
          goto LABEL_163;
        v142 = *(_QWORD *)(*(_QWORD *)(v142 + 56) + 8LL * *(unsigned int *)(v142 + 64) - 8);
      }
LABEL_138:
      if ( v195 )
      {
        v17 = (char *)ptr;
        v18 = HIDWORD(v193);
        v143 = 8LL * HIDWORD(v193);
        v144 = (unsigned __int64 *)((char *)ptr + v143);
        if ( ptr != (char *)ptr + v143 )
        {
          v145 = (char *)ptr;
          if ( v142 == *(_QWORD *)ptr )
            goto LABEL_146;
          while ( 1 )
          {
            v145 += 8;
            if ( v144 == (unsigned __int64 *)v145 )
              break;
            if ( v142 == *(_QWORD *)v145 )
              goto LABEL_146;
          }
        }
        if ( HIDWORD(v193) < (unsigned int)v193 )
        {
          v18 = (unsigned int)++HIDWORD(v193);
          *v144 = v142;
          v17 = (char *)ptr;
          v145 = (char *)ptr + v143;
LABEL_146:
          v16 = &v17[8 * HIDWORD(v193)];
          goto LABEL_147;
        }
      }
      v145 = (char *)sub_2236760(v20, v142);
      v17 = (char *)ptr;
      if ( v195 )
        goto LABEL_146;
      v16 = (char *)ptr + 8 * (unsigned int)v193;
LABEL_147:
      if ( v16 == v145 || (v17 = (char *)(*(_QWORD *)v145 + 2LL), (unsigned __int64)v17 > 1) )
      {
LABEL_18:
        if ( (__int64 *)v22 == ++v21 )
          goto LABEL_19;
      }
      else
      {
        while ( 1 )
        {
          v145 += 8;
          if ( v16 == v145 )
            break;
          if ( *(_QWORD *)v145 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_18;
        }
        if ( (__int64 *)v22 == ++v21 )
          goto LABEL_19;
      }
    }
    if ( (*(_BYTE *)(*v21 + 28) & 1) == 0 )
    {
      sub_168B6C0((__int64)a1);
      v24 = sub_B98AD0(*v21);
      v25 = (char *)sub_1703870((__int64)v167, *(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL]);
      v16 = (char *)v197;
      if ( BYTE4(v199) )
        v17 = (char *)v197 + 8 * HIDWORD(v198);
      else
        v17 = (char *)v197 + 8 * (unsigned int)v198;
      if ( v25 != v17 && *(_QWORD *)v25 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v26 = v25 + 8;
        do
        {
          v16 = v26;
          if ( v17 == v26 )
            break;
          v26 += 8;
        }
        while ( *(_QWORD *)v16 >= 0xFFFFFFFFFFFFFFFELL );
      }
      goto LABEL_18;
    }
LABEL_163:
    v142 = 0;
    goto LABEL_138;
  }
LABEL_19:
  v27 = sub_16FEC70(*(_QWORD **)(*a1 + 240), *(_QWORD **)(*a1 + 248), (__int64)v16, (__int64)v17, v18, v19);
  v177 = v165 == nullptr;
  v179[0] = v27;
  v179[1] = v28;
  v29 = *(_QWORD *)(sub_B8C1B0(v9 + 72) + 16);
  v33 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v29 & 4) != 0 )
    v33 = (_QWORD *)*v33;
  if ( !v33 )
  {
    v182 = a1;
    v183 = v179;
    v165 = (__m128 *)&v177;
    v181 = (__int64)v168;
    v187 = v179;
    v4 = _mm_loadh_ps((const double *)&v165);
    v165 = &v180;
    v180 = v4;
    v188 = a1;
    v5 = _mm_loadh_ps((const double *)&v168);
    v189 = &v181;
    v186 = (__m128i)v5;
    BUG();
  }
  v182 = a1;
  v166 = (const __m128i *)v179;
  v171 = (const void ***)&v177;
  v183 = v179;
  v187 = v179;
  v34 = v33[5];
  v35 = _mm_loadh_ps((const double *)&v171);
  v171 = (const void ***)&v180;
  v180 = v35;
  v181 = (__int64)v168;
  v36 = (__m128i)_mm_loadh_ps((const double *)&v168);
  v188 = a1;
  v186 = v36;
  v189 = &v181;
  sub_7052B0((__int64 *)(v34 + 96), v34, (__int64)v168, v30, v31, v32);
  v41 = v33[8];
  if ( (*(_BYTE *)(v41 + 24) & 1) != 0 )
    v42 = sub_B96980(v41);
  else
    v42 = *(_QWORD *)(v41 + 24);
  sub_7052B0((__int64 *)(v33[5] + 96LL), v33[5], v37, v38, v39, v40);
  v43 = v42 + 24LL * *(unsigned int *)(v33[8] + 16LL);
  sub_7052B0((__int64 *)(v33[5] + 96LL), v33[5], v44, v45, v46, v47);
  v52 = v33[8];
  if ( (*(_BYTE *)(v52 + 24) & 1) != 0 )
    v53 = sub_B96980(v52);
  else
    v53 = *(_QWORD *)(v52 + 24);
  if ( v43 != v53 )
  {
    v174 = (__int64)v33;
    v171 = v190;
    v54 = (__int64)&v186;
    v172 = (const void ***)&v186;
    v173 = (__m128i *)&v170[(_QWORD)v165 - 1];
    while ( 1 )
    {
      sub_168B6C0((__int64)a1);
      v58 = *(_QWORD *)(**(_QWORD **)(v53 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v58 + 8) & 0xF) != 0 )
        v58 = sub_F64F00(**(_QWORD **)(v53 + 16), v54, v55, v56, v57);
      v48 = BYTE4(v199);
      v59 = *(_QWORD *)&byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL];
      if ( BYTE4(v199) )
      {
        v60 = (char *)v197;
        v51 = HIDWORD(v198);
        v50 = 8LL * HIDWORD(v198);
        v61 = (char *)v197 + v50;
        if ( v197 != (char *)v197 + v50 )
        {
          v49 = (char *)v197;
          if ( *(_QWORD *)v197 == v59 )
          {
LABEL_162:
            v48 = 0;
            goto LABEL_38;
          }
          while ( 1 )
          {
            v49 += 8;
            if ( v61 == v49 )
              break;
            if ( v59 == *(_QWORD *)v49 )
              goto LABEL_162;
          }
        }
        if ( HIDWORD(v198) < (unsigned int)v198 )
        {
          v51 = (unsigned int)++HIDWORD(v198);
          *(_QWORD *)v61 = v59;
          v60 = (char *)v197;
          v49 = (char *)v197 + v50;
LABEL_38:
          v54 = HIDWORD(v198);
          v62 = &v60[8 * HIDWORD(v198)];
          goto LABEL_39;
        }
      }
      v49 = (char *)sub_2236760(v167, v59);
      v60 = (char *)v197;
      if ( BYTE4(v199) )
        goto LABEL_38;
      v54 = (unsigned int)v198;
      v62 = (char *)v197 + 8 * (unsigned int)v198;
LABEL_39:
      if ( v62 != v49 && *(_QWORD *)v49 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v49 += 8;
        do
        {
          v63 = v49;
          if ( v49 == v62 )
            break;
          v49 += 8;
        }
        while ( *(_QWORD *)v63 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( (_BYTE)v48 )
      {
        v129 = v210;
        v130 = *(_QWORD *)(**(_QWORD **)(v53 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v130 + 8) & 0xF) != 0 )
          v130 = sub_F64F00(**(_QWORD **)(v53 + 16), v54, v48, (__int64)v49, v50);
        v178 = v130 & 0xFFFFFFFFFFFFFFF0LL;
        sub_F785A0((__int64)v184, &v178, v166);
        v131 = (unsigned __int64 *)v171;
        v190[0] = (const void **)v184;
        v191 = 260;
        v140 = sub_15A4EB0(v129, v171, v132, v133, v134, v135);
        if ( v184[0] != v185 )
          operator delete(v184[0]);
        v141 = *(_QWORD *)(**(_QWORD **)(v53 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v141 + 8) & 0xF) != 0 )
          v141 = sub_F64F00(**(_QWORD **)(v53 + 16), (__int64)v131, v136, v137, v138);
        v54 = (__int64)sub_F63270(*(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v131, v136, v137, v138, v139);
        sub_17230E0((__int64)v172, v54, !v177 ? 35 : 7, (__int64)v140, 0, v36);
        v177 = 0;
      }
      else
      {
        if ( v165 )
        {
          v64 = (__int64 *)v173;
          if ( (*(_BYTE *)v173->m128i_i64[0] & 6) == 0 && (*(_BYTE *)(v173->m128i_i64[0] + 28) & 1) == 0 )
          {
            sub_168B6C0((__int64)a1);
            v154 = sub_B98AD0(*v64) & 0xFFFFFFFFFFFFFFF0LL;
            v158 = sub_16FFCE0(*(__int64 **)(v53 + 16), v54, v155, v156, v157);
            v54 = v154;
            LOBYTE(v159) = sub_16FEF70(v158, v154);
            v48 = v159;
          }
        }
        v177 = v48;
      }
      v53 += 24;
      if ( v53 == v43 )
      {
        v33 = (_QWORD *)v174;
        break;
      }
    }
  }
  sub_7052B0((__int64 *)(v33[5] + 96LL), v33[5], v48, (__int64)v49, v50, v51);
  v69 = v33[8];
  if ( (*(_BYTE *)(v69 + 32) & 1) != 0 )
    v70 = sub_B969C0(v69);
  else
    v70 = *(_QWORD *)(v69 + 32);
  sub_7052B0((__int64 *)(v33[5] + 96LL), v33[5], v65, v66, v67, v68);
  m128_u64 = (_QWORD *)v33[5];
  v72 = v70 + 24LL * *(unsigned int *)(v33[8] + 20LL);
  sub_7052B0(m128_u64 + 12, (__int64)m128_u64, v73, v74, v75, v76);
  v81 = v33[8];
  if ( (*(_BYTE *)(v81 + 32) & 1) != 0 )
    v82 = sub_B969C0(v81);
  else
    v82 = *(_QWORD *)(v81 + 32);
  if ( v82 != v72 )
  {
    m128_u64 = v165->m128_u64;
    v175 = v33;
    v83 = v167;
    v174 = (__int64)&v170[(_QWORD)v165 - 1];
    v171 = (const void ***)&v178;
    v172 = v190;
    v173 = &v186;
    while ( 1 )
    {
      sub_168B6C0((__int64)a1);
      v87 = *(_QWORD *)(**(_QWORD **)(v82 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v87 + 8) & 0xF) != 0 )
        v87 = sub_F64F00(**(_QWORD **)(v82 + 16), (__int64)m128_u64, v84, v85, v86);
      v77 = BYTE4(v199);
      m128_u64 = *(_QWORD **)&byte_8[v87 & 0xFFFFFFFFFFFFFFF0LL];
      if ( BYTE4(v199) )
      {
        v88 = (char *)v197;
        v80 = HIDWORD(v198);
        v79 = 8LL * HIDWORD(v198);
        v89 = (char *)v197 + v79;
        if ( v197 != (char *)v197 + v79 )
        {
          v90 = (char *)v197;
          if ( *(_QWORD **)v197 == m128_u64 )
          {
LABEL_161:
            v77 = 0;
            goto LABEL_68;
          }
          while ( 1 )
          {
            v90 += 8;
            if ( v89 == v90 )
              break;
            if ( m128_u64 == *(_QWORD **)v90 )
              goto LABEL_161;
          }
        }
        if ( HIDWORD(v198) < (unsigned int)v198 )
        {
          v80 = (unsigned int)++HIDWORD(v198);
          *(_QWORD *)v89 = m128_u64;
          v88 = (char *)v197;
          v90 = (char *)v197 + v79;
LABEL_68:
          v78 = &v88[8 * HIDWORD(v198)];
          goto LABEL_69;
        }
      }
      v90 = (char *)sub_2236760(v83, m128_u64);
      v88 = (char *)v197;
      if ( BYTE4(v199) )
        goto LABEL_68;
      v78 = (char *)v197 + 8 * (unsigned int)v198;
LABEL_69:
      if ( v78 != v90 )
      {
        m128_u64 = (_QWORD *)(*(_QWORD *)v90 + 2LL);
        if ( *(_QWORD *)v90 == -2 || m128_u64 == (_QWORD *)((char *)&dword_0 + 1) )
        {
          do
            v90 += 8;
          while ( v78 != v90 && *(_QWORD *)v90 >= 0xFFFFFFFFFFFFFFFELL );
        }
      }
      if ( (_BYTE)v77 )
      {
        v116 = v210;
        v117 = *(_QWORD *)(**(_QWORD **)(v82 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v117 + 8) & 0xF) != 0 )
          v117 = sub_F64F00(**(_QWORD **)(v82 + 16), (__int64)m128_u64, v77, (__int64)v78, v79);
        v178 = v117 & 0xFFFFFFFFFFFFFFF0LL;
        sub_F785A0((__int64)v184, (unsigned __int64 *)v171, v166);
        v190[0] = (const void **)v184;
        v191 = 260;
        v118 = v172;
        v127 = sub_15A4EB0(v116, v172, v119, v120, v121, v122);
        if ( v184[0] != v185 )
          operator delete(v184[0]);
        v128 = *(_QWORD *)(**(_QWORD **)(v82 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v128 + 8) & 0xF) != 0 )
          v128 = sub_F64F00(**(_QWORD **)(v82 + 16), (__int64)v118, v123, v124, v125);
        m128_u64 = sub_F63270(*(_QWORD *)(v128 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v118, v123, v124, v125, v126);
        sub_17230E0((__int64)v173, (__int64)m128_u64, !v177 ? 35 : 7, (__int64)v127, 0, v36);
        v177 = 0;
      }
      else
      {
        if ( v165 )
        {
          v91 = (__int64 *)v174;
          if ( (**(_BYTE **)v174 & 6) == 0 && (*(_BYTE *)(*(_QWORD *)v174 + 28LL) & 1) == 0 )
          {
            sub_168B6C0((__int64)a1);
            v148 = sub_B98AD0(*v91) & 0xFFFFFFFFFFFFFFF0LL;
            v152 = sub_16FFCE0(*(__int64 **)(v82 + 16), (__int64)m128_u64, v149, v150, v151);
            m128_u64 = (_QWORD *)v148;
            LOBYTE(v153) = sub_16FEF70(v152, v148);
            v77 = v153;
          }
        }
        v177 = v77;
      }
      v82 += 24;
      if ( v82 == v72 )
      {
        v33 = v175;
        break;
      }
    }
  }
  v92 = (_QWORD *)sub_B7E900((__int64)(v33 - 8), (__int64)m128_u64, v77, (__int64)v78, v79, v80);
  if ( v92 )
  {
    v167 = (unsigned int *)&v170[(_QWORD)v165 - 1];
    v166 = &v186;
LABEL_84:
    v93 = (*(__int64 (__fastcall **)(_QWORD *))(*v92 + 32LL))(v92);
    v94 = v195;
    if ( !v195 )
      goto LABEL_115;
    v95 = (char *)ptr;
    v96 = HIDWORD(v193);
    v97 = 8LL * HIDWORD(v193);
    v98 = (__int64 *)((char *)ptr + v97);
    if ( ptr != (char *)ptr + v97 )
    {
      v99 = (char *)ptr;
      if ( v93 == *(_QWORD *)ptr )
      {
LABEL_160:
        v94 = 0;
        goto LABEL_92;
      }
      while ( 1 )
      {
        v99 += 8;
        if ( v98 == (__int64 *)v99 )
          break;
        if ( v93 == *(_QWORD *)v99 )
          goto LABEL_160;
      }
    }
    if ( HIDWORD(v193) < (unsigned int)v193 )
    {
      v96 = (unsigned int)++HIDWORD(v193);
      *v98 = v93;
      v95 = (char *)ptr;
      v99 = (char *)ptr + v97;
    }
    else
    {
LABEL_115:
      v115 = sub_2236760(p_ptr, v93);
      v95 = (char *)ptr;
      v99 = (char *)v115;
      if ( !v195 )
      {
        v100 = (char *)ptr + 8 * (unsigned int)v193;
        goto LABEL_93;
      }
    }
LABEL_92:
    v100 = &v95[8 * HIDWORD(v193)];
LABEL_93:
    if ( v100 != v99 && (*(_QWORD *)v99 == -2 || *(_QWORD *)v99 == -1) )
    {
      do
        v99 += 8;
      while ( v100 != v99 && *(_QWORD *)v99 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( v94 )
    {
      v101 = v92[5];
      if ( v101 )
      {
        v102 = (v101 & 7) == 0;
        v103 = v101 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v102 )
          v103 = 0;
        v104 = *(unsigned int **)(v103 + 16);
        v105 = *v104;
        v191 = 261;
        v190[0] = (const void **)(v104 + 4);
        v190[1] = (const void **)v105;
        v106 = sub_15A4EB0(v210, v190, v105, 261, v97, v96);
        v111 = sub_F63270(*(_QWORD *)(v92[6] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v190, v107, v108, v109, v110);
        sub_17230E0((__int64)v166, (__int64)v111, !v177 ? 35 : 7, (__int64)v106, (__int64)v92, v36);
        v177 = 0;
      }
LABEL_104:
      while ( 1 )
      {
        v112 = v92[1] & 0xFFFFFFFFFFFFFFF8LL;
        v92 = (_QWORD *)v112;
        if ( !v112 )
          goto LABEL_105;
        if ( (*(_BYTE *)(v112 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_84;
      }
    }
    if ( v165 )
    {
      v146 = **(_QWORD **)v167;
      v147 = (v146 >> 1) & 3;
      if ( v147 == 1 )
      {
        v160 = v146 & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v147 != 2 )
          goto LABEL_159;
        v160 = *(_QWORD *)(*(_QWORD *)((v146 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                         + 8LL * *(unsigned int *)((v146 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                         - 8);
      }
      v94 = v160 == (_QWORD)v92;
    }
LABEL_159:
    v177 = v94;
    goto LABEL_104;
  }
LABEL_105:
  sub_16FF8C0((__int64)(v168 + 58), v211[1]);
  v113 = a1[1];
  v114 = 0;
  if ( v208 != v209 )
    v114 = v208;
  if ( v113 )
    sub_1700D50(*a1, v113, v168 + 76, v114, -1431655765 * ((v209 - v208) >> 5));
  if ( !BYTE4(v199) )
    free(v197);
  if ( !v195 )
    free(ptr);
  sub_1700A70((__int64)v168);
}
