__int64 __fastcall sub_C7C900(__m128i *a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // r15d
  __int64 v13; // rax
  void *v14; // rcx
  char v15; // al
  __int64 v16; // rsi
  void *v17; // rcx
  char v18; // al
  __int64 v19; // rsi
  const __m128i *v20; // r13
  __int64 v21; // rdx
  __int8 v22; // al
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // r13
  char v31; // al
  __int64 v32; // rdx
  void *v33; // rdi
  void *v34; // rcx
  char v35; // al
  __m128i *v36; // rsi
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rdx
  char v47; // al
  unsigned int v48; // eax
  unsigned int v49; // r14d
  __int64 v50; // rax
  __int64 v51; // r12
  bool v52; // zf
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // rdi
  __int64 v57; // r8
  int v58; // r13d
  __int64 v59; // rdi
  __int64 v60; // rcx
  unsigned int v61; // r13d
  unsigned int v62; // eax
  void *v63; // rcx
  bool v64; // al
  void *v65; // rdi
  unsigned __int8 **v66; // rax
  unsigned __int8 **v67; // r14
  __int64 v68; // rdx
  bool v69; // r14
  const __m128i *v70; // r12
  __int64 v71; // rdx
  __int8 v72; // al
  char v73; // al
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // r9d
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  __int64 v81; // rdi
  unsigned __int8 **v82; // rax
  unsigned __int8 **v83; // r14
  void *v84; // rcx
  char v85; // al
  __int64 v86; // rsi
  __int64 v87; // r8
  int v88; // r9d
  char v89; // al
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // rcx
  unsigned int v94; // ecx
  unsigned __int64 v95; // rsi
  __int64 v96; // rdi
  unsigned __int64 v97; // r9
  unsigned __int64 v98; // rsi
  char v99; // al
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // r15
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // r15
  unsigned __int64 v113; // r11
  unsigned int v114; // eax
  void *v115; // rax
  __int64 v116; // rdi
  unsigned __int64 v117; // rax
  char v118; // al
  int v119; // edx
  void *v120; // r14
  __int64 v121; // rdi
  unsigned __int8 **v122; // rbx
  __int64 v123; // r14
  __int64 v124; // rax
  __int64 v125; // rdi
  unsigned __int8 **v126; // rax
  unsigned __int8 **v127; // rbx
  __int64 v128; // rsi
  unsigned __int8 **v129; // rax
  unsigned __int8 **v130; // rbx
  void *v131; // rax
  void **v132; // rdi
  unsigned __int8 **v133; // rax
  bool v134; // al
  __int64 v135; // rax
  char v136; // al
  unsigned __int8 **v137; // rax
  __int64 v138; // rax
  unsigned __int8 **v139; // rax
  unsigned __int8 **v140; // rax
  unsigned __int8 **v141; // rbx
  unsigned __int8 **v142; // rax
  unsigned __int8 **v143; // rax
  unsigned __int8 **v144; // rbx
  unsigned __int8 **v145; // rax
  unsigned __int8 **v146; // rbx
  char v147; // al
  unsigned __int8 **v148; // rax
  unsigned __int8 **v149; // rax
  int v150; // [rsp+8h] [rbp-200h]
  __int64 v151; // [rsp+10h] [rbp-1F8h]
  bool v152; // [rsp+10h] [rbp-1F8h]
  void *v153; // [rsp+18h] [rbp-1F0h]
  void *v154; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v155; // [rsp+18h] [rbp-1F0h]
  __int64 v156; // [rsp+20h] [rbp-1E8h] BYREF
  unsigned __int64 v157; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v158; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v159; // [rsp+38h] [rbp-1D0h] BYREF
  void *v160; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v161; // [rsp+48h] [rbp-1C0h]
  char v162; // [rsp+4Ch] [rbp-1BCh]
  void *v163; // [rsp+50h] [rbp-1B8h] BYREF
  signed __int64 v164; // [rsp+58h] [rbp-1B0h]
  __int64 v165; // [rsp+60h] [rbp-1A8h] BYREF
  __m128i v166; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v167[48]; // [rsp+80h] [rbp-188h] BYREF
  void *v168[2]; // [rsp+B0h] [rbp-158h] BYREF
  unsigned __int64 v169; // [rsp+C0h] [rbp-148h]
  char v170[24]; // [rsp+C8h] [rbp-140h] BYREF
  __int64 *v171; // [rsp+E0h] [rbp-128h]
  __int64 v172; // [rsp+F0h] [rbp-118h] BYREF
  char v173; // [rsp+130h] [rbp-D8h]
  __int8 v174; // [rsp+131h] [rbp-D7h]
  void *v175[2]; // [rsp+140h] [rbp-C8h] BYREF
  unsigned __int64 v176; // [rsp+150h] [rbp-B8h] BYREF
  char v177[16]; // [rsp+158h] [rbp-B0h] BYREF
  __int64 v178; // [rsp+168h] [rbp-A0h]
  void *ptr; // [rsp+170h] [rbp-98h]
  __int64 v180; // [rsp+178h] [rbp-90h]
  _BYTE v181[64]; // [rsp+180h] [rbp-88h] BYREF
  char v182; // [rsp+1C0h] [rbp-48h]
  __int8 v183; // [rsp+1C1h] [rbp-47h]

  v6 = sub_BFBE70(a2);
  v10 = (unsigned int)(v6 - 206);
  if ( (unsigned int)v10 <= 0x13 )
  {
    v13 = 528385;
    if ( _bittest64(&v13, v10) )
      goto LABEL_3;
  }
  else if ( v6 == 1063 )
  {
LABEL_3:
    v11 = a1->m128i_i64[1];
    v12 = 1;
    sub_A4F2D0((__int64)v175, a2, 0, 0);
    sub_C24210(v11, (__int64)v175[0], (__int64 *)v175[1], 0);
    return v12;
  }
  if ( a3 == 947 )
  {
LABEL_96:
    v152 = 1;
    v68 = (a3 - 1479) & 0xFFFFFFFD;
    if ( ((a3 - 1479) & 0xFFFFFFFD) != 0 )
    {
      v68 = (a3 - 1478) & 0xFFFFFFFD;
      v152 = ((a3 - 1478) & 0xFFFFFFFD) == 0;
    }
    v69 = a3 == 1481 || a3 == 948;
    if ( !v69 )
      v69 = a3 == 1480 || a3 == 947;
    v12 = sub_C48CF0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v68, v7, v8, v9);
    if ( !(_BYTE)v12 )
      return v12;
    v70 = (const __m128i *)a1->m128i_i64[1];
    *(__m128i *)v168 = _mm_loadu_si128(v70);
    v169 = v70[1].m128i_u64[0];
    sub_C133F0((__int64)v170, (__int64)&v70[1].m128i_i64[1]);
    v173 = v70[8].m128i_i8[0] & 1 | v173 & 0xFE;
    v71 = a1->m128i_i64[0];
    v173 = v70[8].m128i_i8[0] & 2 | v173 & 0xFD;
    v72 = v70[8].m128i_i8[1];
    v175[0] = nullptr;
    v174 = v72;
    ptr = v181;
    v180 = 0x800000000LL;
    v73 = *(_BYTE *)(a2 + 2);
    v175[1] = nullptr;
    v176 = 0;
    v177[0] |= 1u;
    v183 = 0;
    v74 = *(_QWORD *)(a2 + 8 * (((v73 & 8) != 0) + 1LL) + 40);
    v166.m128i_i64[0] = v71;
    v178 = 0;
    v166.m128i_i64[1] = (__int64)v175;
    v167[0] = 0;
    v12 = sub_C48CF0(&v166, v74, v71, v75, v76, v77);
    if ( !(_BYTE)v12 )
      goto LABEL_102;
    v99 = *(_BYTE *)(a2 + 2);
    v100 = a1->m128i_i64[0];
    v161 = 1;
    v160 = nullptr;
    v162 = 0;
    v12 = sub_C47260(*(_QWORD *)(a2 + 8 * (((v99 & 8) != 0) + 1LL) + 48), (__int64)&v160, v100, v78, v79, v80);
    if ( !(_BYTE)v12 )
      goto LABEL_191;
    if ( v161 <= 0x40 )
    {
      if ( !v160 )
        goto LABEL_102;
    }
    else
    {
      LODWORD(v156) = v161;
      if ( (_DWORD)v156 == (unsigned int)sub_2206780(&v160) )
      {
LABEL_193:
        if ( v160 )
          operator delete[](v160);
LABEL_102:
        if ( ptr != v181 )
          free(ptr);
        v33 = v171;
        if ( v171 == &v172 )
          return v12;
        goto LABEL_31;
      }
    }
    if ( !sub_A4F700(v175) || !sub_A4F700(v168) )
    {
      v166.m128i_i8[4] &= ~1u;
      v166.m128i_i32[0] = 0;
      v132 = v168;
      if ( !sub_A4F700(v175) )
        v132 = v175;
      sub_C0F890((__int64)v132, (__int64)&v166);
      v133 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2437, 0);
      if ( v133 )
      {
        v155 = v133;
        sub_C11320(v133, v69);
        sub_C11320(v155, v152);
        v134 = sub_A4F700(v175);
        sub_C11320(v155, v134);
        sub_A53AF0(
          (__int64)&v163,
          &v166,
          *(_QWORD *)(a1->m128i_i64[0] + 16),
          *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL));
        sub_AEC220(v155, v163, v164);
      }
      else
      {
        sub_A4F700(v175);
        sub_A53AF0(
          (__int64)&v163,
          &v166,
          *(_QWORD *)(a1->m128i_i64[0] + 16),
          *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL));
      }
      if ( v163 != &v165 )
        operator delete(v163);
      if ( v166.m128i_i32[0] > 1u )
        sub_A4F8E0(v166.m128i_i32);
      goto LABEL_191;
    }
    if ( ((v170[0] | v177[0]) & 1) != 0 )
    {
LABEL_191:
      v12 = 0;
      goto LABEL_192;
    }
    v158 = sub_C0FCA0((__int64)v170, *(_QWORD *)(a1->m128i_i64[0] + 16), v101, v102, v103, v104);
    v109 = sub_C0FCA0((__int64)v177, *(_QWORD *)(a1->m128i_i64[0] + 16), v105, v106, v107, v108);
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[v158 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( !(unsigned __int8)sub_F62670(*(_QWORD *)(v158 & 0xFFFFFFFFFFFFFFF0LL), 0) )
      {
        v12 = sub_F62A70(&v158, *(_QWORD *)(a1->m128i_i64[0] + 16));
        if ( !(_BYTE)v12 )
        {
          v143 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2436, 0);
          v144 = v143;
          if ( v143 )
          {
            sub_C11320(v143, v69);
            sub_AE9DF0(v144, v158, 8u);
            goto LABEL_192;
          }
          goto LABEL_191;
        }
        v156 = sub_AAE980(*(_QWORD *)(a1->m128i_i64[0] + 16), v158);
        if ( !v156 )
          goto LABEL_191;
        if ( !v152 )
        {
          LODWORD(v164) = v161;
          if ( v161 > 0x40 )
            sub_2205510(&v163);
          else
            v163 = v160;
          sub_22088A0(&v163, v156, &v160, &v159);
          if ( v159 )
          {
            v129 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2440, 0);
            v130 = v129;
            if ( v129 )
            {
              sub_C11320(v129, v69);
              sub_C11320(v130, 0);
              sub_C11320(v130, 0);
              sub_AE9DF0(v130, v158, 8u);
              sub_C1DEB0(&v166, (int)&v163, 10, 0, 0, 1u, 0);
              sub_AEC220(v130, v166.m128i_i64[0], v166.m128i_i64[1]);
              sub_AE9DF0(v130, (unsigned int)v156, 3u);
            }
            else
            {
              sub_C1DEB0(&v166, (int)&v163, 10, 0, 0, 1u, 0);
            }
            if ( (_BYTE *)v166.m128i_i64[0] != v167 )
              operator delete((void *)v166.m128i_i64[0]);
            if ( (unsigned int)v164 > 0x40 && v163 )
              operator delete[](v163);
            goto LABEL_191;
          }
          if ( (unsigned int)v164 > 0x40 && v163 )
            operator delete[](v163);
        }
        sub_C0F630(v177);
        v157 = v110;
        sub_C0F630(v170);
        v112 = v111;
        if ( sub_9EC640((__int64)&v160, v113)
          || (LOBYTE(v114) = sub_9EC640((__int64)&v160, v112), v12 = v114, (_BYTE)v114) )
        {
          v145 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2440, 0);
          v146 = v145;
          if ( v145 )
          {
            sub_C11320(v145, v69);
            sub_C11320(v146, v152);
            v147 = sub_9EC640((__int64)&v160, v157);
            sub_C11320(v146, 2 - (v147 != 0));
            sub_AE9DF0(v146, v158, 8u);
            sub_C1DEB0(&v166, (int)&v160, 10, 0, 0, 1u, 0);
            sub_AEC220(v146, v166.m128i_i64[0], v166.m128i_i64[1]);
          }
          else
          {
            sub_C1DEB0(&v166, (int)&v160, 10, 0, 0, 1u, 0);
          }
          if ( (_BYTE *)v166.m128i_i64[0] != v167 )
            operator delete((void *)v166.m128i_i64[0]);
          goto LABEL_191;
        }
        v115 = v160;
        if ( v161 > 0x40 )
          v115 = *(void **)v160;
        v154 = v115;
        if ( !sub_C102D0((const __m128i *)v175, (const __m128i *)v168) )
          goto LABEL_261;
        v116 = a1->m128i_i64[0];
        v117 = (_QWORD)v154 * v156;
        if ( v176 > v169 )
        {
          v119 = 1;
          if ( v69 )
            goto LABEL_160;
        }
        else
        {
          if ( v169 - v176 < v117 )
          {
            if ( v69 )
            {
              if ( (unsigned __int8)sub_C1A8A0(v116, a2, (__int64)v175, v158, (char *)v154 - 1) )
              {
                v118 = sub_C1A8A0(a1->m128i_i64[0], a2, (__int64)v168, v158, (char *)v154 - 1);
                v119 = -1;
                if ( v118 )
                  goto LABEL_160;
              }
            }
            else
            {
              v149 = (unsigned __int8 **)sub_E33C10(v116, a2, 2438, 0);
              if ( v149 )
                sub_C11320(v149, v152);
            }
            goto LABEL_191;
          }
          if ( v69 || v176 != v169 )
          {
LABEL_261:
            v119 = 1;
            goto LABEL_160;
          }
        }
        v119 = 1;
        if ( v176 - v169 < v117 )
        {
          v148 = (unsigned __int8 **)sub_E33C10(v116, a2, 2438, 0);
          if ( v148 )
            sub_C11320(v148, v152);
          goto LABEL_192;
        }
LABEL_160:
        v120 = (void *)v119;
        while ( 1 )
        {
          v121 = a1->m128i_i64[0];
          v166.m128i_i8[4] &= ~1u;
          v166.m128i_i32[0] = 0;
          if ( !(unsigned __int8)sub_C36570(v121, (_DWORD *)a2, v158, (__int64)v175, (__int64)&v166, 0) )
            break;
          v12 = sub_C30FD0(a1->m128i_i64[0], (_DWORD *)a2, (__m128i *)v168, v158, (__int64)&v166);
          if ( !(_BYTE)v12 )
            break;
          v154 = (char *)v154 - 1;
          if ( !v154 )
            goto LABEL_251;
          if ( !(unsigned __int8)sub_C1A8A0(a1->m128i_i64[0], a2, (__int64)v175, v158, v120)
            || !(unsigned __int8)sub_C1A8A0(a1->m128i_i64[0], a2, (__int64)v168, v158, v120) )
          {
            break;
          }
          if ( v166.m128i_i32[0] > 1u )
            sub_A4F8E0(v166.m128i_i32);
        }
        v12 = 0;
LABEL_251:
        if ( v166.m128i_i32[0] > 1u )
          sub_A4F8E0(v166.m128i_i32);
LABEL_192:
        if ( v161 <= 0x40 )
          goto LABEL_102;
        goto LABEL_193;
      }
      v142 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2435, 0);
      v141 = v142;
      if ( !v142 )
        goto LABEL_191;
      sub_C11320(v142, v69);
    }
    else
    {
      v140 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2439, 0);
      v141 = v140;
      if ( !v140 )
        goto LABEL_191;
      sub_C11320(v140, v69);
      sub_AE9DF0(v141, v109, 8u);
    }
    sub_AE9DF0(v141, v158, 8u);
    goto LABEL_191;
  }
  if ( a3 > 0x3B3 )
  {
    if ( a3 == 1478 )
      goto LABEL_96;
    if ( a3 <= 0x5C6 )
    {
      if ( a3 == 1234 )
        goto LABEL_90;
      if ( a3 > 0x4D2 )
      {
        if ( a3 == 1474 )
          goto LABEL_48;
        if ( a3 != 1475 )
          return 0;
        goto LABEL_90;
      }
      if ( a3 != 948 )
      {
        if ( a3 != 1233 )
          return 0;
        goto LABEL_48;
      }
    }
    else if ( a3 != 1481 )
    {
      if ( a3 > 0x5C9 )
      {
        if ( a3 != 1484 )
        {
          if ( a3 == 1498 )
            goto LABEL_34;
          if ( a3 != 1483 )
            return 0;
LABEL_48:
          v12 = sub_C48CF0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v10, v7, v8, v9);
          if ( !(_BYTE)v12 )
            return v12;
          v41 = *(_BYTE *)(a2 + 2);
          v42 = a1->m128i_i64[0];
          LODWORD(v168[1]) = 1;
          v168[0] = nullptr;
          BYTE4(v168[1]) = 0;
          v12 = sub_C47260(*(_QWORD *)(a2 + 8 * (((v41 & 8) != 0) + 1LL) + 40), (__int64)v168, v42, v38, v39, v40);
          if ( !(_BYTE)v12 )
          {
LABEL_85:
            if ( LODWORD(v168[1]) <= 0x40 )
              return v12;
            v65 = v168[0];
            if ( !v168[0] )
              return v12;
            goto LABEL_87;
          }
          v45 = a3 - 1483;
          v46 = a1->m128i_i64[0];
          if ( (unsigned int)v45 <= 1 || a3 - 1233 <= 1 )
          {
            v151 = -1;
            v51 = a1->m128i_i64[1];
          }
          else
          {
            v47 = *(_BYTE *)(a2 + 2);
            BYTE4(v175[1]) = 0;
            LODWORD(v175[1]) = 1;
            v175[0] = nullptr;
            v48 = sub_C47260(*(_QWORD *)(a2 + 8 * (((v47 & 8) != 0) + 1LL) + 48), (__int64)v175, v46, v45, v43, v44);
            v45 = a3 - 1483;
            v49 = v48;
            if ( !(_BYTE)v48 )
            {
              if ( LODWORD(v175[1]) > 0x40 && v175[0] )
                operator delete[](v175[0]);
              goto LABEL_178;
            }
            if ( LODWORD(v175[1]) <= 0x40 )
            {
              v151 = (__int64)v175[0];
            }
            else
            {
              v50 = *(_QWORD *)v175[0];
              LODWORD(v156) = a3 - 1483;
              v151 = v50;
              operator delete[](v175[0]);
              v45 = a3 - 1483;
            }
            v46 = a1->m128i_i64[0];
            v51 = a1->m128i_i64[1];
            if ( !v151 )
            {
              v12 = v49;
              sub_C243E0(v51, *(_QWORD *)(v46 + 16), *(_QWORD *)(a2 + 8));
              goto LABEL_85;
            }
          }
          v156 = a2;
          LODWORD(v176) = 0;
          *(__m128 *)v175 = _mm_loadh_ps((const double *)&v156);
          if ( (*(_BYTE *)(v51 + 24) & 1) == 0 )
          {
            v52 = (*(_BYTE *)(v51 + 128) & 1) == 0;
            LOBYTE(v157) = *(_BYTE *)(v51 + 128) & 1;
            if ( v52 )
            {
              v53 = *(_QWORD *)(v46 + 16);
              LODWORD(v156) = v45;
              v54 = sub_C0FCA0(v51 + 24, v53, v46, v45, v43, v44);
              v55 = v54;
              if ( a3 - 942 > 1 )
              {
                v56 = a1->m128i_i64[0];
                if ( a3 > 0x5C3 )
                {
                  if ( (unsigned int)v156 > 1 )
                    goto LABEL_201;
                }
                else
                {
                  if ( a3 < 0x5C2 )
                  {
                    if ( a3 != 211 )
                    {
                      v57 = a3 - 1233;
                      if ( (unsigned int)v57 <= 1 )
                      {
                        sub_C15DE0((__int64)v175, *(_QWORD *)(v56 + 16), v54, (__int64)v168, v57);
                        v58 = sub_98E2D0((__int64 *)v175, (__int64 *)v168);
                        if ( LODWORD(v175[1]) > 0x40 && v175[0] )
                          operator delete[](v175[0]);
                        v59 = *(_QWORD *)(a1->m128i_i64[0] + 16);
                        if ( v58 )
                        {
                          sub_C243E0(a1->m128i_i64[1], *(_QWORD *)(a1->m128i_i64[0] + 16), *(_QWORD *)(a2 + 8));
                          goto LABEL_85;
                        }
                        goto LABEL_67;
                      }
LABEL_201:
                      LOBYTE(v12) = 0;
                      goto LABEL_71;
                    }
                    v59 = *(_QWORD *)(v56 + 16);
                    LOBYTE(v12) = 0;
LABEL_67:
                    sub_A97FD0(v59);
                    sub_2206A40(v175, v168);
                    if ( LODWORD(v175[1]) <= 0x40 )
                    {
                      v56 = a1->m128i_i64[0];
                      v153 = v175[0];
                    }
                    else
                    {
                      v153 = *(void **)v175[0];
                      if ( v175[0] )
                        operator delete[](v175[0]);
                      v56 = a1->m128i_i64[0];
                    }
                    goto LABEL_71;
                  }
                  LOBYTE(v12) = 0;
                }
                v131 = v168[0];
                if ( LODWORD(v168[1]) > 0x40 )
                  v131 = *(void **)v168[0];
                v153 = v131;
LABEL_71:
                v156 = (__int64)&v175[1];
                while ( 1 )
                {
                  v60 = a1->m128i_i64[1];
                  BYTE4(v175[0]) &= ~1u;
                  LODWORD(v175[0]) = 0;
                  v61 = sub_C36570(v56, (_DWORD *)a2, v55, v60, (__int64)v175, 0);
                  v62 = (unsigned int)v175[0];
                  if ( !(_BYTE)v61 || LODWORD(v175[0]) != 2 )
                    break;
                  v63 = v175[1];
                  if ( (unsigned int)v176 > 0x40 )
                    v63 = *(void **)v175[1];
                  if ( v153 == v63 )
                    goto LABEL_223;
                  if ( (_BYTE)v12 )
                  {
                    v64 = v175[1] == nullptr;
                    if ( (unsigned int)v176 > 0x40 )
                    {
                      v150 = v176;
                      v64 = v150 == (unsigned int)sub_2206780(v156);
                    }
                    if ( v64 )
                    {
                      sub_A4F8E0((int *)v175);
                      v56 = a1->m128i_i64[0];
LABEL_84:
                      v12 = v61;
                      sub_C243E0(a1->m128i_i64[1], *(_QWORD *)(v56 + 16), *(_QWORD *)(a2 + 8));
                      goto LABEL_85;
                    }
                  }
                  if ( !(unsigned __int8)sub_C1A8F0(a1->m128i_i64[0], a2, a1->m128i_i64[1], v55) )
                  {
                    v62 = (unsigned int)v175[0];
                    break;
                  }
                  if ( LODWORD(v175[0]) > 1 )
                  {
                    sub_A4F8E0((int *)v175);
                    v52 = v151-- == 1;
                    v56 = a1->m128i_i64[0];
                    if ( v52 )
                      goto LABEL_84;
                  }
                  else
                  {
                    v52 = v151-- == 1;
                    v56 = a1->m128i_i64[0];
                    if ( v52 )
                      goto LABEL_84;
                  }
                }
                if ( v62 <= 1 )
                  goto LABEL_204;
                LOBYTE(v61) = 0;
LABEL_223:
                sub_A4F8E0((int *)v175);
                LOBYTE(v157) = v61;
LABEL_204:
                v12 = (unsigned __int8)v157;
                goto LABEL_85;
              }
              LOBYTE(v12) = sub_F62670(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL), 0);
              if ( (_BYTE)v12 )
              {
                v139 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2428, 0);
                if ( v139 )
                  sub_AE9DF0(v139, v55, 8u);
              }
              else
              {
                if ( (unsigned __int8)sub_C10220(v55) )
                {
                  v59 = *(_QWORD *)(a1->m128i_i64[0] + 16);
                  goto LABEL_67;
                }
                v122 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], a2, 2433, 0);
                sub_FBD300(v175, *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), a3);
                if ( v122 )
                {
                  sub_AEC220(v122, (_BYTE *)v175[0], (signed __int64)v175[1]);
                  sub_AE9DF0(v122, v55, 8u);
                }
                if ( v175[0] != &v176 )
                  operator delete(v175[0]);
              }
            }
            else
            {
              sub_C13760((__int64)v175);
              *(_BYTE *)(v51 + 24) |= 1u;
              *(_DWORD *)(v51 + 56) = 0;
            }
          }
LABEL_178:
          v12 = 0;
          goto LABEL_85;
        }
LABEL_90:
        if ( (*(_BYTE *)(sub_E32240(a1->m128i_i64[0]) + 1) & 0x10) != 0 )
        {
          v66 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2419, 0);
          v67 = v66;
          if ( v66 )
          {
            sub_C11320(v66, 0);
            sub_C11320(v67, 0);
            sub_FBD300(v175, *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), a3);
            sub_AEC220(v67, (_BYTE *)v175[0], (signed __int64)v175[1]);
          }
          else
          {
            sub_FBD300(v175, *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), a3);
          }
          if ( v175[0] != &v176 )
            operator delete(v175[0]);
        }
        else
        {
          sub_E33C90(a1->m128i_i64[0], a2, 108, 0);
        }
        goto LABEL_48;
      }
      if ( a3 != 1479 )
        goto LABEL_96;
    }
LABEL_113:
    if ( (*(_BYTE *)(sub_E32240(a1->m128i_i64[0]) + 1) & 0x10) != 0 )
    {
      v82 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2419, 0);
      v83 = v82;
      if ( v82 )
      {
        sub_C11320(v82, 0);
        sub_C11320(v83, 0);
        sub_FBD300(v175, *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), a3);
        sub_AEC220(v83, (_BYTE *)v175[0], (signed __int64)v175[1]);
      }
      else
      {
        sub_FBD300(v175, *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), a3);
      }
      if ( v175[0] != &v176 )
        operator delete(v175[0]);
    }
    else
    {
      sub_E33C90(a1->m128i_i64[0], a2, 108, 0);
    }
    goto LABEL_96;
  }
  if ( a3 == 211 )
    goto LABEL_48;
  if ( a3 <= 0xD3 )
  {
    if ( a3 > 0x7B )
    {
      if ( a3 != 201 )
      {
        if ( a3 != 202 )
          return 0;
        v17 = (void *)a1->m128i_i64[0];
        v18 = *(_BYTE *)(a2 + 2) >> 3;
        v175[1] = (void *)a1->m128i_i64[1];
        v175[0] = v17;
        v19 = *(_QWORD *)(a2 + 8 * ((v18 & 1) + 1LL) + 32);
        LOBYTE(v176) = a1[1].m128i_i8[0];
        v12 = sub_C48CF0((__m128i *)v175, v19, (__int64)v175[1], (__int64)v17, v8, v9);
        if ( !(_BYTE)v12 )
          return v12;
        v20 = (const __m128i *)a1->m128i_i64[1];
        *(__m128i *)v175 = _mm_loadu_si128(v20);
        v176 = v20[1].m128i_u64[0];
        sub_C133F0((__int64)v177, (__int64)&v20[1].m128i_i64[1]);
        v182 = v20[8].m128i_i8[0] & 1 | v182 & 0xFE;
        v21 = a1->m128i_i64[0];
        v182 = v20[8].m128i_i8[0] & 2 | v182 & 0xFD;
        v22 = v20[8].m128i_i8[1];
        v166.m128i_i32[2] = 1;
        v183 = v22;
        v23 = *(_BYTE *)(a2 + 2);
        v166.m128i_i64[0] = 0;
        v166.m128i_i8[12] = 0;
        v24 = 8 * (((v23 & 8) != 0) + 1LL);
        v12 = sub_C47350(
                *(_QWORD *)(a2 + v24 + 40),
                *(_QWORD *)(*(_QWORD *)(a2 + v24 + 32) + 8LL),
                v21,
                (__int64)&v166,
                v25,
                v26);
        if ( !(_BYTE)v12 )
          goto LABEL_183;
        v30 = v166.m128i_i64[0];
        if ( v166.m128i_i32[2] > 0x40u )
          v30 = *(_QWORD *)v166.m128i_i64[0];
        if ( *(_DWORD *)(a2 + 16) > 2u )
        {
          v31 = *(_BYTE *)(a2 + 2);
          v32 = a1->m128i_i64[0];
          LODWORD(v168[1]) = 1;
          v168[0] = nullptr;
          BYTE4(v168[1]) = 0;
          if ( !(unsigned __int8)sub_C47260(
                                   *(_QWORD *)(a2 + 8 * (((v31 & 8) != 0) + 1LL) + 48),
                                   (__int64)v168,
                                   v32,
                                   v27,
                                   v28,
                                   v29) )
          {
            if ( LODWORD(v168[1]) > 0x40 && v168[0] )
              operator delete[](v168[0]);
            goto LABEL_183;
          }
          if ( LODWORD(v168[1]) <= 0x40 )
          {
            v176 -= (unsigned __int64)v168[0];
          }
          else
          {
            v176 -= *(_QWORD *)v168[0];
            operator delete[](v168[0]);
          }
        }
        if ( sub_A4F700(v175) && (v123 = sub_C13330((_QWORD **)(a1->m128i_i64[0] + 16), (__int64 *)v175), v30 > v123) )
        {
          v124 = a1->m128i_i64[1];
          *(_BYTE *)(v124 + 24) |= 1u;
          v125 = a1->m128i_i64[0];
          *(_DWORD *)(v124 + 56) = 0;
          v126 = (unsigned __int8 **)sub_E33C90(
                                       v125,
                                       *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                                       2383,
                                       0);
          v127 = v126;
          if ( !v126 )
          {
LABEL_183:
            v12 = 0;
            goto LABEL_27;
          }
          sub_C11320(v126, 0);
          v128 = v123;
        }
        else
        {
          if ( v176 == v30 * ((v176 != 0) + (v176 - (v176 != 0)) / v30) )
          {
LABEL_27:
            if ( v166.m128i_i32[2] > 0x40u && v166.m128i_i64[0] )
              operator delete[]((void *)v166.m128i_i64[0]);
            v33 = ptr;
            if ( ptr == v181 )
              return v12;
LABEL_31:
            free(v33);
            return v12;
          }
          v135 = a1->m128i_i64[1];
          *(_BYTE *)(v135 + 24) |= 1u;
          *(_DWORD *)(v135 + 56) = 0;
          v52 = !sub_A4F700(v175);
          v136 = *(_BYTE *)(a2 + 2);
          if ( v52 )
          {
            v138 = sub_E33C90(a1->m128i_i64[0], *(_QWORD *)(a2 + 8 * (((v136 & 8) != 0) + 1LL) + 32), 2384, 0);
            if ( !v138 )
              goto LABEL_183;
            v128 = v176;
            v127 = (unsigned __int8 **)v138;
          }
          else
          {
            v137 = (unsigned __int8 **)sub_E33C90(
                                         a1->m128i_i64[0],
                                         *(_QWORD *)(a2 + 8 * (((v136 & 8) != 0) + 1LL) + 32),
                                         2383,
                                         0);
            if ( !v137 )
              goto LABEL_183;
            v127 = v137;
            sub_C11320(v137, 1);
            v128 = v176;
          }
        }
        sub_C11320(v127, v128);
        sub_C11320(v127, v30);
        goto LABEL_183;
      }
LABEL_34:
      v34 = (void *)a1->m128i_i64[0];
      v35 = *(_BYTE *)(a2 + 2) >> 3;
      v175[1] = (void *)a1->m128i_i64[1];
      v175[0] = v34;
      v36 = *(__m128i **)(a2 + 8 * ((v35 & 1) + 1LL) + 32);
      LOBYTE(v176) = a1[1].m128i_i8[0];
      return (unsigned int)sub_C5C820((const __m128i *)v175, v36, (__int64)v175[1], (unsigned __int64)v34, v8, v9);
    }
    if ( a3 < 0x7A )
    {
      if ( a3 != 121 )
        return 0;
      goto LABEL_34;
    }
    v84 = (void *)a1->m128i_i64[0];
    v85 = *(_BYTE *)(a2 + 2) >> 3;
    v175[1] = (void *)a1->m128i_i64[1];
    v175[0] = v84;
    v86 = *(_QWORD *)(a2 + 8 * ((v85 & 1) + 1LL) + 32);
    LOBYTE(v176) = a1[1].m128i_i8[0];
    v12 = sub_C48CF0((__m128i *)v175, v86, (__int64)v175[1], (__int64)v84, v8, v9);
    if ( !(_BYTE)v12 )
      return v12;
    v89 = *(_BYTE *)(a2 + 2);
    BYTE4(v175[1]) = 0;
    LODWORD(v175[1]) = 1;
    v90 = a1->m128i_i64[0];
    v175[0] = nullptr;
    v91 = 8 * (((v89 & 8) != 0) + 1LL);
    v12 = sub_C47350(
            *(_QWORD *)(a2 + v91 + 40),
            *(_QWORD *)(*(_QWORD *)(a2 + v91 + 32) + 8LL),
            v90,
            (__int64)v175,
            v87,
            v88);
    if ( (_BYTE)v12 )
    {
      v92 = sub_C13330((_QWORD **)(a1->m128i_i64[0] + 16), (__int64 *)a1->m128i_i64[1]);
      v93 = v92 | *(_QWORD *)(a1->m128i_i64[1] + 16);
      v12 = sub_C16A00((__int64 *)v175, (void *)(v93 & -v93));
      if ( !(_BYTE)v12 )
      {
        v12 = sub_C16A00((__int64 *)v175, (void *)v92);
        if ( (_BYTE)v12 )
        {
          v94 = (unsigned int)v175[1];
          v95 = (unsigned __int64)v175[0];
          if ( LODWORD(v175[1]) > 0x40 )
            v95 = *(_QWORD *)v175[0];
          v96 = a1->m128i_i64[1];
          v97 = *(_QWORD *)(v96 + 16);
          if ( a3 == 122 )
            v98 = v97 / v95 * v95;
          else
            v98 = ((v97 != 0) + (v97 - (v97 != 0)) / v95) * v95;
          *(_QWORD *)(v96 + 16) = v98;
          if ( v98 != v97 )
            *(_BYTE *)(v96 + 128) &= ~1u;
LABEL_128:
          if ( v94 <= 0x40 )
            return v12;
          v65 = v175[0];
          if ( !v175[0] )
            return v12;
LABEL_87:
          operator delete[](v65);
          return v12;
        }
        v168[0] = (void *)sub_E33C10(
                            a1->m128i_i64[0],
                            *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                            2378,
                            0);
        if ( v168[0] )
          sub_C1A2B0((unsigned __int8 ***)v168, (__int64)v175);
      }
    }
    v94 = (unsigned int)v175[1];
    goto LABEL_128;
  }
  if ( a3 == 942 )
    goto LABEL_48;
  if ( a3 > 0x3AE )
  {
    if ( a3 == 945 )
      goto LABEL_96;
    if ( a3 <= 0x3B1 )
    {
      if ( a3 != 943 )
        return 0;
      goto LABEL_90;
    }
    goto LABEL_113;
  }
  if ( a3 != 227 )
  {
    if ( a3 == 836 )
    {
      v14 = (void *)a1->m128i_i64[0];
      v15 = *(_BYTE *)(a2 + 2) >> 3;
      v175[1] = (void *)a1->m128i_i64[1];
      v175[0] = v14;
      v16 = *(_QWORD *)(a2 + 8 * ((v15 & 1) + 1LL) + 32);
      LOBYTE(v176) = a1[1].m128i_i8[0];
      return (unsigned int)sub_C48CF0((__m128i *)v175, v16, (__int64)v175[1], (__int64)v14, v8, v9);
    }
    return 0;
  }
  v81 = a1->m128i_i64[0];
  v12 = *(unsigned __int8 *)(a1->m128i_i64[0] + 914);
  if ( (_BYTE)v12 )
    return 0;
  if ( !*(_DWORD *)(v81 + 900) )
    return (unsigned int)sub_C475F0(v81, a2, a1->m128i_i64[1]);
  return v12;
}
