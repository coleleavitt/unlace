__int64 __fastcall sub_E84200(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  _DWORD *v9; // rax
  _DWORD *v11; // rax
  bool v12; // r13
  __int64 v13; // rax
  const __m128i *v14; // rbx
  char *v15; // rbp
  int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __m128i *v19; // rdx
  char v20; // si
  __int64 v21; // r15
  __int16 v22; // si
  _DWORD *v23; // rsi
  __int64 v24; // rdi
  char (__fastcall *v25)(__int64, __int64); // rax
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  char *v29; // rdx
  void *v30; // rbx
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  void *v36; // r13
  __int64 v37; // rax
  char v38; // dl
  char v39; // cl
  __int64 v40; // rax
  char v41; // dl
  unsigned __int32 v42; // edi
  const __m128i *v43; // r14
  unsigned __int32 j; // r13d
  __int64 v45; // rcx
  int v46; // eax
  __m128i *v47; // rcx
  unsigned int v48; // eax
  size_t v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned int *v52; // rcx
  char *v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  unsigned int v56; // r14d
  size_t v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rdx
  int v63; // eax
  int v64; // r9d
  __int64 v65; // r15
  __int64 *v66; // rcx
  __int64 v67; // rdx
  __int64 i; // r15
  __int64 v69; // rdx
  __m128i *v70; // rdx
  unsigned int v71; // r14d
  size_t v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdi
  unsigned int *v75; // rdx
  __int64 v76; // r8
  unsigned __int64 v77; // rax
  __int64 v78; // rdi
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rdi
  _DWORD *v83; // r8
  _QWORD *v84; // r9
  char (__fastcall *v85)(__int64, __int64); // rax
  int v86; // eax
  unsigned int v87; // ecx
  __int64 v88; // rax
  unsigned int v89; // edx
  _DWORD *v90; // rax
  _QWORD *v91; // rdi
  char v92; // al
  char (__fastcall *v93)(__int64, __int64); // rax
  char v94; // al
  _DWORD *v95; // rax
  _QWORD *v96; // rdi
  char v97; // al
  _DWORD *v98; // r9
  __int64 v99; // rsi
  __int64 v100; // rdi
  bool v101; // zf
  void *v102; // r15
  void *v103; // r15
  void *v104; // rdi
  int v105; // edx
  __int64 v106; // rdx
  char v107; // cl
  __int64 v108; // rdx
  void *v109; // r15
  __int64 v110; // rsi
  __int64 v111; // rdi
  int v112; // eax
  unsigned int v113; // ecx
  __int64 v114; // rax
  __int64 v115; // rdx
  _QWORD *v116; // rax
  __int64 v117; // rsi
  unsigned int v118; // ecx
  __int64 v119; // rdx
  __m128i *v120; // rdx
  unsigned int v121; // r14d
  size_t v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rdi
  unsigned int *v125; // rdx
  const __m128i *v126; // r9
  unsigned __int64 v127; // rax
  __int64 v128; // rdi
  char v129; // al
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // rdx
  __int64 v133; // rsi
  unsigned int v134; // r14d
  unsigned int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rdx
  unsigned int *v138; // r8
  __int64 v139; // rcx
  unsigned __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rax
  int v143; // edi
  __m128i *v144; // rax
  unsigned int v145; // r14d
  unsigned int v146; // eax
  __int64 v147; // rax
  __int64 v148; // rcx
  unsigned int *v149; // rdx
  __int64 v150; // r8
  char v151; // si
  unsigned __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rcx
  int v155; // eax
  __m128i *v156; // rcx
  _QWORD *v157; // r10
  _DWORD *v158; // rax
  char v159; // al
  __int64 v160; // r14
  _DWORD *v161; // rax
  char v162; // al
  char v163; // al
  char v164; // al
  char **v165; // r13
  char **v166; // r13
  char **v167; // r13
  char **v168; // r13
  char **v169; // r13
  char **exception; // r13
  char v172; // [rsp+18h] [rbp-100h]
  __int8 v173; // [rsp+18h] [rbp-100h]
  unsigned int *v174; // [rsp+18h] [rbp-100h]
  unsigned __int8 v176; // [rsp+28h] [rbp-F0h]
  _DWORD *v177; // [rsp+28h] [rbp-F0h]
  __int64 *v178; // [rsp+28h] [rbp-F0h]
  unsigned int v179; // [rsp+28h] [rbp-F0h]
  __int64 v180; // [rsp+28h] [rbp-F0h]
  const __m128i *v181; // [rsp+28h] [rbp-F0h]
  __int64 *ptr; // [rsp+30h] [rbp-E8h]
  unsigned int *ptra; // [rsp+30h] [rbp-E8h]
  _QWORD *ptrb; // [rsp+30h] [rbp-E8h]
  _QWORD *ptrc; // [rsp+30h] [rbp-E8h]
  _DWORD *ptrd; // [rsp+30h] [rbp-E8h]
  void *ptre; // [rsp+30h] [rbp-E8h]
  void *ptrf; // [rsp+30h] [rbp-E8h]
  _DWORD *ptrg; // [rsp+30h] [rbp-E8h]
  unsigned int *ptrh; // [rsp+30h] [rbp-E8h]
  _DWORD *ptri; // [rsp+30h] [rbp-E8h]
  _DWORD *ptrj; // [rsp+30h] [rbp-E8h]
  _DWORD *ptrk; // [rsp+30h] [rbp-E8h]
  _QWORD *ptrl; // [rsp+30h] [rbp-E8h]
  unsigned int v195; // [rsp+38h] [rbp-E0h]
  char *v196; // [rsp+38h] [rbp-E0h]
  const __m128i *v197; // [rsp+38h] [rbp-E0h]
  _DWORD *v198; // [rsp+38h] [rbp-E0h]
  _DWORD *v199; // [rsp+38h] [rbp-E0h]
  unsigned int *v200; // [rsp+38h] [rbp-E0h]
  _QWORD *v201; // [rsp+38h] [rbp-E0h]
  const __m128i *v202; // [rsp+38h] [rbp-E0h]
  _DWORD *v203; // [rsp+38h] [rbp-E0h]
  _DWORD *v204; // [rsp+38h] [rbp-E0h]
  _QWORD *v205; // [rsp+38h] [rbp-E0h]
  _DWORD *v206; // [rsp+38h] [rbp-E0h]
  unsigned int *v207; // [rsp+40h] [rbp-D8h]
  __int64 *v208; // [rsp+40h] [rbp-D8h]
  const __m128i *v209; // [rsp+40h] [rbp-D8h]
  _QWORD *v210; // [rsp+40h] [rbp-D8h]
  _QWORD *v211; // [rsp+40h] [rbp-D8h]
  _QWORD *v212; // [rsp+40h] [rbp-D8h]
  char v213; // [rsp+5Dh] [rbp-BBh] BYREF
  char v214; // [rsp+5Eh] [rbp-BAh] BYREF
  char v215; // [rsp+5Fh] [rbp-B9h] BYREF
  __int64 v216; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v217; // [rsp+68h] [rbp-B0h]
  __int64 v218; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v219; // [rsp+78h] [rbp-A0h]
  _QWORD v220[2]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v221[2]; // [rsp+90h] [rbp-88h] BYREF
  char *v222; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v223; // [rsp+A8h] [rbp-70h]
  int v224; // [rsp+B0h] [rbp-68h] BYREF
  char v225; // [rsp+B4h] [rbp-64h]
  __int64 v226; // [rsp+B8h] [rbp-60h]
  __int64 v227; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v228; // [rsp+C8h] [rbp-50h]
  __int64 v229; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v230; // [rsp+D8h] [rbp-40h]

  v7 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v7 || *v7 != 5 || v7[1] != 1 )
  {
    v8 = 0;
    v9 = *(_DWORD **)(sub_15D1F10(a3) + 24);
    if ( !v9 || *v9 != 5 || v9[1] )
      return v8;
  }
  v216 = 0;
  v217 = 0;
  v218 = 1;
  v219 = 0;
  v11 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v11 )
  {
    v12 = 0;
    if ( *v11 == 5 )
      v12 = v11[1] == 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = sub_186B270(0x28u);
  *(_QWORD *)(v13 + 16) = a2;
  v14 = (const __m128i *)(v13 + 8);
  v15 = nullptr;
  *(_BYTE *)(v13 + 8) = 1;
  v16 = 2;
  v17 = 1;
  *(_BYTE *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = a3;
  *(_QWORD *)v13 = 0x200000002LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v17;
        v19 = (__m128i *)&v14[v17];
        v20 = v19->m128i_i8[0];
        v21 = v19->m128i_i64[1];
        v14[-1].m128i_i32[3] = v17;
        v172 = v20;
        v22 = *(_WORD *)(v21 + 4);
        if ( v22 )
        {
          v24 = a1[3];
          v176 = v12;
          v25 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 16LL);
          if ( v25 != sub_E67DB0 )
            goto LABEL_49;
          if ( v22 == 1 )
          {
            v31 = *(_DWORD *)(v24 + 20);
            v32 = *(_DWORD *)(v21 + 16);
            if ( v31 == 1 )
            {
              v80 = *(_QWORD *)(v24 + 8);
              v81 = v32 >> 5;
              if ( !v80 || (unsigned int)v81 >= *(_DWORD *)(v80 - 4) || (*(_DWORD *)(v80 + 4 * v81) & (1 << v32)) == 0 )
                goto LABEL_33;
            }
            else if ( v31 == 2 )
            {
              if ( v32 < *(_DWORD *)(v24 + 16) )
                goto LABEL_33;
            }
            else
            {
              if ( v31 )
              {
                sub_1872CE0("");
                sub_1873130(114, 58);
              }
              v33 = *(_QWORD *)(v24 + 8);
              v34 = v32 >> 5;
              if ( v33 && (unsigned int)v34 < *(_DWORD *)(v33 - 4) && (*(_DWORD *)(v33 + 4 * v34) & (1 << v32)) != 0 )
              {
LABEL_33:
                v227 = 1;
                v228 = 0;
                v229 = 1;
                v230 = 0;
                sub_182CBA0(qword_1C7F2C0, &v229);
                v35 = v216;
                v36 = qword_1C7F2C0;
                LODWORD(v216) = v227;
                LODWORD(v227) = v35;
                v37 = v217;
                v217 = v228;
                v228 = v37;
                v38 = BYTE4(v227) & 1;
                v39 = BYTE4(v216) & 0xFC | BYTE4(v227) & 2;
                BYTE4(v227) = BYTE4(v216) & 1 | BYTE4(v227) & 0xFC | BYTE4(v216) & 2;
                BYTE4(v216) = v39 | v38;
                LODWORD(v229) = v218;
                v40 = v219;
                v219 = v230;
                v230 = v40;
                LODWORD(v218) = 1;
                v41 = BYTE4(v218) & 0xFC | BYTE4(v229) & 2;
                BYTE4(v229) = BYTE4(v218) & 1 | BYTE4(v218) & 2 | BYTE4(v229) & 0xFC;
                BYTE4(v218) = v41;
                sub_182CBA0(qword_1C7F2C0, &v227);
                sub_182CBA0(v36, &v229);
                v42 = v14[-1].m128i_u32[3];
                if ( v42 )
                  goto LABEL_34;
                goto LABEL_117;
              }
            }
          }
          goto LABEL_16;
        }
        v23 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
        if ( !v23 )
        {
          v24 = a1[3];
          v25 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 16LL);
          if ( v25 != sub_E67DB0 )
          {
            v176 = v12;
            goto LABEL_49;
          }
          goto LABEL_16;
        }
        if ( *v23 != 5 )
          goto LABEL_14;
        v64 = v23[1];
        if ( v64 == 6 )
        {
          v66 = (__int64 *)(v21 + 32);
          v67 = 8LL * *(unsigned int *)(v21 + 24);
          v178 = (__int64 *)(v21 + 32 + v67);
          if ( v67 )
          {
            for ( i = *(_QWORD *)(v21 + 32); ; i = *v66 )
            {
              if ( v14[-1].m128i_i32[2] == v18 )
              {
                v71 = (3 * v18 + 1) >> 1;
                v72 = 16 * v71 + 8;
                if ( 16 * v18 + 8 >= (unsigned int)v72 || v18 >= v71 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v227, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v227);
                  sub_233E40((__int64)&v227);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                ptr = v66;
                v73 = sub_186B270(v72);
                v74 = v14[-1].m128i_u32[3];
                v75 = (unsigned int *)v73;
                v76 = v73 + 8;
                *(_DWORD *)(v73 + 4) = v74;
                v77 = 0;
                v78 = 16 * v74;
                if ( v78 )
                {
                  do
                  {
                    *(__m128i *)&v75[v77 / 4 + 2] = _mm_loadu_si128(&v14[v77 / 0x10]);
                    v77 += 16LL;
                  }
                  while ( v78 != v77 );
                }
                v208 = ptr;
                v197 = (const __m128i *)v76;
                ptra = v75;
                sub_186B220(&v14[-1].m128i_u64[1]);
                v66 = v208;
                *ptra = v71;
                v14 = v197;
                v70 = (__m128i *)&v197[ptra[1]];
                v18 = ptra[1] + 1;
              }
              else
              {
                v69 = v18++;
                v70 = (__m128i *)&v14[v69];
              }
              ++v66;
              v70->m128i_i64[1] = i;
              v70->m128i_i8[0] = v172;
              v14[-1].m128i_i32[3] = v18;
              if ( v66 == v178 )
                break;
            }
          }
          goto LABEL_20;
        }
        if ( v64 == 7 )
          break;
        if ( v23[1] != 8 )
        {
LABEL_14:
          v24 = a1[3];
          v176 = v12;
          v25 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 16LL);
          if ( v25 == sub_E67DB0 )
            goto LABEL_15;
LABEL_49:
          if ( v25(v24, v21) )
            goto LABEL_33;
          if ( !*(_WORD *)(v21 + 4) )
          {
            v23 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
            if ( v23 )
            {
LABEL_15:
              if ( *v23 == 5 && v23[1] == 9 && *(_DWORD *)(v21 + 24) == 2 )
              {
                v82 = a1[3];
                v83 = *(_DWORD **)(v21 + 32);
                v84 = *(_QWORD **)(v21 + 40);
                v85 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v82 + 16LL);
                if ( v85 == sub_E67DB0 )
                {
                  if ( *((_WORD *)v83 + 2) == 1 )
                  {
                    v86 = *(_DWORD *)(v82 + 20);
                    v87 = v83[4];
                    if ( v86 == 1 )
                    {
                      v130 = *(_QWORD *)(v82 + 8);
                      v131 = v87 >> 5;
                      if ( !v130
                        || (unsigned int)v131 >= *(_DWORD *)(v130 - 4)
                        || (*(_DWORD *)(v130 + 4 * v131) & (1 << v87)) == 0 )
                      {
                        goto LABEL_92;
                      }
                    }
                    else if ( v86 == 2 )
                    {
                      if ( v87 < *(_DWORD *)(v82 + 16) )
                        goto LABEL_92;
                    }
                    else
                    {
                      if ( v86 )
                      {
                        sub_1872CE0("");
                        sub_1873130(114, 58);
                      }
                      v88 = *(_QWORD *)(v82 + 8);
                      v89 = v87 >> 5;
                      if ( v88 && v89 < *(_DWORD *)(v88 - 4) && (*(_DWORD *)(v88 + 4LL * v89) & (1 << v87)) != 0 )
                      {
LABEL_92:
                        if ( *((_WORD *)v84 + 2) || (v90 = *(_DWORD **)(v84[2] + 24LL)) == nullptr )
                        {
                          v91 = a1 + 4;
                        }
                        else
                        {
                          v91 = a1 + 4;
                          if ( *v90 == 5 && v90[1] == 8 && *((_DWORD *)v84 + 6) == 1 )
                          {
                            v157 = (_QWORD *)v84[4];
                            if ( !*((_WORD *)v157 + 2) )
                            {
                              v158 = *(_DWORD **)(v157[2] + 24LL);
                              if ( v158 )
                              {
                                if ( *v158 == 5 && v158[1] == 8 && *((_DWORD *)v157 + 6) == 1 )
                                {
                                  v212 = v84;
                                  v206 = v83;
                                  ptrl = (_QWORD *)v84[4];
                                  v164 = sub_E82DC0((__int64)a1, v176, v157[4], (int *)&v216);
                                  v157 = ptrl;
                                  v83 = v206;
                                  v84 = v212;
                                  if ( v164 )
                                  {
                                    sub_1831620(qword_1C7F2C0, &v216);
                                    v83 = v206;
LABEL_217:
                                    ptri = v83;
                                    sub_1831620(qword_1C7F2C0, &v216);
                                    v83 = ptri;
LABEL_115:
                                    v42 = v14[-1].m128i_u32[3];
                                    v21 = (__int64)v83;
                                    if ( v42 )
                                    {
LABEL_34:
                                      if ( !v15 )
                                      {
                                        v79 = (_QWORD *)sub_186B270(0x28u);
                                        *v79 = 2;
                                        v42 = v14[-1].m128i_u32[3];
                                        v43 = v14;
                                        v15 = (char *)(v79 + 1);
                                        j = 0;
                                        v46 = 1;
                                        v47 = (__m128i *)v15;
                                        goto LABEL_37;
                                      }
                                      v43 = v14;
                                      for ( j = 0; ; v43 = &v14[j] )
                                      {
                                        v48 = *((_DWORD *)v15 - 1);
                                        if ( v48 == *((_DWORD *)v15 - 2) )
                                        {
                                          v195 = (3 * v48 + 1) >> 1;
                                          v49 = 16 * v195 + 8;
                                          if ( 16 * v48 + 8 >= (unsigned int)v49 || v48 >= (3 * v48 + 1) >> 1 )
                                          {
                                            v168 = (char **)__cxa_allocate_exception(0x28u);
                                            sub_24ABB0(&v227, "Overflow encountered when expanding vector");
                                            *v168 = (char *)off_1C63128;
                                            sub_2333C0(v168 + 1, &v227);
                                            sub_233E40((__int64)&v227);
                                            __cxa_throw(
                                              v168,
                                              (struct type_info *)&`typeinfo for'default_exception,
                                              (void (*)(void *))sub_230E50);
                                          }
                                          v50 = sub_186B270(v49);
                                          v51 = *((unsigned int *)v15 - 1);
                                          v52 = (unsigned int *)v50;
                                          v53 = (char *)(v50 + 8);
                                          *(_DWORD *)(v50 + 4) = v51;
                                          v54 = 0;
                                          v55 = 16 * v51;
                                          if ( v55 )
                                          {
                                            do
                                            {
                                              *(__m128i *)&v52[v54 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v15[v54]);
                                              v54 += 16LL;
                                            }
                                            while ( v55 != v54 );
                                          }
                                          v207 = v52;
                                          sub_186B220(v15 - 8);
                                          v42 = v14[-1].m128i_u32[3];
                                          *v207 = v195;
                                          v15 = v53;
                                          v47 = (__m128i *)&v53[16 * v207[1]];
                                          v46 = v207[1] + 1;
                                        }
                                        else
                                        {
                                          v45 = v48;
                                          v46 = v48 + 1;
                                          v47 = (__m128i *)&v15[16 * v45];
                                        }
LABEL_37:
                                        ++j;
                                        *v47 = _mm_loadu_si128(v43);
                                        *((_DWORD *)v15 - 1) = v46;
                                        if ( j >= v42 )
                                          break;
                                      }
                                    }
                                    if ( v21 )
LABEL_117:
                                      ++*(_DWORD *)(v21 + 8);
                                    v99 = *a4;
                                    if ( *a4 )
                                    {
                                      v100 = a4[1];
                                      v101 = (*(_DWORD *)(v99 + 8))-- == 1;
                                      if ( v101 )
                                        sub_15D7BC0(v100, v99);
                                    }
                                    v220[0] = 1;
                                    v220[1] = 0;
                                    *a4 = v21;
                                    v221[0] = 1;
                                    v221[1] = 0;
                                    sub_182CBA0(qword_1C7F2C0, v221);
                                    BYTE4(v221[0]) &= ~1u;
                                    v102 = qword_1C7F2C0;
                                    LODWORD(v221[0]) = 1;
                                    v227 = 0;
                                    v228 = 0;
                                    v229 = 1;
                                    v230 = 0;
                                    if ( (v220[0] & 0x100000000LL) != 0 )
                                      sub_182C690(qword_1C7F2C0, &v227, v220);
                                    else
                                      LODWORD(v227) = v220[0];
                                    if ( (v221[0] & 0x100000000LL) != 0 )
                                    {
                                      sub_182C690(v102, &v229, v221);
                                    }
                                    else
                                    {
                                      BYTE4(v229) &= ~1u;
                                      LODWORD(v229) = v221[0];
                                    }
                                    v103 = qword_1C7F2C0;
                                    if ( (_DWORD)v227
                                      && ((v216 & 0x100000000LL) != 0
                                       || (_DWORD)v216 != 1
                                       || (v218 & 0x100000000LL) != 0
                                       || (_DWORD)v218 != 1) )
                                    {
                                      sub_1831650(qword_1C7F2C0, &v227, &v218);
                                      sub_1831650(v103, &v229, &v216);
                                      if ( (int)v229 < 0 )
                                      {
                                        sub_1831620(v103, &v227);
                                        sub_1831620(v103, &v229);
                                      }
                                      v222 = nullptr;
                                      v223 = 0;
                                      sub_1832C70(v103, &v227, &v229, &v222);
                                      if ( (BYTE4(v222) & 1) != 0 || (_DWORD)v222 != 1 )
                                      {
                                        sub_1833EB0(v103, &v227, &v222, &v227);
                                        sub_1833EB0(v103, &v229, &v222, &v229);
                                      }
                                      sub_182CBA0(v103, &v222);
                                    }
                                    else
                                    {
                                      if ( (v227 & 0x100000000LL) != 0 )
                                        sub_182C690(qword_1C7F2C0, &v227, &v227);
                                      else
                                        BYTE4(v227) &= ~1u;
                                      if ( (v229 & 0x100000000LL) != 0 )
                                        sub_182C690(v103, &v229, &v229);
                                      else
                                        BYTE4(v229) &= ~1u;
                                    }
                                    BYTE4(v222) &= 0xFCu;
                                    v104 = qword_1C7F2C0;
                                    v225 &= 0xFCu;
                                    LODWORD(v222) = 0;
                                    v223 = 0;
                                    v224 = 1;
                                    v226 = 0;
                                    if ( (v227 & 0x100000000LL) != 0 )
                                      sub_182C690(qword_1C7F2C0, &v222, &v227);
                                    else
                                      LODWORD(v222) = v227;
                                    if ( (v229 & 0x100000000LL) != 0 )
                                    {
                                      sub_182C690(v104, &v224, &v229);
                                    }
                                    else
                                    {
                                      v225 &= ~1u;
                                      v224 = v229;
                                    }
                                    ptre = qword_1C7F2C0;
                                    sub_182CBA0(qword_1C7F2C0, &v227);
                                    sub_182CBA0(ptre, &v229);
                                    v105 = (int)v222;
                                    LODWORD(v222) = v216;
                                    LODWORD(v216) = v105;
                                    v106 = v223;
                                    v223 = v217;
                                    v217 = v106;
                                    ptrf = qword_1C7F2C0;
                                    v107 = BYTE4(v222) & 1;
                                    LOBYTE(v106) = BYTE4(v216) & 0xFC | BYTE4(v222) & 2;
                                    BYTE4(v222) = BYTE4(v216) & 1 | BYTE4(v222) & 0xFC | BYTE4(v216) & 2;
                                    BYTE4(v216) = v107 | v106;
                                    LODWORD(v106) = v224;
                                    v224 = v218;
                                    LODWORD(v218) = v106;
                                    v108 = v226;
                                    v226 = v219;
                                    v219 = v108;
                                    LOBYTE(v108) = v225 & 1 | BYTE4(v218) & 0xFC | v225 & 2;
                                    v225 = BYTE4(v218) & 1 | v225 & 0xFC | BYTE4(v218) & 2;
                                    BYTE4(v218) = v108;
                                    sub_182CBA0(qword_1C7F2C0, &v222);
                                    sub_182CBA0(ptrf, &v224);
                                    v109 = qword_1C7F2C0;
                                    sub_182CBA0(qword_1C7F2C0, v220);
                                    sub_182CBA0(v109, v221);
                                    v222 = v15;
                                    sub_E835C0((__int64)&v227, a1, v176, (__int64)&v216, v172, &v222);
                                    v110 = *a5;
                                    *a5 = v227;
                                    v227 = v110;
                                    if ( v110 )
                                    {
                                      v111 = v228;
                                      v101 = (*(_DWORD *)(v110 + 8))-- == 1;
                                      if ( v101 )
                                        sub_15D7BC0(v111, v110);
                                    }
                                    if ( v15 )
                                      sub_186B220(v15 - 8);
                                    v8 = 1;
                                    goto LABEL_24;
                                  }
                                }
                              }
                            }
                            v210 = v84;
                            v203 = v83;
                            v159 = sub_1666AE0(a1 + 4, v157, &v216, &v214);
                            v91 = a1 + 4;
                            v83 = v203;
                            v84 = v210;
                            if ( v159
                              && (_DWORD)v216
                              && (!v12
                               || (v216 & 0x100000000LL) == 0
                               && ((_DWORD)v216 == 1 || (_DWORD)v216 == -1)
                               && (v218 & 0x100000000LL) == 0
                               && (_DWORD)v218 == 1) )
                            {
                              goto LABEL_217;
                            }
                          }
                        }
                        v198 = v83;
                        ptrb = v84;
                        v92 = sub_1666AE0(v91, v84, &v216, &v213);
                        v84 = ptrb;
                        v83 = v198;
                        if ( v92
                          && (_DWORD)v216
                          && (!v12
                           || (v216 & 0x100000000LL) == 0
                           && ((_DWORD)v216 == 1 || (_DWORD)v216 == -1)
                           && (v218 & 0x100000000LL) == 0
                           && (_DWORD)v218 == 1) )
                        {
                          goto LABEL_115;
                        }
                        goto LABEL_101;
                      }
                    }
                  }
LABEL_145:
                  if ( *((_WORD *)v84 + 2) == 1 )
                  {
                    v112 = *(_DWORD *)(v82 + 20);
                    v113 = *((_DWORD *)v84 + 4);
                    if ( v112 == 1 )
                    {
                      v132 = *(_QWORD *)(v82 + 8);
                      v133 = v113 >> 5;
                      if ( !v132
                        || (unsigned int)v133 >= *(_DWORD *)(v132 - 4)
                        || (*(_DWORD *)(v132 + 4 * v133) & (1 << v113)) == 0 )
                      {
                        goto LABEL_103;
                      }
                    }
                    else if ( v112 == 2 )
                    {
                      if ( v113 < *(_DWORD *)(v82 + 16) )
                        goto LABEL_103;
                    }
                    else
                    {
                      if ( v112 )
                      {
                        sub_1872CE0("");
                        sub_1873130(114, 58);
                      }
                      v114 = *(_QWORD *)(v82 + 8);
                      v115 = v113 >> 5;
                      if ( v114
                        && (unsigned int)v115 < *(_DWORD *)(v114 - 4)
                        && (*(_DWORD *)(v114 + 4 * v115) & (1 << v113)) != 0 )
                      {
                        goto LABEL_103;
                      }
                    }
                  }
                }
                else
                {
                  v201 = *(_QWORD **)(v21 + 40);
                  ptrg = *(_DWORD **)(v21 + 32);
                  v129 = v85(v82, (__int64)v83);
                  v83 = ptrg;
                  v84 = v201;
                  if ( v129 )
                    goto LABEL_92;
LABEL_101:
                  v82 = a1[3];
                  v93 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v82 + 16LL);
                  if ( v93 == sub_E67DB0 )
                    goto LABEL_145;
                  v199 = v83;
                  ptrc = v84;
                  v94 = v93(v82, (__int64)v84);
                  v84 = ptrc;
                  v83 = v199;
                  if ( v94 )
                  {
LABEL_103:
                    if ( *((_WORD *)v83 + 2) || (v95 = *(_DWORD **)(*((_QWORD *)v83 + 2) + 24LL)) == nullptr )
                    {
                      v96 = a1 + 4;
                    }
                    else
                    {
                      v96 = a1 + 4;
                      if ( *v95 == 5 && v95[1] == 8 && v83[6] == 1 )
                      {
                        v160 = *((_QWORD *)v83 + 4);
                        if ( !*(_WORD *)(v160 + 4) )
                        {
                          v161 = *(_DWORD **)(*(_QWORD *)(v160 + 16) + 24LL);
                          if ( v161 )
                          {
                            if ( *v161 == 5 && v161[1] == 8 && *(_DWORD *)(v160 + 24) == 1 )
                            {
                              v205 = v84;
                              ptrk = v83;
                              v163 = sub_E82DC0((__int64)a1, v176, *(_QWORD *)(v160 + 32), (int *)&v216);
                              v83 = ptrk;
                              v84 = v205;
                              if ( v163 )
                              {
                                sub_1831620(qword_1C7F2C0, &v216);
                                v84 = v205;
LABEL_231:
                                ptrj = v84;
                                sub_1831620(qword_1C7F2C0, &v216);
                                v98 = ptrj;
LABEL_114:
                                v83 = v98;
                                goto LABEL_115;
                              }
                            }
                          }
                        }
                        v211 = v84;
                        v204 = v83;
                        v162 = sub_1666AE0(a1 + 4, v160, &v216, v220);
                        v96 = a1 + 4;
                        v83 = v204;
                        v84 = v211;
                        if ( v162
                          && (_DWORD)v216
                          && (!v12
                           || (v216 & 0x100000000LL) == 0
                           && ((_DWORD)v216 == 1 || (_DWORD)v216 == -1)
                           && (v218 & 0x100000000LL) == 0
                           && (_DWORD)v218 == 1) )
                        {
                          goto LABEL_231;
                        }
                      }
                    }
                    ptrd = v84;
                    v97 = sub_1666AE0(v96, v83, &v216, &v215);
                    v98 = ptrd;
                    if ( v97
                      && (_DWORD)v216
                      && (!v12
                       || (v216 & 0x100000000LL) == 0
                       && ((_DWORD)v216 == 1 || (_DWORD)v216 == -1)
                       && (v218 & 0x100000000LL) == 0
                       && (_DWORD)v218 == 1) )
                    {
                      goto LABEL_114;
                    }
                  }
                }
              }
            }
          }
LABEL_16:
          if ( v15 )
          {
            v26 = *((_DWORD *)v15 - 1);
            if ( v26 == *((_DWORD *)v15 - 2) )
            {
              v56 = (3 * v26 + 1) >> 1;
              v57 = 16 * v56 + 8;
              if ( 16 * v26 + 8 >= (unsigned int)v57 || v26 >= v56 )
              {
                v166 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v227, "Overflow encountered when expanding vector");
                *v166 = (char *)off_1C63128;
                sub_2333C0(v166 + 1, &v227);
                sub_233E40((__int64)&v227);
                __cxa_throw(v166, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v58 = sub_186B270(v57);
              v59 = *((unsigned int *)v15 - 1);
              v60 = 0;
              *(_DWORD *)(v58 + 4) = v59;
              v61 = 16 * v59;
              if ( v61 )
              {
                do
                {
                  *(__m128i *)(v58 + v60 + 8) = _mm_loadu_si128((const __m128i *)&v15[v60]);
                  v60 += 16;
                }
                while ( v61 != v60 );
              }
              v177 = (_DWORD *)v58;
              v196 = (char *)(v58 + 8);
              sub_186B220(v15 - 8);
              v62 = (unsigned int)v177[1];
              *v177 = v56;
              v15 = v196;
              v63 = v62;
              v29 = &v196[16 * v62];
              v28 = v63 + 1;
            }
            else
            {
              v27 = v26;
              v28 = v26 + 1;
              v29 = &v15[16 * v27];
            }
          }
          else
          {
            v116 = (_QWORD *)sub_186B270(0x28u);
            v15 = (char *)(v116 + 1);
            *v116 = 2;
            v28 = 1;
            v29 = v15;
          }
          *((_QWORD *)v29 + 1) = v21;
          *v29 = v172;
          *((_DWORD *)v15 - 1) = v28;
          v18 = v14[-1].m128i_u32[3];
          goto LABEL_20;
        }
        v65 = *(_QWORD *)(v21 + 32);
        if ( v17 == v14[-1].m128i_i32[2] )
        {
          v145 = (3 * v17 + 1) >> 1;
          v146 = 16 * v145 + 8;
          if ( 16 * v17 + 8 >= v146 || v17 >= v145 )
          {
            v169 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v227, "Overflow encountered when expanding vector");
            *v169 = (char *)off_1C63128;
            sub_2333C0(v169 + 1, &v227);
            sub_233E40((__int64)&v227);
            __cxa_throw(v169, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v147 = sub_186B270(v146);
          v148 = v14[-1].m128i_u32[3];
          v149 = (unsigned int *)v147;
          v150 = v147 + 8;
          v151 = v172 ^ 1;
          *(_DWORD *)(v147 + 4) = v148;
          v152 = 0;
          v153 = 16 * v148;
          if ( v153 )
          {
            do
            {
              *(__m128i *)&v149[v152 / 4 + 2] = _mm_loadu_si128(&v14[v152 / 0x10]);
              v152 += 16LL;
            }
            while ( v152 != v153 );
          }
          v181 = (const __m128i *)v150;
          v174 = v149;
          sub_186B220(&v14[-1].m128i_u64[1]);
          v154 = v174[1];
          *v174 = v145;
          v14 = v181;
          v155 = v154;
          v156 = (__m128i *)&v181[v154];
          v18 = v155 + 1;
          v156->m128i_i8[0] = v151;
          v156->m128i_i64[1] = v65;
          v174[1] = v18;
          goto LABEL_20;
        }
        v19->m128i_i8[0] = v172 ^ 1;
        v19->m128i_i64[1] = v65;
        v14[-1].m128i_i32[3] = v16;
      }
      if ( v17 == v14[-1].m128i_i32[2] )
        break;
      v19->m128i_i64[1] = *(_QWORD *)(v21 + 32);
      v19->m128i_i8[0] = v172;
      v14[-1].m128i_i32[3] = v16;
      if ( *(_DWORD *)(v21 + 24) > 1u )
        goto LABEL_156;
    }
    v134 = (3 * v17 + 1) >> 1;
    v135 = 16 * v134 + 8;
    if ( 16 * v17 + 8 >= v135 || v17 >= v134 )
    {
      v165 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v227, "Overflow encountered when expanding vector");
      *v165 = (char *)off_1C63128;
      sub_2333C0(v165 + 1, &v227);
      sub_233E40((__int64)&v227);
      __cxa_throw(v165, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v180 = *(_QWORD *)(v21 + 32);
    v136 = sub_186B270(v135);
    v137 = v14[-1].m128i_u32[3];
    v138 = (unsigned int *)v136;
    v139 = v136 + 8;
    *(_DWORD *)(v136 + 4) = v137;
    v140 = 0;
    v141 = 16 * v137;
    if ( v141 )
    {
      do
      {
        *(__m128i *)&v138[v140 / 4 + 2] = _mm_loadu_si128(&v14[v140 / 0x10]);
        v140 += 16LL;
      }
      while ( v140 != v141 );
    }
    v202 = (const __m128i *)v139;
    ptrh = v138;
    sub_186B220(&v14[-1].m128i_u64[1]);
    v142 = ptrh[1];
    *ptrh = v134;
    v143 = v142;
    v144 = (__m128i *)&v202[v142];
    v16 = v143 + 1;
    v144->m128i_i8[0] = v172;
    v14 = v202;
    v144->m128i_i64[1] = v180;
    v18 = v16;
    ptrh[1] = v16;
    if ( *(_DWORD *)(v21 + 24) > 1u )
    {
LABEL_156:
      v117 = *(_QWORD *)(v21 + 40);
      v118 = 1;
      v173 = v172 ^ 1;
      v18 = v16;
      while ( 1 )
      {
        if ( v18 == v14[-1].m128i_i32[2] )
        {
          v121 = (3 * v18 + 1) >> 1;
          v122 = 16 * v121 + 8;
          if ( 16 * v18 + 8 >= (unsigned int)v122 || v18 >= v121 )
          {
            v167 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v227, "Overflow encountered when expanding vector");
            *v167 = (char *)off_1C63128;
            sub_2333C0(v167 + 1, &v227);
            sub_233E40((__int64)&v227);
            __cxa_throw(v167, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v179 = v118;
          v123 = sub_186B270(v122);
          v124 = v14[-1].m128i_u32[3];
          v125 = (unsigned int *)v123;
          v126 = (const __m128i *)(v123 + 8);
          *(_DWORD *)(v123 + 4) = v124;
          v127 = 0;
          v128 = 16 * v124;
          if ( v128 )
          {
            do
            {
              *(__m128i *)&v125[v127 / 4 + 2] = _mm_loadu_si128(&v14[v127 / 0x10]);
              v127 += 16LL;
            }
            while ( v128 != v127 );
          }
          v209 = v126;
          v200 = v125;
          sub_186B220(&v14[-1].m128i_u64[1]);
          v118 = v179;
          *v200 = v121;
          v14 = v209;
          v120 = (__m128i *)&v209[v200[1]];
          v18 = v200[1] + 1;
        }
        else
        {
          v119 = v18++;
          v120 = (__m128i *)&v14[v119];
        }
        v120->m128i_i64[1] = v117;
        ++v118;
        v120->m128i_i8[0] = v173;
        v14[-1].m128i_i32[3] = v18;
        if ( v118 >= *(_DWORD *)(v21 + 24) )
          break;
        v117 = *(_QWORD *)(v21 + 8LL * v118 + 32);
      }
    }
LABEL_20:
    if ( !v18 )
      break;
    v16 = v18;
    v17 = v18 - 1;
  }
  if ( v15 )
    sub_186B220(v15 - 8);
  v8 = 0;
LABEL_24:
  sub_186B220(&v14[-1].m128i_u64[1]);
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v216);
  sub_182CBA0(v30, &v218);
  return v8;
}

