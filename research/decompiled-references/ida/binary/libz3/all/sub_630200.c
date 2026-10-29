__int64 __fastcall sub_630200(const __m128i *a1, __int64 *a2, int a3)
{
  char **v3; // rbx
  char **v4; // r14
  char **exception; // r14
  char **v6; // r14
  __int64 result; // rax
  _QWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int i; // ebx
  __int64 v14; // rdx
  int v15; // eax
  bool *v16; // rdx
  unsigned __int64 v17; // r14
  bool v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // r13d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r15
  __int64 v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // rbx
  __int64 v28; // r13
  char v29; // bl
  __int64 v30; // r12
  unsigned int v31; // ebx
  unsigned int v32; // edx
  size_t v33; // rsi
  unsigned int v34; // r14d
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r14
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  _BYTE *v44; // rdx
  unsigned int v45; // ebx
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rsi
  int v54; // eax
  _BYTE *v55; // rdi
  char *v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r13
  __int64 v60; // rax
  char *v61; // r12
  char *v62; // rbx
  unsigned int v63; // r14d
  unsigned int v64; // edi
  char *v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // r14
  unsigned int v69; // r13d
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned int v72; // ecx
  int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned int *v78; // r13
  __int64 v79; // rbx
  unsigned int v80; // eax
  __int64 v81; // rdx
  _QWORD *v82; // rax
  unsigned int v83; // edi
  __int64 *v84; // rax
  unsigned int v85; // r8d
  __int64 v86; // rcx
  unsigned int v87; // edi
  __int64 v88; // rax
  __int64 v89; // rsi
  char *v90; // rdx
  unsigned int v91; // ecx
  unsigned int v92; // eax
  unsigned int *v93; // rdx
  unsigned int v94; // r8d
  __int64 v95; // rcx
  __int64 v96; // rsi
  unsigned int *v97; // rcx
  int v98; // r9d
  int v99; // ecx
  __int64 v100; // rax
  __int64 v101; // rbx
  _QWORD *v102; // rbx
  unsigned int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  _BYTE *v106; // rdx
  __int64 v107; // rbx
  int v108; // edx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 *v112; // rcx
  bool v113; // zf
  int v114; // edx
  int v115; // ecx
  int v116; // r8d
  int v117; // r9d
  _QWORD *v118; // rbx
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // rax
  int v122; // r9d
  _QWORD *v123; // rbx
  __int64 v124; // rsi
  __int64 v125; // rdi
  unsigned int v126; // ebx
  unsigned int *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // r14
  _QWORD *v131; // rax
  __int64 v132; // [rsp+0h] [rbp-680h]
  int v133; // [rsp+0h] [rbp-680h]
  int v134; // [rsp+8h] [rbp-678h]
  __int64 v135; // [rsp+8h] [rbp-678h]
  __int64 v136; // [rsp+10h] [rbp-670h]
  __int64 v137; // [rsp+10h] [rbp-670h]
  __int64 v138; // [rsp+18h] [rbp-668h]
  char v139; // [rsp+18h] [rbp-668h]
  __int64 v140; // [rsp+18h] [rbp-668h]
  __int64 v141; // [rsp+20h] [rbp-660h]
  __int64 v142; // [rsp+20h] [rbp-660h]
  unsigned __int64 *v143; // [rsp+28h] [rbp-658h]
  int v144[2]; // [rsp+28h] [rbp-658h]
  int v145[2]; // [rsp+28h] [rbp-658h]
  __int64 v146; // [rsp+28h] [rbp-658h]
  int v147[2]; // [rsp+28h] [rbp-658h]
  void *v148; // [rsp+30h] [rbp-650h]
  __int64 v149; // [rsp+30h] [rbp-650h]
  unsigned int *v150; // [rsp+38h] [rbp-648h]
  int v151[2]; // [rsp+38h] [rbp-648h]
  unsigned __int64 v152; // [rsp+40h] [rbp-640h]
  unsigned int *v153; // [rsp+40h] [rbp-640h]
  unsigned __int64 v154; // [rsp+48h] [rbp-638h]
  __int64 v155; // [rsp+48h] [rbp-638h]
  char v156; // [rsp+50h] [rbp-630h]
  _QWORD *v157; // [rsp+50h] [rbp-630h]
  __int64 *v158; // [rsp+50h] [rbp-630h]
  unsigned int v159; // [rsp+58h] [rbp-628h]
  int *v160; // [rsp+58h] [rbp-628h]
  __int64 v161; // [rsp+60h] [rbp-620h]
  __int64 *v162; // [rsp+68h] [rbp-618h]
  __int64 v163; // [rsp+70h] [rbp-610h]
  unsigned int v164; // [rsp+78h] [rbp-608h]
  __int64 v165; // [rsp+78h] [rbp-608h]
  __int64 v166; // [rsp+78h] [rbp-608h]
  void **v167; // [rsp+80h] [rbp-600h]
  int v168; // [rsp+88h] [rbp-5F8h]
  __int64 v169; // [rsp+88h] [rbp-5F8h]
  unsigned int v170; // [rsp+88h] [rbp-5F8h]
  __int64 v171; // [rsp+90h] [rbp-5F0h]
  unsigned int v172; // [rsp+90h] [rbp-5F0h]
  __int64 v173; // [rsp+90h] [rbp-5F0h]
  unsigned __int64 v174; // [rsp+90h] [rbp-5F0h]
  __int64 v175; // [rsp+90h] [rbp-5F0h]
  unsigned __int64 v176; // [rsp+90h] [rbp-5F0h]
  const __m128i *v177; // [rsp+98h] [rbp-5E8h]
  int v178; // [rsp+A0h] [rbp-5E0h]
  void *s; // [rsp+A8h] [rbp-5D8h] BYREF
  unsigned int *v180; // [rsp+B0h] [rbp-5D0h] BYREF
  __int64 v181; // [rsp+B8h] [rbp-5C8h] BYREF
  __int64 v182; // [rsp+C0h] [rbp-5C0h] BYREF
  __int64 v183; // [rsp+C8h] [rbp-5B8h] BYREF
  unsigned __int64 v184; // [rsp+D0h] [rbp-5B0h] BYREF
  unsigned int *v185; // [rsp+D8h] [rbp-5A8h] BYREF
  int v186[2]; // [rsp+E0h] [rbp-5A0h] BYREF
  __int64 v187; // [rsp+E8h] [rbp-598h]
  unsigned __int64 v188; // [rsp+F0h] [rbp-590h] BYREF
  __int64 v189; // [rsp+F8h] [rbp-588h] BYREF
  __int64 v190; // [rsp+100h] [rbp-580h] BYREF
  __int64 v191; // [rsp+108h] [rbp-578h]
  __int64 v192; // [rsp+110h] [rbp-570h] BYREF
  __int64 v193; // [rsp+118h] [rbp-568h]
  void *v194; // [rsp+120h] [rbp-560h] BYREF
  __int64 v195; // [rsp+128h] [rbp-558h]
  int v196; // [rsp+130h] [rbp-550h]
  char *v197; // [rsp+138h] [rbp-548h]
  __int64 v198; // [rsp+140h] [rbp-540h]
  char v199; // [rsp+148h] [rbp-538h] BYREF
  _OWORD *v200; // [rsp+1C8h] [rbp-4B8h]
  __int64 v201; // [rsp+1D0h] [rbp-4B0h]
  int v202; // [rsp+1D8h] [rbp-4A8h]
  __int128 v203; // [rsp+1E0h] [rbp-4A0h]
  __int128 v204; // [rsp+1F0h] [rbp-490h]
  _QWORD v205[2]; // [rsp+200h] [rbp-480h] BYREF
  char v206; // [rsp+210h] [rbp-470h]
  _QWORD *v207; // [rsp+218h] [rbp-468h]
  __int64 v208; // [rsp+220h] [rbp-460h]
  __int64 v209; // [rsp+228h] [rbp-458h]
  __int64 v210; // [rsp+230h] [rbp-450h]
  _QWORD *v211; // [rsp+238h] [rbp-448h]
  __int64 v212; // [rsp+250h] [rbp-430h]
  _QWORD *v213; // [rsp+258h] [rbp-428h]
  __int64 v214; // [rsp+288h] [rbp-3F8h]
  char *v215; // [rsp+290h] [rbp-3F0h]
  int v216; // [rsp+298h] [rbp-3E8h]
  __int64 v217; // [rsp+2A0h] [rbp-3E0h]
  _QWORD v218[19]; // [rsp+2A8h] [rbp-3D8h] BYREF
  int v219; // [rsp+340h] [rbp-340h]
  __int64 (__fastcall **v220)(); // [rsp+348h] [rbp-338h] BYREF
  int v221; // [rsp+3D8h] [rbp-2A8h]
  __int64 v222; // [rsp+3E0h] [rbp-2A0h]
  __int64 v223; // [rsp+3E8h] [rbp-298h]
  __int64 v224; // [rsp+3F0h] [rbp-290h]
  __int64 v225; // [rsp+3F8h] [rbp-288h]
  __int64 v226; // [rsp+400h] [rbp-280h]
  __int64 v227; // [rsp+408h] [rbp-278h]
  __int64 v228; // [rsp+410h] [rbp-270h]
  char v229; // [rsp+418h] [rbp-268h] BYREF
  int v230[2]; // [rsp+420h] [rbp-260h] BYREF
  int v231; // [rsp+428h] [rbp-258h]
  __int16 v232; // [rsp+42Ch] [rbp-254h]
  int v233; // [rsp+43Ch] [rbp-244h]
  __int128 v234; // [rsp+448h] [rbp-238h]
  __int128 v235; // [rsp+458h] [rbp-228h]
  void *ptr; // [rsp+468h] [rbp-218h]
  __int64 v237; // [rsp+470h] [rbp-210h]
  _BYTE v238[448]; // [rsp+478h] [rbp-208h] BYREF
  char v239[8]; // [rsp+638h] [rbp-48h] BYREF
  char v240; // [rsp+640h] [rbp-40h]

  v177 = a1;
  v162 = a2;
  LODWORD(v138) = a3;
  sub_62CF50(a1, a2);
  result = sub_64AFA0(a1->m128i_i64[1]);
  v156 = result;
  if ( !(_BYTE)result )
    return result;
  result = *(unsigned int *)(*a2 + 56);
  v164 = *(_DWORD *)(*a2 + 68);
  LODWORD(v148) = result;
  if ( v164 == (_DWORD)result )
    return result;
  v8 = (_QWORD *)sub_186B270(0x80u);
  v196 = 0;
  *v8 = 0;
  v8[2] = 0;
  v8[4] = 0;
  v8[6] = 0;
  v8[8] = 0;
  v8[10] = 0;
  v8[12] = 0;
  v8[14] = 0;
  v194 = v8;
  v197 = &v199;
  v195 = 8;
  v198 = 0x1000000000LL;
  v9 = (_OWORD *)sub_186B270(0x40u);
  v200 = v9;
  v9[2] = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[3] = 0;
  v10 = a1->m128i_i64[0];
  v203 = 0;
  v136 = v10;
  v182 = v10;
  v11 = *a2;
  v204 = 0;
  v12 = *(_QWORD *)(v11 + 40);
  v201 = 8;
  v202 = 0;
  v141 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v167 = &v194;
  sub_148BC40(&v194, v12, 1);
  v163 = 0;
  v161 = 0;
  if ( v164 )
  {
    for ( i = 0; i != v164; ++i )
    {
      v17 = *(_QWORD *)(*v162 + 8LL * i + 80);
      sub_148BC40(&v194, v17 & 0xFFFFFFFFFFFFFFF8LL, 1);
      v184 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17 > 7 )
        ++*(_DWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v183 = v161;
      sub_62BCA0(&v183, &v184);
      v161 = v183;
      v18 = (*(_QWORD *)(*v162 + 8LL * i + 80) & 7LL) == 1;
      if ( v163 )
      {
        v19 = *(_DWORD *)(v163 - 4);
        if ( v19 == *(_DWORD *)(v163 - 8) )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = v20 + 8;
          if ( v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v230, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v230);
            sub_233E40((__int64)v230);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300((void *)(v163 - 8), v21);
          v23 = v22[1];
          *v22 = v20;
          v163 = (__int64)(v22 + 2);
          LODWORD(v22) = v23;
          v16 = (bool *)(v163 + v23);
          v15 = (_DWORD)v22 + 1;
        }
        else
        {
          v14 = v19;
          v15 = v19 + 1;
          v16 = (bool *)(v163 + v14);
        }
      }
      else
      {
        v49 = (_QWORD *)sub_186B270(0xAu);
        *v49 = 2;
        v163 = (__int64)(v49 + 1);
        v16 = (bool *)(v49 + 1);
        v15 = 1;
      }
      *v16 = v18;
      *(_DWORD *)(v163 - 4) = v15;
    }
  }
  v184 = a1->m128i_i64[0];
  if ( v164 >= (unsigned int)v148 )
  {
    v185 = nullptr;
    sub_2334C0((__int64 *)&v184);
    goto LABEL_25;
  }
  v24 = nullptr;
  v150 = nullptr;
  v143 = &a1[18].m128i_u64[1];
  do
  {
    v154 = *(_QWORD *)(*v162 + 8LL * v164 + 80);
    v152 = v154 & 0xFFFFFFFFFFFFFFF8LL;
    sub_157E9E0((int)v143, v154 & 0xFFFFFFF8);
    v25 = a1[20].m128i_i64[0];
    if ( !v25 )
      goto LABEL_48;
    v26 = *(_DWORD *)(v25 - 4);
    if ( !v26 )
      goto LABEL_48;
    v27 = v26;
    v28 = 0;
    v171 = v27;
    v29 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v25 + 8 * v28) )
      {
        v168 = v28;
        if ( !*(_DWORD *)sub_148B390(&v194, (unsigned int)v28) )
        {
          v30 = (unsigned int)v28 >> 5;
          if ( v24 )
          {
            v31 = v30 + 1;
            v159 = *((_DWORD *)v24 - 1);
            if ( (unsigned int)v30 < v159 )
            {
LABEL_40:
              v29 = v156;
              *((_DWORD *)v24 + v30) |= 1 << v28;
              goto LABEL_34;
            }
          }
          else
          {
            v31 = v30 + 1;
            v39 = (_QWORD *)sub_186B270(0x10u);
            v24 = v39 + 1;
            v159 = 0;
            *v39 = 2;
          }
          while ( 1 )
          {
            v36 = *((_DWORD *)v24 - 2);
            if ( v36 >= v31 )
              break;
            v32 = (3 * v36 + 1) >> 1;
            v33 = 4 * v32 + 8;
            v34 = v32;
            if ( 4 * v36 + 8 >= (unsigned int)v33 || v36 >= v32 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v230, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v230);
              sub_233E40((__int64)v230);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v35 = (unsigned int *)sub_186B300(v24 - 1, v33);
            *v35 = v34;
            v24 = v35 + 2;
          }
          *((_DWORD *)v24 - 1) = v31;
          v37 = 4LL * v31;
          v38 = 4LL * v159;
          if ( v38 != v37 )
            memset((char *)v24 + v38, 0, v37 - v38);
          goto LABEL_40;
        }
      }
LABEL_34:
      if ( v171 == ++v28 )
        break;
      v25 = a1[20].m128i_i64[0];
    }
    if ( v29 )
    {
      *(_QWORD *)v186 = v154 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v154 > 7 )
        ++*(_DWORD *)(v152 + 8);
      v185 = v150;
      sub_62BD60(&v185, v186);
      v150 = v185;
      goto LABEL_20;
    }
LABEL_48:
    v188 = v154 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v154 > 7 )
      ++*(_DWORD *)(v152 + 8);
    v183 = v161;
    sub_62BCA0(&v183, &v188);
    v40 = (_QWORD *)v163;
    v161 = v183;
    if ( v163 )
    {
      v41 = *(_DWORD *)(v163 - 4);
      if ( v41 == *(_DWORD *)(v163 - 8) )
      {
        v45 = (3 * v41 + 1) >> 1;
        v46 = v45 + 8;
        if ( v41 + 8 >= (unsigned int)v46 || v41 >= v45 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v230, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v230);
          sub_233E40((__int64)v230);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (unsigned int *)sub_186B300((void *)(v163 - 8), v46);
        v48 = v47[1];
        *v47 = v45;
        v163 = (__int64)(v47 + 2);
        v40 = v47 + 2;
        LODWORD(v47) = v48;
        v44 = (_BYTE *)(v163 + v48);
        v43 = (_DWORD)v47 + 1;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = (_BYTE *)(v163 + v42);
      }
    }
    else
    {
      v82 = (_QWORD *)sub_186B270(0xAu);
      *v82 = 2;
      v163 = (__int64)(v82 + 1);
      v44 = v82 + 1;
      v40 = v82 + 1;
      v43 = 1;
    }
    *v44 = 0;
    *((_DWORD *)v40 - 1) = v43;
LABEL_20:
    ++v164;
  }
  while ( (_DWORD)v148 != v164 );
  if ( v150 && *(v150 - 1) )
  {
    *(_QWORD *)v186 = 0;
    v50 = a1->m128i_i64[0];
    v232 = 0;
    v205[0] = 0;
    v187 = v50;
    *(_QWORD *)v230 = v50;
    v231 = 256;
    v237 = 0x1000000000LL;
    v160 = v230;
    v233 = 0;
    ptr = v238;
    v157 = v205;
    v234 = 0;
    v235 = 0;
    sub_14DC230(v230, v205);
    v53 = *(v150 - 1);
    if ( HIBYTE(v231) )
    {
      sub_14E1930((int)v230, v132, v134, v136, v138, v141, (__int64)v143, v148, (int)v150);
    }
    else
    {
      if ( (_BYTE)v231 )
        v54 = sub_14DD000(v230, v53, v150, v186);
      else
        v54 = sub_14DC740(
                (int)v230,
                v53,
                (int)v150,
                (int)v186,
                v51,
                v52,
                v132,
                v134,
                v136,
                v138,
                v141,
                v143,
                (int)v148,
                (int)v150,
                v152,
                v154,
                (int)v205,
                (int)v230,
                v161,
                (int)v162,
                v163,
                v164,
                (int)&v194,
                v168,
                v171,
                (int)a1,
                v178,
                (int)s,
                (int)v180,
                v181,
                v182,
                v183,
                v184,
                (int)v185,
                v186[0],
                v187,
                v188,
                v189,
                v190,
                v191,
                v192,
                v193,
                (int)v194,
                v195,
                v196,
                (int)v197,
                v198,
                v199);
      if ( v54 == 5 )
      {
        v129 = sub_15E1AF0(v230[0]);
        v130 = v129;
        if ( v129 )
          ++*(_DWORD *)(v129 + 8);
        sub_629FE0(*(__int64 *)v186, v187);
        *(_QWORD *)v186 = v130;
      }
    }
    v55 = ptr;
    v56 = (char *)ptr + 8 * (unsigned int)v237;
    v57 = (char *)ptr;
    if ( ptr != v56 )
    {
      do
      {
        v58 = *(_QWORD *)v57;
        v57 += 8;
        *(_BYTE *)(v58 + 6) &= ~1u;
      }
      while ( v57 != v56 );
    }
    LODWORD(v237) = 0;
    if ( v55 != v238 && v55 )
      sub_186B220(v55);
    if ( *((_QWORD *)&v235 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v235 + 1) - 8LL));
    if ( (_QWORD)v235 )
      sub_186B220((void *)(v235 - 8));
    if ( *((_QWORD *)&v234 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v234 + 1) - 8LL));
    if ( (_QWORD)v234 )
      sub_186B220((void *)(v234 - 8));
    sub_18572D0(v157);
    v59 = *v162;
    if ( v24 && (v60 = *((unsigned int *)v24 - 1), (_DWORD)v60) )
    {
      v61 = (char *)v24;
      v62 = (char *)v24 + 4 * v60;
      v63 = 0;
      do
      {
        v61 += 4;
        v64 = __popcountdi2() + v63;
        v63 = v64;
      }
      while ( v62 != v61 );
      v172 = v64;
      sub_62B320((__int64)v177, v59);
      v65 = nullptr;
      v169 = v177->m128i_i64[0];
      v188 = v177->m128i_i64[0];
      if ( v64 )
      {
        do
        {
          do
          {
            s = v65;
            sub_39BE00((unsigned int **)&s);
            v65 = (char *)s;
          }
          while ( !s );
        }
        while ( *((_DWORD *)s - 2) < v64 );
        *((_DWORD *)s - 1) = v64;
        v66 = v64;
        memset(v65, 0, 8LL * v64);
        v67 = v177[20].m128i_i64[0];
        if ( !v67 )
        {
          v68 = 0;
          goto LABEL_97;
        }
LABEL_83:
        v170 = 0;
        v68 = 0;
        v69 = 0;
        do
        {
          if ( v69 >= *(_DWORD *)(v67 - 4) )
            break;
          v70 = *(_QWORD *)(v67 + 8LL * v69);
          if ( v70 )
          {
            v71 = v69 >> 5;
            if ( v24 && (unsigned int)v71 < *((_DWORD *)v24 - 1) && (*((_DWORD *)v24 + v71) & (1 << v69)) != 0 )
            {
              v72 = v170 + 1;
              if ( !v65 || (v73 = *((_DWORD *)v65 - 1), v73 == *((_DWORD *)v65 - 2)) )
              {
                s = v65;
                sub_39BE00((unsigned int **)&s);
                v65 = (char *)s;
                v72 = v170 + 1;
                v73 = *((_DWORD *)s - 1);
              }
              *(_QWORD *)&v65[8 * v73] = v70;
              *((_DWORD *)v65 - 1) = v73 + 1;
              v74 = v170;
              v170 = v72;
            }
            else
            {
              v74 = v69 + v172;
            }
            v75 = sub_15DB5C0(v177->m128i_i64[0], v74, v70);
            v181 = v75;
            if ( v75 )
              ++*(_DWORD *)(v75 + 8);
            v189 = v68;
            sub_62BD60(&v189, &v181);
            v68 = v189;
            v67 = v177[20].m128i_i64[0];
          }
          ++v69;
        }
        while ( v67 );
        v66 = v172;
        if ( !v172 )
        {
          v86 = v177->m128i_i64[0];
          v169 = v177->m128i_i64[0];
          if ( !v65 )
            goto LABEL_198;
          v83 = *((_DWORD *)v65 - 1);
          v78 = nullptr;
          v85 = v83 >> 1;
          if ( !(v83 >> 1) )
            goto LABEL_198;
          goto LABEL_107;
        }
LABEL_97:
        v76 = 8 * v66;
        v77 = 0;
        v78 = nullptr;
        v79 = 1;
LABEL_98:
        v165 = v77;
        v180 = v78;
        sub_41E8A0(&v180);
        v78 = v180;
        v77 = v165;
        v80 = *(v180 - 1);
        while ( 1 )
        {
          v81 = v80;
          v77 += 8;
          ++v80;
          *(_QWORD *)&v78[2 * v81] = v79;
          *(v78 - 1) = v80;
          if ( v76 == v77 )
            break;
          v79 = v77 | 1;
          if ( *(v78 - 2) == v80 )
            goto LABEL_98;
        }
        if ( v65 )
        {
          v83 = *((_DWORD *)v65 - 1);
          v84 = (__int64 *)v177;
          v85 = v83 >> 1;
          if ( v83 >> 1 )
          {
            v86 = v177->m128i_i64[0];
LABEL_107:
            v87 = v83 - 1;
            v88 = 0;
            do
            {
              v89 = *(_QWORD *)&v65[8 * v88];
              v90 = &v65[8 * (v87 - (unsigned int)v88)];
              *(_QWORD *)&v65[8 * v88++] = *(_QWORD *)v90;
              *(_QWORD *)v90 = v89;
            }
            while ( (unsigned int)v88 < v85 );
            v169 = v86;
            if ( v78 )
              goto LABEL_110;
LABEL_198:
            v153 = nullptr;
LABEL_114:
            sub_633760(v160, v169, 0, v239);
            v240 = 0;
            *(_QWORD *)v230 = &off_1C4CA80;
            if ( v68 )
              v99 = *(_DWORD *)(v68 - 4);
            else
              v99 = 0;
            sub_157BE40(
              (int)v157,
              (int)v160,
              v186[0],
              v99,
              v68,
              v98,
              v132,
              (__int64)&off_1C4CA80,
              v136,
              v138,
              v141,
              (int)v143,
              (__int64)v148,
              v150);
LABEL_117:
            v149 = v205[0];
            v100 = sub_15DB6A0(
                     v177->m128i_i64[0],
                     1,
                     v172,
                     v65,
                     v153,
                     v205[0],
                     0,
                     &qword_18D6CD0,
                     &qword_18D6CD0,
                     0,
                     0,
                     0,
                     0);
            v155 = v100;
            if ( v100 )
            {
              ++*(_DWORD *)(v100 + 8);
              sub_629FE0(0, v169);
              if ( !v139 )
              {
                sub_629FE0(0, v169);
                v101 = v155;
                ++*(_DWORD *)(v155 + 8);
                v166 = v169;
                goto LABEL_120;
              }
            }
            else
            {
              sub_629FE0(0, v169);
              if ( !v139 )
                BUG();
            }
            *(_QWORD *)v144 = v177->m128i_i64[0];
            sub_1584DD0(v157, v177->m128i_i64[0], 0);
            v205[0] = &off_1C52A00;
            v215 = &v229;
            v216 = 0;
            v217 = 0;
            sub_1584DD0(v218, *(_QWORD *)v144, 0);
            v218[18] = 0;
            v219 = 0;
            v218[0] = &off_1C61DB8;
            sub_1584DD0(&v220, *(_QWORD *)v144, 0);
            v221 = 0;
            v222 = 0;
            v223 = *(_QWORD *)v144;
            v220 = &off_1C61DE0;
            v224 = 0;
            v225 = *(_QWORD *)v144;
            v226 = 0;
            v227 = *(_QWORD *)v144;
            v228 = 0;
            v205[0] = &off_1C52A20;
            sub_6AC3A0(
              (unsigned int)&v229,
              v144[0],
              v114,
              v115,
              v116,
              v117,
              v133,
              v135,
              v137,
              (unsigned int)&v229,
              v142,
              v144[0]);
            if ( v209 )
            {
              if ( *(_DWORD *)(v209 - 4) || *v207 != v208 )
              {
                *(_DWORD *)(v209 - 4) = 0;
                goto LABEL_151;
              }
            }
            else if ( v208 != *v207 )
            {
LABEL_151:
              v118 = v211;
              if ( v211 )
              {
                v174 = (unsigned __int64)&v211[*((unsigned int *)v211 - 1)];
                if ( (unsigned __int64)v211 >= v174 )
                  goto LABEL_175;
                do
                {
                  v119 = *v118;
                  if ( *v118 )
                  {
                    v120 = v210;
                    v113 = (*(_DWORD *)(v119 + 8))-- == 1;
                    if ( v113 )
                      sub_15D7BC0(v120, v119);
                  }
                  ++v118;
                }
                while ( (unsigned __int64)v118 < v174 );
                v118 = v211;
                if ( v211 )
LABEL_175:
                  *((_DWORD *)v118 - 1) = 0;
              }
              v123 = v213;
              if ( v213 )
              {
                v176 = (unsigned __int64)&v213[*((unsigned int *)v213 - 1)];
                if ( (unsigned __int64)v213 >= v176 )
                  goto LABEL_184;
                do
                {
                  v124 = *v123;
                  if ( *v123 )
                  {
                    v125 = v212;
                    v113 = (*(_DWORD *)(v124 + 8))-- == 1;
                    if ( v113 )
                      sub_15D7BC0(v125, v124);
                  }
                  ++v123;
                }
                while ( (unsigned __int64)v123 < v176 );
                v123 = v213;
                if ( v213 )
LABEL_184:
                  *((_DWORD *)v123 - 1) = 0;
              }
              if ( v214 )
                *(_DWORD *)(v214 - 4) = 0;
              sub_15843E0(v157);
            }
            v190 = 0;
            v192 = 0;
            v191 = v169;
            v193 = *(_QWORD *)v145;
            if ( v206 )
              sub_6376A0(v157, v155, &v190, &v192);
            else
              sub_639100(v157, v155, &v190, &v192);
            v101 = v190;
            v175 = v192;
            v146 = v193;
            v166 = v191;
            v205[0] = &off_1C52A20;
            sub_6AA870(v140);
            sub_6331D0(v157);
            sub_629F20(v175, v146);
LABEL_120:
            if ( (unsigned __int16)(*(_WORD *)(v101 + 4) - 1) <= 1u )
            {
              v121 = sub_15E1B70(v177->m128i_i64[0]);
              v173 = v121;
              if ( v121 )
                ++*(_DWORD *)(v121 + 8);
              sub_629FE0(v101, v166);
              if ( v173 == *(_QWORD *)(v177->m128i_i64[0] + 856) )
                goto LABEL_128;
              v205[0] = v173;
              if ( !v173 )
                goto LABEL_124;
            }
            else
            {
              if ( v101 == *(_QWORD *)(v177->m128i_i64[0] + 856) )
              {
                v173 = v101;
LABEL_128:
                v107 = *v162;
                v158 = (__int64 *)v162[1];
                if ( *v162 )
                  ++*(_DWORD *)(v107 + 60);
                if ( v161 )
                {
                  v108 = *(_DWORD *)(v161 - 4);
                  v109 = v161;
                }
                else
                {
                  v108 = 0;
                  v109 = 0;
                }
                v110 = sub_62C680(v177, v142, v108, v109, v163, (__int64 *)(v107 + 72), 1);
                ++*(_DWORD *)(v110 + 60);
                v111 = *v162;
                if ( *v162 )
                {
                  v112 = (__int64 *)v162[1];
                  v113 = (*(_DWORD *)(v111 + 60))-- == 1;
                  if ( v113 )
                  {
                    *(_QWORD *)v147 = v110;
                    sub_62A330(v111, *v112);
                    v110 = *(_QWORD *)v147;
                  }
                }
                *v162 = v110;
                sub_629AF0((_QWORD *)v110, v177->m128i_i64[1], v107);
                if ( v107 )
                {
                  v113 = (*(_DWORD *)(v107 + 60))-- == 1;
                  if ( v113 )
                    sub_62A330(v107, *v158);
                }
                *(_QWORD *)v230 = v135;
                sub_267D20(v160);
                sub_629FE0(v155, v169);
                sub_629FE0(v173, v166);
                sub_629FE0(v149, v169);
                if ( v153 )
                  sub_186B220(v153 - 2);
                if ( v65 )
                  sub_186B220(v65 - 8);
                v189 = v68;
                sub_2334C0((__int64 *)&v188);
                sub_629FE0(*(__int64 *)v186, v187);
                v185 = *(unsigned int **)v151;
                sub_2334C0((__int64 *)&v184);
                if ( v24 )
                  sub_186B220(v24 - 1);
                sub_629F20(v142, v137);
                if ( v163 )
                  sub_186B220((void *)(v163 - 8));
                goto LABEL_27;
              }
              v205[0] = v101;
              v173 = v101;
            }
            ++*(_DWORD *)(v173 + 8);
LABEL_124:
            v183 = v161;
            sub_62BCA0(&v183, v157);
            v102 = (_QWORD *)v163;
            v161 = v183;
            if ( v163 )
            {
              v103 = *(_DWORD *)(v163 - 4);
              if ( v103 == *(_DWORD *)(v163 - 8) )
              {
                v126 = (3 * v103 + 1) >> 1;
                if ( v103 + 8 >= v126 + 8 || v103 >= v126 )
                {
                  v3 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v157, "Overflow encountered when expanding vector");
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, v157);
                  sub_233E40((__int64)v157);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v127 = (unsigned int *)sub_186B300((void *)(v163 - 8), v126 + 8);
                v128 = v127[1];
                *v127 = v126;
                v163 = (__int64)(v127 + 2);
                v102 = v127 + 2;
                LODWORD(v127) = v128;
                v106 = (_BYTE *)(v163 + v128);
                v105 = (_DWORD)v127 + 1;
              }
              else
              {
                v104 = v103;
                v105 = v103 + 1;
                v106 = (_BYTE *)(v163 + v104);
              }
            }
            else
            {
              v131 = (_QWORD *)sub_186B270(0xAu);
              *v131 = 2;
              v163 = (__int64)(v131 + 1);
              v106 = v131 + 1;
              v102 = v131 + 1;
              v105 = 1;
            }
            *v106 = 0;
            *((_DWORD *)v102 - 1) = v105;
            goto LABEL_128;
          }
        }
        else
        {
          v84 = (__int64 *)v177;
        }
        v169 = *v84;
LABEL_110:
        v91 = *(v78 - 1) >> 1;
        if ( v91 )
        {
          v92 = *(v78 - 1) - 1;
          v93 = v78;
          v94 = v92 - v91;
          do
          {
            v95 = v92;
            v96 = *(_QWORD *)v93;
            --v92;
            v93 += 2;
            v97 = &v78[2 * v95];
            *((_QWORD *)v93 - 1) = *(_QWORD *)v97;
            *(_QWORD *)v97 = v96;
          }
          while ( v92 != v94 );
        }
        v153 = v78;
        goto LABEL_114;
      }
    }
    else
    {
      sub_62B320((__int64)v177, *v162);
      v169 = v177->m128i_i64[0];
      v188 = v177->m128i_i64[0];
    }
    v65 = nullptr;
    v172 = 0;
    v67 = v177[20].m128i_i64[0];
    v153 = (unsigned int *)v67;
    if ( !v67 )
    {
      sub_633760(v160, v169, 0, v239);
      v240 = 0;
      v68 = 0;
      v65 = nullptr;
      *(_QWORD *)v230 = &off_1C4CA80;
      v172 = 0;
      sub_157BE40(
        (int)v157,
        (int)v160,
        v186[0],
        0,
        0,
        v122,
        v132,
        (__int64)&off_1C4CA80,
        v136,
        v138,
        v141,
        (int)v143,
        (__int64)v148,
        v150);
      goto LABEL_117;
    }
    goto LABEL_83;
  }
  v185 = v150;
  sub_2334C0((__int64 *)&v184);
  if ( v24 )
    sub_186B220(v24 - 1);
LABEL_25:
  sub_629F20(v141, v136);
  if ( v163 )
    sub_186B220((void *)(v163 - 8));
LABEL_27:
  v183 = v161;
  sub_2B4F40(&v182);
  return sub_52C220((__int64)v167);
}

