unsigned __int64 __fastcall sub_1ADBD0(int *a1, __int64 *a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  size_t v12; // r9
  const char *v13; // r12
  size_t v14; // r15
  __int64 v15; // rbp
  size_t v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rbp
  char v27; // al
  _BYTE *v28; // r15
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // r10
  __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rsi
  const char *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  size_t v52; // rbp
  unsigned __int64 v53; // rdx
  size_t v54; // r8
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // r15
  __int64 v57; // rsi
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbp
  unsigned __int64 v69; // r12
  __int64 v70; // r9
  __int64 v71; // rsi
  __int64 v72; // rbp
  unsigned __int64 v73; // r12
  __int64 v74; // r15
  __int64 v75; // rsi
  __int64 v76; // rbp
  __int64 v77; // rbp
  unsigned __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // rsi
  __int64 v81; // rbp
  __int64 v82; // rbp
  unsigned __int64 v83; // r12
  __int64 v84; // r15
  __int64 v85; // rsi
  __int64 v86; // rbp
  __int64 v87; // rbp
  unsigned __int64 v88; // r12
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // rbp
  unsigned __int64 v92; // r12
  __int64 v93; // r15
  __int64 v94; // rsi
  __int64 v95; // rbp
  unsigned __int64 v96; // r12
  __int64 v97; // r15
  __int64 v98; // rsi
  __int64 v99; // rbp
  __int64 v100; // rbp
  unsigned __int64 v101; // r12
  __int64 v102; // r15
  __int64 v103; // rsi
  __int64 v104; // rbp
  __int64 v105; // rbp
  unsigned __int64 v106; // r12
  __int64 v107; // r15
  __int64 v108; // rsi
  __m128i si128; // xmm0
  __int64 v110; // rbp
  unsigned __int64 v111; // r12
  __int64 v112; // r15
  __int64 v113; // rsi
  __int64 v114; // rbp
  unsigned __int64 v115; // r12
  __int64 v116; // r15
  __int64 v117; // rsi
  __int64 v118; // rbp
  __int64 v119; // rbp
  unsigned __int64 v120; // r12
  __int64 v121; // r15
  __int64 v122; // rsi
  _DWORD *v123; // rbp
  __int64 v124; // rbp
  unsigned __int64 v125; // r12
  __int64 v126; // r15
  __int64 v127; // rsi
  __int64 v128; // rbp
  __int64 v129; // rbp
  unsigned __int64 v130; // r12
  __int64 v131; // r15
  __int64 v132; // rsi
  _DWORD *v133; // rbp
  __int64 v134; // rbp
  unsigned __int64 v135; // r12
  __int64 v136; // r15
  __int64 v137; // rsi
  _DWORD *v138; // rbp
  __int64 v139; // rbp
  unsigned __int64 v140; // r12
  __int64 v141; // r15
  __int64 v142; // rsi
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rbp
  unsigned __int64 v149; // r12
  __int64 v150; // rsi
  __int64 v151; // rbp
  __int64 v152; // rsi
  unsigned __int64 v153; // r12
  __int64 v154; // r15
  __int64 v155; // rbp
  __int64 v156; // rbp
  __int64 v157; // rsi
  unsigned __int64 v158; // r12
  __int64 v159; // r15
  __int64 v160; // rbp
  __int64 v161; // rbp
  __int64 v162; // rsi
  unsigned __int64 v163; // r12
  __int64 v164; // r15
  __int64 v165; // rbp
  __int64 v166; // rbp
  __int64 v167; // rsi
  unsigned __int64 v168; // r12
  __int64 v169; // r15
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  size_t v194; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v195; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v196; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v197; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v198; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v199; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v200; // [rsp+8h] [rbp-A0h]
  __int64 v201; // [rsp+8h] [rbp-A0h]
  __int64 v202; // [rsp+8h] [rbp-A0h]
  __int64 v203; // [rsp+10h] [rbp-98h]
  __int64 v204; // [rsp+10h] [rbp-98h]
  __int64 v205; // [rsp+10h] [rbp-98h]
  __int64 v206; // [rsp+10h] [rbp-98h]
  __int64 v207; // [rsp+10h] [rbp-98h]
  __int64 v208; // [rsp+10h] [rbp-98h]
  size_t v209; // [rsp+10h] [rbp-98h]
  __int64 v210; // [rsp+18h] [rbp-90h]
  size_t v211; // [rsp+18h] [rbp-90h]
  __int64 v213; // [rsp+28h] [rbp-80h]
  __m128i v214; // [rsp+30h] [rbp-78h] BYREF
  __int64 v215; // [rsp+40h] [rbp-68h]
  _QWORD v216[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v217[8]; // [rsp+68h] [rbp-40h] BYREF

  v217[0] = __readfsqword(0x28u);
  v213 = sub_1A7F30(a3, (__int64)a2, (unsigned __int64)a1);
  v10 = a1[1];
  if ( (v10 & 1) != 0 )
  {
    v166 = a2[1];
    if ( v166 )
    {
      v169 = v166 + 7;
      v168 = v166 + 8;
      v167 = *a2;
      --v166;
      if ( a2[2] >= v168 )
        goto LABEL_210;
    }
    else
    {
      v167 = *a2;
      v168 = 9;
      v169 = 8;
      if ( (unsigned __int64)a2[2] >= 9 )
      {
LABEL_210:
        a2[1] = v168;
        *(_BYTE *)(v167 + v169) = 0;
        *(_QWORD *)(*a2 + v166) = 0x20200274706F2001LL;
        v10 = a1[1];
        goto LABEL_2;
      }
    }
    v173 = qvector_reserve(a2, v167, v168, 1);
    *a2 = v173;
    v167 = v173;
    goto LABEL_210;
  }
LABEL_2:
  if ( (v10 & 2) == 0 )
    goto LABEL_3;
  v161 = a2[1];
  if ( v161 )
  {
    v164 = v161 + 8;
    v163 = v161 + 9;
    v162 = *a2;
    --v161;
    if ( a2[2] >= v163 )
      goto LABEL_207;
LABEL_220:
    v174 = qvector_reserve(a2, v162, v163, 1);
    *a2 = v174;
    v162 = v174;
    goto LABEL_207;
  }
  v162 = *a2;
  v163 = 10;
  v164 = 9;
  if ( (unsigned __int64)a2[2] < 0xA )
    goto LABEL_220;
LABEL_207:
  a2[1] = v163;
  *(_BYTE *)(v162 + v164) = 0;
  v165 = *a2 + v161;
  *(_QWORD *)v165 = 0x20027065656B2001LL;
  *(_BYTE *)(v165 + 8) = 32;
  v10 = a1[1];
LABEL_3:
  if ( (v10 & 4) == 0 )
    goto LABEL_4;
  v156 = a2[1];
  if ( v156 )
  {
    v159 = v156 + 8;
    v158 = v156 + 9;
    v157 = *a2;
    --v156;
    if ( a2[2] >= v158 )
      goto LABEL_204;
LABEL_214:
    v171 = qvector_reserve(a2, v157, v158, 1);
    *a2 = v171;
    v157 = v171;
    goto LABEL_204;
  }
  v157 = *a2;
  v158 = 10;
  v159 = 9;
  if ( (unsigned __int64)a2[2] < 0xA )
    goto LABEL_214;
LABEL_204:
  a2[1] = v158;
  *(_BYTE *)(v157 + v159) = 0;
  v160 = *a2 + v156;
  *(_QWORD *)v160 = 0x2002796E616D2001LL;
  *(_BYTE *)(v160 + 8) = 32;
  v10 = a1[1];
LABEL_4:
  if ( (v10 & 8) == 0 )
    goto LABEL_5;
  v151 = a2[1];
  if ( v151 )
  {
    v154 = v151 + 10;
    v153 = v151 + 11;
    v152 = *a2;
    --v151;
    if ( a2[2] >= v153 )
      goto LABEL_201;
LABEL_216:
    v172 = qvector_reserve(a2, v152, v153, 1);
    *a2 = v172;
    v152 = v172;
    goto LABEL_201;
  }
  v152 = *a2;
  v153 = 12;
  v154 = 11;
  if ( (unsigned __int64)a2[2] < 0xC )
    goto LABEL_216;
LABEL_201:
  a2[1] = v153;
  *(_BYTE *)(v152 + v154) = 0;
  v155 = *a2 + v151;
  *(_QWORD *)v155 = 0x7466656469732001LL;
  *(_DWORD *)(v155 + 7) = 538968692;
LABEL_5:
  v11 = *a1;
  if ( (unsigned int)v11 <= 0x48 )
  {
    v13 = (&off_4AACC0)[v11];
    v14 = strlen(v13);
    sub_3234D0(a2, 32, v66, v67);
    if ( !v13 )
      goto LABEL_12;
    v12 = strlen(v13);
  }
  else
  {
    sub_3234D0(a2, 32, v8, v9);
    v12 = 3;
    v13 = "???";
    v14 = 3;
  }
  v15 = a2[1];
  v16 = v12;
  if ( v15 )
  {
    --v15;
    v16 = v12 + v15;
  }
  v17 = *a2;
  v18 = v16 + 1;
  if ( a2[2] < v16 + 1 )
  {
    v211 = v12;
    v209 = v16;
    v201 = v16 + 1;
    v170 = qvector_reserve(a2, v17, v18, 1);
    v12 = v211;
    v16 = v209;
    *a2 = v170;
    v17 = v170;
    v18 = v201;
  }
  a2[1] = v18;
  *(_BYTE *)(v17 + v16) = 0;
  memmove((void *)(v15 + *a2), v13, v12);
LABEL_12:
  if ( (a1[1] & 0x10) != 0 && *a1 <= 62 )
  {
    v68 = a2[1];
    if ( v68 )
    {
      v70 = v68 + 3;
      v69 = v68 + 4;
      --v68;
    }
    else
    {
      v69 = 5;
      v70 = 4;
    }
    v71 = *a2;
    if ( a2[2] < v69 )
    {
      v202 = v70;
      v175 = qvector_reserve(a2, v71, v69, 1);
      *a2 = v175;
      v70 = v202;
      v71 = v175;
    }
    a2[1] = v69;
    v14 += 4LL;
    *(_BYTE *)(v71 + v70) = 0;
    *(_DWORD *)(*a2 + v68) = 1970300462;
  }
  v19 = a2;
  sub_3235B0(a2, 32);
  do
  {
    v22 = a2[1];
    v23 = 2;
    if ( v22 )
      v23 = v22-- + 1;
    v24 = *a2;
    if ( a2[2] < v23 )
    {
      v19 = a2;
      v25 = qvector_reserve(a2, v24, v23, 1);
      *a2 = v25;
      v24 = v25;
    }
    a2[1] = v23;
    ++v14;
    *(_BYTE *)(v24 + v22) = 32;
    *(_BYTE *)(*a2 + v22 + 1) = 0;
  }
  while ( v14 <= 6 );
  if ( *a1 != 56 || *((_BYTE *)a1 + 64) != 8 )
  {
    v26 = v216;
    v216[0] = a1 + 8;
    v216[1] = a1 + 12;
    v216[2] = a1 + 16;
    v27 = 0;
    while ( 1 )
    {
      v28 = (_BYTE *)*v26;
      if ( !*(_BYTE *)*v26 && *((_DWORD *)v28 + 1) == -1 )
        goto LABEL_51;
      if ( v27 )
      {
LABEL_27:
        v29 = a2[1];
        v30 = 2;
        if ( v29 )
          v30 = v29-- + 1;
        v31 = *a2;
        if ( a2[2] < v30 )
        {
          v208 = v29;
          v200 = v30;
          v147 = qvector_reserve(a2, v31, v30, 1);
          v29 = v208;
          v30 = v200;
          *a2 = v147;
          v31 = v147;
        }
        a2[1] = v30;
        v32 = 2;
        *(_BYTE *)(v31 + v29) = 1;
        *(_BYTE *)(*a2 + v29 + 1) = 0;
        v33 = a2[1];
        if ( v33 )
          v32 = v33-- + 1;
        v34 = *a2;
        if ( a2[2] < v32 )
        {
          v207 = v33;
          v199 = v32;
          v146 = qvector_reserve(a2, v34, v32, 1);
          v33 = v207;
          v32 = v199;
          *a2 = v146;
          v34 = v146;
        }
        a2[1] = v32;
        *(_BYTE *)(v34 + v33) = 9;
        *(_BYTE *)(*a2 + v33 + 1) = 0;
        v35 = a2[1];
        if ( v35 )
        {
          v36 = v35 + 1;
          v37 = a2[1];
          v38 = *a2;
          --v35;
          if ( a2[2] >= v36 )
            goto LABEL_37;
        }
        else
        {
          v38 = *a2;
          v36 = 2;
          v37 = 1;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_37;
        }
        v210 = v37;
        v203 = v35;
        v195 = v36;
        v65 = qvector_reserve(a2, v38, v36, 1);
        v37 = v210;
        v35 = v203;
        *a2 = v65;
        v38 = v65;
        v36 = v195;
LABEL_37:
        a2[1] = v36;
        v39 = 2;
        *(_BYTE *)(v38 + v37) = 0;
        *(_BYTE *)(*a2 + v35) = 44;
        v40 = a2[1];
        if ( v40 )
          v39 = v40-- + 1;
        v41 = *a2;
        if ( a2[2] < v39 )
        {
          v206 = v40;
          v198 = v39;
          v145 = qvector_reserve(a2, v41, v39, 1);
          v40 = v206;
          v39 = v198;
          *a2 = v145;
          v41 = v145;
        }
        a2[1] = v39;
        v42 = 2;
        *(_BYTE *)(v41 + v40) = 2;
        *(_BYTE *)(*a2 + v40 + 1) = 0;
        v43 = a2[1];
        if ( v43 )
          v42 = v43-- + 1;
        v44 = *a2;
        if ( a2[2] < v42 )
        {
          v205 = v43;
          v197 = v42;
          v144 = qvector_reserve(a2, v44, v42, 1);
          v43 = v205;
          v42 = v197;
          *a2 = v144;
          v44 = v144;
        }
        a2[1] = v42;
        v45 = 2;
        *(_BYTE *)(v44 + v43) = 9;
        *(_BYTE *)(*a2 + v43 + 1) = 0;
        v46 = a2[1];
        if ( v46 )
          v45 = v46-- + 1;
        v47 = *a2;
        if ( a2[2] < v45 )
        {
          v204 = v46;
          v196 = v45;
          v143 = qvector_reserve(a2, v47, v45, 1);
          v46 = v204;
          v45 = v196;
          *a2 = v143;
          v47 = v143;
        }
        a2[1] = v45;
        *(_BYTE *)(v47 + v46) = 32;
        *(_BYTE *)(*a2 + v46 + 1) = 0;
      }
      v24 = (__int64)a2;
      v19 = (__int64 *)v28;
      sub_1AA560((unsigned __int64)v28, (__int64)a2, a3, a4, a5);
      if ( ++v26 == v217 )
        goto LABEL_52;
      v28 = (_BYTE *)*v26;
      if ( *(_BYTE *)*v26 || *((_DWORD *)v28 + 1) != -1 )
        goto LABEL_27;
      v27 = 1;
LABEL_51:
      if ( v217 == ++v26 )
        goto LABEL_52;
    }
  }
  sub_1AA560((unsigned __int64)(a1 + 8), (__int64)a2, a3, a4, a5);
  v148 = a2[1];
  v149 = 2;
  if ( v148 )
    v149 = v148-- + 1;
  v150 = *a2;
  if ( a2[2] < v149 )
  {
    v192 = qvector_reserve(a2, v150, v149, 1);
    *a2 = v192;
    v150 = v192;
  }
  a2[1] = v149;
  v19 = (__int64 *)(a1 + 16);
  *(_BYTE *)(v150 + v148) = 32;
  v24 = (__int64)a2;
  *(_BYTE *)(*a2 + v148 + 1) = 0;
  sub_1AA560((unsigned __int64)(a1 + 16), (__int64)a2, a3, a4, a5);
LABEL_52:
  if ( (a4 & 4) == 0 )
  {
    v48 = s1;
    if ( a2[1] )
      v48 = (const char *)*a2;
    v49 = tag_strlen(v48);
    v52 = 30 - v49;
    if ( 30 - v49 <= 0 )
    {
LABEL_62:
      sub_3234D0(a2, 4, v50, v51);
      if ( *((_QWORD *)a1 + 3) == -1 )
        get_module_data((unsigned int)dword_4BB8D8);
      sub_F4410(a2, (__int64)" ; %a ", a5);
      v58 = a1[1];
      if ( (v58 & 0x4000) != 0 )
      {
        v91 = a2[1];
        if ( v91 )
        {
          v93 = v91 + 11;
          v92 = v91 + 12;
          --v91;
        }
        else
        {
          v92 = 13;
          v93 = 12;
        }
        v94 = *a2;
        if ( a2[2] < v92 )
        {
          v181 = qvector_reserve(a2, v94, v92, 1);
          *a2 = v181;
          v94 = v181;
        }
        a2[1] = v92;
        *(_BYTE *)(v94 + v93) = 0;
        qmemcpy((void *)(*a2 + v91), "inverted_jx ", 12);
        v58 = a1[1];
        if ( (v58 & 0x2000) == 0 )
        {
LABEL_66:
          if ( (v58 & 0x20000) == 0 )
            goto LABEL_67;
          goto LABEL_112;
        }
      }
      else if ( (v58 & 0x2000) == 0 )
      {
        goto LABEL_66;
      }
      v87 = a2[1];
      if ( v87 )
      {
        v89 = v87 + 9;
        v88 = v87 + 10;
        --v87;
      }
      else
      {
        v88 = 11;
        v89 = 10;
      }
      v90 = *a2;
      if ( a2[2] < v88 )
      {
        v182 = qvector_reserve(a2, v90, v88, 1);
        *a2 = v182;
        v90 = v182;
      }
      a2[1] = v88;
      *(_BYTE *)(v90 + v89) = 0;
      qmemcpy((void *)(*a2 + v87), "ignlowsrc ", 10);
      v58 = a1[1];
      if ( (v58 & 0x20000) == 0 )
      {
LABEL_67:
        if ( (v58 & 0x800) == 0 )
          goto LABEL_68;
        goto LABEL_106;
      }
LABEL_112:
      v82 = a2[1];
      if ( v82 )
      {
        v84 = v82 + 8;
        v83 = v82 + 9;
        --v82;
      }
      else
      {
        v83 = 10;
        v84 = 9;
      }
      v85 = *a2;
      if ( a2[2] < v83 )
      {
        v183 = qvector_reserve(a2, v85, v83, 1);
        *a2 = v183;
        v85 = v183;
      }
      a2[1] = v83;
      *(_BYTE *)(v85 + v84) = 0;
      v86 = *a2 + v82;
      *(_QWORD *)v86 = 0x706F7270746E6F64LL;
      *(_BYTE *)(v86 + 8) = 32;
      v58 = a1[1];
      if ( (v58 & 0x800) == 0 )
      {
LABEL_68:
        if ( (v58 & 0x200000) == 0 )
          goto LABEL_69;
        goto LABEL_100;
      }
LABEL_106:
      v77 = a2[1];
      if ( v77 )
      {
        v79 = v77 + 8;
        v78 = v77 + 9;
        --v77;
      }
      else
      {
        v78 = 10;
        v79 = 9;
      }
      v80 = *a2;
      if ( a2[2] < v78 )
      {
        v184 = qvector_reserve(a2, v80, v78, 1);
        *a2 = v184;
        v80 = v184;
      }
      a2[1] = v78;
      *(_BYTE *)(v80 + v79) = 0;
      v81 = *a2 + v77;
      *(_QWORD *)v81 = 0x64656E69626D6F63LL;
      *(_BYTE *)(v81 + 8) = 32;
      v58 = a1[1];
      if ( (v58 & 0x200000) == 0 )
      {
LABEL_69:
        if ( (v58 & 0x20) == 0 )
          goto LABEL_70;
        goto LABEL_184;
      }
LABEL_100:
      v72 = a2[1];
      if ( v72 )
      {
        v74 = v72 + 8;
        v73 = v72 + 9;
        --v72;
      }
      else
      {
        v73 = 10;
        v74 = 9;
      }
      v75 = *a2;
      if ( a2[2] < v73 )
      {
        v178 = qvector_reserve(a2, v75, v73, 1);
        *a2 = v178;
        v75 = v178;
      }
      a2[1] = v73;
      *(_BYTE *)(v75 + v74) = 0;
      v76 = *a2 + v72;
      *(_QWORD *)v76 = 0x6465726961706E75LL;
      *(_BYTE *)(v76 + 8) = 32;
      v58 = a1[1];
      if ( (v58 & 0x20) == 0 )
      {
LABEL_70:
        if ( (v58 & 8) == 0 )
          goto LABEL_71;
        goto LABEL_178;
      }
LABEL_184:
      v139 = a2[1];
      if ( v139 )
      {
        v141 = v139 + 7;
        v140 = v139 + 8;
        --v139;
      }
      else
      {
        v140 = 9;
        v141 = 8;
      }
      v142 = *a2;
      if ( a2[2] < v140 )
      {
        v187 = qvector_reserve(a2, v142, v140, 1);
        *a2 = v187;
        v142 = v187;
      }
      a2[1] = v140;
      *(_BYTE *)(v142 + v141) = 0;
      *(_QWORD *)(*a2 + v139) = 0x206C6C6163726166LL;
      v58 = a1[1];
      if ( (v58 & 8) == 0 )
      {
LABEL_71:
        if ( (v58 & 0x1000) == 0 )
          goto LABEL_72;
        goto LABEL_172;
      }
LABEL_178:
      v134 = a2[1];
      if ( v134 )
      {
        v136 = v134 + 6;
        v135 = v134 + 7;
        --v134;
      }
      else
      {
        v135 = 8;
        v136 = 7;
      }
      v137 = *a2;
      if ( a2[2] < v135 )
      {
        v188 = qvector_reserve(a2, v137, v135, 1);
        *a2 = v188;
        v137 = v188;
      }
      a2[1] = v135;
      *(_BYTE *)(v137 + v136) = 0;
      v138 = (_DWORD *)(*a2 + v134);
      *v138 = 1701867376;
      *(_DWORD *)((char *)v138 + 3) = 544760677;
      v58 = a1[1];
      if ( (v58 & 0x1000) == 0 )
      {
LABEL_72:
        if ( (v58 & 0x40) == 0 )
          goto LABEL_73;
        goto LABEL_166;
      }
LABEL_172:
      v129 = a2[1];
      if ( v129 )
      {
        v131 = v129 + 6;
        v130 = v129 + 7;
        --v129;
      }
      else
      {
        v130 = 8;
        v131 = 7;
      }
      v132 = *a2;
      if ( a2[2] < v130 )
      {
        v189 = qvector_reserve(a2, v132, v130, 1);
        *a2 = v189;
        v132 = v189;
      }
      a2[1] = v130;
      *(_BYTE *)(v132 + v131) = 0;
      v133 = (_DWORD *)(*a2 + v129);
      *v133 = 1937012837;
      *(_DWORD *)((char *)v133 + 3) = 544765043;
      v58 = a1[1];
      if ( (v58 & 0x40) == 0 )
      {
LABEL_73:
        if ( (v58 & 0x80u) == 0 )
          goto LABEL_74;
        goto LABEL_160;
      }
LABEL_166:
      v124 = a2[1];
      if ( v124 )
      {
        v126 = v124 + 8;
        v125 = v124 + 9;
        --v124;
      }
      else
      {
        v125 = 10;
        v126 = 9;
      }
      v127 = *a2;
      if ( a2[2] < v125 )
      {
        v190 = qvector_reserve(a2, v127, v125, 1);
        *a2 = v190;
        v127 = v190;
      }
      a2[1] = v125;
      *(_BYTE *)(v127 + v126) = 0;
      v128 = *a2 + v124;
      *(_QWORD *)v128 = 0x6C6C61636C696174LL;
      *(_BYTE *)(v128 + 8) = 32;
      v58 = a1[1];
      if ( (v58 & 0x80u) == 0 )
      {
LABEL_74:
        if ( (v58 & 0x10000) == 0 )
          goto LABEL_75;
        goto LABEL_154;
      }
LABEL_160:
      v119 = a2[1];
      if ( v119 )
      {
        v121 = v119 + 6;
        v120 = v119 + 7;
        --v119;
      }
      else
      {
        v120 = 8;
        v121 = 7;
      }
      v122 = *a2;
      if ( a2[2] < v120 )
      {
        v185 = qvector_reserve(a2, v122, v120, 1);
        *a2 = v185;
        v122 = v185;
      }
      a2[1] = v120;
      *(_BYTE *)(v122 + v121) = 0;
      v123 = (_DWORD *)(*a2 + v119);
      *v123 = 1702064993;
      *(_DWORD *)((char *)v123 + 3) = 544502373;
      v58 = a1[1];
      if ( (v58 & 0x10000) == 0 )
      {
LABEL_75:
        if ( (v58 & 0x40000) == 0 )
          goto LABEL_76;
        goto LABEL_148;
      }
LABEL_154:
      v114 = a2[1];
      if ( v114 )
      {
        v116 = v114 + 8;
        v115 = v114 + 9;
        --v114;
      }
      else
      {
        v115 = 10;
        v116 = 9;
      }
      v117 = *a2;
      if ( a2[2] < v115 )
      {
        v186 = qvector_reserve(a2, v117, v115, 1);
        *a2 = v186;
        v117 = v186;
      }
      a2[1] = v115;
      *(_BYTE *)(v117 + v116) = 0;
      v118 = *a2 + v114;
      *(_QWORD *)v118 = 0x766F6D69746C756DLL;
      *(_BYTE *)(v118 + 8) = 32;
      v58 = a1[1];
      if ( (v58 & 0x40000) == 0 )
      {
LABEL_76:
        if ( (v58 & 0x8000) == 0 )
          goto LABEL_77;
        goto LABEL_142;
      }
LABEL_148:
      v110 = a2[1];
      if ( v110 )
      {
        v112 = v110 + 14;
        v111 = v110 + 15;
        --v110;
      }
      else
      {
        v111 = 16;
        v112 = 15;
      }
      v113 = *a2;
      if ( a2[2] < v111 )
      {
        v176 = qvector_reserve(a2, v113, v111, 1);
        *a2 = v176;
        v113 = v176;
      }
      a2[1] = v111;
      *(_BYTE *)(v113 + v112) = 0;
      qmemcpy((void *)(*a2 + v110), "not_combinable ", 15);
      v58 = a1[1];
      if ( (v58 & 0x8000) == 0 )
      {
LABEL_77:
        if ( (v58 & 0x80000) == 0 )
          goto LABEL_78;
        goto LABEL_136;
      }
LABEL_142:
      v105 = a2[1];
      if ( v105 )
      {
        v107 = v105 + 15;
        v106 = v105 + 16;
        --v105;
      }
      else
      {
        v106 = 17;
        v107 = 16;
      }
      v108 = *a2;
      if ( a2[2] < v106 )
      {
        v177 = qvector_reserve(a2, v108, v106, 1);
        *a2 = v177;
        v108 = v177;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FA140);
      a2[1] = v106;
      *(_BYTE *)(v108 + v107) = 0;
      *(__m128i *)(*a2 + v105) = si128;
      v58 = a1[1];
      if ( (v58 & 0x80000) == 0 )
      {
LABEL_78:
        if ( (v58 & 0x100000) == 0 )
          goto LABEL_79;
        goto LABEL_130;
      }
LABEL_136:
      v100 = a2[1];
      if ( v100 )
      {
        v102 = v100 + 8;
        v101 = v100 + 9;
        --v100;
      }
      else
      {
        v101 = 10;
        v102 = 9;
      }
      v103 = *a2;
      if ( a2[2] < v101 )
      {
        v179 = qvector_reserve(a2, v103, v101, 1);
        *a2 = v179;
        v103 = v179;
      }
      a2[1] = v101;
      *(_BYTE *)(v103 + v102) = 0;
      v104 = *a2 + v100;
      *(_QWORD *)v104 = 0x726569727261626DLL;
      *(_BYTE *)(v104 + 8) = 32;
      v58 = a1[1];
      if ( (v58 & 0x100000) == 0 )
      {
LABEL_79:
        v59 = (v58 >> 8) & 7;
        if ( !v59 )
        {
LABEL_80:
          sub_1A8720((unsigned __int8 *)a1, a2, 2, (__int64)"udt");
          if ( (a1[1] & 0x10) == 0 )
            sub_1A8720((unsigned __int8 *)a1, a2, 4, (__int64)"float");
          sub_1A8720((unsigned __int8 *)a1, a2, 32, (__int64)"lowaddr");
          v60 = *(_QWORD *)(a3 + 8);
          if ( v60 || (v60 = *(_QWORD *)(get_module_data((unsigned int)dword_4BB8D8) + 1344)) != 0 )
          {
            v61 = _mm_loadl_epi64((const __m128i *)(v60 + 1496));
            v215 = 0;
            v214 = _mm_unpacklo_epi64(v61, (__m128i)(unsigned __int64)v60);
            sub_1AD520(v60, a2, (__int64)&v214, (__int64)a1, *(double *)v214.m128i_i64, *(double *)&v60);
          }
          sub_3235B0(a2, 4);
          if ( v213 != -1 )
          {
            if ( ((unsigned __int8)v213 & 7u) > 2 )
              sub_1A77D0(a2, 4, v62, v63);
            sub_3235B0(a2, (unsigned int)(v213 & 7) + 41);
          }
          return v217[0] - __readfsqword(0x28u);
        }
LABEL_94:
        sub_F4410(a2, (__int64)"split%d ", 1 << (v59 - 1));
        goto LABEL_80;
      }
LABEL_130:
      v95 = a2[1];
      if ( v95 )
      {
        v97 = v95 + 8;
        v96 = v95 + 9;
        --v95;
      }
      else
      {
        v96 = 10;
        v97 = 9;
      }
      v98 = *a2;
      if ( a2[2] < v96 )
      {
        v180 = qvector_reserve(a2, v98, v96, 1);
        *a2 = v180;
        v98 = v180;
      }
      a2[1] = v96;
      *(_BYTE *)(v98 + v97) = 0;
      v99 = *a2 + v95;
      *(_QWORD *)v99 = 0x64656772656D6E75LL;
      *(_BYTE *)(v99 + 8) = 32;
      v59 = (a1[1] >> 8) & 7;
      if ( !v59 )
        goto LABEL_80;
      goto LABEL_94;
    }
    v53 = a2[1];
    if ( v53 )
    {
      v55 = v53 - 1;
      v54 = v52 + v53 - 1;
      v56 = v52 + v53;
      if ( v53 >= v52 + v53 )
      {
LABEL_61:
        memset((void *)(v55 + *a2), 32, v52);
        goto LABEL_62;
      }
    }
    else
    {
      v54 = 30 - v49;
      v55 = 0;
      v56 = 31 - v49;
    }
    v57 = *a2;
    if ( a2[2] < v56 )
    {
      v194 = v54;
      v191 = qvector_reserve(a2, v57, v56, 1);
      *a2 = v191;
      v54 = v194;
      v57 = v191;
    }
    a2[1] = v56;
    *(_BYTE *)(v57 + v54) = 0;
    goto LABEL_61;
  }
  if ( v213 != -1 )
  {
    if ( ((unsigned __int8)v213 & 7u) > 2 )
      sub_1A77D0(v19, v24, v20, v21);
    sub_3235B0(a2, (unsigned int)(v213 & 7) + 41);
  }
  return v217[0] - __readfsqword(0x28u);
}
