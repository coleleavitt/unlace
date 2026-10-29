__int64 __fastcall sub_A2A800(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // rax
  _BOOL8 v13; // rcx
  __int64 v14; // rax
  char *v15; // rcx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // r12d
  int v20; // edx
  __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // rax
  _BOOL8 v25; // rcx
  __int64 v26; // rax
  char *v27; // rdx
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // edx
  __int64 v32; // rdx
  char v33; // cl
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  char *v37; // rbx
  char *v38; // r12
  void *v39; // rbp
  char *v40; // rsi
  int v41; // edx
  __int64 v42; // rdx
  char v43; // cl
  __int64 v44; // rdx
  __int64 v45; // r15
  __m128i v46; // xmm0
  __int64 v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rbp
  __int64 v50; // rdi
  __int64 v51; // r15
  __int64 v52; // r12
  int v53; // r14d
  __int64 v54; // rbx
  __int64 v55; // rbp
  _QWORD *v56; // rax
  __int64 v57; // r15
  _QWORD *v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned int v62; // edx
  unsigned int v63; // ebp
  size_t v64; // rdi
  __int64 v65; // r8
  const __m128i *v66; // rax
  __int64 v67; // r14
  __int64 v68; // rsi
  __m128i *v69; // rdx
  const __m128i *i; // rsi
  bool v71; // zf
  __int64 v72; // rax
  __int64 v73; // rbp
  unsigned int v74; // eax
  __int64 v75; // rax
  int v76; // ebp
  char *v77; // r14
  unsigned int v78; // r15d
  __int64 v79; // rbx
  char *v80; // r12
  char *v81; // rdi
  char v82; // dl
  __int64 v83; // rax
  char v84; // dl
  __int64 v85; // rax
  int v86; // edx
  __int64 v87; // rdx
  char v88; // cl
  __int64 v89; // rdx
  int v90; // edx
  __int64 v91; // rdx
  char v92; // cl
  __int64 v93; // rdx
  int v94; // edx
  __int64 v95; // rdx
  char v96; // cl
  __int64 v97; // rdx
  int v98; // edx
  __int64 v99; // rdx
  char v100; // cl
  __int64 v101; // rdx
  __int64 v102; // r12
  __int64 v103; // rbp
  int v104; // edx
  __int64 v105; // rdx
  char v106; // cl
  __int64 v107; // rdx
  int v108; // edx
  __int64 v109; // rdx
  char v110; // cl
  __int64 v111; // rdx
  __int64 v112; // rbp
  int v113; // ebp
  char *v114; // rbp
  unsigned int v115; // ebx
  __int64 v116; // r14
  void *v117; // r15
  char *v118; // r12
  void *v119; // rdi
  char v120; // si
  __int64 v121; // rax
  char v122; // si
  __int64 v123; // rax
  __int64 v124; // rbp
  int v125; // edx
  __int64 v126; // rdx
  char v127; // cl
  __int64 v128; // rdx
  int v129; // ecx
  int v130; // r8d
  int v131; // r9d
  __int64 v132; // rax
  __int64 v133; // rbp
  char **exception; // rbp
  int *v135; // [rsp+0h] [rbp-4B8h]
  __int64 v136; // [rsp+0h] [rbp-4B8h]
  unsigned int v137; // [rsp+8h] [rbp-4B0h]
  unsigned int v138; // [rsp+8h] [rbp-4B0h]
  _DWORD *v139; // [rsp+8h] [rbp-4B0h]
  unsigned int v140; // [rsp+18h] [rbp-4A0h]
  int v141; // [rsp+18h] [rbp-4A0h]
  char *v142; // [rsp+18h] [rbp-4A0h]
  int *v143; // [rsp+20h] [rbp-498h]
  unsigned int v144; // [rsp+20h] [rbp-498h]
  void *v145; // [rsp+48h] [rbp-470h]
  char *v146; // [rsp+48h] [rbp-470h]
  unsigned __int8 v147; // [rsp+5Bh] [rbp-45Dh]
  int v148; // [rsp+5Ch] [rbp-45Ch]
  char *v149; // [rsp+68h] [rbp-450h]
  __int64 v150; // [rsp+70h] [rbp-448h]
  __int64 v151; // [rsp+80h] [rbp-438h] BYREF
  int v152[2]; // [rsp+88h] [rbp-430h]
  __int64 v153; // [rsp+90h] [rbp-428h] BYREF
  __int64 v154; // [rsp+98h] [rbp-420h]
  __int64 v155; // [rsp+A0h] [rbp-418h] BYREF
  __int64 v156; // [rsp+A8h] [rbp-410h]
  char v157[32]; // [rsp+B0h] [rbp-408h] BYREF
  char v158[32]; // [rsp+D0h] [rbp-3E8h] BYREF
  __int64 v159; // [rsp+F0h] [rbp-3C8h] BYREF
  __int64 v160; // [rsp+F8h] [rbp-3C0h]
  __int64 v161; // [rsp+100h] [rbp-3B8h] BYREF
  __int64 v162; // [rsp+108h] [rbp-3B0h]
  _QWORD v163[4]; // [rsp+110h] [rbp-3A8h] BYREF
  char v164[32]; // [rsp+130h] [rbp-388h] BYREF
  __int64 v165; // [rsp+150h] [rbp-368h] BYREF
  __int64 v166; // [rsp+158h] [rbp-360h]
  __int64 v167; // [rsp+160h] [rbp-358h]
  __int64 v168; // [rsp+168h] [rbp-350h]
  __int64 v169; // [rsp+170h] [rbp-348h] BYREF
  __int64 v170; // [rsp+178h] [rbp-340h]
  __int64 v171; // [rsp+180h] [rbp-338h] BYREF
  __int64 v172; // [rsp+188h] [rbp-330h]
  __int64 v173; // [rsp+190h] [rbp-328h] BYREF
  __int64 v174; // [rsp+198h] [rbp-320h]
  __int64 v175; // [rsp+1A0h] [rbp-318h]
  __int64 v176; // [rsp+1A8h] [rbp-310h]
  __int64 *v177; // [rsp+1B0h] [rbp-308h] BYREF
  __int64 v178; // [rsp+1B8h] [rbp-300h]
  __m128i v179; // [rsp+1C0h] [rbp-2F8h] BYREF
  unsigned int v180; // [rsp+1D0h] [rbp-2E8h]
  int v181; // [rsp+1D4h] [rbp-2E4h]
  int v182; // [rsp+1D8h] [rbp-2E0h]
  const __m128i *v183; // [rsp+1E0h] [rbp-2D8h] BYREF
  unsigned int v184; // [rsp+1E8h] [rbp-2D0h]
  void *ptr; // [rsp+1F0h] [rbp-2C8h]
  __int64 v186; // [rsp+1F8h] [rbp-2C0h]
  _BYTE v187[696]; // [rsp+200h] [rbp-2B8h] BYREF

  v3 = a1;
  v137 = *(_DWORD *)(a2 + 12);
  if ( (unsigned __int8)sub_995780((_QWORD *)a1, (__int64 *)a2) )
    return 0;
  v147 = sub_9B2A30((_QWORD *)a1, (__int64 *)a2);
  if ( !v147 )
    return 0;
  v5 = *(unsigned int *)(a1 + 1224);
  v151 = a1;
  *(_QWORD *)v152 = a1 + 48 * v5 + 1080;
  sub_998560(*(__int64 *)v152);
  ++*(_DWORD *)(a1 + 1224);
  ++*(_DWORD *)(a1 + 272);
  v153 = 1;
  v154 = 0;
  v155 = 1;
  v156 = 0;
  sub_182CBA0(qword_1C7F2C0, &v155);
  BYTE4(v155) &= ~1u;
  ptr = v187;
  v6 = *(_QWORD *)(a1 + 664) + ((unsigned __int64)v137 << 6);
  v186 = 0x1000000000LL;
  LODWORD(v155) = 1;
  sub_9A9130((__int64)&v177, v6);
  sub_3EBB80((__int64)v157, v6, (__int64)&v177);
  sub_25A130((char *)&v177);
  v177 = (_QWORD *)(&dword_0 + 1);
  v178 = 0;
  v179 = (__m128i)1uLL;
  sub_182CBA0(qword_1C7F2C0, &v179);
  v179.m128i_i32[0] = 1;
  v179.m128i_i8[4] &= ~1u;
  sub_3EBB80((__int64)v158, (__int64)&v177, (__int64)v157);
  sub_25A130((char *)&v177);
  v159 = 1;
  v160 = 0;
  v161 = 1;
  v162 = 0;
  sub_182CBA0(qword_1C7F2C0, &v161);
  v7 = *(_QWORD *)a2;
  BYTE4(v161) &= ~1u;
  LODWORD(v161) = 1;
  v135 = (int *)v7;
  if ( v7 )
  {
    v148 = 0;
    v143 = (int *)(v7 + 40LL * *(unsigned int *)(v7 - 4));
    if ( (int *)v7 != v143 )
    {
      do
      {
        v19 = v135[8];
        if ( v19 != v137 && v19 != -1 )
        {
          v163[0] = 0;
          v163[1] = 0;
          v163[2] = 1;
          v163[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v163, v135);
          sub_1831620(qword_1C7F2C0, v163);
          if ( (*(_BYTE *)(*(_QWORD *)(v3 + 656) + 4LL * v19 + 3) & 0x40) != 0 )
          {
            ++v148;
            sub_992C20((__int64)&v177, (__int64)v163);
            sub_3EBB80((__int64)v164, (__int64)v163, (__int64)&v177);
            sub_25A130((char *)&v177);
            if ( *(_DWORD *)v164 )
            {
              v165 = 0;
              v166 = 0;
              v167 = 1;
              v168 = 0;
              if ( sub_9B34D0((_QWORD *)v3, v19) )
              {
                if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v158, (__int64)v164) )
                {
                  v169 = 1;
                  v170 = 0;
                  v171 = 1;
                  v172 = 0;
                  sub_182CBA0(qword_1C7F2C0, &v171);
                  BYTE4(v171) &= ~1u;
                  LODWORD(v171) = 1;
                  sub_3EBB80((__int64)&v173, (__int64)&v169, (__int64)v164);
                  sub_27B620((__int64)&v177, (__int64)&v173, (__int64)v157);
                  v20 = (int)v177;
                  LODWORD(v177) = v165;
                  LODWORD(v165) = v20;
                  v21 = v178;
                  v178 = v166;
                  v166 = v21;
                  v22 = BYTE4(v177) & 1;
                  LOBYTE(v21) = BYTE4(v165) & 0xFC | BYTE4(v177) & 2;
                  BYTE4(v177) = BYTE4(v165) & 1 | BYTE4(v177) & 0xFC | BYTE4(v165) & 2;
                  BYTE4(v165) = v22 | v21;
                  LODWORD(v21) = v179.m128i_i32[0];
                  v179.m128i_i32[0] = v167;
                  LODWORD(v167) = v21;
                  v23 = v179.m128i_i64[1];
                  v179.m128i_i64[1] = v168;
                  v168 = v23;
                  LOBYTE(v23) = v179.m128i_i8[4] & 1 | BYTE4(v167) & 0xFC | v179.m128i_i8[4] & 2;
                  v179.m128i_i8[4] = BYTE4(v167) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v167) & 2;
                  BYTE4(v167) = v23;
                  sub_25A130((char *)&v177);
                  sub_25A130((char *)&v173);
                  sub_25A130((char *)&v169);
                }
                else
                {
                  sub_27B620((__int64)&v177, (__int64)v164, (__int64)v158);
                  v104 = (int)v177;
                  LODWORD(v177) = v165;
                  LODWORD(v165) = v104;
                  v105 = v178;
                  v178 = v166;
                  v166 = v105;
                  v106 = BYTE4(v177) & 1;
                  LOBYTE(v105) = BYTE4(v165) & 0xFC | BYTE4(v177) & 2;
                  BYTE4(v177) = BYTE4(v165) & 1 | BYTE4(v177) & 0xFC | BYTE4(v165) & 2;
                  BYTE4(v165) = v106 | v105;
                  LODWORD(v105) = v179.m128i_i32[0];
                  v179.m128i_i32[0] = v167;
                  LODWORD(v167) = v105;
                  v107 = v179.m128i_i64[1];
                  v179.m128i_i64[1] = v168;
                  v168 = v107;
                  LOBYTE(v107) = v179.m128i_i8[4] & 1 | BYTE4(v167) & 0xFC | v179.m128i_i8[4] & 2;
                  v179.m128i_i8[4] = BYTE4(v167) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v167) & 2;
                  BYTE4(v167) = v107;
                  sub_25A130((char *)&v177);
                }
                sub_9AF010((__int64)&v153, (__int64)&v165, *(_QWORD *)(*(_QWORD *)(v3 + 680) + 8LL * v19) + 16LL);
                v24 = *(_QWORD *)(v3 + 680);
              }
              else
              {
                if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v157, (__int64)v164) )
                {
                  v169 = 1;
                  v170 = 0;
                  v171 = 1;
                  v172 = 0;
                  sub_182CBA0(qword_1C7F2C0, &v171);
                  BYTE4(v171) &= ~1u;
                  LODWORD(v171) = 1;
                  sub_3EBB80((__int64)&v173, (__int64)&v169, (__int64)v164);
                  sub_27B620((__int64)&v177, (__int64)&v173, (__int64)v158);
                  v86 = (int)v177;
                  LODWORD(v177) = v165;
                  LODWORD(v165) = v86;
                  v87 = v178;
                  v178 = v166;
                  v166 = v87;
                  v88 = BYTE4(v177) & 1;
                  LOBYTE(v87) = BYTE4(v165) & 0xFC | BYTE4(v177) & 2;
                  BYTE4(v177) = BYTE4(v165) & 1 | BYTE4(v177) & 0xFC | BYTE4(v165) & 2;
                  BYTE4(v165) = v88 | v87;
                  LODWORD(v87) = v179.m128i_i32[0];
                  v179.m128i_i32[0] = v167;
                  LODWORD(v167) = v87;
                  v89 = v179.m128i_i64[1];
                  v179.m128i_i64[1] = v168;
                  v168 = v89;
                  LOBYTE(v89) = v179.m128i_i8[4] & 1 | BYTE4(v167) & 0xFC | v179.m128i_i8[4] & 2;
                  v179.m128i_i8[4] = BYTE4(v167) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v167) & 2;
                  BYTE4(v167) = v89;
                  sub_25A130((char *)&v177);
                  sub_25A130((char *)&v173);
                  sub_25A130((char *)&v169);
                }
                else
                {
                  sub_27B620((__int64)&v177, (__int64)v164, (__int64)v157);
                  v108 = (int)v177;
                  LODWORD(v177) = v165;
                  LODWORD(v165) = v108;
                  v109 = v178;
                  v178 = v166;
                  v166 = v109;
                  v110 = BYTE4(v177) & 1;
                  LOBYTE(v109) = BYTE4(v165) & 0xFC | BYTE4(v177) & 2;
                  BYTE4(v177) = BYTE4(v165) & 1 | BYTE4(v177) & 0xFC | BYTE4(v165) & 2;
                  BYTE4(v165) = v110 | v109;
                  LODWORD(v109) = v179.m128i_i32[0];
                  v179.m128i_i32[0] = v167;
                  LODWORD(v167) = v109;
                  v111 = v179.m128i_i64[1];
                  v179.m128i_i64[1] = v168;
                  v168 = v111;
                  LOBYTE(v111) = v179.m128i_i8[4] & 1 | BYTE4(v167) & 0xFC | v179.m128i_i8[4] & 2;
                  v179.m128i_i8[4] = BYTE4(v167) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v167) & 2;
                  BYTE4(v167) = v111;
                  sub_25A130((char *)&v177);
                }
                sub_1831620(qword_1C7F2C0, &v165);
                sub_9AF010((__int64)&v153, (__int64)&v165, *(_QWORD *)(*(_QWORD *)(v3 + 688) + 8LL * v19) + 16LL);
                v24 = *(_QWORD *)(v3 + 688);
              }
              v25 = 1;
              if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 712LL) )
                v25 = *(_DWORD *)(v3 + 1536) != 0x7FFFFFFF;
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, _BOOL8))(**(_QWORD **)(v24 + 8LL * v19) + 24LL))(
                *(_QWORD *)(v24 + 8LL * v19),
                &v151,
                &v165,
                v25);
              v177 = nullptr;
              v178 = 0;
              v179 = (__m128i)1uLL;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v177, (int *)&v165);
              v26 = (unsigned int)v186;
              v180 = v19;
              v181 = 0;
              if ( (unsigned int)v186 >= HIDWORD(v186) )
              {
                v113 = 2 * HIDWORD(v186);
                v27 = (char *)sub_186B270(40LL * (unsigned int)(2 * HIDWORD(v186)));
                v26 = (unsigned int)v186;
                if ( (_DWORD)v186 )
                {
                  v149 = v27;
                  v141 = v113;
                  v114 = v27;
                  v150 = v3;
                  v115 = 0;
                  v116 = 0;
                  do
                  {
                    v117 = qword_1C7F2C0;
                    ++v115;
                    v114 += 40;
                    v118 = (char *)ptr + v116;
                    v119 = qword_1C7F2C0;
                    v116 += 40;
                    v120 = v118[4];
                    *((_DWORD *)v114 - 10) = *(_DWORD *)v118;
                    *(v114 - 36) = v120 & 3 | *(v114 - 36) & 0xFC;
                    v121 = *((_QWORD *)v118 + 1);
                    *((_QWORD *)v118 + 1) = 0;
                    *((_QWORD *)v114 - 4) = v121;
                    v122 = v118[20];
                    *((_DWORD *)v114 - 6) = *((_DWORD *)v118 + 4);
                    *(v114 - 20) = v122 & 3 | *(v114 - 20) & 0xFC;
                    v123 = *((_QWORD *)v118 + 3);
                    *((_QWORD *)v118 + 3) = 0;
                    *((_QWORD *)v114 - 2) = v123;
                    *((_DWORD *)v114 - 2) = *((_DWORD *)v118 + 8);
                    *((_DWORD *)v114 - 1) = *((_DWORD *)v118 + 9);
                    sub_182CBA0(v119, v118);
                    sub_182CBA0(v117, v118 + 16);
                    v26 = (unsigned int)v186;
                  }
                  while ( v115 < (unsigned int)v186 );
                  v113 = v141;
                  v27 = v149;
                  v3 = v150;
                }
                if ( ptr != v187 && ptr )
                {
                  v142 = v27;
                  sub_186B220(ptr);
                  v26 = (unsigned int)v186;
                  v27 = v142;
                }
                ptr = v27;
                v19 = v180;
                HIDWORD(v186) = v113;
              }
              else
              {
                v27 = (char *)ptr;
              }
              v28 = &v27[40 * v26];
              *(_DWORD *)v28 = (_DWORD)v177;
              v28[4] = BYTE4(v177) & 3 | v28[4] & 0xFC;
              v29 = v178;
              v178 = 0;
              *((_QWORD *)v28 + 1) = v29;
              LODWORD(v186) = v186 + 1;
              *((_DWORD *)v28 + 4) = v179.m128i_i32[0];
              v28[20] = v179.m128i_i8[4] & 3 | v28[20] & 0xFC;
              v30 = v179.m128i_i64[1];
              v179.m128i_i64[1] = 0;
              *((_QWORD *)v28 + 3) = v30;
              LODWORD(v30) = v181;
              *((_DWORD *)v28 + 8) = v19;
              *((_DWORD *)v28 + 9) = v30;
              sub_25A130((char *)&v177);
              sub_992B90((__int64)&v173, (__int64)&v165);
              sub_992D20((__int64)&v177, (__int64)&v159, (__int64)&v173);
              v31 = (int)v177;
              LODWORD(v177) = v159;
              LODWORD(v159) = v31;
              v32 = v178;
              v178 = v160;
              v160 = v32;
              v33 = BYTE4(v177) & 1;
              LOBYTE(v32) = BYTE4(v159) & 0xFC | BYTE4(v177) & 2;
              BYTE4(v177) = BYTE4(v159) & 1 | BYTE4(v177) & 0xFC | BYTE4(v159) & 2;
              BYTE4(v159) = v33 | v32;
              LODWORD(v32) = v179.m128i_i32[0];
              v179.m128i_i32[0] = v161;
              LODWORD(v161) = v32;
              v34 = v179.m128i_i64[1];
              v179.m128i_i64[1] = v162;
              v162 = v34;
              LOBYTE(v34) = v179.m128i_i8[4] & 1 | BYTE4(v161) & 0xFC | v179.m128i_i8[4] & 2;
              v179.m128i_i8[4] = BYTE4(v161) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v161) & 2;
              BYTE4(v161) = v34;
              sub_25A130((char *)&v177);
              sub_25A130((char *)&v173);
              sub_25A130((char *)&v165);
            }
            sub_25A130(v164);
          }
          else
          {
            v173 = 0;
            v174 = 0;
            v175 = 1;
            v176 = 0;
            if ( sub_9B34D0((_QWORD *)v3, v19) )
            {
              if ( SLODWORD(v163[0]) <= 0 )
              {
                sub_27B620((__int64)&v177, (__int64)v163, (__int64)v157);
                v90 = (int)v177;
                LODWORD(v177) = v173;
                LODWORD(v173) = v90;
                v91 = v178;
                v178 = v174;
                v174 = v91;
                v92 = BYTE4(v177) & 1;
                LOBYTE(v91) = BYTE4(v173) & 0xFC | BYTE4(v177) & 2;
                BYTE4(v177) = BYTE4(v173) & 1 | BYTE4(v177) & 0xFC | BYTE4(v173) & 2;
                BYTE4(v173) = v92 | v91;
                LODWORD(v91) = v179.m128i_i32[0];
                v179.m128i_i32[0] = v175;
                LODWORD(v175) = v91;
                v93 = v179.m128i_i64[1];
                v179.m128i_i64[1] = v176;
                v176 = v93;
                LOBYTE(v93) = v179.m128i_i8[4] & 1 | BYTE4(v175) & 0xFC | v179.m128i_i8[4] & 2;
                v179.m128i_i8[4] = BYTE4(v175) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v175) & 2;
                BYTE4(v175) = v93;
                sub_25A130((char *)&v177);
                sub_1831620(qword_1C7F2C0, &v173);
              }
              else
              {
                sub_27B620((__int64)&v177, (__int64)v163, (__int64)v158);
                v8 = (int)v177;
                LODWORD(v177) = v173;
                LODWORD(v173) = v8;
                v9 = v178;
                v178 = v174;
                v174 = v9;
                v10 = BYTE4(v177) & 1;
                LOBYTE(v9) = BYTE4(v173) & 0xFC | BYTE4(v177) & 2;
                BYTE4(v177) = BYTE4(v173) & 1 | BYTE4(v177) & 0xFC | BYTE4(v173) & 2;
                BYTE4(v173) = v10 | v9;
                LODWORD(v9) = v179.m128i_i32[0];
                v179.m128i_i32[0] = v175;
                LODWORD(v175) = v9;
                v11 = v179.m128i_i64[1];
                v179.m128i_i64[1] = v176;
                v176 = v11;
                LOBYTE(v11) = v179.m128i_i8[4] & 1 | BYTE4(v175) & 0xFC | v179.m128i_i8[4] & 2;
                v179.m128i_i8[4] = BYTE4(v175) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v175) & 2;
                BYTE4(v175) = v11;
                sub_25A130((char *)&v177);
              }
              sub_9AF010((__int64)&v153, (__int64)&v173, *(_QWORD *)(*(_QWORD *)(v3 + 680) + 8LL * v19) + 16LL);
              v12 = *(_QWORD *)(v3 + 680);
            }
            else
            {
              if ( SLODWORD(v163[0]) <= 0 )
              {
                sub_27B620((__int64)&v177, (__int64)v163, (__int64)v158);
                v94 = (int)v177;
                LODWORD(v177) = v173;
                LODWORD(v173) = v94;
                v95 = v178;
                v178 = v174;
                v174 = v95;
                v96 = BYTE4(v177) & 1;
                LOBYTE(v95) = BYTE4(v173) & 0xFC | BYTE4(v177) & 2;
                BYTE4(v177) = BYTE4(v173) & 1 | BYTE4(v177) & 0xFC | BYTE4(v173) & 2;
                BYTE4(v173) = v96 | v95;
                LODWORD(v95) = v179.m128i_i32[0];
                v179.m128i_i32[0] = v175;
                LODWORD(v175) = v95;
                v97 = v179.m128i_i64[1];
                v179.m128i_i64[1] = v176;
                v176 = v97;
                LOBYTE(v97) = v179.m128i_i8[4] & 1 | BYTE4(v175) & 0xFC | v179.m128i_i8[4] & 2;
                v179.m128i_i8[4] = BYTE4(v175) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v175) & 2;
                BYTE4(v175) = v97;
                sub_25A130((char *)&v177);
              }
              else
              {
                sub_27B620((__int64)&v177, (__int64)v163, (__int64)v157);
                v41 = (int)v177;
                LODWORD(v177) = v173;
                LODWORD(v173) = v41;
                v42 = v178;
                v178 = v174;
                v174 = v42;
                v43 = BYTE4(v177) & 1;
                LOBYTE(v42) = BYTE4(v173) & 0xFC | BYTE4(v177) & 2;
                BYTE4(v177) = BYTE4(v173) & 1 | BYTE4(v177) & 0xFC | BYTE4(v173) & 2;
                BYTE4(v173) = v43 | v42;
                LODWORD(v42) = v179.m128i_i32[0];
                v179.m128i_i32[0] = v175;
                LODWORD(v175) = v42;
                v44 = v179.m128i_i64[1];
                v179.m128i_i64[1] = v176;
                v176 = v44;
                LOBYTE(v44) = v179.m128i_i8[4] & 1 | BYTE4(v175) & 0xFC | v179.m128i_i8[4] & 2;
                v179.m128i_i8[4] = BYTE4(v175) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v175) & 2;
                BYTE4(v175) = v44;
                sub_25A130((char *)&v177);
                sub_1831620(qword_1C7F2C0, &v173);
              }
              sub_9AF010((__int64)&v153, (__int64)&v173, *(_QWORD *)(*(_QWORD *)(v3 + 688) + 8LL * v19) + 16LL);
              v12 = *(_QWORD *)(v3 + 688);
            }
            v13 = 1;
            if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 712LL) )
              v13 = *(_DWORD *)(v3 + 1536) != 0x7FFFFFFF;
            (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, _BOOL8))(**(_QWORD **)(v12 + 8LL * v19) + 24LL))(
              *(_QWORD *)(v12 + 8LL * v19),
              &v151,
              &v173,
              v13);
            v177 = nullptr;
            v178 = 0;
            v179 = (__m128i)1uLL;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v177, (int *)&v173);
            v14 = (unsigned int)v186;
            v180 = v19;
            v181 = 0;
            if ( (unsigned int)v186 >= HIDWORD(v186) )
            {
              v76 = 2 * HIDWORD(v186);
              v15 = (char *)sub_186B270(40LL * (unsigned int)(2 * HIDWORD(v186)));
              v14 = (unsigned int)v186;
              if ( (_DWORD)v186 )
              {
                v145 = (void *)v3;
                v77 = v15;
                v78 = 0;
                v79 = 0;
                v80 = v15;
                do
                {
                  ++v78;
                  v77 += 40;
                  v81 = (char *)ptr + v79;
                  v79 += 40;
                  v82 = v81[4];
                  *((_DWORD *)v77 - 10) = *(_DWORD *)v81;
                  *(v77 - 36) = v82 & 3 | *(v77 - 36) & 0xFC;
                  v83 = *((_QWORD *)v81 + 1);
                  *((_QWORD *)v81 + 1) = 0;
                  *((_QWORD *)v77 - 4) = v83;
                  v84 = v81[20];
                  *((_DWORD *)v77 - 6) = *((_DWORD *)v81 + 4);
                  *(v77 - 20) = v84 & 3 | *(v77 - 20) & 0xFC;
                  v85 = *((_QWORD *)v81 + 3);
                  *((_QWORD *)v81 + 3) = 0;
                  *((_QWORD *)v77 - 2) = v85;
                  *((_DWORD *)v77 - 2) = *((_DWORD *)v81 + 8);
                  *((_DWORD *)v77 - 1) = *((_DWORD *)v81 + 9);
                  sub_25A130(v81);
                  v14 = (unsigned int)v186;
                }
                while ( v78 < (unsigned int)v186 );
                v3 = (__int64)v145;
                v15 = v80;
              }
              if ( ptr && ptr != v187 )
              {
                v146 = v15;
                sub_186B220(ptr);
                v14 = (unsigned int)v186;
                v15 = v146;
              }
              ptr = v15;
              v19 = v180;
              HIDWORD(v186) = v76;
            }
            else
            {
              v15 = (char *)ptr;
            }
            v16 = &v15[40 * v14];
            *(_DWORD *)v16 = (_DWORD)v177;
            v16[4] = BYTE4(v177) & 3 | v16[4] & 0xFC;
            v17 = v178;
            v178 = 0;
            *((_QWORD *)v16 + 1) = v17;
            LODWORD(v186) = v186 + 1;
            *((_DWORD *)v16 + 4) = v179.m128i_i32[0];
            v16[20] = v179.m128i_i8[4] & 3 | v16[20] & 0xFC;
            v18 = v179.m128i_i64[1];
            v179.m128i_i64[1] = 0;
            *((_QWORD *)v16 + 3) = v18;
            LODWORD(v18) = v181;
            *((_DWORD *)v16 + 8) = v19;
            *((_DWORD *)v16 + 9) = v18;
            sub_25A130((char *)&v177);
            sub_25A130((char *)&v173);
          }
          sub_25A130((char *)v163);
        }
        v135 += 10;
      }
      while ( v143 != v135 );
    }
  }
  else
  {
    v148 = 0;
  }
  v35 = *(_QWORD *)(v3 + 24);
  v169 = 0;
  v170 = v35;
  if ( (_DWORD)v186 )
  {
    if ( (_DWORD)v186 == 1 )
    {
      v124 = *((unsigned int *)ptr + 8);
      sub_3ED4D0((__int64)qword_1C7F2C0, (int *)&v153, (__int64)ptr, (__int64)&v153);
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 656) + 4 * v124 + 3) & 0x40) != 0
        && ((v155 & 0x100000000LL) != 0 || (_DWORD)v155 != 1) )
      {
        if ( *(int *)ptr <= 0 )
          sub_992C20((__int64)&v177, (__int64)&v153);
        else
          sub_992CA0((__int64)&v177, (__int64)&v153);
        v125 = (int)v177;
        LODWORD(v177) = v153;
        LODWORD(v153) = v125;
        v126 = v178;
        v178 = v154;
        v154 = v126;
        v127 = BYTE4(v177) & 1;
        LOBYTE(v126) = BYTE4(v153) & 0xFC | BYTE4(v177) & 2;
        BYTE4(v177) = BYTE4(v153) & 1 | BYTE4(v177) & 0xFC | BYTE4(v153) & 2;
        BYTE4(v153) = v127 | v126;
        LODWORD(v126) = v179.m128i_i32[0];
        v179.m128i_i32[0] = v155;
        LODWORD(v155) = v126;
        v128 = v179.m128i_i64[1];
        v179.m128i_i64[1] = v156;
        v156 = v128;
        LOBYTE(v128) = v179.m128i_i8[4] & 1 | BYTE4(v155) & 0xFC | v179.m128i_i8[4] & 2;
        v179.m128i_i8[4] = BYTE4(v155) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v155) & 2;
        BYTE4(v155) = v128;
        sub_25A130((char *)&v177);
      }
      LODWORD(v177) = 0;
      BYTE4(v177) &= 0xFCu;
      v179.m128i_i8[4] &= 0xFCu;
      v178 = 0;
      v179.m128i_i32[0] = 1;
      v179.m128i_i64[1] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v177, (int *)&v153);
      sub_27B900(v3 + 408, (int)&v177, (*(_BYTE *)(*(_QWORD *)(v3 + 656) + 4 * v124 + 3) & 0x40) != 0, v129, v130, v131);
      v132 = sub_15E1B70(*(_QWORD *)(v3 + 408));
      v133 = v132;
      if ( v132 )
        ++*(_DWORD *)(v132 + 8);
      sub_98B270(v169, v170);
      v169 = v133;
      sub_25A130((char *)&v177);
    }
    else
    {
      if ( v148 )
      {
        sub_992B90((__int64)&v173, (__int64)&v153);
        sub_992D20((__int64)&v177, (__int64)&v159, (__int64)&v173);
        v98 = (int)v177;
        LODWORD(v177) = v159;
        LODWORD(v159) = v98;
        v99 = v178;
        v178 = v160;
        v160 = v99;
        v100 = BYTE4(v177) & 1;
        LOBYTE(v99) = BYTE4(v159) & 0xFC | BYTE4(v177) & 2;
        BYTE4(v177) = BYTE4(v159) & 1 | BYTE4(v177) & 0xFC | BYTE4(v159) & 2;
        BYTE4(v159) = v100 | v99;
        LODWORD(v99) = v179.m128i_i32[0];
        v179.m128i_i32[0] = v161;
        LODWORD(v161) = v99;
        v101 = v179.m128i_i64[1];
        v179.m128i_i64[1] = v162;
        v162 = v101;
        LOBYTE(v101) = v179.m128i_i8[4] & 1 | BYTE4(v161) & 0xFC | v179.m128i_i8[4] & 2;
        v179.m128i_i8[4] = BYTE4(v161) & 1 | v179.m128i_i8[4] & 0xFC | BYTE4(v161) & 2;
        BYTE4(v161) = v101;
        sub_25A130((char *)&v177);
        sub_25A130((char *)&v173);
        if ( (v159 & 0x100000000LL) != 0 || (_DWORD)v159 != 1 || (v161 & 0x100000000LL) != 0 || (_DWORD)v161 != 1 )
        {
          if ( (_DWORD)v186 )
          {
            v102 = 0;
            v103 = 40LL * (unsigned int)v186;
            do
            {
              sub_9AF730((__int64)qword_1C7F2C0, (__int64)ptr + v102, (__int64)&v159, (__int64)ptr + v102);
              v102 += 40;
            }
            while ( v103 != v102 );
          }
          sub_9AF730((__int64)qword_1C7F2C0, (__int64)&v153, (__int64)&v159, (__int64)&v153);
        }
      }
      LODWORD(v177) = 0;
      BYTE4(v177) &= 0xFCu;
      v179.m128i_i8[4] &= 0xFCu;
      v178 = 0;
      v179.m128i_i32[0] = 1;
      v179.m128i_i64[1] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v177, (int *)&v153);
      sub_9D04A0((_QWORD *)v3, v186, (int *)ptr, (int)&v177, &v169);
      sub_25A130((char *)&v177);
    }
    v45 = *(_QWORD *)(v3 + 16);
    v178 = 0;
    v46 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C56538), (__m128i)(unsigned __int64)sub_991370);
    v136 = v45;
    v177 = &v169;
    v165 = 0;
    v179 = v46;
    sub_9935A0(&v165, v3, (__int64)&v177);
    v47 = v165;
    sub_B6F780(v45);
    if ( *(_QWORD *)(v47 + 912) )
      std::operator<<<std::char_traits<char>>();
    if ( v179.m128i_i64[0] )
      ((void (__fastcall *)(__int64 **, __int64 **, __int64))v179.m128i_i64[0])(&v177, &v177, 3);
    v48 = v169;
    v140 = sub_B645B0(v45, v169);
    if ( (unsigned int)sub_180B130(v45) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)v46.m128i_i64) )
      {
        sub_186A4C0(*(double *)v46.m128i_i64);
        v49 = sub_180B150(v45, v48);
        std::__ostream_insert<char,std::char_traits<char>>();
        v50 = sub_160EBE0(v49, &v169);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v50, "\n");
      }
      else
      {
        v112 = sub_180B150(v45, v48);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_160EBE0(v112, &v169);
        std::operator<<<std::char_traits<char>>();
      }
    }
    sub_9936C0(v45, v140 >> 1);
    v51 = *(_QWORD *)(*(_QWORD *)v152 + 8LL);
    if ( v51 )
      v144 = *(_DWORD *)(v51 - 4);
    else
      v144 = 0;
    v52 = **(_QWORD **)v152;
    if ( **(_QWORD **)v152 )
      v138 = *(_DWORD *)(v52 - 4);
    else
      v138 = 0;
    v53 = *(_DWORD *)(v3 + 8);
    v54 = sub_A039B0(*(__int64 **)v152, (__int64)"gomory-cut");
    v55 = (unsigned int)sub_9986B0(*(__int64 *)v152);
    sub_B72D60(&v177, v136, v138, v52, v144, v51);
    v182 = v53;
    v177 = qword_1C6E7C8;
    v183 = nullptr;
    if ( (_DWORD)v55 )
    {
      v56 = (_QWORD *)sub_186B270(0x28u);
      *v56 = 2;
      v57 = v54;
      v58 = v56 + 1;
      v59 = 16 * v55 + v54;
      v183 = (const __m128i *)(v56 + 1);
LABEL_68:
      sub_15D0E50(v58, v54);
      while ( 1 )
      {
        v60 = (__int64)v183;
        v57 += 16;
        v61 = (unsigned int)(v183[-1].m128i_i32[3] + 1);
        v183[-1].m128i_i32[3] = v61;
        if ( v59 == v57 )
          break;
        v62 = *(_DWORD *)(v60 - 8);
        v54 = v57;
        if ( v62 == (_DWORD)v61 )
        {
          v63 = (3 * v62 + 1) >> 1;
          v64 = 16 * v63 + 8;
          if ( 16 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(&v173, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v173);
            sub_233E40((__int64)&v173);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = sub_186B270(v64);
          v66 = v183;
          v67 = v65 + 8;
          if ( v183 )
          {
            v68 = v183[-1].m128i_u32[3];
            v69 = (__m128i *)(v65 + 8);
            *(_DWORD *)(v65 + 4) = v68;
            for ( i = &v66[v68]; i != v66; ++v69 )
            {
              v71 = v66->m128i_i8[8] == 0;
              *v69 = _mm_loadu_si128(v66);
              v66->m128i_i32[0] = 0;
              if ( !v71 )
                v66->m128i_i8[8] = 0;
              ++v66;
            }
          }
          else
          {
            *(_DWORD *)(v65 + 4) = 0;
          }
          v139 = (_DWORD *)v65;
          sub_4EB210((__int64 *)&v183);
          v183 = (const __m128i *)v67;
          v72 = (unsigned int)v139[1];
          *v139 = v63;
          v58 = (_QWORD *)(v67 + 16 * v72);
          goto LABEL_68;
        }
        sub_15D0E50(16 * v61 + v60, v57);
      }
    }
    v177 = (__int64 *)&off_1C57938;
    v184 = v140;
    sub_B733F0(&v177, v136);
    v177 = (__int64 *)&off_1C70960;
    v73 = sub_180C100(v136 + 8400, 64);
    sub_9E82F0(v73, (__int64)&v177);
    v74 = v184;
    *(_QWORD *)v73 = &off_1C70960;
    *(_DWORD *)(v73 + 56) = v74;
    v75 = *(_QWORD *)(v73 + 48);
    v173 = v73;
    if ( v75 && *(_DWORD *)(v75 - 4) )
      sub_98C690((_QWORD *)(v136 + 8600), &v173);
    v177 = qword_1C6E7C8;
    sub_4EB210((__int64 *)&v183);
    if ( v140 == dword_1C7ECA0 )
    {
      sub_B68F30(v136, 0);
    }
    else
    {
      v177 = (__int64 *)(v73 | 3);
      sub_993680(v136, v140, (__int64 *)&v177, 0);
    }
  }
  else
  {
    if ( !**(_QWORD **)v152 || !*(_DWORD *)(**(_QWORD **)v152 - 4LL) )
    {
      v36 = *(_QWORD *)(*(_QWORD *)v152 + 8LL);
      if ( !v36 )
      {
        v147 = 0;
        goto LABEL_39;
      }
      if ( !*(_DWORD *)(v36 - 4) )
      {
        v147 = 0;
        v36 = 0;
        goto LABEL_39;
      }
    }
    sub_A1A0B0(v3, (__int64)&v151, (__int64)&v151, (__int64)"gomory-cut", a3);
  }
  v36 = v169;
  v35 = v170;
LABEL_39:
  sub_98B270(v36, v35);
  sub_25A130((char *)&v159);
  sub_25A130(v158);
  sub_25A130(v157);
  v37 = (char *)ptr;
  v38 = (char *)ptr + 40 * (unsigned int)v186;
  if ( ptr != v38 )
  {
    do
    {
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v37);
      v40 = v37 + 16;
      v37 += 40;
      sub_182CBA0(v39, v40);
    }
    while ( v38 != v37 );
    v38 = (char *)ptr;
  }
  if ( v38 && v38 != v187 )
    sub_186B220(v38);
  sub_25A130((char *)&v153);
  --*(_DWORD *)(v151 + 1224);
  return v147;
}

