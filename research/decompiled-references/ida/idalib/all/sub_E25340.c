__int64 __fastcall sub_E25340(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  int v13; // r13d
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // r13
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  void *v57; // rbp
  __int64 v58; // r12
  char *v59; // rax
  char *v60; // rax
  char *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rsi
  _QWORD *v64; // rax
  unsigned __int64 v65; // rsi
  __int64 v66; // r13
  __int64 v67; // rax
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rsi
  __int64 v75; // rbp
  __int64 v76; // r12
  __int64 v77; // rbp
  __int64 v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r13
  unsigned int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  unsigned __int64 v101; // rcx
  __int64 v102; // r13
  unsigned __int64 v103; // rax
  __int64 v104; // r13
  unsigned int v105; // esi
  unsigned int v106; // ecx
  _QWORD *v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r14
  unsigned int v110; // r13d
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // r13
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rbp
  __int64 v123; // r12
  __int64 v124; // rsi
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // r14
  unsigned int v130; // eax
  char v131; // al
  void *v132; // r13
  char v133; // r14
  __int64 v134; // rbp
  __int64 v135; // rcx
  __int64 v136; // rdx
  int v137; // eax
  int v138; // esi
  __int64 v139; // r8
  bool v140; // zf
  unsigned __int64 v141; // rax
  int v142; // r11d
  _QWORD *v143; // rdi
  int v144; // ecx
  __int64 v146; // [rsp+10h] [rbp-138h]
  char v147; // [rsp+18h] [rbp-130h]
  __int64 v148; // [rsp+18h] [rbp-130h]
  unsigned __int64 v149; // [rsp+18h] [rbp-130h]
  unsigned __int64 v150; // [rsp+18h] [rbp-130h]
  __int64 v151; // [rsp+18h] [rbp-130h]
  __int64 v152; // [rsp+20h] [rbp-128h]
  __int64 v153; // [rsp+28h] [rbp-120h]
  bool v154; // [rsp+36h] [rbp-112h]
  char v155; // [rsp+37h] [rbp-111h]
  __int64 v156; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v157; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v158; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v159; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v160; // [rsp+78h] [rbp-D0h]
  int v161; // [rsp+88h] [rbp-C0h]
  __m128i v162; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v163; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v164; // [rsp+A8h] [rbp-A0h]
  int v165; // [rsp+B8h] [rbp-90h]
  __int64 v166; // [rsp+C0h] [rbp-88h]
  int v167; // [rsp+C8h] [rbp-80h]
  void *ptr; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v169; // [rsp+D8h] [rbp-70h]
  _BYTE v170[104]; // [rsp+E0h] [rbp-68h] BYREF

  ptr = v170;
  v169 = 0x500000000LL;
  v5 = a2[1].m128i_i32[2];
  if ( !v5 )
  {
    v6 = a2[2].m128i_i64[0];
    if ( !v6 )
    {
LABEL_3:
      v159 = 0;
      sub_A4F2D0((__int64)&v163, 0, 0, 0);
      *(_BYTE *)(a1 + 4) &= ~1u;
      v7 = v164;
      *(_DWORD *)a1 = 0;
      v8 = v163;
      sub_A513D0(a1);
      sub_A51270(a1, v8, v7, &v159, v170, 0, 0, 1);
      goto LABEL_4;
    }
    goto LABEL_12;
  }
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      sub_A4F1C0(&v159, a2[2].m128i_i64[0]);
      v163 = 0;
      v120 = sub_A4F300(v159);
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      v122 = v121;
      v123 = v120;
      sub_A513D0(a1);
      sub_A51270(a1, v123, v122, &v163, nullptr, 0, 0, 0);
      goto LABEL_4;
    }
    v10 = a2[2].m128i_i64[1];
    if ( !v10 && !a2->m128i_i64[0] )
      goto LABEL_3;
    if ( v5 == 1 )
    {
      v159 = a2->m128i_i64[0] + v10;
      sub_A4F2D0((__int64)&v163, 0, 0, 0);
      *(_BYTE *)(a1 + 4) &= ~1u;
      v77 = v164;
      *(_DWORD *)a1 = 0;
      v78 = v163;
      sub_A513D0(a1);
      sub_A51270(a1, v78, v77, &v159, v170, 0, 0, 0);
      goto LABEL_4;
    }
    v6 = a2[2].m128i_i64[0];
LABEL_12:
    v11 = *(_QWORD *)(v6 + 32);
    v12 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_QWORD *)v11 & 2) != 0 )
    {
      if ( *(_BYTE *)(v6 + 28) )
      {
        v40 = *(unsigned int *)(v11 + 24);
        v166 = v6;
        v164 = 0;
        v163 = v40;
        v167 = v40;
        v165 = 0;
        sub_E1E330(v6, (__int64)&v163);
        v41 = sub_CFDF60((__int64)&v163);
        sub_CEF7B0(v41, a3, v42, v43, v44);
        if ( !v165 )
          sub_E22AD0(&v163);
        v45 = sub_A4F2F0(++dword_2CD7480);
        v153 = v46;
        v152 = v45;
      }
      else
      {
        sub_A4F2D0((__int64)&v163, v12, 0, 0);
        v153 = v164;
        v152 = v163;
      }
    }
    else
    {
      sub_A4F2A0((__int64)&v163, v12, 0, 0);
      v153 = v164;
      v152 = v163;
    }
    v13 = a2[1].m128i_i32[2];
    if ( v13 )
    {
      v156 = 0;
      if ( v13 == 1 )
      {
        v118 = *(_QWORD *)a2[2].m128i_i64[0];
        if ( (v118 & 2) != 0 || (v15 = v118 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          v161 = 1;
          v155 = sub_CFE6D0((__int64)a2);
          v119 = a2->m128i_i64[0];
          v160 = 0;
          v159 = v119;
          v162 = _mm_loadu_si128(a2 + 2);
          v154 = 1;
LABEL_76:
          v57 = ptr;
          v58 = (unsigned int)v169;
          v59 = (char *)ptr + 8 * (unsigned int)v169;
          if ( ptr != v59 )
          {
            v60 = v59 - 8;
            if ( v60 > ptr )
            {
              v61 = (char *)ptr;
              do
              {
                v62 = *(_QWORD *)v61;
                v63 = *(_QWORD *)v60;
                v61 += 8;
                v60 -= 8;
                *((_QWORD *)v61 - 1) = v63;
                *((_QWORD *)v60 + 1) = v62;
              }
              while ( v61 < v60 );
            }
          }
          *(_BYTE *)(a1 + 4) &= ~1u;
          *(_DWORD *)a1 = 0;
          sub_A513D0(a1);
          if ( v154 )
            sub_A51270(a1, v152, v153, &v156, v57, v58, v155, 0);
          else
            sub_A510D0(a1, v152, v153, &v156, 0);
          if ( !v161 )
            sub_E22AD0(&v159);
          goto LABEL_4;
        }
LABEL_19:
        v154 = 1;
        if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 26 <= 0x1A )
          v154 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 > 1;
LABEL_21:
        v161 = v13;
        v155 = sub_CFE6D0((__int64)a2);
        v16 = a2->m128i_i64[0];
        v160 = 0;
        v159 = v16;
        v162 = _mm_loadu_si128(a2 + 2);
        if ( !v13 )
        {
          sub_E22AB0((__int64)&v159);
LABEL_23:
          if ( v161 )
            goto LABEL_76;
          while ( 1 )
          {
            v17 = sub_CFE580((__int64)&v159);
            v18 = v162.m128i_i64[0];
            v19 = v162.m128i_u32[2];
            v147 = v17;
            if ( v17 )
            {
              v20 = *(_QWORD *)(v162.m128i_i64[0] + 32);
            }
            else
            {
              v56 = *(_QWORD *)sub_CFDF60((__int64)&v159);
              if ( (v56 & 2) == 0 && (v56 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                goto LABEL_28;
              v20 = *(_QWORD *)(v18 + v19 + 32);
            }
            if ( (!*(_BYTE *)(v20 + 60) || v19 == v159) && (v19 <= 0xF || *(char *)(v18 + v19 + 28) >= 0) )
              goto LABEL_76;
LABEL_28:
            v21 = *(_QWORD *)(v18 + 32);
            if ( *(_DWORD *)(v21 + 24) != v19 && v19 )
              v21 = *(_QWORD *)(v18 + v19 + 32);
            if ( !*(_BYTE *)(v21 + 60) )
            {
              v22 = sub_CFDF60((__int64)&v159);
              if ( *(_BYTE *)(v22 + 60) && v19 != v159 )
                goto LABEL_34;
LABEL_59:
              if ( v19 <= 0xF || *(char *)(v18 + v19 + 28) >= 0 )
              {
                v146 = *(_QWORD *)v22;
                v47 = *(_BYTE *)((*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7F;
                if ( (unsigned int)(v47 - 49) <= 2 )
                {
                  sub_D8B030((__int64)&v163, (__int64)&v159);
                  sub_E23300((__int64)&v159, (const __m128i *)&v163);
                  v48 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( !v165 )
                  {
                    sub_E22AD0(&v163);
                    v48 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                  }
                  v49 = *(_QWORD *)(v48 + 16);
                  if ( (v49 & 4) != 0 )
                    v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
                  else
                    v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
                  v148 = v48;
                  if ( (*(_BYTE *)(v50 + 8) & 0x7Fu) - 58 > 3 )
                    BUG();
                  v51 = 0;
                  if ( *(char *)(v50 - 36) >= 0 )
                  {
                    v79 = v50 - 64;
                    v80 = sub_EDE580(a3, v79);
                    v84 = v148;
                    v85 = v80;
                    if ( *(char *)(v148 + 29) < 0 )
                      v84 = sub_B72720(v148);
                    v86 = *(_DWORD *)(v84 + 68);
                    if ( (v86 & 0xFFFFFFF0) == 0 )
                    {
                      v151 = v84;
                      sub_B7EAB0(v84, v79, v81, v84, v82, v83);
                      v86 = *(_DWORD *)(v151 + 68);
                    }
                    v51 = sub_A97FF0(a3, *(_QWORD *)(*(_QWORD *)(v85 + 48) + 8LL * ((v86 >> 4) - 1)));
                  }
                  goto LABEL_68;
                }
                if ( (unsigned int)(v47 - 59) > 2 )
                {
                  sub_D8B030((__int64)&v163, (__int64)&v159);
                  sub_E23300((__int64)&v159, (const __m128i *)&v163);
                  if ( !v165 )
                    sub_E22AD0(&v163);
                  v52 = 0;
                  goto LABEL_69;
                }
                if ( (v146 & 2) == 0 && !v147 && (*(_BYTE *)(v18 + v19 + 28) & 8) != 0 )
                {
                  v149 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                  sub_D8B030((__int64)&v163, (__int64)&v159);
                  sub_E23300((__int64)&v159, (const __m128i *)&v163);
                  if ( !v165 )
                    sub_E22AD0(&v163);
                  v87 = sub_CFDF60((__int64)&v159);
                  v91 = sub_EDE580(a3, **(_QWORD **)(v87 + 32));
                  v92 = *(_QWORD *)(v149 + 128);
                  v157 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v92
                    || (sub_7052B0(
                          (__int64 *)(*(_QWORD *)(v149 + 104) + 96LL),
                          *(_QWORD *)(v149 + 104),
                          v88,
                          v149,
                          v89,
                          v90),
                        (v92 = *(_QWORD *)(v149 + 128)) != 0) )
                  {
                    v92 = *(_QWORD *)(v92 + 88);
                  }
                  v93 = *(_QWORD *)(v91 + 72);
                  v157 = v92;
                  if ( (unsigned __int8)sub_A6DDE0((__int64 *)(v93 + 88), (__int64 *)&v157, &v158) )
                  {
                    v95 = *(_QWORD *)(v158 + 8);
                    goto LABEL_122;
                  }
                  v135 = *(unsigned int *)(v93 + 104);
                  v136 = v158;
                  v137 = *(_DWORD *)(v93 + 96) + 1;
                  v138 = 2 * v135;
                  v139 = (unsigned int)(4 * v137);
                  v163 = v158;
                  if ( (unsigned int)v139 >= 3 * (int)v135 )
                    goto LABEL_174;
                  if ( (int)v135 - *(_DWORD *)(v93 + 100) - v137 <= (unsigned int)v135 >> 3 )
                  {
                    v138 = v135;
LABEL_174:
                    sub_A921D0((__int64 **)(v93 + 88), v138, v158, v135, v139, v94);
                    sub_A6DDE0((__int64 *)(v93 + 88), (__int64 *)&v157, &v163);
                    v136 = v163;
                    v137 = *(_DWORD *)(v93 + 96) + 1;
                  }
                  v140 = *(_QWORD *)v136 == -4096;
                  *(_DWORD *)(v93 + 96) = v137;
                  if ( !v140 )
                    --*(_DWORD *)(v93 + 100);
                  v141 = v157;
                  *(_QWORD *)(v136 + 8) = 0;
                  *(_BYTE *)(v136 + 16) = 0;
                  *(_QWORD *)v136 = v141;
                  v95 = 0;
LABEL_122:
                  v156 += v95;
                  v52 = 4;
LABEL_69:
                  sub_A4F680((__int64 *)&v163, v52 | v146 & 0xFFFFFFFFFFFFFFF8LL);
                  v53 = (unsigned int)v169;
                  v54 = v163;
                  v55 = (unsigned int)v169 + 1LL;
                  if ( v55 > HIDWORD(v169) )
                  {
                    sub_2237220(&ptr, v170, v55, 8);
                    v53 = (unsigned int)v169;
                  }
                  *((_QWORD *)ptr + v53) = v54;
                  LODWORD(v169) = v169 + 1;
                  goto LABEL_23;
                }
                v150 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                sub_D8B030((__int64)&v163, (__int64)&v159);
                sub_E23300((__int64)&v159, (const __m128i *)&v163);
                if ( !v165 )
                  sub_E22AD0(&v163);
                v96 = sub_CFDF60((__int64)&v159);
                v97 = sub_EDE580(a3, **(_QWORD **)(v96 + 32));
                v101 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                v102 = v97;
                v158 = v146 & 0xFFFFFFFFFFFFFFFCLL;
                v103 = *(_QWORD *)(v150 + 128);
                if ( v103
                  || (sub_7052B0(
                        (__int64 *)(*(_QWORD *)(v150 + 104) + 96LL),
                        *(_QWORD *)(v150 + 104),
                        v98,
                        v150,
                        v99,
                        v100),
                      v101 = v146 & 0xFFFFFFFFFFFFFFFCLL,
                      (v103 = *(_QWORD *)(v150 + 128)) != 0) )
                {
                  v103 = *(_QWORD *)(v103 + 88);
                }
                v104 = *(_QWORD *)(v102 + 72);
                v158 = v103;
                v105 = *(_DWORD *)(v104 + 80);
                if ( v105 )
                {
                  v100 = *(_QWORD *)(v104 + 64);
                  v106 = (v105 - 1) & (((unsigned int)v103 >> 9) ^ ((unsigned int)v103 >> 4));
                  v107 = (_QWORD *)(v100 + 16LL * v106);
                  v108 = *v107;
                  if ( v103 == *v107 )
                  {
LABEL_129:
                    v51 = v107[1];
                    goto LABEL_68;
                  }
                  v142 = 1;
                  v143 = nullptr;
                  if ( v108 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v108 == -8192 && !v143 )
                        v143 = v107;
                      v106 = (v105 - 1) & (v142 + v106);
                      v107 = (_QWORD *)(v100 + 16LL * v106);
                      v108 = *v107;
                      if ( v103 == *v107 )
                        goto LABEL_129;
                      if ( v108 == -4096 )
                      {
                        if ( v143 )
                          goto LABEL_177;
                        break;
                      }
                      ++v142;
                    }
                  }
                  v143 = v107;
LABEL_177:
                  v144 = *(_DWORD *)(v104 + 72);
                  v163 = (unsigned __int64)v143;
                  v98 = (unsigned int)(v144 + 1);
                  v101 = 3 * v105;
                  v99 = (unsigned int)(4 * v98);
                  if ( (unsigned int)v99 < (unsigned int)v101 )
                  {
                    v101 = v105 - *(_DWORD *)(v104 + 76) - (unsigned int)v98;
                    v99 = v105 >> 3;
                    if ( (unsigned int)v101 > (unsigned int)v99 )
                      goto LABEL_179;
                    goto LABEL_184;
                  }
                }
                else
                {
                  v163 = 0;
                }
                v105 *= 2;
LABEL_184:
                sub_7055A0(v104 + 64, v105, v98, v101, v99, v100);
                sub_A6DD20((__int64 *)(v104 + 64), (__int64 *)&v158, &v163);
                v103 = v158;
                v143 = (_QWORD *)v163;
                LODWORD(v98) = *(_DWORD *)(v104 + 72) + 1;
LABEL_179:
                v140 = *v143 == -4096;
                *(_DWORD *)(v104 + 72) = v98;
                if ( !v140 )
                  --*(_DWORD *)(v104 + 76);
                *v143 = v103;
                v51 = 0;
                v143[1] = 0;
LABEL_68:
                v156 += v51;
                v52 = 0;
                goto LABEL_69;
              }
              goto LABEL_34;
            }
            if ( v159 == v19 )
            {
              if ( !(unsigned __int8)sub_E23120((__int64)&v159) )
              {
                v64 = (_QWORD *)sub_CFDF60((__int64)&v159);
                if ( (*v64 & 2) != 0 )
                {
                  v65 = 0;
                  v66 = 0;
                }
                else
                {
                  v65 = *v64 & 0xFFFFFFFFFFFFFFF8LL;
                  v66 = *v64 & 0xFFFFFFFFFFFFFFFCLL;
                }
                sub_A4F680((__int64 *)&v163, v65);
                v67 = (unsigned int)v169;
                v68 = v163;
                v69 = (unsigned int)v169 + 1LL;
                if ( v69 > HIDWORD(v169) )
                {
                  sub_2237220(&ptr, v170, v69, 8);
                  v67 = (unsigned int)v169;
                }
                *((_QWORD *)ptr + v67) = v68;
                LODWORD(v169) = v169 + 1;
                if ( v66 && (*(_BYTE *)(v66 + 28) & 0x7Fu) - 49 <= 2 )
                {
                  v70 = *(_QWORD *)(v66 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v66 + 16) & 4) != 0 )
                    v70 = *(_QWORD *)v70;
                  if ( (*(_BYTE *)(v70 + 8) & 0x7Fu) - 58 > 3 )
                    BUG();
                  v71 = 0;
                  if ( *(char *)(v70 - 36) >= 0 )
                  {
                    v124 = v70 - 64;
                    v129 = sub_EDE580(a3, v124);
                    if ( *(char *)(v66 + 29) < 0 )
                      v66 = sub_B72720(v66);
                    v130 = *(_DWORD *)(v66 + 68);
                    if ( (v130 & 0xFFFFFFF0) == 0 )
                    {
                      sub_B7EAB0(v66, v124, v125, v126, v127, v128);
                      v130 = *(_DWORD *)(v66 + 68);
                    }
                    v71 = sub_A97FF0(a3, *(_QWORD *)(*(_QWORD *)(v129 + 48) + 8LL * ((v130 >> 4) - 1)));
                  }
                  v156 += v71;
                }
                sub_D8B030((__int64)&v163, (__int64)&v159);
                goto LABEL_48;
              }
              sub_CFE160((__int64)&v163, (__int64)&v159);
              sub_E23300((__int64)&v159, (const __m128i *)&v163);
              if ( !v165 )
                sub_E22AD0(&v163);
              v109 = sub_CFDF60((__int64)&v159);
              v110 = sub_CFE630((unsigned int *)&v159);
              v114 = sub_CEF620(v109, (__int64)&v163, v111, v112, v113);
              v156 += v110 * sub_AAE980(a3, v114);
              sub_E230D0((__int64)&v163, (__int64)&v159);
              if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_CFE250(
                                                                                      (__int64)&v163,
                                                                                      (__int64)&v159)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
                                   - 2) <= 4u )
              {
                if ( !v165 )
                  sub_E22AD0(&v163);
                v115 = (unsigned int)v169;
                v116 = (unsigned int)v169 + 1LL;
                if ( v116 > HIDWORD(v169) )
                {
                  sub_2237220(&ptr, v170, v116, 8);
                  v115 = (unsigned int)v169;
                }
                *((_QWORD *)ptr + v115) = v110;
                LODWORD(v169) = v169 + 1;
                goto LABEL_47;
              }
LABEL_156:
              if ( !v165 )
                sub_E22AD0(&v163);
              goto LABEL_47;
            }
            v22 = sub_CFDF60((__int64)&v159);
            if ( !*(_BYTE *)(v22 + 60) )
              goto LABEL_59;
LABEL_34:
            sub_CFE160((__int64)&v163, (__int64)&v159);
            v23 = &v163;
            sub_E23300((__int64)&v159, (const __m128i *)&v163);
            if ( !v165 )
              sub_E22AD0(&v163);
            v24 = sub_CFDF60((__int64)&v159);
            if ( (unsigned __int8)sub_CFE6D0((__int64)&v159) )
            {
              v23 = (unsigned __int64 *)&v159;
              LODWORD(v28) = -1;
              sub_E230D0((__int64)&v163, (__int64)&v159);
              if ( !v165 )
              {
                v117 = sub_CFDF60((__int64)&v163);
                v28 = *(unsigned int *)(v117 + 20) / (unsigned __int64)sub_CFE390((__int64)&v163);
                sub_E22AD0(&v163);
              }
              v155 = 0;
            }
            else
            {
              LODWORD(v28) = sub_CFE630((unsigned int *)&v159);
            }
            v29 = sub_CEF620(v24, (__int64)v23, v25, v26, v27);
            v33 = sub_F63240(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), v23, v30, v31, v32);
            if ( !v33 || sub_B7E870(v33, (__int64)v23, v34, v35, v36, v37) )
              v156 += (unsigned int)v28 * sub_AAE980(a3, v29);
            sub_E230D0((__int64)&v163, (__int64)&v159);
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_CFE250(
                                                                                    (__int64)&v163,
                                                                                    (__int64)&v159)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 2) > 4u )
              goto LABEL_156;
            if ( !v165 )
              sub_E22AD0(&v163);
            v38 = (unsigned int)v169;
            v39 = (unsigned int)v169 + 1LL;
            if ( v39 > HIDWORD(v169) )
            {
              sub_2237220(&ptr, v170, v39, 8);
              v38 = (unsigned int)v169;
            }
            *((_QWORD *)ptr + v38) = (unsigned int)v28;
            LODWORD(v169) = v169 + 1;
LABEL_47:
            sub_E230D0((__int64)&v163, (__int64)&v159);
LABEL_48:
            sub_E23300((__int64)&v159, (const __m128i *)&v163);
            if ( v165 )
              goto LABEL_23;
            sub_E22AD0(&v163);
            if ( v161 )
              goto LABEL_76;
          }
        }
        goto LABEL_76;
      }
      if ( (unsigned int)(v13 - 2) <= 1 )
        BUG();
    }
    else
    {
      if ( *(_DWORD *)(sub_CFDF60((__int64)a2) + 20) == -1 )
      {
        v131 = sub_CFE6D0((__int64)a2);
        *(_BYTE *)(a1 + 4) &= ~1u;
        v132 = ptr;
        *(_DWORD *)a1 = 0;
        v133 = v131;
        v134 = (unsigned int)v169;
        v163 = 0;
        sub_A513D0(a1);
        sub_A51270(a1, v152, v153, &v163, v132, v134, v133, 0);
        goto LABEL_4;
      }
      v156 = 0;
    }
    v154 = 1;
    v14 = **(_QWORD **)(a2[2].m128i_i64[0] + 32);
    if ( (v14 & 2) != 0 )
      goto LABEL_21;
    v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v15 )
      goto LABEL_21;
    goto LABEL_19;
  }
  v72 = a2[2].m128i_i64[0];
  if ( !v72 )
    goto LABEL_3;
  v73 = *(_QWORD *)(v72 + 16);
  v159 = a2->m128i_i64[0];
  v74 = v73 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v73 & 4) != 0 || !v74 )
    sub_A4F2D0((__int64)&v163, v74, 0, 0);
  else
    sub_A4F2A0((__int64)&v163, v74, 0, 0);
  *(_BYTE *)(a1 + 4) &= ~1u;
  v75 = v164;
  *(_DWORD *)a1 = 0;
  v76 = v163;
  sub_A513D0(a1);
  sub_A51270(a1, v76, v75, &v159, nullptr, 0, 0, 0);
LABEL_4:
  if ( ptr != v170 )
    free(ptr);
  return a1;
}
