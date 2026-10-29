__int64 __fastcall sub_724540(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  void *v13; // r13
  __int32 v14; // edx
  __int8 v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // si
  __int64 v19; // rax
  char v20; // cl
  __int64 *v21; // rsi
  void **v22; // rax
  void *v23; // r13
  unsigned __int64 v24; // rsi
  int v25; // r8d
  int v26; // r9d
  __int64 *v27; // r15
  unsigned int v28; // eax
  unsigned __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r15
  int v32; // eax
  _DWORD *v33; // rsi
  int v34; // eax
  _DWORD *v35; // rsi
  __int64 *v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdi
  bool v39; // zf
  __int64 *v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rdx
  __int64 result; // rax
  int v44; // r13d
  void *v45; // r14
  __int32 v46; // edx
  __int64 v47; // rax
  __int64 v48; // rdx
  char v49; // cl
  char v50; // si
  __int64 v51; // rax
  char v52; // cl
  __int64 *v53; // rsi
  void **v54; // rax
  void *v55; // r14
  int v56; // r8d
  int v57; // r9d
  __int64 *v58; // r14
  __int64 v59; // r13
  unsigned __int64 v60; // r15
  _QWORD *v61; // r12
  unsigned int v62; // eax
  __int64 v63; // rsi
  int v64; // eax
  _QWORD *v65; // rsi
  __int64 v66; // r13
  __int64 v67; // r14
  int v68; // eax
  _DWORD *v69; // rsi
  int v70; // eax
  _DWORD *v71; // rsi
  unsigned int v72; // eax
  __int64 v73; // rsi
  _QWORD *v74; // rdi
  int v75; // eax
  _QWORD *v76; // rsi
  __int64 *v77; // r13
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 *v80; // rax
  __int64 *v81; // rcx
  __int64 v82; // rdx
  unsigned int v83; // r15d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rsi
  unsigned int v87; // r14d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rsi
  __int64 v91; // r15
  __int64 v92; // rdx
  __m128i v93; // xmm0
  __int64 v94; // rdx
  char v95; // al
  __int64 *v96; // r13
  char v97; // bp
  unsigned __int64 v98; // r15
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // r9
  int v102; // ecx
  __int32 v103; // esi
  __int64 *v104; // rcx
  __int64 v105; // rax
  unsigned int v106; // edx
  __int64 *v107; // rdi
  __int64 v108; // rdx
  __int64 *v109; // r8
  __int64 *v110; // rax
  __int64 v111; // rdx
  void **v112; // r14
  __int64 *v113; // r15
  void *v114; // rdi
  __int32 v115; // edx
  __int8 v116; // cl
  __int64 v117; // rax
  __int64 v118; // rdx
  char v119; // si
  __int64 v120; // rax
  char v121; // cl
  __int64 *v122; // rsi
  void *v123; // rbx
  _QWORD *v124; // r12
  _QWORD *v125; // rax
  void **v126; // r14
  __int64 *v127; // r15
  void *v128; // rdi
  __int32 v129; // edx
  __int8 v130; // cl
  __int64 v131; // rax
  __int64 v132; // rdx
  char v133; // si
  __int64 v134; // rax
  char v135; // cl
  __int64 *v136; // rsi
  void *v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rdi
  int v140; // eax
  bool v141; // sf
  unsigned int v142; // eax
  int v143; // edx
  __int64 *v144; // r15
  __int32 v145; // edx
  __int8 v146; // cl
  __int64 v147; // rax
  __int64 v148; // rdx
  char v149; // di
  char v150; // si
  __int64 v151; // rax
  char v152; // cl
  __int64 *v153; // rsi
  void **v154; // rax
  void *v155; // rbx
  __int64 v156; // rax
  char **v157; // rbp
  __int64 *v158; // rbx
  __int64 *v159; // rsi
  char **exception; // rbp
  __int64 *v161; // rbx
  __int64 *v162; // rsi
  __m128i v163; // [rsp+0h] [rbp-148h] BYREF
  __int64 v164; // [rsp+10h] [rbp-138h]
  __m128i *v165; // [rsp+18h] [rbp-130h]
  void **v166; // [rsp+20h] [rbp-128h]
  unsigned __int64 v167; // [rsp+28h] [rbp-120h]
  __int64 v168; // [rsp+30h] [rbp-118h]
  __int64 *v169; // [rsp+38h] [rbp-110h]
  __int64 (__fastcall **v170)(); // [rsp+40h] [rbp-108h]
  __m128i v171; // [rsp+48h] [rbp-100h] BYREF
  __m128i v172; // [rsp+60h] [rbp-E8h] BYREF
  __int64 *v173; // [rsp+70h] [rbp-D8h]
  __int64 v174; // [rsp+78h] [rbp-D0h]
  __m128i v175; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v176; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v177; // [rsp+98h] [rbp-B0h]
  void *v178; // [rsp+A0h] [rbp-A8h]
  __int64 v179; // [rsp+B0h] [rbp-98h]
  void *v180; // [rsp+B8h] [rbp-90h]
  __int64 (__fastcall **v181)(); // [rsp+C0h] [rbp-88h]
  __int64 v182; // [rsp+D0h] [rbp-78h]
  void *v183; // [rsp+D8h] [rbp-70h]
  __int64 v184; // [rsp+E8h] [rbp-60h]
  void *ptr; // [rsp+F0h] [rbp-58h]
  __int64 v186; // [rsp+F8h] [rbp-50h]
  __int64 *v187; // [rsp+100h] [rbp-48h]
  char v188; // [rsp+108h] [rbp-40h]

  v5 = a1 + 32;
  v7 = *a2;
  v168 = a1;
  v8 = *(_QWORD *)(v7 + 16);
  v167 = a3;
  v9 = sub_15FD0A0(a1 + 32, *(_QWORD *)(v8 + 40), a3, a4);
  v10 = a1 + 32;
  v11 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL);
  if ( v9 )
  {
    v12 = sub_15F10D0(v10, v11);
    v175 = 0u;
    v176 = 1;
    v13 = qword_1C7F2C0;
    v177 = 0;
    v166 = &qword_1C7F2C0;
    if ( v12 < 0 )
    {
      v165 = &v175;
      sub_1830C40(qword_1C7F2C0, &v175, (unsigned int)v12);
    }
    else
    {
      v175.m128i_i32[0] = v12;
      v165 = &v175;
    }
    v169 = &v176;
    sub_182CBA0(v13, &v176);
    v14 = v175.m128i_i32[0];
    v15 = v175.m128i_i8[4];
    v175.m128i_i32[0] = *(_DWORD *)a4;
    v16 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)a4 = v14;
    v17 = v175.m128i_i64[1];
    v175.m128i_i64[1] = v16;
    LOBYTE(v16) = *(_BYTE *)(a4 + 4);
    *(_QWORD *)(a4 + 8) = v17;
    LOBYTE(v17) = v15;
    v15 &= ~2u;
    LOBYTE(v17) = v16 & 0xFC | v17 & 2;
    v18 = *(_BYTE *)(a4 + 20);
    v175.m128i_i8[4] = v16 & 1 | v15 & 0xFE | v16 & 2;
    LODWORD(v16) = *(_DWORD *)(a4 + 16);
    *(_BYTE *)(a4 + 4) = v15 & 1 | v17;
    LODWORD(v176) = v16;
    v19 = *(_QWORD *)(a4 + 24);
    v20 = v18 & 0xFD;
    *(_QWORD *)(a4 + 24) = v177;
    v177 = v19;
    LOBYTE(v19) = BYTE4(v176);
    *(_DWORD *)(a4 + 16) = 1;
    LOBYTE(v17) = v19;
    LOBYTE(v19) = v18 & 2 | v19 & 0xFC;
    v21 = (__int64 *)v165;
    BYTE4(v176) = v20 & 1 | v19;
    v22 = v166;
    *(_BYTE *)(a4 + 20) = v20 & 0xFE | v17 & 2;
    v23 = *v22;
    sub_182CBA0(*v22, v21);
    sub_182CBA0(v23, &v176);
    v170 = (__int64 (__fastcall **)())*a2;
    v24 = *(_QWORD *)(v168 + 8);
    v171.m128i_i64[0] = (__int64)&v172;
    sub_6AA8D0(&v172, v24, v167);
    v27 = v173;
    if ( !v173 )
      return 1;
    v164 = 0;
    v28 = *((_DWORD *)v173 - 1);
    v29 = 0;
    v163.m128i_i64[0] = 8LL * v28;
    if ( !v28 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v30 = v27[v29 / 8];
        if ( !*(_WORD *)(v30 + 4) )
          break;
        v29 += 8LL;
        if ( v163.m128i_i64[0] == v29 )
          goto LABEL_14;
      }
      v31 = *(_QWORD *)(v30 + 16);
      v32 = sub_15F0200(v5);
      v33 = *(_DWORD **)(v31 + 24);
      if ( v33 && v32 == *v33 && v33[1] == 1
        || (v34 = sub_15F0200(v5), (v35 = *(_DWORD **)(v31 + 24)) != nullptr) && v34 == *v35 && v35[1] == 2 )
      {
        if ( v164 )
        {
          v72 = *(_DWORD *)(v164 - 4);
          if ( v72 == *(_DWORD *)(v164 - 8) )
          {
            v83 = (3 * v72 + 1) >> 1;
            v84 = 8 * v83 + 8;
            if ( 8 * v72 + 8 >= (unsigned int)v84 || v72 >= v83 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v165->m128i_i64, "Overflow encountered when expanding vector");
              v161 = (__int64 *)v165;
              v162 = (__int64 *)v165;
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v162);
              sub_233E40((__int64)v161);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v85 = (unsigned int *)sub_186B300((void *)(v164 - 8), v84);
            v86 = v85[1];
            v74 = v85 + 2;
            *v85 = v83;
            v164 = (__int64)v74;
            LODWORD(v85) = v86;
            v76 = &v74[v86];
            v75 = (_DWORD)v85 + 1;
          }
          else
          {
            v73 = v72;
            v74 = (_QWORD *)v164;
            v75 = v72 + 1;
            v76 = (_QWORD *)(v164 + 8 * v73);
          }
        }
        else
        {
          v125 = (_QWORD *)sub_186B270(0x18u);
          *v125 = 2;
          v164 = (__int64)(v125 + 1);
          v76 = v125 + 1;
          v74 = v125 + 1;
          v75 = 1;
        }
        *v76 = v30;
        *((_DWORD *)v74 - 1) = v75;
      }
      v27 = v173;
      v29 += 8LL;
    }
    while ( v163.m128i_i64[0] != v29 );
LABEL_14:
    if ( v27 )
    {
      v36 = &v27[*((unsigned int *)v27 - 1)];
      if ( v27 >= v36 )
        goto LABEL_22;
      do
      {
        while ( 1 )
        {
          v37 = *v27;
          if ( *v27 )
          {
            v38 = v172.m128i_i64[1];
            v39 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( ++v27 >= v36 )
            goto LABEL_21;
        }
        sub_15D7BC0(v38, v37);
        ++v27;
      }
      while ( v27 < v36 );
LABEL_21:
      v27 = v173;
      if ( v173 )
LABEL_22:
        sub_186B220(v27 - 1);
    }
    if ( !v164 )
      return 1;
    v40 = (__int64 *)v164;
    v41 = (__int64 *)(v164 + 8LL * *(unsigned int *)(v164 - 4));
    do
    {
      if ( v40 == v41 )
      {
        sub_186B220((void *)(v164 - 8));
        return 1;
      }
      v42 = *v40++;
    }
    while ( v170 != *(__int64 (__fastcall ***)())(v42 + 32) );
    v91 = sub_15F0BB0(v5, *(_QWORD *)(v42 + 16), v42, (_DWORD)v41, v25, v26);
    v170 = &off_1C62200;
    v163 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v171), (__m128i)(unsigned __int64)&off_1C62200);
    sub_186B220((void *)(v164 - 8));
    v92 = *a2;
    v93 = _mm_load_si128(&v163);
    v172.m128i_i64[0] = (__int64)off_1C53798;
    v172.m128i_i64[1] = v92;
    v173 = (__int64 *)v91;
    v94 = *(_QWORD *)(v168 + 8);
    v174 = v5;
    v177 = 0;
    v178 = nullptr;
    v179 = 0;
    v180 = nullptr;
    v181 = &off_1C62200;
    v182 = 0;
    v183 = nullptr;
    v184 = 0;
    ptr = nullptr;
    v186 = v94;
    v187 = nullptr;
    v188 = 1;
    v175 = v93;
    v95 = sub_168D740(v165, v167);
    v96 = v187;
    v97 = v95;
    if ( v187 )
    {
      v98 = (unsigned __int64)&v187[*((unsigned int *)v187 - 1)];
      if ( (unsigned __int64)v187 >= v98 )
        goto LABEL_87;
      do
      {
        while ( 1 )
        {
          v99 = *v96;
          if ( *v96 )
          {
            v100 = v186;
            v39 = (*(_DWORD *)(v99 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( (unsigned __int64)++v96 >= v98 )
            goto LABEL_86;
        }
        sub_15D7BC0(v100, v99);
        ++v96;
      }
      while ( (unsigned __int64)v96 < v98 );
LABEL_86:
      v96 = v187;
      if ( v187 )
LABEL_87:
        sub_186B220(v96 - 1);
    }
    v181 = &off_1C62200;
    if ( ptr )
      sub_186B220(ptr);
    if ( v183 )
      sub_186B220(v183);
    v175.m128i_i64[1] = (__int64)&off_1C62200;
    if ( v180 )
      sub_186B220(v180);
    if ( v178 )
      sub_186B220(v178);
    if ( v97 )
    {
      v112 = v166;
      v113 = v169;
      v175 = (__m128i)1uLL;
      v114 = *v166;
      v176 = 1;
      v177 = 0;
      sub_182CBA0(v114, v169);
      v115 = v175.m128i_i32[0];
      v116 = v175.m128i_i8[4];
      v175.m128i_i32[0] = *(_DWORD *)a4;
      v117 = *(_QWORD *)(a4 + 8);
      *(_DWORD *)a4 = v115;
      v118 = v175.m128i_i64[1];
      v175.m128i_i64[1] = v117;
      LOBYTE(v117) = *(_BYTE *)(a4 + 4);
      *(_QWORD *)(a4 + 8) = v118;
      LOBYTE(v118) = v116;
      v116 &= ~2u;
      LOBYTE(v114) = v117;
      v119 = *(_BYTE *)(a4 + 20);
      v175.m128i_i8[4] = v117 & 1 | v116 & 0xFE | v117 & 2;
      LODWORD(v117) = *(_DWORD *)(a4 + 16);
      *(_BYTE *)(a4 + 4) = v116 & 1 | (unsigned __int8)v114 & 0xFC | v118 & 2;
      LODWORD(v176) = v117;
      v120 = *(_QWORD *)(a4 + 24);
      v121 = v119 & 0xFD;
      *(_QWORD *)(a4 + 24) = v177;
      v177 = v120;
      LOBYTE(v120) = BYTE4(v176);
      *(_DWORD *)(a4 + 16) = 1;
      LOBYTE(v118) = v120;
      LOBYTE(v120) = v119 & 2 | v120 & 0xFC;
      v122 = (__int64 *)v165;
      *(_BYTE *)(a4 + 20) = v121 & 0xFE | v118 & 2;
      v123 = *v112;
      BYTE4(v176) = v121 & 1 | v120;
      sub_182CBA0(v123, v122);
      sub_182CBA0(v123, v113);
      return 1;
    }
    result = sub_723700(v168, a2, v167);
    if ( (_BYTE)result )
    {
      v101 = *a2;
      v102 = *(_DWORD *)(*a2 + 12);
      v163.m128i_i32[0] = *(_DWORD *)(v167 + 12);
      v103 = (((v163.m128i_i32[0] - v102) ^ (v102 << 8) ^ ((v102 - ((v163.m128i_i32[0] - v102) ^ (v102 << 8))) << 16))
            + ((v163.m128i_i32[0] - v102) ^ (v102 << 8))
            - v102)
           ^ ((v102 - ((v163.m128i_i32[0] - v102) ^ (v102 << 8))) << 10);
      v104 = *(__int64 **)(v168 + 192);
      v105 = *(unsigned int *)(v168 + 200);
      v106 = v105 - 1;
      v105 *= 32;
      v107 = (__int64 *)((char *)v104 + v105);
      v108 = 32LL * (v103 & v106);
      v109 = &v104[(unsigned __int64)v108 / 8];
      if ( v108 == v105 )
      {
LABEL_115:
        while ( v109 != v104 )
        {
          v156 = *v104;
          if ( (unsigned __int64)*v104 > 1 )
          {
            if ( *((_DWORD *)v104 + 6) == v103 && v101 == v156 && v167 == v104[1] )
            {
              v110 = v104;
              goto LABEL_111;
            }
          }
          else if ( !v156 )
          {
            break;
          }
          v104 += 4;
        }
LABEL_105:
        sub_1872CE0("");
        sub_1873130(114, 828);
      }
      v110 = &v104[(unsigned __int64)v108 / 8];
      while ( 1 )
      {
        v111 = *v110;
        if ( (unsigned __int64)*v110 > 1 )
        {
          if ( *((_DWORD *)v110 + 6) == v103 && v101 == v111 && v167 == v110[1] )
          {
LABEL_111:
            v138 = *(_QWORD *)(v110[2] + 32);
            v139 = (__int64)*v166;
            if ( v138 )
            {
              v140 = *(_DWORD *)(v138 - 4);
              v175 = 0u;
              v176 = 1;
              v141 = v140 + 1 < 0;
              v142 = v140 + 1;
              v177 = 0;
              v143 = v142;
              if ( !v141 )
                goto LABEL_113;
              v163.m128i_i64[0] = v139;
              sub_1830C40(v139, v165, v142);
              v139 = v163.m128i_i64[0];
            }
            else
            {
              v175 = 0u;
              v143 = 1;
              v176 = 1;
              v177 = 0;
LABEL_113:
              v175.m128i_i32[0] = v143;
            }
            v144 = v169;
            sub_182CBA0(v139, v169);
            v145 = v175.m128i_i32[0];
            v146 = v175.m128i_i8[4];
            v175.m128i_i32[0] = *(_DWORD *)a4;
            v147 = *(_QWORD *)(a4 + 8);
            *(_DWORD *)a4 = v145;
            v148 = v175.m128i_i64[1];
            v175.m128i_i64[1] = v147;
            LOBYTE(v147) = *(_BYTE *)(a4 + 4);
            *(_QWORD *)(a4 + 8) = v148;
            LOBYTE(v148) = v146;
            v146 &= ~2u;
            v149 = v147;
            v150 = *(_BYTE *)(a4 + 20);
            v175.m128i_i8[4] = v147 & 1 | v146 & 0xFE | v147 & 2;
            LODWORD(v147) = *(_DWORD *)(a4 + 16);
            *(_BYTE *)(a4 + 4) = v146 & 1 | v149 & 0xFC | v148 & 2;
            LODWORD(v176) = v147;
            v151 = *(_QWORD *)(a4 + 24);
            v152 = v150 & 0xFD;
            *(_QWORD *)(a4 + 24) = v177;
            v177 = v151;
            LOBYTE(v151) = BYTE4(v176);
            *(_DWORD *)(a4 + 16) = 1;
            LOBYTE(v148) = v151;
            LOBYTE(v151) = v150 & 2 | v151 & 0xFC;
            v153 = (__int64 *)v165;
            BYTE4(v176) = v152 & 1 | v151;
            v154 = v166;
            *(_BYTE *)(a4 + 20) = v152 & 0xFE | v148 & 2;
            v155 = *v154;
            sub_182CBA0(*v154, v153);
            sub_182CBA0(v155, v144);
            return 1;
          }
        }
        else if ( !v111 )
        {
          goto LABEL_105;
        }
        v110 += 4;
        if ( v107 == v110 )
          goto LABEL_115;
      }
    }
  }
  else
  {
    v175 = 0u;
    v44 = sub_15F10D0(v10, v11);
    v176 = 1;
    v177 = 0;
    v45 = qword_1C7F2C0;
    v166 = &qword_1C7F2C0;
    if ( v44 < 0 )
    {
      v165 = &v175;
      sub_1830C40(qword_1C7F2C0, &v175, (unsigned int)v44);
    }
    else
    {
      v175.m128i_i32[0] = v44;
      v165 = &v175;
    }
    v169 = &v176;
    sub_182CBA0(v45, &v176);
    v46 = v175.m128i_i32[0];
    v175.m128i_i32[0] = *(_DWORD *)a4;
    v47 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)a4 = v46;
    v48 = v175.m128i_i64[1];
    v175.m128i_i64[1] = v47;
    LOBYTE(v47) = *(_BYTE *)(a4 + 4);
    *(_QWORD *)(a4 + 8) = v48;
    LOBYTE(v48) = v175.m128i_i8[4] & 1;
    v49 = v47 & 0xFC | v175.m128i_i8[4] & 2;
    v50 = *(_BYTE *)(a4 + 20);
    v175.m128i_i8[4] = v47 & 1 | v175.m128i_i8[4] & 0xFC | v47 & 2;
    LODWORD(v47) = *(_DWORD *)(a4 + 16);
    *(_BYTE *)(a4 + 4) = v49 | v48;
    LODWORD(v176) = v47;
    v51 = *(_QWORD *)(a4 + 24);
    v52 = v50 & 0xFD;
    *(_QWORD *)(a4 + 24) = v177;
    v177 = v51;
    LOBYTE(v51) = BYTE4(v176);
    *(_DWORD *)(a4 + 16) = 1;
    LOBYTE(v48) = v51;
    LOBYTE(v51) = v50 & 2 | v51 & 0xFC;
    v53 = (__int64 *)v165;
    BYTE4(v176) = v52 & 1 | v51;
    v54 = v166;
    *(_BYTE *)(a4 + 20) = v52 & 0xFE | v48 & 2;
    v55 = *v54;
    sub_182CBA0(*v54, v53);
    sub_182CBA0(v55, &v176);
    if ( v44 == 1 )
      return 1;
    v164 = *a2;
    sub_6AA8D0(&v172, *(_QWORD *)(v168 + 8), v167);
    v58 = v173;
    if ( !v173 )
      return 1;
    v59 = *((unsigned int *)v173 - 1);
    v60 = 0;
    v61 = nullptr;
    v163.m128i_i64[0] = 8 * v59;
    if ( !(_DWORD)v59 )
    {
LABEL_35:
      sub_186B220(v173 - 1);
      return 1;
    }
    do
    {
      v66 = v58[v60 / 8];
      if ( !*(_WORD *)(v66 + 4) )
      {
        v67 = *(_QWORD *)(v66 + 16);
        v68 = sub_15F0200(v5);
        v69 = *(_DWORD **)(v67 + 24);
        if ( v69 && v68 == *v69 && v69[1] == 1
          || (v70 = sub_15F0200(v5), (v71 = *(_DWORD **)(v67 + 24)) != nullptr) && v70 == *v71 && v71[1] == 2 )
        {
          if ( v61 )
          {
            v62 = *((_DWORD *)v61 - 1);
            if ( v62 == *((_DWORD *)v61 - 2) )
            {
              v87 = (3 * v62 + 1) >> 1;
              v88 = 8 * v87 + 8;
              if ( 8 * v62 + 8 >= (unsigned int)v88 || v62 >= v87 )
              {
                v157 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v165->m128i_i64, "Overflow encountered when expanding vector");
                v158 = (__int64 *)v165;
                v159 = (__int64 *)v165;
                *v157 = (char *)off_1C63128;
                sub_2333C0(v157 + 1, v159);
                sub_233E40((__int64)v158);
                __cxa_throw(v157, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v89 = (unsigned int *)sub_186B300(v61 - 1, v88);
              v90 = v89[1];
              v61 = v89 + 2;
              *v89 = v87;
              LODWORD(v89) = v90;
              v65 = &v61[v90];
              v64 = (_DWORD)v89 + 1;
            }
            else
            {
              v63 = v62;
              v64 = v62 + 1;
              v65 = &v61[v63];
            }
          }
          else
          {
            v124 = (_QWORD *)sub_186B270(0x18u);
            *v124 = 2;
            v64 = 1;
            v61 = v124 + 1;
            v65 = v61;
          }
          *v65 = v66;
          *((_DWORD *)v61 - 1) = v64;
        }
        v58 = v173;
      }
      v60 += 8LL;
    }
    while ( v60 != v163.m128i_i64[0] );
    if ( v58 )
    {
      v77 = &v58[*((unsigned int *)v58 - 1)];
      if ( v58 >= v77 )
        goto LABEL_65;
      do
      {
        while ( 1 )
        {
          v78 = *v58;
          if ( *v58 )
          {
            v79 = v172.m128i_i64[1];
            v39 = (*(_DWORD *)(v78 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( ++v58 >= v77 )
            goto LABEL_64;
        }
        sub_15D7BC0(v79, v78);
        ++v58;
      }
      while ( v58 < v77 );
LABEL_64:
      v58 = v173;
      if ( v173 )
LABEL_65:
        sub_186B220(v58 - 1);
    }
    if ( !v61 )
      return 1;
    v80 = v61;
    v81 = &v61[*((unsigned int *)v61 - 1)];
    do
    {
      if ( v81 == v80 )
      {
        sub_186B220(v61 - 1);
        return 1;
      }
      v82 = *v80++;
    }
    while ( v164 != *(_QWORD *)(v82 + 32) );
    sub_15F0BB0(v5, *(_QWORD *)(v82 + 16), v82, (_DWORD)v81, v56, v57);
    sub_186B220(v61 - 1);
    v126 = v166;
    v127 = v169;
    v175 = (__m128i)1uLL;
    v128 = *v166;
    v176 = 1;
    v177 = 0;
    sub_182CBA0(v128, v169);
    v129 = v175.m128i_i32[0];
    v130 = v175.m128i_i8[4];
    v175.m128i_i32[0] = *(_DWORD *)a4;
    v131 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)a4 = v129;
    v132 = v175.m128i_i64[1];
    v175.m128i_i64[1] = v131;
    LOBYTE(v131) = *(_BYTE *)(a4 + 4);
    *(_QWORD *)(a4 + 8) = v132;
    LOBYTE(v132) = v130;
    v130 &= ~2u;
    LOBYTE(v128) = v131;
    v133 = *(_BYTE *)(a4 + 20);
    v175.m128i_i8[4] = v131 & 1 | v130 & 0xFE | v131 & 2;
    LODWORD(v131) = *(_DWORD *)(a4 + 16);
    *(_BYTE *)(a4 + 4) = v130 & 1 | (unsigned __int8)v128 & 0xFC | v132 & 2;
    LODWORD(v176) = v131;
    v134 = *(_QWORD *)(a4 + 24);
    v135 = v133 & 0xFD;
    *(_QWORD *)(a4 + 24) = v177;
    v177 = v134;
    LOBYTE(v134) = BYTE4(v176);
    *(_DWORD *)(a4 + 16) = 1;
    LOBYTE(v132) = v134;
    LOBYTE(v134) = v133 & 2 | v134 & 0xFC;
    v136 = (__int64 *)v165;
    *(_BYTE *)(a4 + 20) = v135 & 0xFE | v132 & 2;
    v137 = *v126;
    BYTE4(v176) = v135 & 1 | v134;
    sub_182CBA0(v137, v136);
    sub_182CBA0(v137, v127);
    return 1;
  }
  return result;
}

