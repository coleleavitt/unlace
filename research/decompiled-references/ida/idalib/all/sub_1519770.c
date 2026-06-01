__int64 __fastcall sub_1519770(__int64 a1, unsigned int a2, __int64 a3, unsigned int **a4)
{
  __int64 v5; // rdx
  int v7; // ebx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // r13
  unsigned int *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  size_t v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  unsigned __int8 *v28; // r12
  _BYTE *v29; // rsi
  signed __int64 v30; // rdx
  signed __int64 v31; // r14
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  void **v37; // r12
  _BYTE *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int8 *v41; // r12
  _BYTE *v42; // rsi
  signed __int64 v43; // rdx
  signed __int64 v44; // r14
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  void **v50; // r14
  _BYTE *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 *v54; // r12
  _BYTE *v55; // rsi
  signed __int64 v56; // rdx
  signed __int64 v57; // r14
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // r14
  _BYTE *v64; // rdi
  __int64 v65; // rax
  void **v66; // r12
  unsigned __int64 v67; // rax
  void **v68; // rdx
  void **v69; // r14
  void **v70; // rbx
  void **v71; // rdi
  void **v72; // rdi
  void **v73; // r14
  void **v74; // rdx
  void **v75; // r14
  void **v76; // rbx
  void **v77; // rdi
  void **v78; // rdi
  void **v79; // r14
  void *v80; // rdi
  size_t v81; // rdx
  __int64 v82; // rdx
  size_t v83; // rdx
  __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // rdx
  int v88; // eax
  unsigned __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rax
  __m128i *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // r14
  unsigned __int8 *v100; // r13
  unsigned __int64 v101; // r12
  __int64 v102; // rbp
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // r14
  unsigned __int8 *v110; // r13
  unsigned __int64 v111; // r12
  __int64 v112; // rbp
  void *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // r14
  unsigned __int8 *v120; // r13
  unsigned __int64 v121; // r12
  __int64 v122; // rbp
  void *v123; // rdi
  __int64 v124; // rdi
  __int64 v125; // rsi
  __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rsi
  int v129; // edx
  int v130; // esi
  __int64 v131; // rdi
  __int64 v132; // rdx
  unsigned __int64 v133; // rax
  __int64 v134; // rsi
  int v135; // edx
  unsigned __int64 v136; // [rsp+8h] [rbp-1D0h]
  __int64 src; // [rsp+10h] [rbp-1C8h]
  void **srca; // [rsp+10h] [rbp-1C8h]
  __int64 srcb; // [rsp+10h] [rbp-1C8h]
  void **srcc; // [rsp+10h] [rbp-1C8h]
  unsigned int *v142; // [rsp+30h] [rbp-1A8h]
  const __m128i *v143; // [rsp+38h] [rbp-1A0h]
  unsigned int *v144; // [rsp+40h] [rbp-198h]
  unsigned __int64 v145; // [rsp+48h] [rbp-190h]
  __int64 v146; // [rsp+50h] [rbp-188h]
  unsigned __int64 v148; // [rsp+60h] [rbp-178h]
  __int64 *v149; // [rsp+68h] [rbp-170h]
  unsigned __int64 v150; // [rsp+70h] [rbp-168h]
  __int64 v151; // [rsp+78h] [rbp-160h]
  __int64 v152; // [rsp+78h] [rbp-160h]
  __int64 v153; // [rsp+78h] [rbp-160h]
  signed __int64 v154; // [rsp+80h] [rbp-158h]
  signed __int64 v155; // [rsp+80h] [rbp-158h]
  signed __int64 v156; // [rsp+80h] [rbp-158h]
  char v158; // [rsp+8Eh] [rbp-14Ah]
  unsigned __int8 v159; // [rsp+8Fh] [rbp-149h]
  __int64 v160; // [rsp+90h] [rbp-148h]
  __int64 v161; // [rsp+98h] [rbp-140h]
  _QWORD *v162; // [rsp+B0h] [rbp-128h]
  size_t v163; // [rsp+B8h] [rbp-120h]
  _QWORD v164[2]; // [rsp+C0h] [rbp-118h] BYREF
  void *v165; // [rsp+D0h] [rbp-108h]
  size_t n; // [rsp+D8h] [rbp-100h]
  _QWORD v167[2]; // [rsp+E0h] [rbp-F8h] BYREF
  void *v168; // [rsp+F0h] [rbp-E8h]
  size_t v169; // [rsp+F8h] [rbp-E0h]
  _QWORD v170[2]; // [rsp+100h] [rbp-D8h] BYREF
  _BYTE *v171; // [rsp+110h] [rbp-C8h] BYREF
  char v172; // [rsp+118h] [rbp-C0h]
  __int64 v173; // [rsp+120h] [rbp-B8h]
  int v174; // [rsp+128h] [rbp-B0h]
  __int16 v175; // [rsp+12Ch] [rbp-ACh]
  __int64 (__fastcall *v176)(__int64); // [rsp+130h] [rbp-A8h]
  __int64 v177; // [rsp+138h] [rbp-A0h]
  __int64 v178; // [rsp+140h] [rbp-98h]
  void *v179; // [rsp+150h] [rbp-88h] BYREF
  unsigned __int64 v180; // [rsp+158h] [rbp-80h]
  __int64 v181; // [rsp+160h] [rbp-78h] BYREF
  void *v182; // [rsp+170h] [rbp-68h]
  _BYTE v183[16]; // [rsp+180h] [rbp-58h] BYREF
  __int16 v184; // [rsp+190h] [rbp-48h]

  if ( !sub_10CCDE0(*(_WORD *)(a1 + 32)) )
  {
    sub_13D35F0(
      (__int64)&v179,
      a1 + 16,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
      nullptr);
    v7 = sub_20EF010(v179, v180);
    if ( v179 != &v181 )
      operator delete(v179);
    v5 = *(unsigned int *)(a1 + 16);
    if ( v7 != 56 )
      goto LABEL_3;
    *(_DWORD *)(a1 + 40) = v5;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v171 = (_BYTE *)(a1 + 1952);
    v8 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v172 = v8;
    v175 = 449;
    v173 = a1;
    v174 = 1507350;
    v176 = sub_146A990;
    v177 = 0;
    v178 = 0;
    v9 = sub_20EB760(56, 0);
    v159 = sub_156A040(&v171, 1625, v9, 0);
    if ( v159
      || (sub_1519520(a1, a3), sub_14808E0((__int64)&v171, (__int64 *)a3, v10, v11, v12, v13), !a4)
      || (v160 = (__int64)&(*a4)[34 * *((unsigned int *)a4 + 2)], *a4 == (unsigned int *)v160) )
    {
LABEL_96:
      *v171 = v172;
      return v159;
    }
    v142 = *a4;
LABEL_12:
    v14 = *(unsigned int *)(a3 + 8);
    v149 = (__int64 *)v142;
    v148 = *(_QWORD *)a3 + 136 * v14;
    if ( *(_QWORD *)a3 == v148 )
    {
      v133 = *(_QWORD *)a3 + 136 * v14;
LABEL_223:
      v134 = v14 + 1;
      if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        if ( v148 > (unsigned __int64)v142 || v133 <= (unsigned __int64)v142 )
        {
          sub_EC16A0(a3, v134);
          v133 = *(_QWORD *)a3 + 136LL * *(unsigned int *)(a3 + 8);
        }
        else
        {
          sub_EC16A0(a3, v134);
          v149 = (__int64 *)((char *)v142 + *(_QWORD *)a3 - v148);
          v133 = *(_QWORD *)a3 + 136LL * *(unsigned int *)(a3 + 8);
        }
      }
      v135 = *(_DWORD *)v149;
      *(_QWORD *)(v133 + 16) = 0x200000000LL;
      *(_DWORD *)v133 = v135;
      *(_QWORD *)(v133 + 8) = v133 + 24;
      if ( *((_DWORD *)v149 + 4) )
        sub_15192D0(v133 + 8, v149 + 1);
      ++*(_DWORD *)(a3 + 8);
      goto LABEL_95;
    }
    v146 = *(_QWORD *)a3;
    v15 = 0;
LABEL_15:
    if ( *(_DWORD *)v146 != *v142 )
      goto LABEL_14;
    v16 = *((_QWORD *)v142 + 1);
    v161 = v16 + 56LL * v142[4];
    if ( v16 == v161 )
      goto LABEL_93;
    v136 = *((_QWORD *)v142 + 1);
LABEL_18:
    v17 = *(unsigned int *)(v146 + 16);
    v150 = v136;
    v18 = *(_QWORD *)(v146 + 8);
    v145 = v18 + 56 * v17;
    if ( v18 == v145 )
    {
      v127 = v18 + 56 * v17;
      goto LABEL_213;
    }
    v19 = 0;
    v20 = *(_QWORD *)(v146 + 8);
LABEL_21:
    while ( *(_DWORD *)(v20 + 8) != *(_DWORD *)(v136 + 8) )
    {
      v20 += 56;
      if ( v145 == v20 )
        goto LABEL_91;
    }
    v21 = *(unsigned int **)(v136 + 16);
    v144 = &v21[6 * *(unsigned int *)(v136 + 24)];
    if ( v21 == v144 )
      goto LABEL_90;
LABEL_23:
    v22 = *(unsigned int *)(v20 + 24);
    v23 = *(_QWORD *)(v20 + 16);
    v143 = (const __m128i *)v21;
    v24 = v23 + 24 * v22;
    if ( v23 == v24 )
    {
      v93 = v22 + 1;
      v92 = (__m128i *)(v23 + 24 * v22);
      if ( v22 + 1 <= (unsigned __int64)*(unsigned int *)(v20 + 28) )
        goto LABEL_179;
LABEL_205:
      v124 = v20 + 16;
      v125 = v20 + 32;
      if ( v24 > (unsigned __int64)v21 || v92 <= (__m128i *)v21 )
      {
        sub_2237220(v124, v125, v93, 24);
        v92 = (__m128i *)(*(_QWORD *)(v20 + 16) + 24LL * *(unsigned int *)(v20 + 24));
      }
      else
      {
        sub_2237220(v124, v125, v93, 24);
        v126 = *(_QWORD *)(v20 + 16);
        v143 = (const __m128i *)((char *)v21 + v126 - v24);
        v92 = (__m128i *)(v126 + 24LL * *(unsigned int *)(v20 + 24));
      }
      goto LABEL_179;
    }
    v158 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)v23 == *v21 )
      {
        v25 = *(_QWORD *)(v23 + 16);
        if ( v25 != *((_QWORD *)v21 + 2) )
          goto LABEL_97;
        if ( v25 )
        {
          v26 = memcmp(*(const void **)(v23 + 8), *((const void **)v21 + 1), v25);
          v158 |= v26 == 0;
          if ( v26 )
          {
LABEL_97:
            if ( *(_DWORD *)(v20 + 8) == 13 )
              goto LABEL_104;
            if ( *(_QWORD *)v20 == *(_QWORD *)v136 )
              goto LABEL_87;
LABEL_31:
            sub_1564820(&v179, a1, a2, 1790);
            v27 = sub_20F7F10(*v21, *((_QWORD *)v21 + 1), *((_QWORD *)v21 + 2));
            v28 = (unsigned __int8 *)v179;
            v29 = (_BYTE *)v27;
            v31 = v30;
            if ( !v179 )
            {
              v89 = v180;
              v90 = *(_DWORD *)(v180 + 14976);
              if ( v90 )
              {
                v94 = (unsigned int)(v90 - 1);
                *(_DWORD *)(v180 + 14976) = v94;
                v28 = *(unsigned __int8 **)(v89 + 8 * v94 + 14848);
                v95 = *((unsigned int *)v28 + 134);
                v96 = *((_QWORD *)v28 + 66);
                *v28 = 0;
                *((_DWORD *)v28 + 106) = 0;
                v97 = v96 + (v95 << 6);
                if ( v96 != v97 )
                {
                  v151 = v23;
                  v98 = v97;
                  v154 = v31;
                  v99 = v20;
                  v100 = v28;
                  v101 = v24;
                  v102 = v96;
                  do
                  {
                    while ( 1 )
                    {
                      v98 -= 64;
                      v103 = *(void **)(v98 + 24);
                      if ( v103 == (void *)(v98 + 40) )
                        break;
                      operator delete(v103);
                      if ( v102 == v98 )
                        goto LABEL_184;
                    }
                  }
                  while ( v102 != v98 );
LABEL_184:
                  v24 = v101;
                  v23 = v151;
                  v28 = v100;
                  v20 = v99;
                  v31 = v154;
                }
                *((_DWORD *)v28 + 134) = 0;
              }
              else
              {
                v28 = (unsigned __int8 *)operator new(0x3A0u);
                *v28 = 0;
                *((_QWORD *)v28 + 12) = v28 + 112;
                *((_QWORD *)v28 + 16) = v28 + 144;
                *((_QWORD *)v28 + 20) = v28 + 176;
                *((_QWORD *)v28 + 24) = v28 + 208;
                *((_QWORD *)v28 + 28) = v28 + 240;
                *((_QWORD *)v28 + 32) = v28 + 272;
                *((_QWORD *)v28 + 36) = v28 + 304;
                *((_QWORD *)v28 + 40) = v28 + 336;
                *((_QWORD *)v28 + 44) = v28 + 368;
                *((_QWORD *)v28 + 48) = v28 + 400;
                *((_QWORD *)v28 + 52) = v28 + 432;
                *((_QWORD *)v28 + 13) = 0;
                v28[112] = 0;
                *((_QWORD *)v28 + 17) = 0;
                v28[144] = 0;
                *((_QWORD *)v28 + 21) = 0;
                v28[176] = 0;
                *((_QWORD *)v28 + 25) = 0;
                v28[208] = 0;
                *((_QWORD *)v28 + 29) = 0;
                v28[240] = 0;
                *((_QWORD *)v28 + 33) = 0;
                v28[272] = 0;
                *((_QWORD *)v28 + 37) = 0;
                v28[304] = 0;
                *((_QWORD *)v28 + 41) = 0;
                v28[336] = 0;
                *((_QWORD *)v28 + 45) = 0;
                v28[368] = 0;
                *((_QWORD *)v28 + 49) = 0;
                v28[400] = 0;
                *((_QWORD *)v28 + 53) = 0x800000000LL;
                *((_QWORD *)v28 + 66) = v28 + 544;
                *((_QWORD *)v28 + 67) = 0x600000000LL;
              }
              v179 = v28;
            }
            v28[*v28 + 1] = 0;
            v168 = v170;
            if ( &v29[v31] && !v29 )
LABEL_227:
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            if ( (unsigned __int64)v31 > 0xF )
            {
              if ( v31 < 0 )
                goto LABEL_221;
              v32 = (_QWORD *)operator new(v31 + 1);
              v170[0] = v31;
              v168 = v32;
              goto LABEL_137;
            }
            if ( v31 == 1 )
            {
              LOBYTE(v170[0]) = *v29;
              v32 = v170;
              goto LABEL_37;
            }
            v32 = v170;
            if ( v31 )
            {
LABEL_137:
              memcpy(v32, v29, v31);
              v32 = v168;
            }
LABEL_37:
            v169 = v31;
            *((_BYTE *)v32 + v31) = 0;
            v33 = v179;
            v34 = *(unsigned __int8 *)v179;
            *(_BYTE *)v179 = v34 + 1;
            v35 = (unsigned __int8)v34;
            v36 = 4 * (v34 + 3);
            v37 = (void **)&v33[v36];
            v38 = (_BYTE *)v33[v36];
            if ( v168 == v170 )
            {
              v83 = v169;
              if ( v169 )
              {
                if ( v169 == 1 )
                  *v38 = v170[0];
                else
                  memcpy(v38, v170, v169);
                v83 = v169;
                v38 = *v37;
              }
              v37[1] = (void *)v83;
              v38[v83] = 0;
              v38 = v168;
            }
            else
            {
              if ( v38 == (_BYTE *)&v33[v36 + 2] )
              {
                *v37 = v168;
                v37[1] = (void *)v169;
                v37[2] = (void *)v170[0];
              }
              else
              {
                v39 = v33[4 * v35 + 14];
                *v37 = v168;
                v37[1] = (void *)v169;
                v37[2] = (void *)v170[0];
                if ( v38 )
                {
                  v168 = v38;
                  v170[0] = v39;
                  goto LABEL_41;
                }
              }
              v168 = v170;
              v38 = v170;
            }
LABEL_41:
            v169 = 0;
            *v38 = 0;
            if ( v168 != v170 )
              operator delete(v168);
            v40 = sub_20F4520(*(unsigned int *)(v136 + 8));
            v41 = (unsigned __int8 *)v179;
            v42 = (_BYTE *)v40;
            v44 = v43;
            if ( !v179 )
            {
              v87 = v180;
              v88 = *(_DWORD *)(v180 + 14976);
              if ( v88 )
              {
                v114 = (unsigned int)(v88 - 1);
                *(_DWORD *)(v180 + 14976) = v114;
                v41 = *(unsigned __int8 **)(v87 + 8 * v114 + 14848);
                v115 = *((unsigned int *)v41 + 134);
                v116 = *((_QWORD *)v41 + 66);
                *v41 = 0;
                *((_DWORD *)v41 + 106) = 0;
                v117 = v116 + (v115 << 6);
                if ( v116 != v117 )
                {
                  v153 = v23;
                  v118 = v117;
                  v156 = v44;
                  v119 = v20;
                  v120 = v41;
                  v121 = v24;
                  v122 = v116;
                  do
                  {
                    while ( 1 )
                    {
                      v118 -= 64;
                      v123 = *(void **)(v118 + 24);
                      if ( v123 == (void *)(v118 + 40) )
                        break;
                      operator delete(v123);
                      if ( v122 == v118 )
                        goto LABEL_200;
                    }
                  }
                  while ( v122 != v118 );
LABEL_200:
                  v24 = v121;
                  v23 = v153;
                  v41 = v120;
                  v20 = v119;
                  v44 = v156;
                }
                *((_DWORD *)v41 + 134) = 0;
              }
              else
              {
                v41 = (unsigned __int8 *)operator new(0x3A0u);
                *v41 = 0;
                *((_QWORD *)v41 + 12) = v41 + 112;
                *((_QWORD *)v41 + 16) = v41 + 144;
                *((_QWORD *)v41 + 20) = v41 + 176;
                *((_QWORD *)v41 + 24) = v41 + 208;
                *((_QWORD *)v41 + 28) = v41 + 240;
                *((_QWORD *)v41 + 32) = v41 + 272;
                *((_QWORD *)v41 + 36) = v41 + 304;
                *((_QWORD *)v41 + 40) = v41 + 336;
                *((_QWORD *)v41 + 44) = v41 + 368;
                *((_QWORD *)v41 + 48) = v41 + 400;
                *((_QWORD *)v41 + 52) = v41 + 432;
                *((_QWORD *)v41 + 13) = 0;
                v41[112] = 0;
                *((_QWORD *)v41 + 17) = 0;
                v41[144] = 0;
                *((_QWORD *)v41 + 21) = 0;
                v41[176] = 0;
                *((_QWORD *)v41 + 25) = 0;
                v41[208] = 0;
                *((_QWORD *)v41 + 29) = 0;
                v41[240] = 0;
                *((_QWORD *)v41 + 33) = 0;
                v41[272] = 0;
                *((_QWORD *)v41 + 37) = 0;
                v41[304] = 0;
                *((_QWORD *)v41 + 41) = 0;
                v41[336] = 0;
                *((_QWORD *)v41 + 45) = 0;
                v41[368] = 0;
                *((_QWORD *)v41 + 49) = 0;
                v41[400] = 0;
                *((_QWORD *)v41 + 53) = 0x800000000LL;
                *((_QWORD *)v41 + 66) = v41 + 544;
                *((_QWORD *)v41 + 67) = 0x600000000LL;
              }
              v179 = v41;
            }
            v41[*v41 + 1] = 0;
            v165 = v167;
            if ( &v42[v44] && !v42 )
              goto LABEL_227;
            if ( (unsigned __int64)v44 > 0xF )
            {
              if ( v44 < 0 )
                goto LABEL_221;
              v45 = (_QWORD *)operator new(v44 + 1);
              v167[0] = v44;
              v165 = v45;
              goto LABEL_140;
            }
            if ( v44 == 1 )
            {
              LOBYTE(v167[0]) = *v42;
              v45 = v167;
              goto LABEL_49;
            }
            v45 = v167;
            if ( v44 )
            {
LABEL_140:
              memcpy(v45, v42, v44);
              v45 = v165;
            }
LABEL_49:
            n = v44;
            *((_BYTE *)v45 + v44) = 0;
            v46 = v179;
            v47 = *(unsigned __int8 *)v179;
            *(_BYTE *)v179 = v47 + 1;
            v48 = (unsigned __int8)v47;
            v49 = 4 * (v47 + 3);
            v50 = (void **)&v46[v49];
            v51 = (_BYTE *)v46[v49];
            if ( v165 == v167 )
            {
              v81 = n;
              if ( n )
              {
                if ( n == 1 )
                  *v51 = v167[0];
                else
                  memcpy(v51, v165, n);
                v81 = n;
                v51 = *v50;
              }
              v50[1] = (void *)v81;
              v51[v81] = 0;
              v51 = v165;
            }
            else
            {
              if ( v51 == (_BYTE *)&v46[v49 + 2] )
              {
                *v50 = v165;
                v50[1] = (void *)n;
                v50[2] = (void *)v167[0];
              }
              else
              {
                v52 = v46[4 * v48 + 14];
                *v50 = v165;
                v50[1] = (void *)n;
                v50[2] = (void *)v167[0];
                if ( v51 )
                {
                  v165 = v51;
                  v167[0] = v52;
                  goto LABEL_53;
                }
              }
              v51 = v167;
              v165 = v167;
            }
LABEL_53:
            n = 0;
            *v51 = 0;
            if ( v165 != v167 )
              operator delete(v165);
            v53 = sub_20F3F70(*v142);
            v54 = (unsigned __int8 *)v179;
            v55 = (_BYTE *)v53;
            v57 = v56;
            if ( !v179 )
            {
              v85 = v180;
              v86 = *(_DWORD *)(v180 + 14976);
              if ( v86 )
              {
                v104 = (unsigned int)(v86 - 1);
                *(_DWORD *)(v180 + 14976) = v104;
                v54 = *(unsigned __int8 **)(v85 + 8 * v104 + 14848);
                v105 = *((unsigned int *)v54 + 134);
                v106 = *((_QWORD *)v54 + 66);
                *v54 = 0;
                *((_DWORD *)v54 + 106) = 0;
                v107 = v106 + (v105 << 6);
                if ( v106 != v107 )
                {
                  v152 = v23;
                  v108 = v107;
                  v155 = v57;
                  v109 = v20;
                  v110 = v54;
                  v111 = v24;
                  v112 = v106;
                  do
                  {
                    while ( 1 )
                    {
                      v108 -= 64;
                      v113 = *(void **)(v108 + 24);
                      if ( v113 == (void *)(v108 + 40) )
                        break;
                      operator delete(v113);
                      if ( v112 == v108 )
                        goto LABEL_192;
                    }
                  }
                  while ( v112 != v108 );
LABEL_192:
                  v24 = v111;
                  v23 = v152;
                  v54 = v110;
                  v20 = v109;
                  v57 = v155;
                }
                *((_DWORD *)v54 + 134) = 0;
              }
              else
              {
                v54 = (unsigned __int8 *)operator new(0x3A0u);
                *v54 = 0;
                *((_QWORD *)v54 + 12) = v54 + 112;
                *((_QWORD *)v54 + 16) = v54 + 144;
                *((_QWORD *)v54 + 20) = v54 + 176;
                *((_QWORD *)v54 + 24) = v54 + 208;
                *((_QWORD *)v54 + 28) = v54 + 240;
                *((_QWORD *)v54 + 32) = v54 + 272;
                *((_QWORD *)v54 + 36) = v54 + 304;
                *((_QWORD *)v54 + 40) = v54 + 336;
                *((_QWORD *)v54 + 44) = v54 + 368;
                *((_QWORD *)v54 + 48) = v54 + 400;
                *((_QWORD *)v54 + 52) = v54 + 432;
                *((_QWORD *)v54 + 13) = 0;
                v54[112] = 0;
                *((_QWORD *)v54 + 17) = 0;
                v54[144] = 0;
                *((_QWORD *)v54 + 21) = 0;
                v54[176] = 0;
                *((_QWORD *)v54 + 25) = 0;
                v54[208] = 0;
                *((_QWORD *)v54 + 29) = 0;
                v54[240] = 0;
                *((_QWORD *)v54 + 33) = 0;
                v54[272] = 0;
                *((_QWORD *)v54 + 37) = 0;
                v54[304] = 0;
                *((_QWORD *)v54 + 41) = 0;
                v54[336] = 0;
                *((_QWORD *)v54 + 45) = 0;
                v54[368] = 0;
                *((_QWORD *)v54 + 49) = 0;
                v54[400] = 0;
                *((_QWORD *)v54 + 53) = 0x800000000LL;
                *((_QWORD *)v54 + 66) = v54 + 544;
                *((_QWORD *)v54 + 67) = 0x600000000LL;
              }
              v179 = v54;
            }
            v54[*v54 + 1] = 0;
            v162 = v164;
            if ( &v55[v57] && !v55 )
              goto LABEL_227;
            if ( (unsigned __int64)v57 > 0xF )
            {
              if ( v57 < 0 )
LABEL_221:
                std::__throw_length_error("basic_string::_M_create");
              v58 = (_QWORD *)operator new(v57 + 1);
              v164[0] = v57;
              v162 = v58;
              goto LABEL_143;
            }
            if ( v57 == 1 )
            {
              LOBYTE(v164[0]) = *v55;
              v58 = v164;
              goto LABEL_61;
            }
            v58 = v164;
            if ( v57 )
            {
LABEL_143:
              memcpy(v58, v55, v57);
              v58 = v162;
            }
LABEL_61:
            v163 = v57;
            *((_BYTE *)v58 + v57) = 0;
            v59 = v179;
            v60 = *(unsigned __int8 *)v179;
            *(_BYTE *)v179 = v60 + 1;
            v61 = (unsigned __int8)v60;
            v62 = 4 * (v60 + 3);
            v63 = &v59[v62];
            v64 = (_BYTE *)v59[v62];
            if ( v162 == v164 )
            {
              v82 = v163;
              if ( v163 )
              {
                if ( v163 == 1 )
                {
                  *v64 = v164[0];
                  v82 = 1;
                }
                else
                {
                  memcpy(v64, v162, v163);
                  v82 = v163;
                }
                v64 = (_BYTE *)*v63;
              }
              v63[1] = v82;
              v64[v82] = 0;
              v64 = v162;
              goto LABEL_65;
            }
            if ( v64 == (_BYTE *)&v59[v62 + 2] )
            {
              *v63 = v162;
              v63[1] = v163;
              v63[2] = v164[0];
            }
            else
            {
              v65 = v59[4 * v61 + 14];
              *v63 = v162;
              v63[1] = v163;
              v63[2] = v164[0];
              if ( v64 )
              {
                v162 = v64;
                v164[0] = v65;
LABEL_65:
                *v64 = 0;
                if ( v162 != v164 )
                  operator delete(v162);
                if ( (_BYTE)v184 )
                {
                  sub_FC7790(v181, (__int64 *)&v179, SHIBYTE(v184));
                  v181 = 0;
                  v184 = 0;
                }
                if ( v182 != v183 )
                  operator delete(v182);
                v66 = (void **)v179;
                if ( !v179 )
                  goto LABEL_87;
                v67 = v180;
                if ( !v180 )
                  goto LABEL_87;
                if ( (unsigned __int64)v179 >= v180 && (unsigned __int64)v179 <= v180 + 14848 )
                {
LABEL_160:
                  v84 = *(unsigned int *)(v67 + 14976);
                  *(_DWORD *)(v67 + 14976) = v84 + 1;
                  *(_QWORD *)(v67 + 8 * v84 + 14848) = v66;
                  goto LABEL_87;
                }
                v68 = *((void ***)v179 + 66);
                v69 = &v68[8 * (unsigned __int64)*((unsigned int *)v179 + 134)];
                if ( v68 != v69 )
                {
                  src = v23;
                  v70 = *((void ***)v179 + 66);
                  do
                  {
                    while ( 1 )
                    {
                      v69 -= 8;
                      v71 = (void **)v69[3];
                      if ( v71 == v69 + 5 )
                        break;
                      operator delete(v71);
                      if ( v70 == v69 )
                        goto LABEL_78;
                    }
                  }
                  while ( v70 != v69 );
LABEL_78:
                  v23 = src;
                  v69 = (void **)v66[66];
                }
                if ( v69 != v66 + 68 )
                  free(v69);
                v72 = (void **)v66[52];
                v73 = v66 + 52;
                if ( v72 != v66 + 54 )
                  free(v72);
                srca = v66 + 12;
                do
                {
                  while ( 1 )
                  {
                    v73 -= 4;
                    if ( *v73 == v73 + 2 )
                      break;
                    operator delete(*v73);
                    if ( v73 == srca )
                      goto LABEL_86;
                  }
                }
                while ( v73 != srca );
                goto LABEL_86;
              }
            }
            v64 = v164;
            v162 = v164;
            goto LABEL_65;
          }
        }
        else
        {
          v158 = 1;
        }
        if ( *(_QWORD *)v20 != *(_QWORD *)v136 )
        {
          if ( *(_DWORD *)(v20 + 8) != 13 )
            goto LABEL_31;
LABEL_104:
          sub_1564820(&v179, a1, a2, 1791);
          if ( (_BYTE)v184 )
          {
            sub_FC7790(v181, (__int64 *)&v179, SHIBYTE(v184));
            v181 = 0;
            v184 = 0;
          }
          if ( v182 != v183 )
            operator delete(v182);
          v66 = (void **)v179;
          if ( !v179 )
            goto LABEL_87;
          v67 = v180;
          if ( !v180 )
            goto LABEL_87;
          if ( (unsigned __int64)v179 >= v180 && (unsigned __int64)v179 <= v180 + 14848 )
            goto LABEL_160;
          v74 = *((void ***)v179 + 66);
          v75 = &v74[8 * (unsigned __int64)*((unsigned int *)v179 + 134)];
          if ( v74 != v75 )
          {
            srcb = v23;
            v76 = *((void ***)v179 + 66);
            do
            {
              while ( 1 )
              {
                v75 -= 8;
                v77 = (void **)v75[3];
                if ( v77 == v75 + 5 )
                  break;
                operator delete(v77);
                if ( v76 == v75 )
                  goto LABEL_115;
              }
            }
            while ( v76 != v75 );
LABEL_115:
            v23 = srcb;
            v75 = (void **)v66[66];
          }
          if ( v75 != v66 + 68 )
            free(v75);
          v78 = (void **)v66[52];
          if ( v78 != v66 + 54 )
            free(v78);
          v79 = v66 + 48;
          srcc = v66 + 8;
          while ( 1 )
          {
            v80 = *v79;
            if ( *v79 != v79 + 2 )
              break;
LABEL_124:
            v79 -= 4;
            if ( v79 == srcc )
              goto LABEL_86;
          }
          while ( 1 )
          {
            operator delete(v80);
            v79 -= 4;
            if ( v79 == srcc )
              break;
            v80 = *v79;
            if ( *v79 == v79 + 2 )
              goto LABEL_124;
          }
LABEL_86:
          operator delete(v66, 0x3A0u);
        }
      }
LABEL_87:
      v23 += 24;
      if ( v24 == v23 )
      {
        if ( v158 )
          goto LABEL_89;
        v91 = *(unsigned int *)(v20 + 24);
        v24 = *(_QWORD *)(v20 + 16);
        v92 = (__m128i *)(v24 + 24 * v91);
        v93 = v91 + 1;
        if ( v91 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 28) )
          goto LABEL_205;
LABEL_179:
        *v92 = _mm_loadu_si128(v143);
        v92[1].m128i_i64[0] = v143[1].m128i_i64[0];
        ++*(_DWORD *)(v20 + 24);
LABEL_89:
        v21 += 6;
        if ( v144 == v21 )
        {
LABEL_90:
          v19 = 1;
          v20 += 56;
          if ( v145 == v20 )
          {
LABEL_91:
            if ( v19 )
              goto LABEL_92;
            v17 = *(unsigned int *)(v146 + 16);
            v145 = *(_QWORD *)(v146 + 8);
            v127 = v145 + 56 * v17;
LABEL_213:
            v128 = v17 + 1;
            if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v146 + 20) )
            {
              v131 = v146 + 8;
              if ( v145 > v136 || v127 <= v136 )
              {
                sub_EC11D0(v131, v128);
                v127 = *(_QWORD *)(v146 + 8) + 56LL * *(unsigned int *)(v146 + 16);
              }
              else
              {
                sub_EC11D0(v131, v128);
                v132 = *(_QWORD *)(v146 + 8);
                v150 = v132 + v136 - v145;
                v127 = v132 + 56LL * *(unsigned int *)(v146 + 16);
              }
            }
            *(_QWORD *)v127 = *(_QWORD *)v150;
            v129 = *(_DWORD *)(v150 + 8);
            *(_QWORD *)(v127 + 24) = 0x100000000LL;
            *(_DWORD *)(v127 + 8) = v129;
            v130 = *(_DWORD *)(v150 + 24);
            *(_QWORD *)(v127 + 16) = v127 + 32;
            if ( v130 )
              sub_15070E0((__int64 *)(v127 + 16), (__int64 *)(v150 + 16));
            ++*(_DWORD *)(v146 + 16);
LABEL_92:
            v136 += 56LL;
            if ( v161 == v136 )
            {
LABEL_93:
              v15 = 1;
LABEL_14:
              v146 += 136;
              if ( v148 != v146 )
                goto LABEL_15;
              if ( !v15 )
              {
                v14 = *(unsigned int *)(a3 + 8);
                v148 = *(_QWORD *)a3;
                v133 = *(_QWORD *)a3 + 136 * v14;
                goto LABEL_223;
              }
LABEL_95:
              v142 += 34;
              if ( (unsigned int *)v160 == v142 )
                goto LABEL_96;
              goto LABEL_12;
            }
            goto LABEL_18;
          }
          goto LABEL_21;
        }
        goto LABEL_23;
      }
    }
  }
  v5 = *(unsigned int *)(a1 + 16);
LABEL_3:
  sub_1564820(&v179, a1, v5, 1792);
  sub_1503AF0((unsigned __int8 **)&v179, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL) > 0x32u);
  sub_AEA040((__int64)&v179);
  return 1;
}
