unsigned __int64 __fastcall sub_4770(
        __int64 a1,
        __m128 si128,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // r12
  char v19; // al
  const char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r14
  int v31; // ebp
  __int64 v32; // rax
  __int64 free_chunk; // rax
  __int64 v34; // rdx
  const char *v35; // rbp
  int v36; // eax
  char *v37; // r8
  char *v38; // rax
  const char *v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  char v47; // al
  int v48; // r12d
  __int64 v49; // rbp
  __int64 v50; // rax
  unsigned __int16 v51; // di
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  __int64 v63; // rsi
  int v64; // ebp
  __int64 v65; // rbx
  unsigned __int8 v66; // al
  int v67; // r15d
  __int64 v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r13
  unsigned __int8 v73; // r14
  unsigned __int8 v74; // r14
  unsigned __int8 v75; // r14
  unsigned __int8 v76; // r14
  unsigned __int8 v77; // r14
  unsigned __int8 v78; // r14
  unsigned __int8 v79; // r14
  unsigned __int8 v80; // r14
  unsigned __int8 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rdi
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  unsigned __int8 v86; // al
  __int64 v87; // rdx
  __int64 v88; // rdi
  unsigned __int64 v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // r14
  unsigned __int8 v92; // r13
  unsigned __int8 v93; // r13
  __int64 v94; // r14
  unsigned __int8 v95; // r13
  unsigned __int8 v96; // r13
  __int64 v97; // rdx
  __int64 v98; // rdi
  unsigned __int64 v99; // rdx
  __int64 v100; // rsi
  __int64 v101; // r13
  unsigned __int8 v102; // r14
  unsigned __int8 v103; // r14
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rdi
  unsigned __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // r13
  unsigned __int8 v110; // r14
  __int64 v111; // rax
  __int16 v112; // r13
  unsigned __int8 v113; // r14
  unsigned int v114; // eax
  unsigned __int64 v115; // rdx
  __int64 v116; // rsi
  __int64 v117; // r13
  unsigned __int8 v118; // r14
  unsigned __int8 v119; // r14
  unsigned __int8 v120; // r14
  unsigned __int8 v121; // r14
  unsigned __int16 v122; // r13
  unsigned __int8 v123; // bp
  unsigned __int16 v124; // dx
  _WORD *v125; // rax
  __int64 v126; // rsi
  unsigned __int8 v127; // al
  unsigned __int8 v128; // r13
  unsigned __int16 v129; // r13
  unsigned __int8 v130; // al
  __int64 v131; // r13
  char v132; // r15
  __int64 v133; // r13
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __m128 v138; // xmm4
  __m128 v139; // xmm5
  __int16 v140; // r13
  unsigned __int8 v141; // r15
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // rsi
  unsigned __int8 v145; // bp
  __int16 v146; // dx
  _WORD *v147; // rax
  unsigned __int8 v148; // r13
  __int64 v149; // r15
  __int64 v150; // r13
  __int64 v151; // r9
  __int64 v152; // r14
  int v153; // r13d
  const __m128i *v154; // rbx
  unsigned __int16 v155; // di
  __int64 v156; // rax
  int v157; // edx
  __int64 v158; // rax
  __int64 v159; // rsi
  __int64 v160; // rdi
  unsigned __int64 v161; // rbp
  __m128i v162; // xmm0
  __int64 i; // rbx
  __int64 v164; // rax
  int v165; // ebp
  __int64 v166; // rbx
  __int64 v167; // rdi
  __int64 j; // rbx
  __int64 v169; // rax
  __int64 k; // rbx
  __int64 v171; // rax
  int v172; // ebp
  __int64 v173; // rbx
  __int64 v174; // rdi
  __int64 v175; // rbx
  __int64 v176; // rdi
  __int16 custom_fixup; // ax
  void *v179; // rsi
  __int64 v180; // rbp
  __int64 v181; // rax
  __int64 v182; // rdi
  __int64 v183; // r15
  __int64 v184; // rbp
  __int64 v185; // r13
  __int64 v186; // r12
  __int64 v187; // rbp
  __int64 v188; // r13
  int dword; // eax
  struct _Unwind_Exception *v190; // rbx
  char v191; // [rsp+0h] [rbp-128h]
  __int64 v193; // [rsp+10h] [rbp-118h]
  unsigned __int8 v194; // [rsp+10h] [rbp-118h]
  unsigned __int8 v195; // [rsp+10h] [rbp-118h]
  unsigned __int8 v196; // [rsp+10h] [rbp-118h]
  unsigned __int8 v197; // [rsp+10h] [rbp-118h]
  unsigned __int8 v198; // [rsp+10h] [rbp-118h]
  unsigned __int8 v199; // [rsp+10h] [rbp-118h]
  unsigned __int8 v200; // [rsp+10h] [rbp-118h]
  unsigned __int8 v201; // [rsp+10h] [rbp-118h]
  unsigned __int8 v202; // [rsp+10h] [rbp-118h]
  unsigned __int8 v203; // [rsp+10h] [rbp-118h]
  unsigned __int8 v204; // [rsp+10h] [rbp-118h]
  unsigned __int16 v205; // [rsp+10h] [rbp-118h]
  unsigned int v206; // [rsp+18h] [rbp-110h]
  __int16 v207; // [rsp+18h] [rbp-110h]
  __int16 v208; // [rsp+18h] [rbp-110h]
  __int16 v209; // [rsp+18h] [rbp-110h]
  __int16 v210; // [rsp+18h] [rbp-110h]
  __int16 v211; // [rsp+18h] [rbp-110h]
  __int16 v212; // [rsp+18h] [rbp-110h]
  __int16 v213; // [rsp+18h] [rbp-110h]
  __int16 v214; // [rsp+18h] [rbp-110h]
  __int16 v215; // [rsp+18h] [rbp-110h]
  unsigned __int8 v216; // [rsp+18h] [rbp-110h]
  unsigned __int64 v217; // [rsp+20h] [rbp-108h]
  int v218; // [rsp+2Ch] [rbp-FCh]
  void *v219; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v220; // [rsp+38h] [rbp-F0h]
  __m256i v221; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v222; // [rsp+70h] [rbp-B8h]
  __int16 v223; // [rsp+78h] [rbp-B0h]
  __int128 v224; // [rsp+80h] [rbp-A8h]
  __int64 v225; // [rsp+90h] [rbp-98h]
  __int64 v226; // [rsp+98h] [rbp-90h]
  int v227; // [rsp+A0h] [rbp-88h]
  __int64 v228; // [rsp+A8h] [rbp-80h]
  int v229; // [rsp+B0h] [rbp-78h]
  __int64 v230; // [rsp+B8h] [rbp-70h]
  int v231; // [rsp+C0h] [rbp-68h]
  __int64 v232; // [rsp+C8h] [rbp-60h]
  int v233; // [rsp+D0h] [rbp-58h]
  __int64 v234; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v235; // [rsp+E8h] [rbp-40h]

  v235 = __readfsqword(0x28u);
  if ( !sub_2D20(a1) )
    sub_27B0((__int64)"The input is not a PSX object file");
  v9 = -1;
  v10 = qlseek(a1, 0, 1);
  while ( 2 )
  {
    v11 = qlseek(a1, 0, 1);
    v12 = qlgetc(a1);
    v17 = v12;
    switch ( v12 )
    {
      case 0u:
        v18 = 1;
        v19 = getinf_flag(3, 4);
        setinf(9, (-(__int64)(v19 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v20 = nullptr;
        setinf(12, 0);
        v25 = dword_A294;
        if ( dword_A294 )
        {
          v186 = 0;
          qword_A240 = 16 * getinf(12, 0, v21, v22, v23, v24);
          set_selector(1, 0);
          v20 = (const char *)qword_A240;
          sub_4290(1, qword_A240, qword_A240 + 4 * v25, (__int64)"XTRN", (__int64)"XTRN", 0);
          v22 = (unsigned int)dword_A294;
          v187 = qword_A240;
          if ( dword_A294 > 0 )
          {
            do
            {
              v188 = 32 * v186++;
              create_data(v187, 0x20000000, 4, -1);
              v20 = *(const char **)(qword_A270 + v188 + 8);
              set_name(v187, v20, 7168);
              *(_QWORD *)(qword_A270 + v188 + 16) = v187;
              v187 += 4;
            }
            while ( dword_A294 > (int)v186 );
          }
          v18 = 2;
        }
        if ( dword_A29C
          && (v180 = 4 * dword_A29C,
              v181 = getinf(20, v20, v21, v22, v23, v24),
              qword_A248 = find_free_chunk(v181, v180, 15),
              set_selector(v18, 0),
              v20 = (const char *)qword_A248,
              v182 = v18,
              ++v18,
              sub_4290(v182, qword_A248, v180 + qword_A248, (__int64)"COMM", (__int64)"COMM", 0),
              v183 = qword_A248,
              dword_A29C > 0) )
        {
          v184 = 0;
          do
          {
            v185 = 32 * v184++;
            create_data(v183, 0, 4, -1);
            put_dword(v183, *(unsigned int *)(qword_A280 + v185 + 28));
            v20 = *(const char **)(qword_A280 + v185 + 8);
            set_name(v183, v20, 7168);
            *(_QWORD *)(qword_A280 + v185 + 16) = v183;
            v183 += 4;
          }
          while ( dword_A29C > (int)v184 );
          v26 = (unsigned int)dword_A298;
          v27 = 0;
          if ( dword_A298 <= 0 )
          {
LABEL_150:
            if ( dword_A290 > 0 )
            {
              LODWORD(v42) = *(unsigned __int16 *)(qword_A268 + 24);
              goto LABEL_152;
            }
            goto LABEL_23;
          }
        }
        else
        {
          v26 = (unsigned int)dword_A298;
          v27 = 0;
          if ( dword_A298 <= 0 )
            goto LABEL_150;
        }
        v193 = v10;
        v206 = v17;
        do
        {
          while ( 1 )
          {
            v28 = qword_A278 + 48 * v27;
            v29 = *(unsigned __int8 *)(v28 + 40);
            v30 = *(unsigned int *)(v28 + 16);
            v31 = 1 << v29;
            v32 = getinf(20, v20, v26, v29, v23, v24);
            free_chunk = find_free_chunk(v32, v30, v31 - 1);
            v34 = *(unsigned int *)(v28 + 16);
            *(_QWORD *)(v28 + 24) = free_chunk;
            *(_QWORD *)(v28 + 32) = v34 + free_chunk;
            set_selector(v18 + v27, 0);
            v35 = *(const char **)(v28 + 8);
            v36 = strcmp(v35, ".text");
            v37 = "CODE";
            if ( v36 )
            {
              v38 = strstr(v35, "data");
              v37 = "DATA";
              if ( !v38 )
              {
                v37 = strstr(v35, "bss");
                if ( v37 )
                  v37 = "BSS";
              }
            }
            sub_4290(v18 + v27, *(_QWORD *)(v28 + 24), *(_QWORD *)(v28 + 32), (__int64)v35, (__int64)v37, 32);
            *(_DWORD *)(v28 + 16) = 0;
            v20 = ".sdata";
            if ( !strcmp(*(const char **)(v28 + 8), ".sdata") )
              break;
            if ( dword_A298 <= (int)++v27 )
              goto LABEL_16;
          }
          v39 = *(const char **)(v28 + 24);
          if ( *(_DWORD *)(get_ph() + 4) != 12 )
          {
            if ( !under_debugger )
            {
              interr(10235);
LABEL_189:
              if ( !under_debugger )
              {
                v190 = (struct _Unwind_Exception *)interr(20057);
                if ( v219 )
                {
                  *(_QWORD *)&v220 = 0;
                  qfree(v219);
                }
                _Unwind_Resume(v190);
              }
            }
LABEL_191:
            BUG();
          }
          v20 = v39;
          ++v27;
          sub_26F0(0xBBAu, v39);
        }
        while ( dword_A298 > (int)v27 );
LABEL_16:
        v10 = v193;
        v40 = 0;
        v17 = v206;
        if ( dword_A290 > 0 )
        {
          while ( 1 )
          {
            v41 = qword_A268 + 32 * v40;
            v42 = *(unsigned __int16 *)(v41 + 24);
            if ( dword_A298 <= 0 )
              break;
            v43 = qword_A278;
            v44 = v206;
            while ( (_WORD)v42 != *(_WORD *)v43 )
            {
              v44 = (unsigned int)(v44 + 1);
              v43 += 48;
              if ( (_DWORD)v44 == dword_A298 )
                goto LABEL_152;
            }
            v45 = *(_QWORD *)(v43 + 24);
            if ( v45 == -1 )
              break;
            v46 = v45 + *(unsigned int *)(v41 + 28);
            *(_QWORD *)(v41 + 16) = v46;
            v47 = segtype(v46, v42, v44);
            ++v40;
            add_entry(*(_QWORD *)(v41 + 16), *(_QWORD *)(v41 + 16), *(_QWORD *)(v41 + 8), v47 == 2, 1);
            if ( dword_A290 <= (int)v40 )
              goto LABEL_23;
          }
LABEL_152:
          sub_27B0((__int64)"The section number %04X is invalid (%s)", v42, "pubdef");
        }
LABEL_23:
        v48 = v17;
        v49 = 0;
        if ( dword_A28C > 0 )
        {
          do
          {
            v50 = v49 + qword_A260;
            v51 = *(_WORD *)(v49 + qword_A260);
            if ( dword_A298 <= 0 )
              goto LABEL_186;
            v52 = qword_A278;
            v53 = v17;
            while ( v51 != *(_WORD *)v52 )
            {
              ++v53;
              v52 += 48;
              if ( v53 == dword_A298 )
                goto LABEL_186;
            }
            v54 = *(_QWORD *)(v52 + 24);
            if ( v54 == -1 )
LABEL_186:
              sub_27B0((__int64)"The section number %04X is invalid (%s)", v51, "locdef");
            v55 = *(_QWORD *)(v50 + 8);
            ++v48;
            v49 += 24;
            v56 = v54 + *(unsigned int *)(v50 + 4);
            *(_QWORD *)(v50 + 16) = v56;
            set_name(v56, v55, 7168);
          }
          while ( v48 < dword_A28C );
        }
        create_filename_cmt();
        if ( (_BYTE)qword_A2A0 )
          sub_2620(
            (__int64)"Module name : %s",
            (__int64)&qword_A2A0,
            v57,
            v58,
            v59,
            v60,
            si128,
            a3,
            a4,
            a5,
            v61,
            v62,
            a8,
            a9,
            v191);
        v63 = v10;
        v64 = -1;
        v65 = -1;
        qlseek(a1, v63, 0);
        while ( 1 )
        {
LABEL_33:
          v11 = qlseek(a1, 0, 1);
          v66 = qlgetc(a1);
          v67 = v66;
          switch ( v66 )
          {
            case 0u:
              v152 = 0;
              if ( dword_A288 <= 0 )
                goto LABEL_120;
              v153 = v66;
              do
              {
                v154 = (const __m128i *)(v152 + qword_A258);
                v155 = *(_WORD *)(v152 + qword_A258);
                if ( dword_A298 <= 0 )
                  goto LABEL_183;
                v156 = qword_A278;
                v157 = v67;
                while ( v155 != *(_WORD *)v156 )
                {
                  ++v157;
                  v156 += 48;
                  if ( dword_A298 == v157 )
                    goto LABEL_183;
                }
                v158 = *(_QWORD *)(v156 + 24);
                if ( v158 == -1 )
LABEL_183:
                  sub_27B0((__int64)"The section number %04X is invalid (%s)", v155, "fundef");
                ++v153;
                v159 = v154->m128i_i64[1];
                v152 += 56;
                v160 = v158 + v154->m128i_u32[1];
                v161 = v158 + v154[2].m128i_u32[3];
                v154[1].m128i_i64[0] = v160;
                set_name(v160, v159, 7168);
                v162 = _mm_loadl_epi64(v154 + 1);
                v222 = 0;
                v223 = 0;
                v225 = 0xFFFFFFFFLL;
                v226 = 0;
                v227 = 0;
                v228 = 0;
                v229 = 0;
                v230 = 0;
                v231 = 0;
                v232 = 0;
                v233 = 0;
                v234 = 0;
                *(__m128i *)v221.m256i_i8 = _mm_unpacklo_epi64(v162, (__m128i)v161);
                *(__m128i *)&v221.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_7450);
                v224 = 0;
                add_func_ex(&v221);
              }
              while ( v153 < dword_A288 );
LABEL_120:
              for ( i = 0; dword_A29C > (int)i; ++i )
              {
                v164 = i;
                qfree(*(_QWORD *)(qword_A280 + 32 * v164 + 8));
              }
              v165 = v67;
              v166 = 0;
              if ( dword_A298 > 0 )
              {
                do
                {
                  ++v165;
                  v167 = *(_QWORD *)(qword_A278 + v166 + 8);
                  v166 += 48;
                  qfree(v167);
                }
                while ( v165 < dword_A298 );
              }
              for ( j = 0; dword_A294 > (int)j; ++j )
              {
                v169 = j;
                qfree(*(_QWORD *)(qword_A270 + 32 * v169 + 8));
              }
              for ( k = 0; dword_A290 > (int)k; ++k )
              {
                v171 = k;
                qfree(*(_QWORD *)(qword_A268 + 32 * v171 + 8));
              }
              v172 = v67;
              v173 = 0;
              if ( dword_A28C > 0 )
              {
                do
                {
                  ++v172;
                  v174 = *(_QWORD *)(qword_A260 + v173 + 8);
                  v173 += 24;
                  qfree(v174);
                }
                while ( v172 < dword_A28C );
              }
              v175 = 0;
              if ( dword_A288 > 0 )
              {
                do
                {
                  ++v67;
                  v176 = *(_QWORD *)(qword_A258 + v175 + 8);
                  v175 += 56;
                  qfree(v176);
                }
                while ( v67 < dword_A288 );
              }
              qfree(qword_A280);
              qfree(qword_A278);
              qfree(qword_A270);
              qfree(qword_A268);
              qfree(qword_A260);
              qfree(qword_A258);
              qword_A280 = 0;
              qword_A278 = 0;
              qword_A270 = 0;
              qword_A268 = 0;
              qword_A260 = 0;
              qword_A258 = 0;
              dword_A29C = 0;
              dword_A298 = 0;
              dword_A294 = 0;
              dword_A290 = 0;
              dword_A28C = 0;
              dword_A288 = 0;
              return v235 - __readfsqword(0x28u);
            case 2u:
              v148 = qlgetc(a1);
              v205 = v148 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
              v149 = qlseek(a1, 0, 1);
              if ( v64 == -1 )
              {
                v151 = v205;
              }
              else
              {
                v150 = qword_A278 + 48LL * v64;
                v65 = *(_QWORD *)(v150 + 24) + *(unsigned int *)(v150 + 16);
                if ( qlsize(a1) - v149 < (unsigned __int64)v205 )
                  sub_27B0((__int64)"Truncated input file");
                if ( (unsigned int)change_storage_type(v65, v65 + v205, 0) )
                  goto LABEL_189;
                file2base(a1, v149, v65, v65 + v205, 1);
                *(_DWORD *)(v150 + 16) += v205;
                v151 = v205;
              }
              qlseek(a1, v151 + v149, 0);
              continue;
            case 6u:
              v145 = qlgetc(a1);
              v146 = v145 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
              if ( dword_A298 <= 0 )
                goto LABEL_133;
              v147 = (_WORD *)qword_A278;
              v64 = v17;
              do
              {
                if ( *v147 == v146 )
                {
                  v65 = -1;
                  goto LABEL_33;
                }
                ++v64;
                v147 += 24;
              }
              while ( v64 != dword_A298 );
LABEL_133:
              v65 = -1;
              v64 = -1;
              continue;
            case 8u:
              v204 = qlgetc(a1);
              v140 = qlgetc(a1);
              v141 = qlgetc(a1);
              v142 = qlgetc(a1);
              if ( v64 != -1 )
              {
                v143 = qword_A278 + 48LL * v64;
                v144 = *(unsigned int *)(v143 + 16);
                v65 = v144 + *(_QWORD *)(v143 + 24);
                *(_DWORD *)(v143 + 16) = v144
                                       + ((unsigned __int16)(v204 | (unsigned __int16)(v140 << 8))
                                        | ((v141 | (v142 << 8)) << 16));
              }
              continue;
            case 0xAu:
              v218 = v11;
              v216 = qlgetc(a1);
              v128 = qlgetc(a1);
              v129 = ((unsigned __int16)qlgetc(a1) << 8) | v128;
              v130 = qlgetc(a1);
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_7440);
              v221.m256i_i64[0] = 0;
              v131 = v65 + v129;
              v221.m256i_i64[3] = 0;
              v222 = 0;
              *(__m128 *)&v221.m256i_u64[1] = si128;
              v132 = sub_3AC0((__int64)&v221, v130, a1, *(double *)si128.m128_u64);
              if ( !v132 )
              {
                sub_4030((__int64)"Illegal relocation information at file pos %08X, source 0x%a, type %d");
                continue;
              }
              v217 = v221.m256i_i64[3] + v222;
              if ( v216 == 74 )
              {
                v221.m256i_i32[1] |= 4u;
                v221.m256i_i16[0] = 4;
                if ( v217 & 3 | ((unsigned int)v217 ^ ((_DWORD)v131 + 4)) & 0xF0000000 )
                {
                  sub_4030((__int64)"%x: fixup overflow (source %a, target %a)");
                  sub_41C0(
                    (__int64)"%x: fixup overflow (source %a, target %a)",
                    v218,
                    *(double *)si128.m128_u64,
                    *(double *)a3.m128_u64);
                }
                dword = get_dword(v131);
                put_dword(v131, dword & 0xFC000000 | (v217 >> 2) & 0x3FFFFFF);
                auto_mark_range(v131, v131 + 1, 20);
                continue;
              }
              if ( v216 > 0x4Au )
              {
                if ( v216 == 82 )
                {
LABEL_170:
                  custom_fixup = word_A23A;
                  if ( word_A23A == (__int16)0x8000 )
                  {
                    custom_fixup = find_custom_fixup("MIPS_HA16");
                    word_A23A = custom_fixup;
                  }
                }
                else
                {
                  if ( v216 != 84 )
                  {
LABEL_173:
                    sub_4030((__int64)"Illegal relocation type %d at file pos %08X, source %a");
                    continue;
                  }
                  custom_fixup = word_A238;
                  if ( word_A238 == (__int16)0x8000 )
                  {
                    custom_fixup = find_custom_fixup("MIPS_LO16");
                    word_A238 = custom_fixup;
                  }
                }
LABEL_138:
                v221.m256i_i16[0] = custom_fixup;
                if ( (unsigned __int8)patch_fixup_value(v131, &v221) )
                {
                  set_fixup(v131, &v221);
LABEL_144:
                  auto_mark_range(v131, v131 + 1, 20);
                  continue;
                }
                goto LABEL_139;
              }
              if ( v216 == 26 )
                goto LABEL_170;
              if ( v216 == 30 )
              {
                custom_fixup = 15;
                goto LABEL_138;
              }
              if ( v216 != 16 )
                goto LABEL_173;
              v221.m256i_i16[0] = 4;
              v132 = patch_fixup_value(v131, &v221);
              if ( v132 )
              {
                set_fixup(v131, &v221);
                continue;
              }
LABEL_139:
              si128 = 0;
              v220 = 0;
              v219 = nullptr;
              sub_46B0((__int64 *)&v219, (__int64)"fixup overflow (target=%a)", v217);
              v179 = &unk_7724;
              if ( (_QWORD)v220 )
                v179 = v219;
              append_cmt(v131, v179, 0);
              if ( v219 )
              {
                *(_QWORD *)&v220 = 0;
                qfree(v219);
              }
              set_fixup(v131, &v221);
              if ( v132 )
                goto LABEL_144;
              break;
            case 0xCu:
            case 0x30u:
              v126 = 8;
              goto LABEL_83;
            case 0xEu:
              v126 = 2;
              goto LABEL_83;
            case 0x10u:
              v126 = 5;
              goto LABEL_83;
            case 0x12u:
              v126 = 6;
              goto LABEL_83;
            case 0x1Cu:
              qlgetc(a1);
              qlgetc(a1);
              v133 = sub_3900(a1);
              sub_2620(
                (__int64)"Source file : %s",
                v133,
                v134,
                v135,
                v136,
                v137,
                si128,
                a3,
                a4,
                a5,
                v138,
                v139,
                a8,
                a9,
                v191);
              qfree(v133);
              continue;
            case 0x2Eu:
              qlseek(a1, 1, 1);
              continue;
            case 0x3Cu:
              qlseek(a1, 2, 1);
              continue;
            case 0x4Au:
              v126 = 28;
LABEL_83:
              qlseek(a1, v126, 1);
              v127 = qlgetc(a1);
              qlseek(a1, v127, 1);
              continue;
            case 0x4Cu:
              qlseek(a1, 10, 1);
              continue;
            default:
              if ( under_debugger )
                goto LABEL_191;
              interr(20058);
              goto LABEL_179;
          }
        }
      case 2u:
        v121 = qlgetc(a1);
        v122 = v121 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        qlseek(a1, v122, 1);
        if ( v9 == -1 )
          sub_27B0((__int64)"The section number %04X is invalid (%s)", -1, "text");
        *(_DWORD *)(qword_A278 + 48LL * v9 + 16) += v122;
        continue;
      case 6u:
        v123 = qlgetc(a1);
        v124 = v123 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        if ( dword_A298 <= 0 )
          goto LABEL_81;
        v125 = (_WORD *)qword_A278;
        v9 = 0;
        while ( *v125 != v124 )
        {
          ++v9;
          v125 += 24;
          if ( dword_A298 == v9 )
LABEL_81:
            sub_27B0((__int64)"The section number %04X is invalid (%s)", v124, "switch");
        }
        continue;
      case 8u:
        v202 = qlgetc(a1);
        v112 = qlgetc(a1);
        v113 = qlgetc(a1);
        v114 = (unsigned __int16)(v202 | (unsigned __int16)(v112 << 8))
             | ((v113 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        if ( v9 == -1 )
          sub_27B0((__int64)"The section number %04X is invalid (%s)", -1, "bss");
        *(_DWORD *)(qword_A278 + 48LL * v9 + 16) += v114;
        continue;
      case 0xAu:
        qlgetc(a1);
        qlseek(a1, 2, 1);
        if ( !(unsigned __int8)sub_3970(a1, 2) )
          sub_4030((__int64)"Unknown relocation type %d at %08llX");
        continue;
      case 0xCu:
        v82 = dword_A290;
        v83 = qword_A268;
        if ( (dword_A290 & 0x1F) != 0 )
          goto LABEL_71;
        v115 = dword_A290 + 32;
        v116 = 32 * v115;
        if ( 32 * v115 < v115 )
        {
          qword_A268 = 0;
LABEL_168:
          sub_4100((__int64)"psx pubdef", v116, v115, v14, v15, v16, v191);
        }
        qword_A268 = qrealloc(qword_A268);
        v83 = qword_A268;
        if ( !qword_A268 )
          goto LABEL_168;
        v82 = dword_A290;
LABEL_71:
        dword_A290 = v82 + 1;
LABEL_72:
        v117 = v83 + 32 * v82;
        v118 = qlgetc(a1);
        *(_WORD *)v117 = v118 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v119 = qlgetc(a1);
        *(_WORD *)(v117 + 24) = v119 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v203 = qlgetc(a1);
        v215 = qlgetc(a1);
        v120 = qlgetc(a1);
        *(_DWORD *)(v117 + 28) = (unsigned __int16)(v203 | (unsigned __int16)(v215 << 8))
                               | ((v120 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        *(_QWORD *)(v117 + 8) = sub_3900(a1);
        continue;
      case 0xEu:
        v105 = dword_A294;
        v106 = qword_A270;
        if ( (dword_A294 & 0x1F) != 0 )
          goto LABEL_64;
        v107 = dword_A294 + 32;
        v108 = 32 * v107;
        if ( 32 * v107 < v107 )
        {
          qword_A270 = 0;
LABEL_166:
          sub_4100((__int64)"psx extdef", v108, v107, v14, v15, v16, v191);
        }
        qword_A270 = qrealloc(qword_A270);
        v106 = qword_A270;
        if ( !qword_A270 )
          goto LABEL_166;
        v105 = dword_A294;
LABEL_64:
        v109 = v106 + 32 * v105;
        dword_A294 = v105 + 1;
        v110 = qlgetc(a1);
        *(_WORD *)v109 = v110 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v111 = sub_3900(a1);
        *(_DWORD *)(v109 + 24) = 0;
        *(_QWORD *)(v109 + 8) = v111;
        continue;
      case 0x10u:
        v97 = dword_A298;
        v98 = qword_A278;
        if ( (dword_A298 & 0x1F) != 0 )
          goto LABEL_59;
        v99 = dword_A298 + 32;
        v100 = 48 * v99;
        if ( 48 * v99 < v99 )
        {
          qword_A278 = 0;
LABEL_164:
          sub_4100((__int64)"psx segdef", v100, v99, v14, v15, v16, v191);
        }
        qword_A278 = qrealloc(qword_A278);
        v98 = qword_A278;
        if ( !qword_A278 )
          goto LABEL_164;
        v97 = dword_A298;
LABEL_59:
        dword_A298 = v97 + 1;
        v101 = v98 + 48 * v97;
        v102 = qlgetc(a1);
        *(_WORD *)v101 = v102 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v103 = qlgetc(a1);
        *(_WORD *)(v101 + 2) = v103 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        *(_BYTE *)(v101 + 40) = qlgetc(a1);
        v104 = sub_3900(a1);
        *(_DWORD *)(v101 + 16) = 0;
        *(_QWORD *)(v101 + 8) = v104;
        continue;
      case 0x12u:
        v87 = dword_A28C;
        v88 = qword_A260;
        if ( (dword_A28C & 0x1F) != 0 )
          goto LABEL_52;
        v89 = dword_A28C + 32;
        v90 = 24 * v89;
        if ( 24 * v89 < v89 )
        {
          qword_A260 = 0;
LABEL_158:
          sub_4100((__int64)"psx locdef", v90, v89, v14, v15, v16, v191);
        }
        qword_A260 = qrealloc(qword_A260);
        v88 = qword_A260;
        if ( !qword_A260 )
          goto LABEL_158;
        v87 = dword_A28C;
LABEL_52:
        dword_A28C = v87 + 1;
        v91 = v88 + 24 * v87;
        v92 = qlgetc(a1);
        *(_WORD *)v91 = v92 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v199 = qlgetc(a1);
        v212 = qlgetc(a1);
        v93 = qlgetc(a1);
        *(_DWORD *)(v91 + 4) = (unsigned __int16)(v199 | (unsigned __int16)(v212 << 8))
                             | ((v93 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        *(_QWORD *)(v91 + 8) = sub_3900(a1);
        continue;
      case 0x1Cu:
        qlseek(a1, 2, 1);
        v86 = qlgetc(a1);
        qlseek(a1, v86, 1);
        continue;
      case 0x2Eu:
        if ( (unsigned __int8)qlgetc(a1) != 7 )
          sub_4030((__int64)"Unknown processor type %d");
        continue;
      case 0x30u:
        v82 = dword_A29C;
        v83 = qword_A280;
        if ( (dword_A29C & 0x1F) != 0 )
          goto LABEL_44;
        v84 = dword_A29C + 32;
        v85 = 32 * v84;
        if ( 32 * v84 < v84 )
        {
          qword_A280 = 0;
LABEL_162:
          sub_4100((__int64)"psx comdef", v85, v84, v14, v15, v16, v191);
        }
        qword_A280 = qrealloc(qword_A280);
        v83 = qword_A280;
        if ( !qword_A280 )
          goto LABEL_162;
        v82 = dword_A29C;
LABEL_44:
        dword_A29C = v82 + 1;
        goto LABEL_72;
      case 0x3Cu:
        qlseek(a1, 2, 1);
        continue;
      case 0x4Au:
        v68 = dword_A288;
        v69 = qword_A258;
        if ( (dword_A288 & 0x1F) != 0 )
          goto LABEL_38;
        v70 = dword_A288 + 32;
        v71 = 56 * v70;
        if ( 56 * v70 < v70 )
        {
          qword_A258 = 0;
LABEL_160:
          sub_4100((__int64)"psx fundef", v71, v13, v14, v15, v16, v191);
        }
        qword_A258 = qrealloc(qword_A258);
        v69 = qword_A258;
        if ( !qword_A258 )
          goto LABEL_160;
        v68 = dword_A288;
LABEL_38:
        dword_A288 = v68 + 1;
        v72 = v69 + 56 * v68;
        v73 = qlgetc(a1);
        *(_WORD *)v72 = v73 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v194 = qlgetc(a1);
        v207 = qlgetc(a1);
        v74 = qlgetc(a1);
        *(_DWORD *)(v72 + 4) = (unsigned __int16)(v194 | (unsigned __int16)(v207 << 8))
                             | ((v74 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        v75 = qlgetc(a1);
        *(_WORD *)(v72 + 28) = v75 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v195 = qlgetc(a1);
        v208 = qlgetc(a1);
        v76 = qlgetc(a1);
        *(_DWORD *)(v72 + 24) = (unsigned __int16)(v195 | (unsigned __int16)(v208 << 8))
                              | ((v76 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        v77 = qlgetc(a1);
        *(_WORD *)(v72 + 30) = v77 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v196 = qlgetc(a1);
        v209 = qlgetc(a1);
        v78 = qlgetc(a1);
        *(_DWORD *)(v72 + 32) = (unsigned __int16)(v196 | (unsigned __int16)(v209 << 8))
                              | ((v78 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        v79 = qlgetc(a1);
        *(_WORD *)(v72 + 52) = v79 | (unsigned __int16)((unsigned __int16)qlgetc(a1) << 8);
        v197 = qlgetc(a1);
        v210 = qlgetc(a1);
        v80 = qlgetc(a1);
        *(_DWORD *)(v72 + 36) = (unsigned __int16)(v197 | (unsigned __int16)(v210 << 8))
                              | ((v80 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        v198 = qlgetc(a1);
        v211 = qlgetc(a1);
        v81 = qlgetc(a1);
        *(_DWORD *)(v72 + 40) = (unsigned __int16)(v198 | (unsigned __int16)(v211 << 8))
                              | ((v81 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        *(_QWORD *)(v72 + 8) = sub_3900(a1);
        continue;
      case 0x4Cu:
        if ( !dword_A288 )
          sub_27B0((__int64)"function end without function start");
        v94 = qword_A258 + 56LL * (dword_A288 - 1);
        qlgetc(a1);
        qlgetc(a1);
        v200 = qlgetc(a1);
        v213 = qlgetc(a1);
        v95 = qlgetc(a1);
        *(_DWORD *)(v94 + 44) = (unsigned __int16)(v200 | (unsigned __int16)(v213 << 8))
                              | ((v95 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        v201 = qlgetc(a1);
        v214 = qlgetc(a1);
        v96 = qlgetc(a1);
        *(_DWORD *)(v94 + 48) = (unsigned __int16)(v201 | (unsigned __int16)(v214 << 8))
                              | ((v96 | ((unsigned int)qlgetc(a1) << 8)) << 16);
        continue;
      default:
LABEL_179:
        sub_27B0((__int64)"Unknown record type %d at %08llX", v17, v11);
    }
  }
}
