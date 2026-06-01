__int64 __fastcall sub_DA3E90(_QWORD *a1, __int64 a2)
{
  char **v2; // r12
  char **v3; // r12
  char **v4; // r12
  char **exception; // r12
  char **v6; // r12
  char **v7; // r12
  char **v8; // r12
  char **v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // rbx
  unsigned int v12; // r13d
  _QWORD *v13; // rax
  __m128i *v14; // rbp
  unsigned int i; // eax
  unsigned int v16; // r12d
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  _DWORD *v21; // r15
  __m128i *v22; // r14
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __m128i *v25; // rax
  unsigned __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i *v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // r15
  unsigned int v32; // edx
  __int64 v33; // r12
  __int16 v34; // ax
  int v35; // edx
  unsigned __int32 v36; // r14d
  unsigned __int64 v37; // r13
  int v38; // edx
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // r14
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  __int64 *v45; // rdx
  int *v46; // rax
  int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // r12d
  size_t v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rsi
  unsigned __int64 v55; // rdx
  __m128i *v56; // r13
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __m128i *v61; // rsi
  __int64 v62; // rax
  __m128i *v63; // rdx
  unsigned __int64 v64; // rcx
  __m128i v65; // xmm0
  __int64 v66; // rdi
  __m128i v67; // xmm0
  __m128i *v68; // rax
  unsigned int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r14
  unsigned __int64 v74; // r14
  int v75; // ecx
  __int64 v76; // rax
  unsigned int v77; // edi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int32 v82; // r14d
  unsigned int v83; // eax
  unsigned int v84; // r12d
  size_t v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // rsi
  _QWORD *v90; // rax
  __int64 result; // rax
  _QWORD *v92; // rcx
  bool v93; // zf
  unsigned __int64 v94; // rsi
  _QWORD *v95; // r15
  _QWORD *v96; // rcx
  unsigned int v97; // eax
  __int64 v98; // rdx
  int v99; // eax
  unsigned int *v100; // rdx
  __int64 v101; // rcx
  unsigned int v102; // ecx
  __int64 v103; // r12
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // r13
  unsigned __int64 v109; // r12
  int v110; // eax
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // r14
  __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  unsigned __int64 v117; // rax
  int v118; // eax
  __int64 v119; // rdx
  _QWORD *v120; // r14
  _QWORD *v121; // rbp
  unsigned int v122; // r12d
  unsigned int v123; // eax
  unsigned int *v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  int v127; // edx
  unsigned int v128; // eax
  unsigned int v129; // r12d
  size_t v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned __int64 v133; // rdx
  __m128i *v134; // r13
  __int64 v135; // rsi
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  unsigned int v139; // r12d
  unsigned int v140; // edx
  __int64 v141; // rax
  __int64 v142; // rcx
  _DWORD *v143; // r13
  _DWORD *v144; // rsi
  unsigned __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdx
  unsigned __int64 v148; // rsi
  int v149; // eax
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __m128i *v153; // rsi
  __int64 v154; // rdx
  __m128i *v155; // rax
  unsigned __int64 v156; // rcx
  __m128i v157; // xmm0
  __int64 v158; // rdi
  __m128i v159; // xmm0
  __m128i *v160; // rdx
  int v161; // eax
  __int64 v162; // rsi
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rsi
  __m128i *v167; // rdi
  __int64 v168; // rax
  __m128i *v169; // rcx
  unsigned __int64 v170; // rsi
  __m128i v171; // xmm0
  __int64 v172; // r8
  __m128i v173; // xmm0
  __m128i *v174; // rax
  __int64 v175; // rax
  int v176; // ecx
  unsigned int v177; // r12d
  unsigned int v178; // eax
  unsigned int *v179; // rax
  __int64 v180; // rax
  _QWORD *v181; // rcx
  unsigned int v182; // r12d
  unsigned int v183; // edx
  unsigned int *v184; // r13
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rdx
  int v189; // eax
  _QWORD *v190; // rax
  __int64 v191; // rsi
  __int64 v192; // rdx
  unsigned __int64 v193; // r14
  unsigned int v194; // eax
  __int64 v195; // rdx
  unsigned int v196; // eax
  __int64 v197; // rdi
  _DWORD *v198; // rax
  __int64 v199; // rsi
  unsigned int v200; // eax
  __int64 v201; // rsi
  unsigned int v202; // eax
  _QWORD *v203; // rax
  _QWORD *v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rsi
  int v207; // ecx
  __int64 v208; // rdx
  __int64 v209; // rax
  __int64 v210; // [rsp+0h] [rbp-E8h]
  __m128i v211; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD *v212; // [rsp+18h] [rbp-D0h]
  _QWORD *v213; // [rsp+20h] [rbp-C8h]
  _QWORD **v214; // [rsp+28h] [rbp-C0h]
  __int64 v215; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v216; // [rsp+38h] [rbp-B0h]
  __int64 v217; // [rsp+40h] [rbp-A8h]
  __m128i v218; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v219; // [rsp+58h] [rbp-90h] BYREF
  __int64 v220[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v221; // [rsp+80h] [rbp-68h] BYREF
  __int64 v222; // [rsp+88h] [rbp-60h]
  _QWORD *v223; // [rsp+90h] [rbp-58h] BYREF
  __m128i *v224; // [rsp+98h] [rbp-50h]
  _QWORD *v225; // [rsp+A0h] [rbp-48h]

  v10 = *(_QWORD *)(a2 + 8);
  v213 = a1;
  v211.m128i_i64[1] = v10;
  v11 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  v214 = (_QWORD **)a2;
  v211.m128i_i64[0] = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( !v211.m128i_i64[0] )
  {
    v90 = (_QWORD *)sub_186B270(0x18u);
    v90[1] = 0;
    v31 = v90 + 1;
    *v90 = 0x100000002LL;
    goto LABEL_71;
  }
  v210 = *a1;
  if ( v11[1] <= 1u || (v12 = *v11 - 2147483646, *v11 == 2147483646) )
  {
    v14 = nullptr;
  }
  else
  {
    v211.m128i_i64[0] = qword_1C7EDC0;
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = (__m128i *)(v13 + 1);
    *v13 = 2;
    for ( i = *(_DWORD *)v13; i < v12; i = v22[-1].m128i_u32[2] )
    {
      v16 = (3 * i + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * i + 8 >= (unsigned int)v17 || i >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v221, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v221);
        sub_233E40((__int64)&v221);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = sub_186B270(v17);
      v19 = v14[-1].m128i_u32[3];
      v20 = 0;
      v21 = (_DWORD *)v18;
      v22 = (__m128i *)(v18 + 8);
      *(_DWORD *)(v18 + 4) = v19;
      v23 = 8 * v19;
      if ( v23 )
      {
        do
        {
          *(_QWORD *)(v18 + v20 + 8) = v14->m128i_i64[v20 / 8];
          v20 += 8LL;
        }
        while ( v23 != v20 );
      }
      sub_186B220(&v14[-1].m128i_u64[1]);
      v14 = v22;
      *v21 = v16;
    }
    v14[-1].m128i_i32[3] = v12;
    if ( v12 == 1 )
    {
      v29 = (__int64 *)v14;
    }
    else
    {
      v24 = _mm_loadl_epi64(&v211);
      v25 = v14;
      v26 = (unsigned __int64)v12 >> 1;
      v27 = _mm_unpacklo_epi64(v24, v24);
      v28 = &v14[v26];
      if ( ((v26 * 16) & 0x10) == 0 || (v25 = v14 + 1, *v14 = v27, v28 != &v14[1]) )
      {
        do
        {
          *v25 = v27;
          v25 += 2;
          v25[-1] = v27;
        }
        while ( v28 != v25 );
      }
      if ( (v12 & 1) == 0 )
        goto LABEL_18;
      v29 = &v14->m128i_i64[v12 & 0xFFFFFFFE];
    }
    *v29 = v211.m128i_i64[0];
  }
LABEL_18:
  v30 = sub_186B270(0x28u);
  *(_QWORD *)(v30 + 8) = v11;
  v31 = nullptr;
  v211.m128i_i64[0] = v30 + 8;
  *(_WORD *)(v30 + 16) = 0;
  v212 = nullptr;
  *(_QWORD *)v30 = 0x100000002LL;
  v32 = 1;
  do
  {
    v33 = v211.m128i_i64[0] + 16LL * (v32 - 1);
    v215 = *(_QWORD *)v33;
    v34 = *(_WORD *)(v33 + 8);
    if ( !v34 )
    {
      v37 = v215;
      goto LABEL_55;
    }
    if ( v34 != 1 )
    {
      if ( *(_DWORD *)(v215 + 4) <= 1u )
        goto LABEL_83;
      v35 = *(_DWORD *)v215;
      if ( !v14 )
      {
        v36 = v35 - 2147483646;
        if ( v35 == 2147483646 )
          goto LABEL_83;
        goto LABEL_140;
      }
LABEL_81:
      v102 = v14[-1].m128i_u32[3];
      v49 = (unsigned int)(v35 - 0x7FFFFFFF);
      LODWORD(v217) = v102;
      if ( (unsigned int)v49 < v102 )
      {
LABEL_82:
        v103 = v14->m128i_i64[v49];
        if ( v103 )
        {
          v220[0] = v14->m128i_i64[v49];
          v223 = v31;
          v221 = v210;
          v224 = v14;
          v222 = v211.m128i_i64[0];
          v225 = v212;
          sub_DA2F30(&v223, v220);
          v31 = v223;
          v14 = v224;
          v210 = v221;
          v175 = v222;
          v212 = v225;
          ++*(_DWORD *)((v103 & 0xFFFFFFFFFFFFFFFELL) + 4);
          v176 = *(_DWORD *)(v175 - 4);
          v211.m128i_i64[0] = v175;
          v32 = v176 - 1;
          LODWORD(v215) = v176;
          *(_DWORD *)(v175 - 4) = v176 - 1;
          continue;
        }
        goto LABEL_83;
      }
      v36 = v35 - 2147483646;
      if ( v102 >= v35 - 2147483646 )
      {
        v14[-1].m128i_i32[3] = v36;
        goto LABEL_83;
      }
LABEL_37:
      v218.m128i_i64[0] = qword_1C7EDC0;
      goto LABEL_38;
    }
    while ( 2 )
    {
      *(_WORD *)(v33 + 8) = v34 + 1;
      v216 = *(_QWORD *)(v215 + 16);
      v37 = v216 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_QWORD *)((v216 & 0xFFFFFFFFFFFFFFFELL) + 8) )
      {
        if ( *(_DWORD *)(v37 + 4) <= 1u )
          goto LABEL_51;
        v38 = *(_DWORD *)v37;
        v39 = (unsigned int)(*(_DWORD *)v37 - 0x7FFFFFFF);
        if ( !v14 )
        {
          v82 = v38 - 2147483646;
          if ( v38 != 2147483646 )
          {
            v218.m128i_i64[0] = qword_1C7EDC0;
            v136 = (_QWORD *)sub_186B270(0x18u);
            *v136 = 2;
            v14 = (__m128i *)(v136 + 1);
            LODWORD(v217) = 0;
LABEL_64:
            while ( 1 )
            {
              v83 = v14[-1].m128i_u32[2];
              if ( v83 >= v82 )
                break;
              v84 = (3 * v83 + 1) >> 1;
              v85 = 8 * v84 + 8;
              if ( 8 * v83 + 8 >= (unsigned int)v85 || v83 >= v84 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v220, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v220);
                sub_233E40((__int64)v220);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v86 = sub_186B270(v85);
              v87 = v14[-1].m128i_u32[3];
              v88 = 0;
              v215 = v86 + 8;
              *(_DWORD *)(v86 + 4) = v87;
              v89 = 8 * v87;
              if ( v89 )
              {
                do
                {
                  *(_QWORD *)(v86 + v88 + 8) = v14->m128i_i64[v88 / 8];
                  v88 += 8LL;
                }
                while ( v88 != v89 );
              }
              v216 = v86;
              sub_186B220(&v14[-1].m128i_u64[1]);
              v14 = (__m128i *)v215;
              *(_DWORD *)v216 = v84;
            }
            v58 = (unsigned int)v217;
            v14[-1].m128i_i32[3] = v82;
            v59 = 8LL * v82;
            v60 = 8 * v58;
            v61 = (__m128i *)((char *)v14 + v60);
            if ( v60 != v59 )
            {
              v62 = v59 - v60;
              v63 = (__m128i *)((char *)v14 + v60);
              v64 = ((unsigned __int64)(v62 - 8) >> 3) + 1;
              if ( v62 == 8 )
                goto LABEL_50;
              v65 = _mm_loadl_epi64(&v218);
              v66 = v64 >> 1;
              v67 = _mm_unpacklo_epi64(v65, v65);
              v68 = &v61[v66];
              if ( ((v66 * 16) & 0x10) == 0 || (v63 = v61 + 1, *v61 = v67, &v61[1] != v68) )
              {
                do
                {
                  *v63 = v67;
                  v63 += 2;
                  v63[-1] = v67;
                }
                while ( v63 != v68 );
              }
              if ( (v64 & 1) != 0 )
              {
                v61 = (__m128i *)((char *)v61 + 8 * (v64 & 0xFFFFFFFFFFFFFFFELL));
LABEL_50:
                v61->m128i_i64[0] = v218.m128i_i64[0];
              }
            }
          }
LABEL_51:
          if ( v211.m128i_i64[0] )
          {
            v69 = *(_DWORD *)(v211.m128i_i64[0] - 4);
            if ( v69 == *(_DWORD *)(v211.m128i_i64[0] - 8) )
            {
              v122 = (3 * v69 + 1) >> 1;
              v123 = 16 * v122 + 8;
              if ( 16 * v69 + 8 >= v123 || v69 >= v122 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v220, "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, v220);
                sub_233E40((__int64)v220);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v124 = (unsigned int *)sub_186B300((void *)(v211.m128i_i64[0] - 8), v123);
              v125 = (__int64)(v124 + 2);
              *v124 = v122;
              v126 = v124[1];
              v211.m128i_i64[0] = v125;
              v127 = v126;
              v71 = v125 + 16 * v126;
              v32 = v127 + 1;
            }
            else
            {
              v70 = v69;
              v32 = v69 + 1;
              v71 = v211.m128i_i64[0] + 16 * v70;
            }
          }
          else
          {
            v137 = (_QWORD *)sub_186B270(0x28u);
            *v137 = 2;
            v71 = (__int64)(v137 + 1);
            v32 = 1;
            v211.m128i_i64[0] = v71;
          }
          *(_QWORD *)v71 = v37;
          *(_WORD *)(v71 + 8) = 0;
          v72 = v211.m128i_i64[0];
          *(_DWORD *)(v211.m128i_i64[0] - 4) = v32;
          v33 = v72 + 16LL * (v32 - 1);
LABEL_55:
          v73 = *(_QWORD *)(v37 + 8);
          *(_WORD *)(v33 + 8) = 1;
          v74 = v73 & 0xFFFFFFFFFFFFFFFELL;
          if ( !*(_QWORD *)(v74 + 8) )
          {
            v218.m128i_i64[1] = 0;
            v223 = v31;
            v221 = v210;
            v224 = v14;
            v222 = v211.m128i_i64[0];
            v225 = v212;
            sub_DA2F30(&v223, &v218.m128i_i64[1]);
            v215 = v37;
            v31 = v223;
            v14 = v224;
            v210 = v221;
            v211.m128i_i64[0] = v222;
            v212 = v225;
            v34 = *(_WORD *)(v33 + 8);
            continue;
          }
          if ( *(_DWORD *)(v74 + 4) > 1u )
          {
            v75 = *(_DWORD *)v74;
            v76 = (unsigned int)(*(_DWORD *)v74 - 0x7FFFFFFF);
            if ( v14 )
            {
              v77 = v14[-1].m128i_u32[3];
              LODWORD(v217) = v77;
              if ( (unsigned int)v76 < v77 )
              {
                v78 = v14->m128i_i64[v76];
                if ( v78 )
                {
                  v219 = v78;
                  v215 = v78;
                  v223 = v31;
                  v221 = v210;
                  v224 = v14;
                  v222 = v211.m128i_i64[0];
                  v225 = v212;
                  sub_DA2F30(&v223, &v219);
                  v180 = v215;
                  v215 = v37;
                  v31 = v223;
                  v14 = v224;
                  v210 = v221;
                  v211.m128i_i64[0] = v222;
                  v181 = v225;
                  ++*(_DWORD *)((v180 & 0xFFFFFFFFFFFFFFFELL) + 4);
                  v34 = *(_WORD *)(v33 + 8);
                  v212 = v181;
                  continue;
                }
                goto LABEL_60;
              }
              LODWORD(v216) = v75 - 2147483646;
              if ( v77 < v75 - 2147483646 )
              {
                v218.m128i_i64[0] = qword_1C7EDC0;
                goto LABEL_128;
              }
              v14[-1].m128i_i32[3] = v75 - 2147483646;
              v32 = *(_DWORD *)(v211.m128i_i64[0] - 4);
            }
            else
            {
              LODWORD(v216) = v75 - 2147483646;
              if ( v75 != 2147483646 )
              {
                v218.m128i_i64[0] = qword_1C7EDC0;
                v190 = (_QWORD *)sub_186B270(0x18u);
                *v190 = 2;
                v14 = (__m128i *)(v190 + 1);
                LODWORD(v217) = 0;
LABEL_128:
                while ( 1 )
                {
                  v128 = v14[-1].m128i_u32[2];
                  if ( v128 >= (unsigned int)v216 )
                    break;
                  v129 = (3 * v128 + 1) >> 1;
                  v130 = 8 * v129 + 8;
                  if ( 8 * v128 + 8 >= (unsigned int)v130 || v128 >= v129 )
                  {
                    v8 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v220, "Overflow encountered when expanding vector");
                    *v8 = (char *)off_1C63128;
                    sub_2333C0(v8 + 1, v220);
                    sub_233E40((__int64)v220);
                    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v131 = sub_186B270(v130);
                  v132 = v14[-1].m128i_u32[3];
                  v133 = 0;
                  v134 = (__m128i *)(v131 + 8);
                  *(_DWORD *)(v131 + 4) = v132;
                  v135 = 8 * v132;
                  if ( v135 )
                  {
                    do
                    {
                      *(_QWORD *)(v131 + v133 + 8) = v14->m128i_i64[v133 / 8];
                      v133 += 8LL;
                    }
                    while ( v133 != v135 );
                  }
                  v215 = v131;
                  sub_186B220(&v14[-1].m128i_u64[1]);
                  v14 = v134;
                  *(_DWORD *)v215 = v129;
                }
                v162 = (unsigned int)v217;
                v163 = (unsigned int)v216;
                v164 = v211.m128i_i64[0];
                v14[-1].m128i_i32[3] = v216;
                v165 = 8 * v163;
                v166 = 8 * v162;
                v32 = *(_DWORD *)(v164 - 4);
                v167 = (__m128i *)((char *)v14 + v166);
                if ( v166 != v165 )
                {
                  v168 = v165 - v166;
                  v169 = (__m128i *)((char *)v14 + v166);
                  v170 = ((unsigned __int64)(v168 - 8) >> 3) + 1;
                  if ( v168 != 8 )
                  {
                    v171 = _mm_loadl_epi64(&v218);
                    v172 = v170 >> 1;
                    v173 = _mm_unpacklo_epi64(v171, v171);
                    v174 = &v167[v172];
                    if ( ((v172 * 16) & 0x10) == 0 || (v169 = v167 + 1, *v167 = v173, v174 != &v167[1]) )
                    {
                      do
                      {
                        *v169 = v173;
                        v169 += 2;
                        v169[-1] = v173;
                      }
                      while ( v174 != v169 );
                    }
                    if ( (v170 & 1) == 0 )
                      goto LABEL_60;
                    v167 = (__m128i *)((char *)v167 + 8 * (v170 & 0xFFFFFFFFFFFFFFFELL));
                  }
                  v167->m128i_i64[0] = v218.m128i_i64[0];
                }
              }
            }
          }
LABEL_60:
          if ( *(_DWORD *)(v211.m128i_i64[0] - 8) == v32 )
          {
            v177 = (3 * v32 + 1) >> 1;
            v178 = 16 * v177 + 8;
            if ( 16 * v32 + 8 >= v178 || v32 >= v177 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v220, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v220);
              sub_233E40((__int64)v220);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v179 = (unsigned int *)sub_186B300((void *)(v211.m128i_i64[0] - 8), v178);
            *v179 = v177;
            v32 = v179[1];
            v211.m128i_i64[0] = (__int64)(v179 + 2);
          }
          v79 = v211.m128i_i64[0];
          v80 = v32++;
          v37 = v74;
          v81 = v211.m128i_i64[0] + 16 * v80;
          *(_QWORD *)v81 = v74;
          *(_WORD *)(v81 + 8) = 0;
          *(_DWORD *)(v79 - 4) = v32;
          v33 = v79 + 16LL * (v32 - 1);
          goto LABEL_55;
        }
        v40 = v14[-1].m128i_u32[3];
        LODWORD(v217) = v40;
        if ( (unsigned int)v39 >= v40 )
        {
          v82 = v38 - 2147483646;
          if ( v40 < v38 - 2147483646 )
          {
            v218.m128i_i64[0] = qword_1C7EDC0;
            goto LABEL_64;
          }
          v14[-1].m128i_i32[3] = v82;
          goto LABEL_51;
        }
        v41 = v14->m128i_i64[v39];
        if ( !v41 )
          goto LABEL_51;
        if ( v31 )
        {
          v42 = *((_DWORD *)v31 - 1);
          if ( v42 == *((_DWORD *)v31 - 2) )
          {
            v139 = (3 * v42 + 1) >> 1;
            v140 = 8 * v139 + 8;
            if ( 8 * v42 + 8 >= v140 || v42 >= v139 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v220, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v220);
              sub_233E40((__int64)v220);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v141 = sub_186B270(v140);
            v142 = *((unsigned int *)v31 - 1);
            v143 = (_DWORD *)v141;
            v144 = (_DWORD *)(v141 + 8);
            *(_DWORD *)(v141 + 4) = v142;
            v145 = 0;
            v146 = 8 * v142;
            if ( v146 )
            {
              do
              {
                *(_QWORD *)&v143[v145 / 4 + 2] = v31[v145 / 8];
                v145 += 8LL;
              }
              while ( v145 != v146 );
            }
            v216 = (unsigned __int64)v144;
            sub_186B220(v31 - 1);
            v147 = (unsigned int)v143[1];
            v148 = v216;
            *v143 = v139;
            v149 = v147;
            v31 = (_QWORD *)v148;
            v45 = (__int64 *)(v148 + 8 * v147);
            v44 = v149 + 1;
          }
          else
          {
            v43 = v42;
            v44 = v42 + 1;
            v45 = &v31[v43];
          }
        }
        else
        {
          v204 = (_QWORD *)sub_186B270(0x18u);
          v31 = v204 + 1;
          *v204 = 2;
          v44 = 1;
          v45 = v31;
        }
        *v45 = v41;
        *((_DWORD *)v31 - 1) = v44;
        v46 = (int *)v215;
        ++*(_DWORD *)((v41 & 0xFFFFFFFFFFFFFFFELL) + 4);
        if ( (unsigned int)v46[1] <= 1 )
          goto LABEL_158;
        v47 = *v46;
        v48 = v14[-1].m128i_u32[3];
        v49 = (unsigned int)(*v46 - 0x7FFFFFFF);
        LODWORD(v217) = v48;
        if ( (unsigned int)v49 < v48 )
          goto LABEL_82;
        v36 = v47 - 2147483646;
        if ( v48 >= v47 - 2147483646 )
        {
          v14[-1].m128i_i32[3] = v36;
          goto LABEL_158;
        }
        goto LABEL_37;
      }
      break;
    }
    if ( v31 )
    {
      v97 = *((_DWORD *)v31 - 1);
      if ( v97 == *((_DWORD *)v31 - 2) )
      {
        v182 = (3 * v97 + 1) >> 1;
        v183 = 8 * v182 + 8;
        if ( 8 * v97 + 8 >= v183 || v97 >= v182 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v220, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v220);
          sub_233E40((__int64)v220);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v184 = (unsigned int *)sub_186B270(v183);
        v185 = *((unsigned int *)v31 - 1);
        v186 = 0;
        v184[1] = v185;
        v187 = 8 * v185;
        if ( v187 )
        {
          do
          {
            *(_QWORD *)&v184[v186 / 4 + 2] = v31[v186 / 8];
            v186 += 8LL;
          }
          while ( v187 != v186 );
        }
        sub_186B220(v31 - 1);
        v188 = v184[1];
        *v184 = v182;
        v31 = v184 + 2;
        v189 = v188;
        v100 = &v184[2 * v188 + 2];
        v99 = v189 + 1;
      }
      else
      {
        v98 = v97;
        v99 = v97 + 1;
        v100 = (unsigned int *)&v31[v98];
      }
    }
    else
    {
      v203 = (_QWORD *)sub_186B270(0x18u);
      v31 = v203 + 1;
      *v203 = 2;
      v99 = 1;
      v100 = (unsigned int *)v31;
    }
    v101 = v215;
    *(_QWORD *)v100 = 0;
    *((_DWORD *)v31 - 1) = v99;
    if ( *(_DWORD *)(v101 + 4) > 1u )
    {
      v35 = *(_DWORD *)v101;
      if ( !v14 )
      {
        v36 = v35 - 2147483646;
        if ( v35 == 2147483646 )
          goto LABEL_158;
LABEL_140:
        v218.m128i_i64[0] = qword_1C7EDC0;
        v138 = (_QWORD *)sub_186B270(0x18u);
        *v138 = 2;
        v14 = (__m128i *)(v138 + 1);
        LODWORD(v217) = 0;
LABEL_38:
        while ( 1 )
        {
          v50 = v14[-1].m128i_u32[2];
          if ( v50 >= v36 )
            break;
          v51 = (3 * v50 + 1) >> 1;
          v52 = 8 * v51 + 8;
          if ( 8 * v50 + 8 >= (unsigned int)v52 || v50 >= v51 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v220, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v220);
            sub_233E40((__int64)v220);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v53 = sub_186B270(v52);
          v54 = v14[-1].m128i_u32[3];
          v55 = 0;
          v56 = (__m128i *)(v53 + 8);
          *(_DWORD *)(v53 + 4) = v54;
          v57 = 8 * v54;
          if ( v57 )
          {
            do
            {
              *(_QWORD *)(v53 + v55 + 8) = v14->m128i_i64[v55 / 8];
              v55 += 8LL;
            }
            while ( v55 != v57 );
          }
          v216 = v53;
          sub_186B220(&v14[-1].m128i_u64[1]);
          v14 = v56;
          *(_DWORD *)v216 = v51;
        }
        v150 = (unsigned int)v217;
        v14[-1].m128i_i32[3] = v36;
        v151 = 8LL * v36;
        v152 = 8 * v150;
        v153 = (__m128i *)((char *)v14 + v152);
        if ( v152 != v151 )
        {
          v154 = v151 - v152;
          v155 = (__m128i *)((char *)v14 + v152);
          v156 = ((unsigned __int64)(v154 - 8) >> 3) + 1;
          if ( v154 == 8 )
          {
LABEL_156:
            v153->m128i_i64[0] = v218.m128i_i64[0];
            goto LABEL_83;
          }
          v157 = _mm_loadl_epi64(&v218);
          v158 = v156 >> 1;
          v159 = _mm_unpacklo_epi64(v157, v157);
          v160 = &v153[v158];
          if ( ((v158 * 16) & 0x10) == 0 || (v155 = v153 + 1, *v153 = v159, &v153[1] != v160) )
          {
            do
            {
              *v155 = v159;
              v155 += 2;
              v155[-1] = v159;
            }
            while ( v155 != v160 );
          }
          if ( (v156 & 1) != 0 )
          {
            v153 = (__m128i *)((char *)v153 + 8 * (v156 & 0xFFFFFFFFFFFFFFFELL));
            goto LABEL_156;
          }
        }
LABEL_83:
        if ( !v31 )
        {
          v104 = MEMORY[0x7FFFFFFF8];
          v105 = 4294967294LL;
LABEL_85:
          v106 = v31[v105];
          if ( v106 )
          {
            v107 = *(_QWORD *)(v215 + 16);
            if ( (*(_BYTE *)(v215 + 8) & 1) != 0 )
              v106 ^= 1uLL;
            if ( !v104 )
            {
              v104 = *(_QWORD *)(v215 + 16);
              goto LABEL_91;
            }
            goto LABEL_89;
          }
          if ( v104 )
          {
            v106 = *(_QWORD *)(v215 + 8);
            v107 = *(_QWORD *)(v215 + 16);
LABEL_89:
            if ( (v107 & 1) != 0 )
              v104 ^= 1uLL;
            goto LABEL_91;
          }
          v208 = (unsigned int)(*((_DWORD *)v31 - 1) - 2);
          v209 = v31[v208];
          *((_DWORD *)v31 - 1) = v208;
          if ( v209 )
            sub_DAAB00(v210, v209 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_211;
        }
LABEL_158:
        v161 = *((_DWORD *)v31 - 1);
        v104 = v31[v161 - 1];
        v105 = (unsigned int)(v161 - 2);
        goto LABEL_85;
      }
      goto LABEL_81;
    }
    v106 = v31[v99 - 2];
    if ( v106 )
    {
      v104 = *(_QWORD *)(v101 + 16);
      if ( (*(_BYTE *)(v101 + 8) & 1) != 0 )
        v106 ^= 1uLL;
LABEL_91:
      v108 = sub_DA8B90(v210, v106, v104);
      v109 = v108 & 0xFFFFFFFFFFFFFFFELL;
      ++*(_DWORD *)((v108 & 0xFFFFFFFFFFFFFFFELL) + 4);
      v110 = *((_DWORD *)v31 - 1);
      v111 = v31[v110 - 1];
      v112 = (unsigned int)(v110 - 2);
      v113 = v31[v112];
      *((_DWORD *)v31 - 1) = v112;
      if ( v111 )
        sub_DAAB00(v210, v111 & 0xFFFFFFFFFFFFFFFELL);
      if ( v113 )
        sub_DAAB00(v210, v113 & 0xFFFFFFFFFFFFFFFELL);
      v114 = *(_QWORD *)(v109 + 8);
      if ( v114 )
      {
        if ( (v114 & 1) == 0 )
        {
          v115 = v114 & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_DWORD *)(v115 + 4) == 1 )
          {
            v216 = *(_QWORD *)(v115 + 8);
            if ( v216 )
            {
              v191 = *(_QWORD *)(v115 + 16);
              v218.m128i_i64[0] = *(_QWORD *)(v109 + 16);
              v217 = v191;
              v192 = sub_DA8B90(v210, v191, v218.m128i_i64[0]);
              v193 = v192 & 0xFFFFFFFFFFFFFFFELL;
              v194 = *(_DWORD *)((v192 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
              *(_DWORD *)((v192 & 0xFFFFFFFFFFFFFFFELL) + 4) = v194;
              if ( v194 > 1 )
              {
                v205 = sub_DA8B90(v210, v216, v192);
                v206 = v215;
                if ( (v108 & 1) != 0 )
                  v205 ^= 1uLL;
              }
              else
              {
                sub_DAAB00(v210, v193);
                v195 = sub_DA8B90(v210, v216, v218.m128i_i64[0]);
                v193 = v195 & 0xFFFFFFFFFFFFFFFELL;
                v196 = *(_DWORD *)((v195 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
                *(_DWORD *)((v195 & 0xFFFFFFFFFFFFFFFELL) + 4) = v196;
                if ( v196 <= 1 )
                {
                  sub_DAAB00(v210, v193);
                  goto LABEL_98;
                }
                v205 = sub_DA8B90(v210, v217, v195);
                v206 = v215;
                if ( (v108 & 1) != 0 )
                  v205 ^= 1uLL;
              }
LABEL_203:
              v223 = v31;
              v224 = v14;
              v221 = v210;
              v222 = v211.m128i_i64[0];
              v225 = v212;
              sub_DAA440(&v221, v206, v205);
              v31 = v223;
              v14 = v224;
              v211.m128i_i64[0] = v222;
              v210 = v221;
              v212 = v225;
              sub_DAAB00(v221, v193);
LABEL_101:
              sub_DAAB00(v210, v109);
              v32 = *(_DWORD *)(v211.m128i_i64[0] - 4) - 1;
              LODWORD(v215) = *(_DWORD *)(v211.m128i_i64[0] - 4);
              *(_DWORD *)(v211.m128i_i64[0] - 4) = v32;
              continue;
            }
          }
        }
LABEL_98:
        v116 = *(_QWORD *)(v109 + 16);
        if ( (v116 & 1) == 0 )
        {
          v117 = v116 & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_DWORD *)(v117 + 4) == 1 )
          {
            v197 = *(_QWORD *)(v117 + 8);
            v217 = v197;
            if ( v197 )
            {
              v198 = *(_DWORD **)(v117 + 16);
              v218.m128i_i64[0] = *(_QWORD *)(v109 + 8);
              v216 = (unsigned __int64)v198;
              v199 = sub_DA8B90(v210, v218.m128i_i64[0], v197);
              v193 = v199 & 0xFFFFFFFFFFFFFFFELL;
              v200 = *(_DWORD *)((v199 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
              *(_DWORD *)((v199 & 0xFFFFFFFFFFFFFFFELL) + 4) = v200;
              if ( v200 > 1 )
              {
                v205 = sub_DA8B90(v210, v199, v216);
                v206 = v215;
                if ( (v108 & 1) != 0 )
                  v205 ^= 1uLL;
                goto LABEL_203;
              }
              sub_DAAB00(v210, v193);
              v201 = sub_DA8B90(v210, v218.m128i_i64[0], v216);
              v193 = v201 & 0xFFFFFFFFFFFFFFFELL;
              v202 = *(_DWORD *)((v201 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
              *(_DWORD *)((v201 & 0xFFFFFFFFFFFFFFFELL) + 4) = v202;
              if ( v202 > 1 )
              {
                v205 = sub_DA8B90(v210, v201, v217);
                v206 = v215;
                if ( (v108 & 1) != 0 )
                  v205 ^= 1uLL;
                goto LABEL_203;
              }
              sub_DAAB00(v210, v193);
            }
          }
        }
      }
      v223 = v31;
      v221 = v210;
      v224 = v14;
      v222 = v211.m128i_i64[0];
      v225 = v212;
      sub_DAA440(&v221, v215, v108);
      v31 = v223;
      v14 = v224;
      v210 = v221;
      v211.m128i_i64[0] = v222;
      v212 = v225;
      goto LABEL_101;
    }
    *((_DWORD *)v31 - 1) -= 2;
LABEL_211:
    v223 = v31;
    v224 = v14;
    v221 = v210;
    v222 = v211.m128i_i64[0];
    v225 = v212;
    sub_DAB560(&v221, v215, v215);
    v31 = v223;
    v14 = v224;
    v210 = v221;
    v212 = v225;
    v207 = *(_DWORD *)(v222 - 4);
    v211.m128i_i64[0] = v222;
    v32 = v207 - 1;
    LODWORD(v215) = v207;
    *(_DWORD *)(v222 - 4) = v207 - 1;
  }
  while ( v32 );
  if ( v31 )
  {
    v118 = *((_DWORD *)v31 - 1);
    v216 = (unsigned __int64)v31;
    v215 = v31[v118 - 1];
  }
  else
  {
    v216 = 0;
    v215 = MEMORY[0x7FFFFFFF8];
  }
  if ( v14 )
    sub_186B220(&v14[-1].m128i_u64[1]);
  if ( v212 )
  {
    v119 = *((unsigned int *)v212 - 1);
    if ( (_DWORD)v119 )
    {
      v120 = v212;
      v121 = &v212[v119];
      do
      {
        if ( *v120 )
          sub_DAAB00(v210, *v120);
        ++v120;
      }
      while ( v121 != v120 );
    }
    sub_186B220(v212 - 1);
  }
  if ( !v215 )
  {
LABEL_71:
    ++v11[1];
    --*((_DWORD *)v31 - 1);
    --v11[1];
    sub_186B220(v31 - 1);
    if ( v211.m128i_i64[0] )
      goto LABEL_118;
    goto LABEL_72;
  }
  if ( (v211.m128i_i8[8] & 1) != 0 )
    v211.m128i_i64[1] = v215 ^ 1;
  else
    v211.m128i_i64[1] = v215;
  v11 = (_DWORD *)(v215 & 0xFFFFFFFFFFFFFFFELL);
  --*((_DWORD *)v31 - 1);
  --v11[1];
  sub_186B220(v31 - 1);
LABEL_118:
  sub_186B220((void *)(v211.m128i_i64[0] - 8));
LABEL_72:
  result = (unsigned int)v11[1];
  v92 = v214;
  v93 = v211.m128i_i64[1] == 0;
  v94 = (unsigned __int64)v214[1];
  v11[1] = result + 1;
  if ( v93 )
  {
    if ( v94 )
    {
LABEL_74:
      v95 = v214;
      sub_DAAB00(**v214, v94 & 0xFFFFFFFFFFFFFFFELL);
      result = v211.m128i_i64[1];
      v96 = v213;
      v95[1] = v211.m128i_i64[1];
      *v95 = v96;
      if ( result )
        return sub_DAAB00(*v213, v11);
    }
    else
    {
      *v92 = v213;
    }
  }
  else
  {
    v11[1] = result + 2;
    if ( v94 )
      goto LABEL_74;
    v92[1] = v211.m128i_i64[1];
    *v92 = v213;
    return sub_DAAB00(*v213, v11);
  }
  return result;
}

