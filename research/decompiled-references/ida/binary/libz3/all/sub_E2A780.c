void __fastcall sub_E2A780(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r8
  _QWORD *v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int32 v9; // r15d
  __int64 v10; // rax
  __m128i *v11; // rax
  __int64 v12; // rbx
  __m128i v13; // xmm0
  __int64 *v14; // r8
  bool v15; // zf
  _DWORD *v16; // rax
  __int64 *v17; // r10
  void **v18; // rbx
  __int64 *v19; // r15
  void **v20; // rax
  char v21; // r12
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // r9
  __int64 *v27; // r8
  _DWORD *v28; // rax
  void **v29; // rbx
  __int64 *v30; // r14
  void **v31; // rax
  char v32; // r12
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rax
  _DWORD *v37; // rdx
  const char *v38; // rdi
  int v39; // eax
  __int64 v40; // r8
  size_t v41; // rsi
  __int64 *v42; // r8
  __int64 v43; // rdi
  char v44; // al
  char *v45; // r13
  __int64 v46; // rax
  _DWORD *v47; // rdx
  __int64 *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 *v54; // rcx
  int v55; // edx
  __int64 *v56; // r11
  __int64 v57; // rdx
  __int64 *v58; // rdi
  __int64 *k; // rax
  __int64 v60; // rdx
  unsigned int v61; // esi
  unsigned int v62; // edx
  __int64 v63; // rax
  int v64; // esi
  __int64 *v65; // rbx
  _QWORD *v66; // r13
  __int64 v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // rdi
  _QWORD *j; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 *v75; // rbx
  __int64 *v76; // rdx
  __int64 v77; // r13
  __int64 *v78; // rbp
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  char *v83; // r14
  unsigned int v84; // ecx
  unsigned int v85; // edx
  char *v86; // rax
  __int64 *v87; // rdi
  __int64 *v88; // r8
  __int64 v89; // rax
  unsigned int v90; // eax
  __int64 *v91; // r8
  __int64 (__fastcall *v92)(_QWORD *, __int64); // rax
  _QWORD *v93; // r15
  __int64 v94; // rax
  unsigned int v95; // r13d
  __int32 v96; // ebx
  __int64 v97; // rax
  __m128 *v98; // rax
  __int64 v99; // r14
  unsigned __int64 v100; // rdi
  __int64 v101; // rbp
  __m128 v102; // xmm0
  _DWORD *v103; // rax
  __int64 *v104; // r13
  void **v105; // rbx
  __int64 *v106; // r12
  void **v107; // rdx
  __int64 v108; // r14
  __int64 v109; // r15
  bool v110; // al
  __int64 v111; // rax
  __int64 v112; // r13
  __int64 v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // r14
  __int64 v116; // rax
  __int64 *v117; // rax
  __int64 *v118; // rdi
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // r13
  __int64 v123; // r14
  __int64 v124; // rdx
  void **v125; // rbx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 *v128; // rax
  __int64 *v129; // rdi
  unsigned __int64 v130; // rax
  __int64 v131; // rcx
  unsigned int *v132; // rbx
  unsigned int *v133; // r13
  unsigned int v134; // r14d
  __int64 v135; // rbp
  _BYTE *v136; // rax
  __int64 v137; // r15
  __int16 v138; // ax
  int v139; // ecx
  __int64 v140; // rax
  __int64 v141; // rdx
  unsigned int *v142; // rdx
  __int64 v143; // rax
  unsigned int *v144; // rax
  __int64 v145; // rax
  unsigned int v146; // r15d
  unsigned int *v147; // rax
  __int64 v148; // rax
  _DWORD *v149; // rax
  _DWORD *v150; // rax
  __int64 v151; // rdx
  _DWORD *v152; // r11
  int v153; // r10d
  __int64 v154; // r9
  int v155; // edi
  _DWORD *v156; // r10
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rax
  _QWORD *v160; // rax
  __int64 v161; // rbp
  char *v162; // r12
  __m128i *v163; // rdi
  char *v164; // rbx
  unsigned __int64 v165; // rdx
  __int64 *v166; // r15
  unsigned int v167; // r14d
  unsigned int v168; // edx
  char *v169; // rax
  char *v170; // rcx
  _QWORD *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rcx
  int v174; // esi
  int v175; // edx
  unsigned int v176; // r12d
  unsigned int v177; // edx
  __int64 v178; // rax
  __int64 *v179; // rbp
  _QWORD *v180; // r14
  __int64 v181; // rax
  _QWORD *v182; // rdx
  _QWORD *v183; // rdi
  _QWORD *i; // rax
  __int64 v185; // rcx
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 *v189; // rcx
  __int64 *v190; // rbx
  __int64 *v191; // r14
  __int64 *v192; // rbp
  __int64 v193; // rsi
  __int64 v194; // rdi
  __int64 v195; // rsi
  __int64 v196; // rdi
  __int64 v197; // rdx
  __int64 v198; // rbx
  __int64 v199; // rbp
  __int64 v200; // r13
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 *v203; // rax
  __int64 *v204; // rdi
  unsigned __int64 v205; // rax
  __int64 v206; // rcx
  char *v207; // r14
  char *v208; // rax
  char *v209; // r13
  char *v210; // rbx
  char *v211; // r14
  unsigned int v212; // r15d
  unsigned int v213; // edx
  char *v214; // rax
  char *v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rcx
  int v218; // esi
  int v219; // edx
  _QWORD *v220; // rax
  __int64 v221; // rdi
  __int64 v222; // r12
  __int64 v223; // rax
  void **v224; // rbx
  __int64 v225; // r14
  __int64 v226; // rcx
  __int64 v227; // rdx
  __int64 *v228; // rdi
  unsigned __int64 v229; // rdx
  __int64 v230; // rcx
  unsigned __int64 v231; // rax
  __int64 v232; // rcx
  unsigned __int64 v233; // rax
  __int64 v234; // rcx
  unsigned __int64 v235; // rax
  __int64 v236; // rcx
  unsigned __int64 v237; // rdx
  __int64 v238; // rcx
  char **v239; // rbp
  char **exception; // r14
  char **v241; // r14
  int v242; // [rsp+0h] [rbp-158h]
  __int64 *v243; // [rsp+8h] [rbp-150h] BYREF
  int v244[2]; // [rsp+10h] [rbp-148h]
  _DWORD *v245; // [rsp+18h] [rbp-140h]
  __int64 **v246; // [rsp+20h] [rbp-138h]
  __int64 *v247; // [rsp+28h] [rbp-130h]
  void **v248; // [rsp+30h] [rbp-128h]
  __int64 *v249; // [rsp+38h] [rbp-120h]
  _DWORD *v250; // [rsp+40h] [rbp-118h]
  _DWORD *v251; // [rsp+48h] [rbp-110h]
  __int64 *v252; // [rsp+50h] [rbp-108h]
  unsigned int v253; // [rsp+58h] [rbp-100h]
  int v254; // [rsp+5Ch] [rbp-FCh]
  int v255; // [rsp+60h] [rbp-F8h]
  __int64 v256; // [rsp+68h] [rbp-F0h] BYREF
  __int64 *v257; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v258; // [rsp+78h] [rbp-E0h]
  int v259; // [rsp+80h] [rbp-D8h]
  int v260; // [rsp+88h] [rbp-D0h]
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v262; // [rsp+98h] [rbp-C0h]
  __int64 v263; // [rsp+A0h] [rbp-B8h] BYREF
  void *v264; // [rsp+A8h] [rbp-B0h] BYREF
  int v265; // [rsp+B0h] [rbp-A8h]
  __int64 v266; // [rsp+B8h] [rbp-A0h]

  v4 = a1;
  v248 = (void **)a2;
  if ( !a3 )
  {
    v92 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 144);
    if ( v92 != sub_E2A120 )
    {
      ((void (__fastcall *)(__int64 *, __int64, __int64 (__fastcall *)(_QWORD *, __int64), __int64, __int64 *))v92)(
        a1,
        a2,
        sub_E2A120,
        a4,
        a1);
      return;
    }
    v93 = (_QWORD *)a1[14];
    v243 = (__int64 *)a1[12];
    v94 = a1[15];
    if ( v93 )
    {
      v95 = *((_DWORD *)v93 - 1);
      if ( v248 )
      {
        ++*(_DWORD *)(a2 + 8);
        if ( v94 )
        {
          v96 = *(_DWORD *)(v94 - 4);
          v97 = *((unsigned int *)v93 - 1);
        }
        else
        {
          v97 = *((unsigned int *)v93 - 1);
          v96 = 0;
        }
      }
      else if ( v94 )
      {
        v96 = *(_DWORD *)(v94 - 4);
        v97 = v95;
      }
      else
      {
        v97 = v95;
        v96 = 0;
      }
      if ( *((_DWORD *)v93 - 2) == (_DWORD)v97 )
      {
        v176 = (unsigned int)(3 * v97 + 1) >> 1;
        v177 = 40 * v176 + 8;
        if ( 40 * (int)v97 + 8 >= v177 || (unsigned int)v97 >= v176 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        *(_QWORD *)v244 = a1;
        v178 = sub_186B270(v177);
        v4 = a1;
        v179 = (__int64 *)v178;
        v93 = (_QWORD *)(v178 + 8);
        v180 = (_QWORD *)a1[14];
        if ( v180 )
        {
          v181 = *((unsigned int *)v180 - 1);
          v182 = v93;
          *((_DWORD *)v179 + 1) = v181;
          v183 = &v180[5 * v181];
          for ( i = v180; v183 != i; *((_DWORD *)v182 - 1) = *((_DWORD *)i - 1) )
          {
            v185 = i[1];
            i += 5;
            v182 += 5;
            *(v182 - 4) = v185;
            v186 = *(i - 5);
            *(i - 5) = 0;
            *(v182 - 5) = v186;
            *(v182 - 2) = *(i - 2);
            v187 = *(i - 3);
            *(i - 3) = 0;
            *(v182 - 3) = v187;
            *((_BYTE *)v182 - 8) = *((_BYTE *)i - 8);
          }
          v188 = *((unsigned int *)v180 - 1);
          if ( (_DWORD)v188 )
          {
            *(_QWORD *)v244 = v179;
            v189 = &v180[5 * v188];
            LODWORD(v245) = v96;
            v190 = v180;
            v191 = v4;
            v192 = v189;
            do
            {
              v195 = v190[2];
              if ( v195 )
              {
                v196 = v190[3];
                v15 = (*(_DWORD *)(v195 + 8))-- == 1;
                if ( v15 )
                  sub_15D7BC0(v196, v195);
              }
              v193 = *v190;
              if ( *v190 )
              {
                v194 = v190[1];
                v15 = (*(_DWORD *)(v193 + 8))-- == 1;
                if ( v15 )
                  sub_15D7BC0(v194, v193);
              }
              v190 += 5;
            }
            while ( v190 != v192 );
            v4 = v191;
            v179 = *(__int64 **)v244;
            v96 = (int)v245;
            v180 = (_QWORD *)v191[14];
          }
          *(_QWORD *)v244 = v4;
          sub_186B220(v180 - 1);
          v4 = *(__int64 **)v244;
          v98 = (__m128 *)&v93[5 * *((unsigned int *)v179 + 1)];
        }
        else
        {
          *(_DWORD *)(v178 + 4) = 0;
          v98 = (__m128 *)(v178 + 8);
        }
        v4[14] = (__int64)v93;
        *(_DWORD *)v179 = v176;
      }
      else
      {
        v98 = (__m128 *)&v93[5 * v97];
      }
    }
    else
    {
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      if ( v94 )
        v96 = *(_DWORD *)(v94 - 4);
      else
        v96 = 0;
      *(_QWORD *)v244 = a1;
      v220 = (_QWORD *)sub_186B270(0x58u);
      v4 = a1;
      *v220 = 2;
      v95 = 0;
      v93 = v220 + 1;
      a1[14] = (__int64)(v220 + 1);
      v98 = (__m128 *)(v220 + 1);
    }
    v99 = (__int64)v248;
    v100 = (unsigned __int64)v243;
    v98[1].m128_u64[0] = 0;
    v101 = (__int64)(v4 + 27);
    v98[2].m128_i8[0] = 0;
    v98[1].m128_u64[1] = v100;
    v102 = _mm_loadh_ps((const double *)&v243);
    v98[2].m128_i32[1] = v96;
    *v98 = v102;
    ++*((_DWORD *)v93 - 1);
    v243 = v4;
    sub_15D08E0(v4 + 27);
    v15 = *(_WORD *)(v99 + 4) == 0;
    v247 = &v263;
    ptr = &v263;
    v257 = v243;
    v258 = v95;
    v262 = 0x1000000000LL;
    if ( v15 && (v103 = *(_DWORD **)(*(_QWORD *)(v99 + 16) + 24LL)) != nullptr && !*v103 && v103[1] == 5 )
    {
      v222 = (__int64)v248;
      v223 = *((unsigned int *)v248 + 6);
      if ( !(_DWORD)v223 )
        return;
      v104 = v247;
      v224 = &v248[v223];
      LODWORD(v225) = 16;
      LODWORD(v223) = 0;
      while ( 1 )
      {
        v226 = *(_QWORD *)(v222 + 32);
        v227 = (unsigned int)v223;
        v222 += 8;
        v223 = (unsigned int)(v223 + 1);
        v104[v227] = v226;
        LODWORD(v262) = v223;
        if ( (void **)v222 == v224 )
          break;
        if ( (unsigned int)v223 >= (unsigned int)v225 )
        {
          v225 = (unsigned int)(2 * v225);
          v104 = (__int64 *)sub_186B270(8 * v225);
          LODWORD(v223) = v262;
          v228 = (__int64 *)ptr;
          if ( (_DWORD)v262 )
          {
            if ( (unsigned int)(v262 - 1) <= 2 || v104 == (__int64 *)((char *)ptr + 8) )
            {
              v237 = 0;
              v238 = 8LL * (unsigned int)v262;
              do
              {
                v104[v237 / 8] = v228[v237 / 8];
                v237 += 8LL;
              }
              while ( v238 != v237 );
            }
            else
            {
              v229 = 0;
              v230 = 16LL * ((unsigned int)v262 >> 1);
              do
              {
                *(__m128i *)&v104[v229 / 8] = _mm_loadu_si128((const __m128i *)&v228[v229 / 8]);
                v229 += 16LL;
              }
              while ( v229 != v230 );
              if ( (v223 & 1) != 0 )
                v104[(unsigned int)v223 & 0xFFFFFFFE] = v228[(unsigned int)v223 & 0xFFFFFFFE];
            }
          }
          if ( v228 != v247 && v228 )
          {
            sub_186B220(v228);
            LODWORD(v223) = v262;
          }
          ptr = v104;
          HIDWORD(v262) = v225;
        }
      }
      v105 = (void **)&v104[v223];
      if ( v105 == (void **)v104 )
      {
        v110 = v104 == v247 || v104 == nullptr;
        goto LABEL_136;
      }
    }
    else
    {
      v104 = v247;
      LODWORD(v262) = 1;
      v105 = &v264;
      v263 = (__int64)v248;
    }
    v106 = v104;
    v107 = (void **)v104;
    do
    {
      if ( *((_WORD *)*v107 + 2) == 2 )
      {
        LOBYTE(v243) = 1;
        goto LABEL_130;
      }
      ++v107;
    }
    while ( v105 != v107 );
    LOBYTE(v243) = 0;
    while ( 1 )
    {
LABEL_130:
      while ( 1 )
      {
        v108 = *v106;
        if ( *(_WORD *)(*v106 + 4) == 2 )
          break;
        if ( !(_BYTE)v243 )
        {
          v246 = &v257;
          while ( 1 )
          {
            sub_E298E0(v246, v101, v108, 0);
            if ( v105 == (void **)++v106 )
              break;
            v108 = *v106;
            if ( *(_WORD *)(*v106 + 4) == 2 )
              goto LABEL_131;
          }
LABEL_135:
          v104 = (__int64 *)ptr;
          v110 = ptr == nullptr || ptr == v247;
LABEL_136:
          if ( !v110 )
            sub_186B220(v104);
          return;
        }
LABEL_129:
        if ( v105 == (void **)++v106 )
          goto LABEL_135;
      }
LABEL_131:
      if ( !*(_DWORD *)(v108 + 72) )
        goto LABEL_129;
      v109 = 0;
      do
        sub_E298E0(&v257, v101, *(_QWORD *)(v108 + 16LL * *(unsigned int *)(v108 + 20) + 8 * v109++ + 80), 0);
      while ( (unsigned int)v109 < *(_DWORD *)(v108 + 72) );
      if ( v105 == (void **)++v106 )
        goto LABEL_135;
    }
  }
  v5 = (_QWORD *)a1[14];
  v6 = a3;
  if ( v5 )
    v253 = *((_DWORD *)v5 - 1);
  else
    v253 = 0;
  v7 = a1[12];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v8 = a1[15];
  ++*(_DWORD *)(a3 + 8);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 - 4);
    if ( v5 )
      goto LABEL_8;
  }
  else
  {
    v9 = 0;
    if ( v5 )
    {
LABEL_8:
      v10 = *((unsigned int *)v5 - 1);
      if ( (_DWORD)v10 == *((_DWORD *)v5 - 2) )
      {
        v61 = (unsigned int)(3 * v10 + 1) >> 1;
        v62 = 40 * v61 + 8;
        if ( 40 * (int)v10 + 8 >= v62 || (unsigned int)v10 >= v61 )
        {
          v241 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *v241 = (char *)off_1C63128;
          sub_2333C0(v241 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v241, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        *(_QWORD *)v244 = a1;
        LODWORD(v243) = (unsigned int)(3 * v10 + 1) >> 1;
        v63 = sub_186B270(v62);
        v4 = a1;
        v64 = (int)v243;
        v65 = (__int64 *)v63;
        v5 = (_QWORD *)(v63 + 8);
        v66 = (_QWORD *)a1[14];
        if ( v66 )
        {
          v67 = *((unsigned int *)v66 - 1);
          v68 = v5;
          *((_DWORD *)v65 + 1) = v67;
          v69 = &v66[5 * v67];
          for ( j = v66; v69 != j; *((_DWORD *)v68 - 1) = *((_DWORD *)j - 1) )
          {
            v71 = j[1];
            j += 5;
            v68 += 5;
            *(v68 - 4) = v71;
            v72 = *(j - 5);
            *(j - 5) = 0;
            *(v68 - 5) = v72;
            *(v68 - 2) = *(j - 2);
            v73 = *(j - 3);
            *(j - 3) = 0;
            *(v68 - 3) = v73;
            *((_BYTE *)v68 - 8) = *((_BYTE *)j - 8);
          }
          v74 = *((unsigned int *)v66 - 1);
          if ( (_DWORD)v74 )
          {
            *(_QWORD *)v244 = v65;
            v75 = v66;
            v76 = &v66[5 * v74];
            LODWORD(v243) = v64;
            v77 = v6;
            v245 = v4;
            v78 = v76;
            do
            {
              while ( 1 )
              {
                v81 = v75[2];
                if ( v81 )
                {
                  v82 = v75[3];
                  v15 = (*(_DWORD *)(v81 + 8))-- == 1;
                  if ( v15 )
                    sub_15D7BC0(v82, v81);
                }
                v79 = *v75;
                if ( *v75 )
                {
                  v80 = v75[1];
                  v15 = (*(_DWORD *)(v79 + 8))-- == 1;
                  if ( v15 )
                    break;
                }
                v75 += 5;
                if ( v75 == v78 )
                  goto LABEL_139;
              }
              sub_15D7BC0(v80, v79);
              v75 += 5;
            }
            while ( v75 != v78 );
LABEL_139:
            v4 = (__int64 *)v245;
            v6 = v77;
            v64 = (int)v243;
            v65 = *(__int64 **)v244;
            v66 = *((_QWORD **)v245 + 14);
          }
          *(_QWORD *)v244 = v4;
          LODWORD(v243) = v64;
          sub_186B220(v66 - 1);
          v4 = *(__int64 **)v244;
          v11 = (__m128i *)&v5[5 * *((unsigned int *)v65 + 1)];
        }
        else
        {
          *(_DWORD *)(v63 + 4) = 0;
          v11 = (__m128i *)(v63 + 8);
        }
        v4[14] = (__int64)v5;
        *(_DWORD *)v65 = v64;
      }
      else
      {
        v11 = (__m128i *)&v5[5 * v10];
      }
      goto LABEL_10;
    }
  }
  v243 = a1;
  v171 = (_QWORD *)sub_186B270(0x58u);
  v4 = a1;
  *v171 = 2;
  v5 = v171 + 1;
  a1[14] = (__int64)(v171 + 1);
  v11 = (__m128i *)(v171 + 1);
LABEL_10:
  v12 = (__int64)v248;
  v11[2].m128i_i8[0] = 0;
  v11[2].m128i_i32[1] = v9;
  *(_QWORD *)v244 = v4;
  *v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)v7);
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)v7);
  v11[1] = v13;
  ++*((_DWORD *)v5 - 1);
  v243 = v4 + 27;
  sub_15D08E0(v4 + 27);
  v14 = *(__int64 **)v244;
  v15 = *(_WORD *)(v12 + 4) == 0;
  v258 = v253;
  v247 = &v263;
  ptr = &v263;
  v257 = *(__int64 **)v244;
  v262 = 0x1000000000LL;
  if ( v15 && (v16 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) != nullptr && !*v16 && v16[1] == 5 )
  {
    v121 = *((unsigned int *)v248 + 6);
    if ( !(_DWORD)v121 )
      goto LABEL_29;
    v17 = v247;
    v122 = (__int64)v248;
    LODWORD(v123) = 16;
    LODWORD(v124) = 0;
    v125 = &v248[v121];
    while ( 1 )
    {
      v126 = *(_QWORD *)(v122 + 32);
      v127 = (unsigned int)v124;
      v122 += 8;
      v124 = (unsigned int)(v124 + 1);
      v17[v127] = v126;
      LODWORD(v262) = v124;
      if ( v125 == (void **)v122 )
        break;
      if ( (unsigned int)v124 >= (unsigned int)v123 )
      {
        *(_QWORD *)v244 = v14;
        v123 = (unsigned int)(2 * v123);
        v128 = (__int64 *)sub_186B270(8 * v123);
        LODWORD(v124) = v262;
        v129 = (__int64 *)ptr;
        v17 = v128;
        v14 = *(__int64 **)v244;
        if ( (_DWORD)v262 )
        {
          if ( (unsigned int)(v262 - 1) <= 2 || v128 == (__int64 *)((char *)ptr + 8) )
          {
            v233 = 0;
            v234 = 8LL * (unsigned int)v262;
            do
            {
              v17[v233 / 8] = v129[v233 / 8];
              v233 += 8LL;
            }
            while ( v234 != v233 );
          }
          else
          {
            v130 = 0;
            v131 = 16LL * ((unsigned int)v262 >> 1);
            do
            {
              v13 = _mm_loadu_si128((const __m128i *)&v129[v130 / 8]);
              *(__m128i *)&v17[v130 / 8] = v13;
              v130 += 16LL;
            }
            while ( v131 != v130 );
            if ( (v124 & 1) != 0 )
              v17[(unsigned int)v124 & 0xFFFFFFFE] = v129[(unsigned int)v124 & 0xFFFFFFFE];
          }
        }
        if ( v129 && v129 != v247 )
        {
          v245 = v14;
          *(_QWORD *)v244 = v17;
          sub_186B220(v129);
          LODWORD(v124) = v262;
          v14 = (__int64 *)v245;
          v17 = *(__int64 **)v244;
        }
        ptr = v17;
        HIDWORD(v262) = v123;
      }
    }
    v18 = (void **)&v17[v124];
    if ( v18 == (void **)v17 )
      goto LABEL_27;
  }
  else
  {
    v17 = v247;
    LODWORD(v262) = 1;
    v18 = &v264;
    v263 = (__int64)v248;
  }
  v19 = v17;
  v20 = (void **)v17;
  do
  {
    if ( *((_WORD *)*v20 + 2) == 2 )
    {
      v21 = 1;
      goto LABEL_18;
    }
    ++v20;
  }
  while ( v18 != v20 );
  v21 = 0;
LABEL_18:
  v245 = &v257;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = *v19;
      if ( *(_WORD *)(*v19 + 4) != 2 )
        break;
LABEL_22:
      if ( !*(_DWORD *)(v22 + 72) )
        goto LABEL_20;
      v23 = 0;
      do
      {
        v24 = *(unsigned int *)(v22 + 20);
        *(_QWORD *)v244 = v14;
        sub_E298E0(v245, (__int64)v243, *(_QWORD *)(v22 + 16 * v24 + 8 * v23++ + 80), 0);
        v14 = *(__int64 **)v244;
      }
      while ( (unsigned int)v23 < *(_DWORD *)(v22 + 72) );
      if ( v18 == (void **)++v19 )
        goto LABEL_26;
    }
    if ( !v21 )
      break;
LABEL_20:
    if ( v18 == (void **)++v19 )
      goto LABEL_26;
  }
  v246 = &v257;
  while ( 1 )
  {
    *(_QWORD *)v244 = v14;
    sub_E298E0(v246, (__int64)v243, v22, 0);
    ++v19;
    v14 = *(__int64 **)v244;
    if ( v18 == (void **)v19 )
      break;
    v22 = *v19;
    if ( *(_WORD *)(*v19 + 4) == 2 )
      goto LABEL_22;
  }
LABEL_26:
  v17 = (__int64 *)ptr;
LABEL_27:
  if ( v17 != v247 && v17 != nullptr )
  {
    *(_QWORD *)v244 = v14;
    sub_186B220(v17);
    v14 = *(__int64 **)v244;
  }
LABEL_29:
  *(_QWORD *)v244 = v14;
  sub_15D08E0(v243);
  v27 = *(__int64 **)v244;
  v15 = *(_WORD *)(v6 + 4) == 0;
  v258 = v253;
  v257 = *(__int64 **)v244;
  ptr = v247;
  v262 = 0x1000000000LL;
  if ( v15 && (v28 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) != nullptr && !*v28 && v28[1] == 5 )
  {
    v111 = *(unsigned int *)(v6 + 24);
    if ( !(_DWORD)v111 )
      goto LABEL_48;
    v26 = v247;
    v112 = v6;
    v113 = v6 + 8 * v111;
    LODWORD(v114) = 0;
    LODWORD(v115) = 16;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v112 + 32);
      v116 = (unsigned int)v114;
      v112 += 8;
      v114 = (unsigned int)(v114 + 1);
      v26[v116] = v25;
      LODWORD(v262) = v114;
      if ( v113 == v112 )
        break;
      if ( (unsigned int)v114 >= (unsigned int)v115 )
      {
        *(_QWORD *)v244 = v27;
        v115 = (unsigned int)(2 * v115);
        v117 = (__int64 *)sub_186B270(8 * v115);
        LODWORD(v114) = v262;
        v118 = (__int64 *)ptr;
        v26 = v117;
        v27 = *(__int64 **)v244;
        if ( (_DWORD)v262 )
        {
          if ( (unsigned int)(v262 - 1) <= 2 || v117 == (__int64 *)((char *)ptr + 8) )
          {
            v235 = 0;
            v236 = 8LL * (unsigned int)v262;
            do
            {
              v26[v235 / 8] = v118[v235 / 8];
              v235 += 8LL;
            }
            while ( v236 != v235 );
          }
          else
          {
            v119 = 0;
            v120 = 16LL * ((unsigned int)v262 >> 1);
            do
            {
              v13 = _mm_loadu_si128((const __m128i *)&v118[v119 / 8]);
              *(__m128i *)&v26[v119 / 8] = v13;
              v119 += 16LL;
            }
            while ( v120 != v119 );
            if ( (v114 & 1) != 0 )
              v26[(unsigned int)v114 & 0xFFFFFFFE] = v118[(unsigned int)v114 & 0xFFFFFFFE];
          }
        }
        if ( v118 != v247 && v118 )
        {
          v245 = v27;
          *(_QWORD *)v244 = v26;
          sub_186B220(v118);
          LODWORD(v114) = v262;
          v27 = (__int64 *)v245;
          v26 = *(__int64 **)v244;
        }
        ptr = v26;
        HIDWORD(v262) = v115;
      }
    }
    v29 = (void **)&v26[v114];
    if ( v29 == (void **)v26 )
      goto LABEL_46;
  }
  else
  {
    v263 = v6;
    v26 = v247;
    v29 = &v264;
    LODWORD(v262) = 1;
  }
  v30 = v26;
  v31 = (void **)v26;
  do
  {
    if ( *((_WORD *)*v31 + 2) == 2 )
    {
      v32 = 1;
      goto LABEL_37;
    }
    ++v31;
  }
  while ( v29 != v31 );
  v32 = 0;
LABEL_37:
  v245 = &v257;
  while ( 2 )
  {
    while ( 1 )
    {
      v33 = *v30;
      if ( *(_WORD *)(*v30 + 4) != 2 )
        break;
LABEL_41:
      if ( !*(_DWORD *)(v33 + 72) )
        goto LABEL_39;
      v34 = 0;
      do
      {
        v35 = *(unsigned int *)(v33 + 20);
        *(_QWORD *)v244 = v27;
        sub_E298E0(v245, (__int64)v243, *(_QWORD *)(v33 + 16 * v35 + 8 * v34++ + 80), 0);
        v27 = *(__int64 **)v244;
      }
      while ( (unsigned int)v34 < *(_DWORD *)(v33 + 72) );
      if ( v29 == (void **)++v30 )
        goto LABEL_45;
    }
    if ( v32 )
    {
LABEL_39:
      if ( v29 == (void **)++v30 )
        goto LABEL_45;
      continue;
    }
    break;
  }
  v246 = &v257;
  while ( 1 )
  {
    *(_QWORD *)v244 = v27;
    sub_E298E0(v246, (__int64)v243, v33, 0);
    ++v30;
    v27 = *(__int64 **)v244;
    if ( v29 == (void **)v30 )
      break;
    v33 = *v30;
    if ( *(_WORD *)(*v30 + 4) == 2 )
      goto LABEL_41;
  }
LABEL_45:
  v26 = (__int64 *)ptr;
LABEL_46:
  if ( v26 != v247 && v26 != nullptr )
  {
    *(_QWORD *)v244 = v27;
    sub_186B220(v26);
    v27 = *(__int64 **)v244;
  }
LABEL_48:
  if ( *(_WORD *)(v6 + 4) )
    return;
  v254 = *(_DWORD *)(v6 + 24);
  if ( v254 )
    return;
  v36 = *(_QWORD *)(v6 + 16);
  v37 = *(_DWORD **)(v36 + 24);
  if ( v37 )
  {
    if ( *v37 != -1 )
      return;
  }
  v38 = *(const char **)(v36 + 16);
  if ( !v38 )
    return;
  *(_QWORD *)v244 = v27;
  if ( ((unsigned __int8)v38 & 7) == 1 )
  {
    sub_180CE20(
      (int)&ptr,
      v36 + 16,
      1,
      v25,
      (int)v27,
      (int)v26,
      v242,
      v243,
      v244[0],
      (__int64)v245,
      (int)v246,
      (int)v247,
      (int)v248,
      (int)v249,
      (int)v250,
      (int)v251,
      (int)v252,
      v253,
      v255,
      v256,
      (int)v257,
      v258,
      v259,
      v260,
      (int)ptr,
      v262,
      v263,
      v264,
      v265,
      v266);
    v40 = *(_QWORD *)v244;
    if ( v262 != 6 || *(_DWORD *)ptr != 1702195520 || *((_WORD *)ptr + 2) != 31090 )
    {
      if ( ptr != v247 )
        operator delete(ptr, v263 + 1);
      return;
    }
    if ( ptr != v247 )
    {
      operator delete(ptr, v263 + 1);
      v40 = *(_QWORD *)v244;
    }
  }
  else
  {
    v39 = strcmp(v38, "@query");
    v40 = *(_QWORD *)v244;
    if ( v39 )
      return;
  }
  v256 = v40;
  *(_QWORD *)v244 = v40;
  sub_15D08E0(v243);
  v41 = (size_t)v243;
  v249 = &v256;
  sub_E28FA0(&v256, (__int64)v243, (__int64)v248, 0);
  sub_E28B00(*(__int64 *)v244);
  v253 = 0;
  v42 = *(__int64 **)v244;
  while ( 2 )
  {
    v43 = v42[12];
    *(_QWORD *)v244 = v42;
    v44 = sub_18290A0(v43);
    v42 = *(__int64 **)v244;
    v45 = *(char **)(*(_QWORD *)v244 + 272LL);
    if ( v44 )
    {
      if ( !v45 )
        goto LABEL_98;
      if ( v253 >= *((_DWORD *)v45 - 1) )
        goto LABEL_218;
      v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v244 + 112LL) + 40LL * *(unsigned int *)&v45[4 * v253]);
      ptr = v247;
      v262 = 0x1000000000LL;
      if ( !*(_WORD *)(v46 + 4) )
      {
        v47 = *(_DWORD **)(*(_QWORD *)(v46 + 16) + 24LL);
        if ( v47 )
        {
          if ( !*v47 && v47[1] == 5 )
          {
            v197 = *(unsigned int *)(v46 + 24);
            if ( (_DWORD)v197 )
            {
              v48 = v247;
              v198 = v46 + 8 * v197;
              v199 = v46;
              LODWORD(v197) = 0;
              LODWORD(v200) = 16;
              while ( 1 )
              {
                v201 = *(_QWORD *)(v199 + 32);
                v202 = (unsigned int)v197;
                v199 += 8;
                v197 = (unsigned int)(v197 + 1);
                v48[v202] = v201;
                LODWORD(v262) = v197;
                if ( v198 == v199 )
                  break;
                if ( (unsigned int)v197 >= (unsigned int)v200 )
                {
                  *(_QWORD *)v244 = v42;
                  v200 = (unsigned int)(2 * v200);
                  v203 = (__int64 *)sub_186B270(8 * v200);
                  LODWORD(v197) = v262;
                  v204 = (__int64 *)ptr;
                  v48 = v203;
                  v42 = *(__int64 **)v244;
                  if ( (_DWORD)v262 )
                  {
                    if ( (unsigned int)(v262 - 1) <= 2 || v203 == (__int64 *)((char *)ptr + 8) )
                    {
                      v231 = 0;
                      v232 = 8LL * (unsigned int)v262;
                      do
                      {
                        v41 = v204[v231 / 8];
                        v48[v231 / 8] = v41;
                        v231 += 8LL;
                      }
                      while ( v232 != v231 );
                    }
                    else
                    {
                      v205 = 0;
                      v206 = 16LL * ((unsigned int)v262 >> 1);
                      do
                      {
                        v13 = _mm_loadu_si128((const __m128i *)&v204[v205 / 8]);
                        *(__m128i *)&v48[v205 / 8] = v13;
                        v205 += 16LL;
                      }
                      while ( v205 != v206 );
                      if ( (v197 & 1) != 0 )
                        v48[(unsigned int)v197 & 0xFFFFFFFE] = v204[(unsigned int)v197 & 0xFFFFFFFE];
                    }
                  }
                  if ( v204 != v247 && v204 )
                  {
                    *(_QWORD *)v244 = v42;
                    sub_186B220(v204);
                    LODWORD(v197) = v262;
                    v42 = *(__int64 **)v244;
                  }
                  ptr = v48;
                  HIDWORD(v262) = v200;
                }
              }
              v248 = (void **)&v48[v197];
              if ( v248 != (void **)v48 )
              {
                do
                {
LABEL_64:
                  v49 = *v48;
                  if ( *(_WORD *)(*v48 + 4) == 2 )
                  {
                    v41 = (size_t)v243;
                    *(_QWORD *)v244 = v42;
                    sub_E28FA0(v249, (__int64)v243, v49, 0);
                    v42 = *(__int64 **)v244;
                    v50 = *(_QWORD *)(*(_QWORD *)v244 + 192LL);
                    if ( v50 )
                    {
                      v51 = *(unsigned int *)(*(_QWORD *)v244 + 280LL);
                      while ( (unsigned int)v51 < *(_DWORD *)(v50 - 4) )
                      {
                        v52 = *(_QWORD *)(v50 + 8 * v51);
                        v53 = *((unsigned int *)v42 + 34);
                        v54 = (__int64 *)v42[16];
                        v41 = *(unsigned int *)(v52 + 12);
                        v55 = v53 - 1;
                        v53 *= 16;
                        v56 = (__int64 *)((char *)v54 + v53);
                        v57 = 16LL * ((unsigned int)v41 & v55);
                        v58 = &v54[(unsigned __int64)v57 / 8];
                        if ( v57 != v53 )
                        {
                          for ( k = &v54[(unsigned __int64)v57 / 8]; v56 != k; k += 2 )
                          {
                            v60 = *k;
                            if ( (unsigned __int64)*k > 1 )
                            {
                              if ( *(_DWORD *)(v60 + 12) == (_DWORD)v41 && v52 == v60 )
                              {
LABEL_175:
                                v132 = (unsigned int *)k[1];
                                if ( !v132 )
                                  goto LABEL_75;
                                v133 = &v132[*(v132 - 1)];
                                if ( v132 == v133 )
                                  goto LABEL_75;
                                while ( 2 )
                                {
                                  while ( 1 )
                                  {
                                    v134 = *v132;
                                    v135 = 40LL * *v132;
                                    v136 = (_BYTE *)(v135 + v42[14]);
                                    if ( v136[32] )
                                      break;
                                    v137 = *(_QWORD *)v136;
                                    v138 = *(_WORD *)(*(_QWORD *)v136 + 4LL);
                                    if ( v138 )
                                    {
LABEL_181:
                                      if ( v138 == 2 )
                                      {
                                        v41 = *(unsigned int *)(v137 + 16);
                                        if ( !(_DWORD)v41 )
                                        {
                                          *(_QWORD *)v244 = v42;
                                          sub_15D08E0(v243);
                                          v42 = *(__int64 **)v244;
                                          v139 = *(_DWORD *)(v137 + 72);
                                          v140 = 0;
                                          LOBYTE(v258) = 1;
                                          v257 = *(__int64 **)v244;
                                          v246 = &v257;
                                          if ( v139 )
                                          {
                                            do
                                            {
                                              v141 = *(unsigned int *)(v137 + 20);
                                              v41 = (size_t)v243;
                                              v245 = v42;
                                              *(_QWORD *)v244 = v140;
                                              sub_E28370(
                                                v246,
                                                (__int64)v243,
                                                *(_QWORD *)(v137 + 16 * v141 + 8 * v140 + 80),
                                                0);
                                              v42 = (__int64 *)v245;
                                              v140 = *(_QWORD *)v244 + 1LL;
                                            }
                                            while ( (unsigned int)(v244[0] + 1) < *(_DWORD *)(v137 + 72) );
                                            if ( !(_BYTE)v258 )
                                              break;
                                          }
                                        }
                                      }
                                    }
                                    else if ( (*(_BYTE *)(v137 + 30) & 1) == 0 )
                                    {
                                      v149 = *(_DWORD **)(*(_QWORD *)(v137 + 16) + 24LL);
                                      if ( v149 )
                                      {
                                        if ( !*v149 && v149[1] == 5 )
                                        {
                                          v150 = (_DWORD *)(v137 + 32);
                                          v151 = 8LL * *(unsigned int *)(v137 + 24);
                                          v152 = (_DWORD *)(v137 + 32 + v151);
                                          if ( v151 )
                                          {
                                            while ( 1 )
                                            {
                                              if ( *(_WORD *)(*(_QWORD *)v150 + 4LL) == 2 )
                                              {
                                                v153 = *(_DWORD *)(*(_QWORD *)v150 + 16LL);
                                                *(_QWORD *)v244 = *(_QWORD *)v150;
                                                if ( !v153 )
                                                {
                                                  v246 = (__int64 **)v42;
                                                  v250 = v150;
                                                  v245 = v152;
                                                  sub_15D08E0(v243);
                                                  v154 = *(_QWORD *)v244;
                                                  v42 = (__int64 *)v246;
                                                  LOBYTE(v258) = 1;
                                                  v155 = *(_DWORD *)(*(_QWORD *)v244 + 72LL);
                                                  v257 = (__int64 *)v246;
                                                  if ( !v155 )
                                                    break;
                                                  v152 = v245;
                                                  v156 = nullptr;
                                                  v246 = &v257;
                                                  v150 = v250;
                                                  do
                                                  {
                                                    v157 = *(unsigned int *)(v154 + 20);
                                                    v41 = (size_t)v243;
                                                    v252 = v42;
                                                    v251 = v150;
                                                    v250 = v152;
                                                    v245 = v156;
                                                    v158 = *(_QWORD *)(v154 + 16 * v157 + 8LL * (_QWORD)v156 + 80);
                                                    *(_QWORD *)v244 = v154;
                                                    sub_E28370(v246, (__int64)v243, v158, 0);
                                                    v154 = *(_QWORD *)v244;
                                                    v152 = v250;
                                                    v150 = v251;
                                                    v156 = (_DWORD *)((char *)v245 + 1);
                                                    v42 = v252;
                                                  }
                                                  while ( (unsigned int)((_DWORD)v245 + 1) < *(_DWORD *)(*(_QWORD *)v244 + 72LL) );
                                                  if ( (_BYTE)v258 )
                                                    break;
                                                }
                                              }
                                              v150 += 2;
                                              if ( v152 == v150 )
                                              {
                                                v138 = *(_WORD *)(v137 + 4);
                                                goto LABEL_181;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v142 = (unsigned int *)v42[34];
                                    if ( v142 )
                                    {
                                      v143 = *(v142 - 1);
                                      if ( (_DWORD)v143 == *(v142 - 2) )
                                      {
                                        v146 = (unsigned int)(3 * v143 + 1) >> 1;
                                        v41 = 4 * v146 + 8;
                                        if ( 4 * (int)v143 + 8 >= (unsigned int)v41 || (unsigned int)v143 >= v146 )
                                        {
                                          v239 = (char **)__cxa_allocate_exception(0x28u);
                                          sub_24ABB0((__int64 *)&v257, "Overflow encountered when expanding vector");
                                          *v239 = (char *)off_1C63128;
                                          sub_2333C0(v239 + 1, &v257);
                                          sub_233E40((__int64)&v257);
                                          __cxa_throw(
                                            v239,
                                            (struct type_info *)&`typeinfo for'default_exception,
                                            (void (*)(void *))sub_230E50);
                                        }
                                        *(_QWORD *)v244 = v42;
                                        v147 = (unsigned int *)sub_186B300(v142 - 2, v41);
                                        v142 = v147 + 2;
                                        *v147 = v146;
                                        v42 = *(__int64 **)v244;
                                        v148 = v147[1];
                                        *(_QWORD *)(*(_QWORD *)v244 + 272LL) = v142;
                                        v144 = &v142[v148];
                                      }
                                      else
                                      {
                                        v144 = &v142[v143];
                                      }
                                    }
                                    else
                                    {
                                      *(_QWORD *)v244 = v42;
                                      v160 = (_QWORD *)sub_186B270(0x10u);
                                      v42 = *(__int64 **)v244;
                                      v142 = (unsigned int *)(v160 + 1);
                                      *v160 = 2;
                                      v144 = v142;
                                      v42[34] = (__int64)v142;
                                    }
                                    *v144 = v134;
                                    v145 = v42[14];
                                    ++v132;
                                    ++*(v142 - 1);
                                    *(_BYTE *)(v145 + v135 + 32) = 1;
                                    if ( v133 == v132 )
                                    {
LABEL_190:
                                      v50 = v42[24];
                                      goto LABEL_75;
                                    }
                                  }
                                  if ( v133 == ++v132 )
                                    goto LABEL_190;
                                  continue;
                                }
                              }
                            }
                            else if ( !v60 )
                            {
                              goto LABEL_75;
                            }
                          }
                        }
                        for ( ; v58 != v54; v54 += 2 )
                        {
                          v159 = *v54;
                          if ( (unsigned __int64)*v54 > 1 )
                          {
                            if ( *(_DWORD *)(v159 + 12) == (_DWORD)v41 && v52 == v159 )
                            {
                              k = v54;
                              goto LABEL_175;
                            }
                          }
                          else if ( !v159 )
                          {
                            break;
                          }
                        }
LABEL_75:
                        v51 = (unsigned int)(*((_DWORD *)v42 + 70) + 1);
                        *((_DWORD *)v42 + 70) = v51;
                        if ( !v50 )
                        {
                          if ( v248 != (void **)++v48 )
                            goto LABEL_64;
                          goto LABEL_77;
                        }
                      }
                    }
                  }
                  ++v48;
                }
                while ( v248 != (void **)v48 );
LABEL_77:
                v48 = (__int64 *)ptr;
              }
              if ( v48 != nullptr && v48 != v247 )
              {
                *(_QWORD *)v244 = v42;
                sub_186B220(v48);
                v42 = *(__int64 **)v244;
              }
            }
            ++v253;
            continue;
          }
        }
      }
      v263 = v46;
      v48 = v247;
      LODWORD(v262) = 1;
      v248 = &v264;
      goto LABEL_64;
    }
    break;
  }
  if ( !v45 )
    goto LABEL_98;
LABEL_218:
  v161 = 4LL * *((unsigned int *)v45 - 1);
  v162 = &v45[v161];
  if ( &v45[v161] != v45 )
  {
    v41 = (size_t)&v45[v161];
    v163 = *(__m128i **)(*(_QWORD *)v244 + 272LL);
    v243 = *(__int64 **)v244;
    v164 = v45 + 4;
    _BitScanReverse64(&v165, v161 >> 2);
    sub_E23700(v163, &v45[v161], 2LL * (int)v165);
    v42 = *(__int64 **)v244;
    if ( (unsigned __int64)v161 > 0x40 )
    {
      v207 = v45 + 64;
      v208 = v45;
      v209 = v45 + 4;
      v210 = v207;
      v211 = v208;
      do
      {
        v212 = *(_DWORD *)v209;
        if ( *(_DWORD *)v209 < *(_DWORD *)v211 )
        {
          if ( v209 - v211 <= 4 )
          {
            if ( v209 - v211 == 4 )
              *(_DWORD *)v209 = *(_DWORD *)v211;
          }
          else
          {
            memmove(v211 + 4, v211, v209 - v211);
          }
          *(_DWORD *)v211 = v212;
        }
        else
        {
          v213 = *((_DWORD *)v209 - 1);
          v214 = v209 - 4;
          if ( v212 >= v213 )
          {
            v215 = v209;
          }
          else
          {
            do
            {
              *((_DWORD *)v214 + 1) = v213;
              v215 = v214;
              v213 = *((_DWORD *)v214 - 1);
              v214 -= 4;
            }
            while ( v212 < v213 );
          }
          *(_DWORD *)v215 = v212;
        }
        v209 += 4;
      }
      while ( v210 != v209 );
      v42 = v243;
      v83 = v210;
      do
      {
        v84 = *(_DWORD *)v83;
        v85 = *((_DWORD *)v83 - 1);
        v86 = v83 - 4;
        if ( *(_DWORD *)v83 >= v85 )
        {
          v41 = (size_t)v83;
        }
        else
        {
          do
          {
            *((_DWORD *)v86 + 1) = v85;
            v41 = (size_t)v86;
            v85 = *((_DWORD *)v86 - 1);
            v86 -= 4;
          }
          while ( v84 < v85 );
        }
        v83 += 4;
        *(_DWORD *)v41 = v84;
      }
      while ( v162 != v83 );
    }
    else if ( v161 != 4 )
    {
      v166 = v243;
      do
      {
        v167 = *(_DWORD *)v164;
        if ( *(_DWORD *)v164 < *(_DWORD *)v45 )
        {
          if ( v164 - v45 <= 4 )
          {
            if ( v164 - v45 == 4 )
              *(_DWORD *)v164 = *(_DWORD *)v45;
          }
          else
          {
            v41 = (size_t)v45;
            memmove(v45 + 4, v45, v164 - v45);
          }
          *(_DWORD *)v45 = v167;
        }
        else
        {
          v168 = *((_DWORD *)v164 - 1);
          v169 = v164 - 4;
          if ( v167 >= v168 )
          {
            v170 = v164;
          }
          else
          {
            do
            {
              *((_DWORD *)v169 + 1) = v168;
              v170 = v169;
              v168 = *((_DWORD *)v169 - 1);
              v169 -= 4;
            }
            while ( v167 < v168 );
          }
          *(_DWORD *)v170 = v167;
        }
        v164 += 4;
      }
      while ( v162 != v164 );
      v42 = v166;
    }
  }
LABEL_98:
  v87 = v42;
  v243 = v42;
  sub_E24F50(v42);
  v88 = v243;
  v89 = v243[34];
  if ( v89 )
    *(_DWORD *)(v89 - 4) = 0;
  v243 = v88;
  v90 = sub_180B130(v87);
  v91 = v243;
  if ( v90 > 1 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)v13.m128i_i64) )
    {
      sub_186A4C0(*(double *)v13.m128i_i64);
      sub_180B150(v87, v41);
      v172 = v243[14];
      if ( v172 )
      {
        v173 = v172 + 40LL * *(unsigned int *)(v172 - 4);
        if ( v172 != v173 )
        {
          v174 = v254;
          v175 = 0;
          do
          {
            if ( *(_BYTE *)(v172 + 32) )
              ++v174;
            else
              ++v175;
            v172 += 40;
          }
          while ( v173 != v172 );
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v221 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v221, "\n");
      v91 = v243;
    }
    else
    {
      sub_180B150(v87, v41);
      v216 = v243[14];
      if ( v216 )
      {
        v217 = v216 + 40LL * *(unsigned int *)(v216 - 4);
        if ( v216 != v217 )
        {
          v218 = v254;
          v219 = 0;
          do
          {
            if ( *(_BYTE *)(v216 + 32) )
              ++v218;
            else
              ++v219;
            v216 += 40;
          }
          while ( v217 != v216 );
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v91 = v243;
    }
  }
  *((_BYTE *)v91 + 208) = 1;
}

