__int64 __fastcall sub_B25790(__int64 a1)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  _UNKNOWN **v9; // r13
  unsigned int v10; // eax
  const __m128i *v11; // rdx
  unsigned __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  char **v15; // rax
  __m128i *v16; // rax
  unsigned int v17; // ebp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // r15
  char v24; // r10
  __int32 v25; // r8d
  __m128i *v26; // r13
  char *v27; // rax
  __int64 v28; // r12
  __int64 v29; // rbp
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int8 *v32; // r11
  const __m128i *v33; // r9
  unsigned __int64 v34; // rdx
  __m128i *v35; // rcx
  const __m128i *v36; // rax
  __int8 *v37; // r12
  __int64 v38; // rdx
  __int8 *v39; // r9
  unsigned __int64 v40; // rbp
  __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  __int64 v43; // rdx
  __m128i v44; // xmm1
  __int32 v45; // ebp
  unsigned __int8 *v47; // rax
  _BOOL8 v48; // rcx
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int8 *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  unsigned __int8 *v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // rax
  unsigned __int8 *v58; // r13
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // r13
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  void *v67; // rdi
  void **v68; // rbp
  unsigned __int64 v69; // rax
  void **v70; // r13
  void **v71; // r12
  void **v72; // rdi
  void **v73; // rdi
  void **v74; // r13
  void **v75; // r12
  __m128i *v76; // r12
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  const __m128i *v79; // rbp
  unsigned __int64 v80; // rdx
  __m128i *v81; // rax
  const __m128i *v82; // rbp
  __int64 v83; // rdx
  __m128i *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rsi
  __m128i v87; // xmm0
  __int64 v88; // rsi
  char *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // r11
  const __m128i *v94; // rcx
  __int32 v95; // esi
  __m128i v96; // xmm0
  __int64 v97; // rcx
  unsigned __int64 v98; // rdx
  signed __int64 v99; // rbp
  __int64 v100; // rdx
  unsigned __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // r15
  __int64 v108; // rbx
  void *v109; // rdi
  unsigned __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rbx
  void *v117; // rdi
  unsigned __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // r15
  unsigned int *v125; // r14
  unsigned int v126; // r13d
  unsigned int v127; // r12d
  __int64 v128; // rbx
  __int64 v129; // rbp
  void *v130; // rdi
  unsigned __int64 v131; // rcx
  int v132; // eax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // r14
  __int64 v138; // rbx
  void *v139; // rdi
  unsigned __int64 v140; // rdx
  int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rdx
  unsigned __int8 *v146; // r15
  __int64 v147; // rbx
  void *v148; // rdi
  __int64 v149; // rax
  __int8 *v150; // rdi
  __int8 *v151; // rsi
  __int8 *v152; // rbp
  __int64 v153; // rax
  __int64 v154; // rcx
  unsigned __int64 v155; // rdi
  unsigned __int64 v156; // rdx
  __int8 *v157; // rsi
  __int64 v158; // rdx
  __int64 v159; // rsi
  __int64 v160; // rdx
  __int64 v161; // [rsp+0h] [rbp-2A8h]
  unsigned __int64 v162; // [rsp+8h] [rbp-2A0h]
  int v163; // [rsp+8h] [rbp-2A0h]
  __int64 v164; // [rsp+8h] [rbp-2A0h]
  __int64 v165; // [rsp+8h] [rbp-2A0h]
  int v166; // [rsp+8h] [rbp-2A0h]
  int v167; // [rsp+8h] [rbp-2A0h]
  __int8 *v168; // [rsp+8h] [rbp-2A0h]
  int v169; // [rsp+8h] [rbp-2A0h]
  unsigned int v170; // [rsp+10h] [rbp-298h]
  const __m128i *v171; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v172; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v173; // [rsp+10h] [rbp-298h]
  __int64 v174; // [rsp+10h] [rbp-298h]
  int v175; // [rsp+10h] [rbp-298h]
  int v176; // [rsp+18h] [rbp-290h]
  char v177; // [rsp+18h] [rbp-290h]
  int v178; // [rsp+18h] [rbp-290h]
  char *v179; // [rsp+18h] [rbp-290h]
  __int32 v180; // [rsp+20h] [rbp-288h]
  __int32 v181; // [rsp+24h] [rbp-284h]
  __int8 *v182; // [rsp+28h] [rbp-280h]
  __int64 v183; // [rsp+28h] [rbp-280h]
  char *v184; // [rsp+28h] [rbp-280h]
  char v185; // [rsp+28h] [rbp-280h]
  __int64 v186; // [rsp+28h] [rbp-280h]
  unsigned __int8 *v187; // [rsp+30h] [rbp-278h]
  char v188; // [rsp+30h] [rbp-278h]
  unsigned __int8 *v189; // [rsp+30h] [rbp-278h]
  __int64 v190; // [rsp+38h] [rbp-270h]
  int v191; // [rsp+4Ch] [rbp-25Ch]
  void *v192; // [rsp+50h] [rbp-258h] BYREF
  unsigned __int64 v193; // [rsp+58h] [rbp-250h]
  __int64 v194; // [rsp+60h] [rbp-248h]
  void *v195; // [rsp+70h] [rbp-238h]
  _BYTE v196[16]; // [rsp+80h] [rbp-228h] BYREF
  __int16 v197; // [rsp+90h] [rbp-218h]
  char **v198; // [rsp+A0h] [rbp-208h] BYREF
  __m128i *v199; // [rsp+A8h] [rbp-200h]
  char v200; // [rsp+B0h] [rbp-1F8h]
  void *ptr; // [rsp+B8h] [rbp-1F0h] BYREF
  __int64 v202; // [rsp+C0h] [rbp-1E8h]
  _BYTE v203[384]; // [rsp+C8h] [rbp-1E0h] BYREF
  __int64 v204; // [rsp+248h] [rbp-60h]
  unsigned __int64 v205; // [rsp+250h] [rbp-58h]
  __int64 v206; // [rsp+258h] [rbp-50h]
  __int64 v207; // [rsp+260h] [rbp-48h]

  v2 = sub_B1A550(*(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 56));
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 60);
  v9 = v2;
  v176 = *(_DWORD *)(a1 + 52);
  v170 = *(_DWORD *)(a1 + 56);
  v10 = *(_DWORD *)(a1 + 80);
  if ( v10 )
  {
    v11 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v10 - 24);
    v12 = v11->m128i_u32[1];
    v13 = _mm_loadu_si128(v11);
    v14 = v11[1].m128i_i64[0];
    *(_DWORD *)(a1 + 80) = v10 - 1;
    *(__m128i *)(a1 + 48) = v13;
    *(_QWORD *)(a1 + 64) = v14;
  }
  else
  {
    sub_B1F6B0(*(_QWORD *)a1, a1 + 48, v3, v4, v5, (_BYTE *)v6, v161);
    v12 = *(unsigned int *)(a1 + 52);
  }
  v15 = *(char ***)(a1 + 16);
  v199 = (__m128i *)a1;
  v200 = 0;
  v198 = v15;
  v16 = (__m128i *)v203;
  ptr = v203;
  v202 = 0x1000000000LL;
  v207 = 0;
  if ( (_DWORD)v12 != 1 )
  {
    if ( (_DWORD)v12 != 2 )
    {
      v200 = 1;
      goto LABEL_6;
    }
    v82 = (const __m128i *)(a1 + 48);
    goto LABEL_56;
  }
  v91 = *(unsigned int *)(a1 + 80);
  v92 = *(_DWORD *)(a1 + 48);
  v82 = (const __m128i *)(a1 + 48);
  v93 = *(_QWORD *)(a1 + 64);
  v5 = *(unsigned __int8 **)(a1 + 56);
  if ( (_DWORD)v91 )
  {
    v6 = a1;
    v94 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v91 - 24);
    v95 = v94->m128i_i32[1];
    v96 = _mm_loadu_si128(v94);
    v97 = v94[1].m128i_i64[0];
    *(_DWORD *)(a1 + 80) = v91 - 1;
    *(__m128i *)(a1 + 48) = v96;
    *(_QWORD *)(a1 + 64) = v97;
  }
  else
  {
    v187 = *(unsigned __int8 **)(a1 + 56);
    v183 = *(_QWORD *)(a1 + 64);
    v167 = *(_DWORD *)(a1 + 48);
    sub_B1F6B0(*(_QWORD *)a1, a1 + 48, v91, v12, v5, (_BYTE *)v6, v161);
    v92 = v167;
    v93 = v183;
    v6 = (__int64)v199;
    v5 = v187;
    v95 = v199[3].m128i_i32[1];
    v82 = v199 + 3;
  }
  if ( v95 == 2 )
  {
    v98 = (unsigned int)v202 + 1LL;
    v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v202);
    if ( v98 > HIDWORD(v202) )
    {
      if ( ptr > v82 || v16 <= v82 )
      {
        sub_22134E0(&ptr, v203, v98, 24);
        v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v202);
      }
      else
      {
        v99 = (char *)v82 - (_BYTE *)ptr;
        sub_22134E0(&ptr, v203, v98, 24);
        v82 = (const __m128i *)((char *)ptr + v99);
        v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v202);
      }
    }
LABEL_56:
    *v16 = _mm_loadu_si128(v82);
    v16[1].m128i_i64[0] = v82[1].m128i_i64[0];
    v83 = (unsigned int)(v202 + 1);
    v84 = v199;
    LODWORD(v202) = v202 + 1;
    v85 = v199[5].m128i_u32[0];
    if ( (_DWORD)v85 )
    {
      v86 = (unsigned int)v85;
      v12 = (unsigned int)(v85 - 1);
      v87 = _mm_loadu_si128((const __m128i *)(v199[4].m128i_i64[1] + 24 * v86 - 24));
      v88 = *(_QWORD *)(v199[4].m128i_i64[1] + 24 * v86 - 24 + 16);
      v199[5].m128i_i32[0] = v12;
      v84[4].m128i_i64[0] = v88;
      v84[3] = v87;
    }
    else
    {
      sub_B1F6B0(v199->m128i_i64[0], (__int64)v199[3].m128i_i64, v83, v85, v5, (_BYTE *)v6, v161);
      LODWORD(v83) = v202;
    }
    if ( (_DWORD)v83 == 1 )
    {
      v89 = (char *)ptr + 24 * HIDWORD(v207);
      v204 = *((_QWORD *)v89 + 2);
      v90 = *((unsigned int *)v89 + 2);
      v206 = v204;
      v12 = v204 + v90;
      v205 = v12;
      LODWORD(v207) = *(_DWORD *)v89;
    }
    goto LABEL_6;
  }
  v154 = *(unsigned int *)(v6 + 80);
  v155 = *(_QWORD *)(v6 + 72);
  v156 = v154 + 1;
  v12 = v155 + 24 * v154;
  if ( v156 > *(unsigned int *)(v6 + 84) )
  {
    v159 = v6 + 88;
    v190 = v6;
    v189 = v5;
    v186 = v93;
    v169 = v92;
    if ( v155 > (unsigned __int64)v82 || v12 <= (unsigned __int64)v82 )
    {
      sub_22134E0(v6 + 72, v159, v156, 24);
      v6 = v190;
      v92 = v169;
      v93 = v186;
      v5 = v189;
      v12 = *(_QWORD *)(v190 + 72) + 24LL * *(unsigned int *)(v190 + 80);
    }
    else
    {
      sub_22134E0(v6 + 72, v159, v156, 24);
      v6 = v190;
      v5 = v189;
      v93 = v186;
      v92 = v169;
      v160 = *(_QWORD *)(v190 + 72);
      v82 = (const __m128i *)((char *)v82 + v160 - v155);
      v12 = v160 + 24LL * *(unsigned int *)(v190 + 80);
    }
  }
  *(__m128i *)v12 = _mm_loadu_si128(v82);
  *(_QWORD *)(v12 + 16) = v82[1].m128i_i64[0];
  *(_DWORD *)(v6 + 48) = v92;
  ++*(_DWORD *)(v6 + 80);
  *(_DWORD *)(v6 + 52) = 1;
  *(_QWORD *)(v6 + 56) = v5;
  *(_QWORD *)(v6 + 64) = v93;
  v200 = 1;
LABEL_6:
  v17 = v7;
  v19 = sub_B24C40(a1, &v198, *((_BYTE *)v9 + 18) >> 4, v12, (__int64)v5, v6);
  if ( v8 > 1 )
    v17 = v8 + v7 - 1;
  v162 = v18;
  v20 = sub_B30DE0(*(_QWORD *)(a1 + 8), v7, v17, v170, v19, v18);
  if ( *((_BYTE *)v9 + 18) >> 4 <= v162 )
    goto LABEL_9;
  sub_FA3370(&v192, *(_QWORD *)(a1 + 32), v17 + 1, 2643);
  v47 = (unsigned __int8 *)v192;
  v48 = v176 == 5;
  if ( !v192 )
  {
    v110 = v193;
    v111 = *(_DWORD *)(v193 + 14976);
    if ( v111 )
    {
      v112 = (unsigned int)(v111 - 1);
      *(_DWORD *)(v193 + 14976) = v112;
      v47 = *(unsigned __int8 **)(v110 + 8 * v112 + 14848);
      v113 = *((unsigned int *)v47 + 134);
      *v47 = 0;
      v114 = *((_QWORD *)v47 + 66);
      *((_DWORD *)v47 + 106) = 0;
      v115 = v114 + (v113 << 6);
      if ( v114 != v115 )
      {
        v116 = v115;
        do
        {
          while ( 1 )
          {
            v116 -= 64;
            v117 = *(void **)(v116 + 24);
            if ( v117 == (void *)(v116 + 40) )
              break;
            v173 = v47;
            operator delete(v117);
            v47 = v173;
            if ( v114 == v116 )
              goto LABEL_87;
          }
        }
        while ( v114 != v116 );
LABEL_87:
        v48 = v176 == 5;
      }
      *((_DWORD *)v47 + 134) = 0;
    }
    else
    {
      v47 = (unsigned __int8 *)operator new(0x3A0u);
      *v47 = 0;
      *((_QWORD *)v47 + 12) = v47 + 112;
      *((_QWORD *)v47 + 16) = v47 + 144;
      *((_QWORD *)v47 + 20) = v47 + 176;
      *((_QWORD *)v47 + 24) = v47 + 208;
      *((_QWORD *)v47 + 28) = v47 + 240;
      *((_QWORD *)v47 + 32) = v47 + 272;
      *((_QWORD *)v47 + 36) = v47 + 304;
      *((_QWORD *)v47 + 40) = v47 + 336;
      *((_QWORD *)v47 + 44) = v47 + 368;
      *((_QWORD *)v47 + 48) = v47 + 400;
      *((_QWORD *)v47 + 52) = v47 + 432;
      *((_QWORD *)v47 + 13) = 0;
      v47[112] = 0;
      *((_QWORD *)v47 + 17) = 0;
      v47[144] = 0;
      *((_QWORD *)v47 + 21) = 0;
      v47[176] = 0;
      *((_QWORD *)v47 + 25) = 0;
      v47[208] = 0;
      *((_QWORD *)v47 + 29) = 0;
      v47[240] = 0;
      *((_QWORD *)v47 + 33) = 0;
      v47[272] = 0;
      *((_QWORD *)v47 + 37) = 0;
      v47[304] = 0;
      *((_QWORD *)v47 + 41) = 0;
      v47[336] = 0;
      *((_QWORD *)v47 + 45) = 0;
      v47[368] = 0;
      *((_QWORD *)v47 + 49) = 0;
      v47[400] = 0;
      *((_QWORD *)v47 + 53) = 0x800000000LL;
      v48 = v176 == 5;
      *((_QWORD *)v47 + 66) = v47 + 544;
      *((_QWORD *)v47 + 67) = 0x600000000LL;
    }
    v192 = v47;
  }
  v47[*v47 + 1] = 2;
  v49 = v192;
  v50 = *(unsigned __int8 *)v192;
  *(_BYTE *)v192 = v50 + 1;
  v49[v50 + 2] = v48;
  v51 = (unsigned __int8 *)v192;
  v52 = (__int64)*v9;
  if ( !v192 )
  {
    v101 = v193;
    v102 = *(_DWORD *)(v193 + 14976);
    if ( v102 )
    {
      v103 = (unsigned int)(v102 - 1);
      *(_DWORD *)(v193 + 14976) = v103;
      v51 = *(unsigned __int8 **)(v101 + 8 * v103 + 14848);
      v104 = *((unsigned int *)v51 + 134);
      *v51 = 0;
      v105 = *((_QWORD *)v51 + 66);
      *((_DWORD *)v51 + 106) = 0;
      v106 = v105 + (v104 << 6);
      if ( v105 != v106 )
      {
        v107 = v52;
        v108 = v106;
        do
        {
          while ( 1 )
          {
            v108 -= 64;
            v109 = *(void **)(v108 + 24);
            if ( v109 == (void *)(v108 + 40) )
              break;
            v172 = v51;
            operator delete(v109);
            v51 = v172;
            if ( v105 == v108 )
              goto LABEL_80;
          }
        }
        while ( v105 != v108 );
LABEL_80:
        v52 = v107;
      }
      *((_DWORD *)v51 + 134) = 0;
    }
    else
    {
      v174 = (__int64)*v9;
      v51 = (unsigned __int8 *)operator new(0x3A0u);
      *v51 = 0;
      *((_QWORD *)v51 + 12) = v51 + 112;
      *((_QWORD *)v51 + 16) = v51 + 144;
      *((_QWORD *)v51 + 20) = v51 + 176;
      *((_QWORD *)v51 + 24) = v51 + 208;
      *((_QWORD *)v51 + 28) = v51 + 240;
      *((_QWORD *)v51 + 32) = v51 + 272;
      *((_QWORD *)v51 + 36) = v51 + 304;
      *((_QWORD *)v51 + 40) = v51 + 336;
      *((_QWORD *)v51 + 44) = v51 + 368;
      *((_QWORD *)v51 + 48) = v51 + 400;
      *((_QWORD *)v51 + 52) = v51 + 432;
      *((_QWORD *)v51 + 13) = 0;
      v51[112] = 0;
      *((_QWORD *)v51 + 17) = 0;
      v51[144] = 0;
      *((_QWORD *)v51 + 21) = 0;
      v51[176] = 0;
      *((_QWORD *)v51 + 25) = 0;
      v51[208] = 0;
      *((_QWORD *)v51 + 29) = 0;
      v51[240] = 0;
      *((_QWORD *)v51 + 33) = 0;
      v51[272] = 0;
      *((_QWORD *)v51 + 37) = 0;
      v51[304] = 0;
      *((_QWORD *)v51 + 41) = 0;
      v51[336] = 0;
      *((_QWORD *)v51 + 45) = 0;
      v51[368] = 0;
      *((_QWORD *)v51 + 49) = 0;
      v51[400] = 0;
      *((_QWORD *)v51 + 53) = 0x800000000LL;
      v52 = v174;
      *((_QWORD *)v51 + 66) = v51 + 544;
      *((_QWORD *)v51 + 67) = 0x600000000LL;
    }
    v192 = v51;
  }
  v51[*v51 + 1] = 1;
  v53 = v192;
  v54 = *(unsigned __int8 *)v192;
  *(_BYTE *)v192 = v54 + 1;
  v53[v54 + 2] = v52;
  v55 = (unsigned __int8 *)v192;
  if ( !v192 )
  {
    v140 = v193;
    v141 = *(_DWORD *)(v193 + 14976);
    if ( v141 )
    {
      v142 = (unsigned int)(v141 - 1);
      *(_DWORD *)(v193 + 14976) = v142;
      v55 = *(unsigned __int8 **)(v140 + 8 * v142 + 14848);
      v143 = *((unsigned int *)v55 + 134);
      *v55 = 0;
      v144 = *((_QWORD *)v55 + 66);
      *((_DWORD *)v55 + 106) = 0;
      v145 = v144 + (v143 << 6);
      if ( v144 != v145 )
      {
        v146 = v55;
        v147 = v145;
        do
        {
          while ( 1 )
          {
            v147 -= 64;
            v148 = *(void **)(v147 + 24);
            if ( v148 == (void *)(v147 + 40) )
              break;
            operator delete(v148);
            if ( v144 == v147 )
              goto LABEL_108;
          }
        }
        while ( v144 != v147 );
LABEL_108:
        v55 = v146;
      }
      *((_DWORD *)v55 + 134) = 0;
    }
    else
    {
      v55 = (unsigned __int8 *)operator new(0x3A0u);
      *v55 = 0;
      *((_QWORD *)v55 + 12) = v55 + 112;
      *((_QWORD *)v55 + 16) = v55 + 144;
      *((_QWORD *)v55 + 20) = v55 + 176;
      *((_QWORD *)v55 + 24) = v55 + 208;
      *((_QWORD *)v55 + 28) = v55 + 240;
      *((_QWORD *)v55 + 32) = v55 + 272;
      *((_QWORD *)v55 + 36) = v55 + 304;
      *((_QWORD *)v55 + 40) = v55 + 336;
      *((_QWORD *)v55 + 44) = v55 + 368;
      *((_QWORD *)v55 + 48) = v55 + 400;
      *((_QWORD *)v55 + 52) = v55 + 432;
      *((_QWORD *)v55 + 13) = 0;
      v55[112] = 0;
      *((_QWORD *)v55 + 17) = 0;
      v55[144] = 0;
      *((_QWORD *)v55 + 21) = 0;
      v55[176] = 0;
      *((_QWORD *)v55 + 25) = 0;
      v55[208] = 0;
      *((_QWORD *)v55 + 29) = 0;
      v55[240] = 0;
      *((_QWORD *)v55 + 33) = 0;
      v55[272] = 0;
      *((_QWORD *)v55 + 37) = 0;
      v55[304] = 0;
      *((_QWORD *)v55 + 41) = 0;
      v55[336] = 0;
      *((_QWORD *)v55 + 45) = 0;
      v55[368] = 0;
      *((_QWORD *)v55 + 49) = 0;
      v55[400] = 0;
      *((_QWORD *)v55 + 53) = 0x800000000LL;
      *((_QWORD *)v55 + 66) = v55 + 544;
      *((_QWORD *)v55 + 67) = 0x600000000LL;
    }
    v192 = v55;
  }
  v55[*v55 + 1] = 3;
  v56 = v192;
  v57 = *(unsigned __int8 *)v192;
  *(_BYTE *)v192 = v57 + 1;
  v56[v57 + 2] = v162;
  LOBYTE(v56) = *((_BYTE *)v9 + 18);
  v58 = (unsigned __int8 *)v192;
  v59 = (unsigned __int8)v56 >> 4;
  if ( !v192 )
  {
    v131 = v193;
    v132 = *(_DWORD *)(v193 + 14976);
    if ( v132 )
    {
      v133 = (unsigned int)(v132 - 1);
      *(_DWORD *)(v193 + 14976) = v133;
      v58 = *(unsigned __int8 **)(v131 + 8 * v133 + 14848);
      v134 = *((unsigned int *)v58 + 134);
      *v58 = 0;
      v135 = *((_QWORD *)v58 + 66);
      *((_DWORD *)v58 + 106) = 0;
      v136 = v135 + (v134 << 6);
      if ( v135 != v136 )
      {
        v164 = v20;
        v137 = v59;
        v138 = v136;
        do
        {
          while ( 1 )
          {
            v138 -= 64;
            v139 = *(void **)(v138 + 24);
            if ( v139 == (void *)(v138 + 40) )
              break;
            operator delete(v139);
            if ( v135 == v138 )
              goto LABEL_101;
          }
        }
        while ( v135 != v138 );
LABEL_101:
        v59 = v137;
        v20 = v164;
      }
      *((_DWORD *)v58 + 134) = 0;
    }
    else
    {
      v165 = v59;
      v58 = (unsigned __int8 *)operator new(0x3A0u);
      *v58 = 0;
      *((_QWORD *)v58 + 12) = v58 + 112;
      *((_QWORD *)v58 + 16) = v58 + 144;
      *((_QWORD *)v58 + 20) = v58 + 176;
      *((_QWORD *)v58 + 24) = v58 + 208;
      *((_QWORD *)v58 + 28) = v58 + 240;
      *((_QWORD *)v58 + 32) = v58 + 272;
      *((_QWORD *)v58 + 36) = v58 + 304;
      *((_QWORD *)v58 + 40) = v58 + 336;
      *((_QWORD *)v58 + 44) = v58 + 368;
      *((_QWORD *)v58 + 48) = v58 + 400;
      *((_QWORD *)v58 + 52) = v58 + 432;
      *((_QWORD *)v58 + 13) = 0;
      v58[112] = 0;
      *((_QWORD *)v58 + 17) = 0;
      v58[144] = 0;
      *((_QWORD *)v58 + 21) = 0;
      v58[176] = 0;
      *((_QWORD *)v58 + 25) = 0;
      v58[208] = 0;
      *((_QWORD *)v58 + 29) = 0;
      v58[240] = 0;
      *((_QWORD *)v58 + 33) = 0;
      v58[272] = 0;
      *((_QWORD *)v58 + 37) = 0;
      v58[304] = 0;
      *((_QWORD *)v58 + 41) = 0;
      v58[336] = 0;
      *((_QWORD *)v58 + 45) = 0;
      v58[368] = 0;
      *((_QWORD *)v58 + 49) = 0;
      v58[400] = 0;
      *((_QWORD *)v58 + 53) = 0x800000000LL;
      v59 = v165;
      *((_QWORD *)v58 + 66) = v58 + 544;
      *((_QWORD *)v58 + 67) = 0x600000000LL;
    }
    v192 = v58;
  }
  v58[*v58 + 1] = 3;
  v60 = v192;
  v61 = *(unsigned __int8 *)v192;
  *(_BYTE *)v192 = v61 + 1;
  v62 = v192;
  v60[v61 + 2] = v59;
  if ( v62 )
  {
    v63 = *((unsigned int *)v62 + 106);
    v64 = *((unsigned int *)v62 + 107);
    v65 = v63 + 1;
  }
  else
  {
    v118 = v193;
    v119 = *(_DWORD *)(v193 + 14976);
    if ( v119 )
    {
      v120 = (unsigned int)(v119 - 1);
      *(_DWORD *)(v193 + 14976) = v120;
      v62 = *(_QWORD **)(v118 + 8 * v120 + 14848);
      v121 = *((unsigned int *)v62 + 134);
      *(_BYTE *)v62 = 0;
      v122 = v62[66];
      *((_DWORD *)v62 + 106) = 0;
      v123 = v122 + (v121 << 6);
      if ( v122 == v123 )
      {
        v65 = 1;
        v63 = 0;
      }
      else
      {
        v124 = v20;
        v125 = (unsigned int *)v62;
        v126 = v7;
        v127 = v17;
        v128 = v123;
        v129 = v122;
        do
        {
          while ( 1 )
          {
            v128 -= 64;
            v130 = *(void **)(v128 + 24);
            if ( v130 == (void *)(v128 + 40) )
              break;
            operator delete(v130);
            if ( v129 == v128 )
              goto LABEL_94;
          }
        }
        while ( v129 != v128 );
LABEL_94:
        v17 = v127;
        v7 = v126;
        v62 = v125;
        v63 = v125[106];
        v20 = v124;
        v65 = v63 + 1;
      }
      *((_DWORD *)v62 + 134) = 0;
      v64 = *((unsigned int *)v62 + 107);
    }
    else
    {
      v149 = operator new(0x3A0u);
      v64 = 8;
      v65 = 1;
      v62 = (_QWORD *)v149;
      *(_BYTE *)v149 = 0;
      *(_QWORD *)(v149 + 96) = v149 + 112;
      *(_QWORD *)(v149 + 128) = v149 + 144;
      *(_QWORD *)(v149 + 160) = v149 + 176;
      *(_QWORD *)(v149 + 192) = v149 + 208;
      *(_QWORD *)(v149 + 224) = v149 + 240;
      *(_QWORD *)(v149 + 256) = v149 + 272;
      *(_QWORD *)(v149 + 288) = v149 + 304;
      *(_QWORD *)(v149 + 320) = v149 + 336;
      *(_QWORD *)(v149 + 352) = v149 + 368;
      *(_QWORD *)(v149 + 384) = v149 + 400;
      *(_QWORD *)(v149 + 416) = v149 + 432;
      *(_QWORD *)(v149 + 104) = 0;
      *(_BYTE *)(v149 + 112) = 0;
      *(_QWORD *)(v149 + 136) = 0;
      *(_BYTE *)(v149 + 144) = 0;
      *(_QWORD *)(v149 + 168) = 0;
      *(_BYTE *)(v149 + 176) = 0;
      *(_QWORD *)(v149 + 200) = 0;
      *(_BYTE *)(v149 + 208) = 0;
      *(_QWORD *)(v149 + 232) = 0;
      *(_BYTE *)(v149 + 240) = 0;
      *(_QWORD *)(v149 + 264) = 0;
      *(_BYTE *)(v149 + 272) = 0;
      *(_QWORD *)(v149 + 296) = 0;
      *(_BYTE *)(v149 + 304) = 0;
      *(_QWORD *)(v149 + 328) = 0;
      *(_BYTE *)(v149 + 336) = 0;
      *(_QWORD *)(v149 + 360) = 0;
      *(_BYTE *)(v149 + 368) = 0;
      *(_QWORD *)(v149 + 392) = 0;
      *(_BYTE *)(v149 + 400) = 0;
      *(_QWORD *)(v149 + 424) = 0x800000000LL;
      *(_QWORD *)(v149 + 528) = v149 + 544;
      *(_QWORD *)(v149 + 536) = 0x600000000LL;
      v63 = 0;
    }
    v192 = v62;
  }
  LOBYTE(v191) = 1;
  if ( v65 > v64 )
  {
    sub_22134E0(v62 + 52, v62 + 54, v65, 12);
    v63 = *((unsigned int *)v62 + 106);
  }
  v66 = v62[52] + 12 * v63;
  *(_QWORD *)v66 = __PAIR64__(v17, v7);
  *(_DWORD *)(v66 + 8) = v191;
  ++*((_DWORD *)v62 + 106);
  if ( (_BYTE)v197 )
  {
    sub_FA3A50(v194, &v192, HIBYTE(v197));
    v67 = v195;
    v194 = 0;
    v197 = 0;
    if ( v195 == v196 )
      goto LABEL_36;
    goto LABEL_35;
  }
  v67 = v195;
  if ( v195 != v196 )
LABEL_35:
    operator delete(v67);
LABEL_36:
  v68 = (void **)v192;
  if ( v192 )
  {
    v69 = v193;
    if ( v193 )
    {
      if ( (unsigned __int64)v192 < v193 || (unsigned __int64)v192 > v193 + 14848 )
      {
        v70 = *((void ***)v192 + 66);
        v71 = &v70[8 * (unsigned __int64)*((unsigned int *)v192 + 134)];
        if ( v70 != v71 )
        {
          do
          {
            while ( 1 )
            {
              v71 -= 8;
              v72 = (void **)v71[3];
              if ( v72 == v71 + 5 )
                break;
              operator delete(v72);
              if ( v70 == v71 )
                goto LABEL_42;
            }
          }
          while ( v70 != v71 );
LABEL_42:
          v71 = (void **)v68[66];
        }
        if ( v71 != v68 + 68 )
          free(v71);
        v73 = (void **)v68[52];
        if ( v73 != v68 + 54 )
          free(v73);
        v74 = v68 + 48;
        v75 = v68 + 8;
        do
        {
          while ( *v74 != v74 + 2 )
          {
            operator delete(*v74);
            v74 -= 4;
            if ( v75 == v74 )
              goto LABEL_50;
          }
          v74 -= 4;
        }
        while ( v75 != v74 );
LABEL_50:
        operator delete(v68, 0x3A0u);
      }
      else
      {
        v100 = *(unsigned int *)(v193 + 14976);
        *(_DWORD *)(v193 + 14976) = v100 + 1;
        *(_QWORD *)(v69 + 8 * v100 + 14848) = v68;
      }
    }
  }
LABEL_9:
  v21 = HIDWORD(v207);
  v22 = v202;
  if ( HIDWORD(v207) < (unsigned int)v202 )
  {
    v23 = v206;
    if ( v206 == v204 )
    {
      v23 = 0;
      v25 = 0;
      v24 = 0;
    }
    else
    {
      v21 = (unsigned int)(HIDWORD(v207) + 1);
      v24 = 1;
      ++HIDWORD(v207);
      v25 = v207 + v206 - v204;
      v180 = v205 - v206;
      v181 = v205 - v206;
    }
    v26 = v199;
    v27 = (char *)ptr;
    v28 = 24 * v21;
    v29 = 24LL * (unsigned int)v202 - 24 * v21;
    if ( v29 )
    {
      v30 = v199[5].m128i_u32[0];
      v31 = v199[4].m128i_u64[1];
      v32 = &v199[4].m128i_i8[8];
      v33 = v199 + 3;
      v34 = v30 + 1;
      v35 = (__m128i *)(v31 + 24 * v30);
      if ( v34 > v199[5].m128i_u32[1] )
      {
        v157 = &v199[5].m128i_i8[8];
        if ( v31 > (unsigned __int64)v33 || v35 <= v33 )
        {
          v185 = v24;
          v179 = (char *)ptr;
          v175 = v25;
          sub_22134E0(&v199[4].m128i_u64[1], v157, v34, 24);
          v33 = v26 + 3;
          v24 = v185;
          v27 = v179;
          v25 = v175;
          v32 = &v26[4].m128i_i8[8];
          v35 = (__m128i *)(v26[4].m128i_i64[1] + 24LL * v26[5].m128i_u32[0]);
        }
        else
        {
          v188 = v24;
          v184 = (char *)ptr;
          v178 = v25;
          v168 = &v33->m128i_i8[-v31];
          sub_22134E0(&v199[4].m128i_u64[1], v157, v34, 24);
          v158 = v26[4].m128i_i64[1];
          v32 = &v26[4].m128i_i8[8];
          v25 = v178;
          v27 = v184;
          v33 = (const __m128i *)&v168[v158];
          v35 = (__m128i *)(v158 + 24LL * v26[5].m128i_u32[0]);
          v24 = v188;
        }
      }
      v36 = (const __m128i *)&v27[v28];
      v37 = &v36->m128i_i8[v29];
      *v35 = _mm_loadu_si128(v33);
      v38 = v33[1].m128i_i64[0];
      v39 = &v36[1].m128i_i8[8];
      v35[1].m128i_i64[0] = v38;
      v40 = 0xAAAAAAAAAAAAAAABLL * ((v29 - 24) >> 3);
      v41 = (unsigned int)(v26[5].m128i_i32[0] + 1);
      v42 = v26[5].m128i_u32[1];
      v26[5].m128i_i32[0] = v41;
      if ( v40 + v41 > v42 )
      {
        v182 = &v36[1].m128i_i8[8];
        v177 = v24;
        v171 = v36;
        v163 = v25;
        sub_22134E0(v32, &v26[5].m128i_u64[1], v40 + v41, 24);
        v41 = v26[5].m128i_u32[0];
        v39 = v182;
        v24 = v177;
        v36 = v171;
        v25 = v163;
      }
      v43 = v26[4].m128i_i64[1] + 24 * v41;
      if ( v39 != v37 )
      {
        do
        {
          v44 = _mm_loadu_si128((const __m128i *)(v37 - 24));
          v37 -= 24;
          v43 += 24;
          *(__m128i *)(v43 - 24) = v44;
          *(_QWORD *)(v43 - 8) = *((_QWORD *)v37 + 2);
        }
        while ( v39 != v37 );
        LODWORD(v41) = v26[5].m128i_i32[0];
      }
      v45 = v41 + v40;
      v22 = v202;
      v26[5].m128i_i32[0] = v45;
      v26[3] = _mm_loadu_si128(v36);
      v26[4].m128i_i64[0] = v36[1].m128i_i64[0];
    }
    HIDWORD(v207) = v22;
    if ( v24 )
    {
      v76 = v199;
      v77 = v199[5].m128i_u32[0];
      v78 = v199[4].m128i_u64[1];
      v79 = v199 + 3;
      v80 = v77 + 1;
      v81 = (__m128i *)(v78 + 24 * v77);
      if ( v80 > v199[5].m128i_u32[1] )
      {
        v150 = &v199[4].m128i_i8[8];
        v151 = &v199[5].m128i_i8[8];
        v166 = v25;
        if ( v78 > (unsigned __int64)v79 || v81 <= v79 )
        {
          sub_22134E0(v150, v151, v80, 24);
          v25 = v166;
          v81 = (__m128i *)(v76[4].m128i_i64[1] + 24LL * v76[5].m128i_u32[0]);
        }
        else
        {
          v152 = &v79->m128i_i8[-v78];
          sub_22134E0(v150, v151, v80, 24);
          v153 = v76[4].m128i_i64[1];
          v25 = v166;
          v79 = (const __m128i *)&v152[v153];
          v81 = (__m128i *)(v153 + 24LL * v76[5].m128i_u32[0]);
        }
      }
      *v81 = _mm_loadu_si128(v79);
      v81[1].m128i_i64[0] = v79[1].m128i_i64[0];
      ++v76[5].m128i_i32[0];
      v76[3].m128i_i32[2] = v180;
      v76[3].m128i_i32[0] = v25;
      v76[3].m128i_i32[1] = 2;
      v76[3].m128i_i32[3] = v181;
      v76[4].m128i_i64[0] = v23;
    }
  }
  if ( ptr != v203 )
    free(ptr);
  return v20;
}

