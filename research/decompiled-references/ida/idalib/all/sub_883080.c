char *__fastcall sub_883080(int **a1, char *a2, __int64 a3, int a4)
{
  const double *v4; // rax
  char *v5; // r13
  const double *v7; // rdx
  unsigned int *v8; // rbp
  int v9; // eax
  int *v10; // rax
  unsigned __int8 v11; // r14
  __int16 v12; // r12
  const double *v13; // rax
  bool v14; // zf
  unsigned __int8 v15; // r14
  char *v16; // r12
  int v17; // eax
  int v18; // r14d
  unsigned int *v19; // r15
  int v20; // r14d
  _QWORD *v21; // rax
  unsigned int *v22; // r15
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int *v26; // rdx
  unsigned int *v27; // r15
  int v28; // eax
  unsigned int *v29; // r10
  signed int v30; // edi
  char *v31; // r15
  int v32; // r13d
  char v33; // r15
  int *v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r15
  int v38; // eax
  __m128 v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __m128 *v44; // rax
  __m128 *v45; // rax
  double *v46; // roff
  _QWORD *v47; // rax
  __int64 *v48; // rcx
  __int64 v49; // rdx
  unsigned __int8 *v50; // rax
  unsigned int *v51; // rax
  __int64 v52; // r15
  unsigned int *v53; // xmm0_8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __m128 *v58; // rax
  __m128 *v59; // rdx
  unsigned int *v60; // xmm0_8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __m128 *v65; // rax
  __m128 *v66; // rax
  char *result; // rax
  unsigned int *v68; // rdi
  __int64 v69; // r15
  unsigned __int8 *v70; // rdx
  unsigned int *v71; // r14
  _QWORD *v72; // rax
  unsigned int *v73; // r14
  __int64 *v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned int *v79; // r15
  unsigned int *v80; // rdi
  char *v81; // rdx
  int *v82; // rdx
  int *v83; // rax
  _QWORD *v84; // r15
  _QWORD *v85; // rax
  __int64 *i; // rcx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  __m128 *v91; // rax
  __m128 *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // r14
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rcx
  __m128 *v98; // rax
  __m128 *v99; // rax
  double *v100; // roff
  _QWORD *v101; // rcx
  __int64 *k; // rax
  __int64 v103; // rdx
  __int64 v104; // r14
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rdi
  _QWORD *v108; // rcx
  __int64 *m; // rax
  __int64 v110; // rdx
  int v111; // r8d
  __int64 v112; // rcx
  int v113; // edx
  __int64 v114; // r13
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rdi
  _QWORD *v118; // rcx
  __int64 *j; // rdx
  __int64 v120; // rax
  unsigned int *v121; // r15
  __int64 v122; // r14
  int v123; // eax
  __int64 v124; // r13
  unsigned int *v125; // rdi
  _QWORD *v126; // rax
  unsigned int *v127; // r15
  __int64 v128; // r14
  unsigned int *v129; // rdi
  __int64 v130; // r15
  unsigned int *v131; // r15
  __int64 v132; // r14
  unsigned int *v133; // rdi
  _QWORD *v134; // rax
  unsigned int *v135; // r14
  unsigned int *v136; // rdi
  unsigned int *v137; // r15
  __int64 v138; // r14
  unsigned int *v139; // rdi
  __int64 v140; // r13
  unsigned int *v141; // rdi
  unsigned int *v142; // r15
  unsigned int *v143; // rdi
  __int64 v144; // r15
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rcx
  __m128 *v148; // rax
  __m128 *v149; // rax
  unsigned int *v150; // r13
  __int64 v151; // rbp
  unsigned int *v152; // rdi
  int v153; // [rsp+8h] [rbp-110h]
  int v154; // [rsp+Ch] [rbp-10Ch]
  unsigned int *v155; // [rsp+10h] [rbp-108h]
  int v156; // [rsp+18h] [rbp-100h]
  signed int v157; // [rsp+1Ch] [rbp-FCh]
  char v158; // [rsp+22h] [rbp-F6h]
  char v159; // [rsp+23h] [rbp-F5h]
  signed int v160; // [rsp+24h] [rbp-F4h]
  double *v161; // [rsp+28h] [rbp-F0h]
  __int64 v162; // [rsp+30h] [rbp-E8h]
  _QWORD *v163; // [rsp+38h] [rbp-E0h]
  __int64 v164; // [rsp+40h] [rbp-D8h]
  _QWORD *v165; // [rsp+48h] [rbp-D0h]
  double *v166; // [rsp+50h] [rbp-C8h]
  int v167; // [rsp+58h] [rbp-C0h]
  int v168; // [rsp+5Ch] [rbp-BCh]
  int *v169; // [rsp+60h] [rbp-B8h]
  int *v170; // [rsp+68h] [rbp-B0h]
  int *v171; // [rsp+70h] [rbp-A8h]
  int *v172; // [rsp+78h] [rbp-A0h]
  int v173; // [rsp+80h] [rbp-98h]
  int v174; // [rsp+84h] [rbp-94h]
  int *v175; // [rsp+88h] [rbp-90h]
  int *v176; // [rsp+90h] [rbp-88h]
  _QWORD *v177; // [rsp+98h] [rbp-80h]
  int v178; // [rsp+A4h] [rbp-74h] BYREF
  __int64 *v179; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v180; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v181; // [rsp+C0h] [rbp-58h]
  char *v182; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v183; // [rsp+D8h] [rbp-40h]

  v4 = (const double *)(a3 + 40);
  v5 = a2;
  v165 = (_QWORD *)a3;
  v7 = (const double *)(a3 + 24);
  v156 = a4;
  if ( !a4 )
    v4 = v7;
  v183 = __readfsqword(0x28u);
  v8 = (unsigned int *)*a1;
  v166 = (double *)v4;
  v9 = *((_DWORD *)a1 + 49);
  v179 = nullptr;
  v174 = v9;
  v168 = *((_DWORD *)a1 + 50);
  v173 = *((_DWORD *)a1 + 28);
  v169 = a1[8];
  v175 = a1[35];
  v170 = a1[37];
  v10 = a1[43];
  a1[8] = nullptr;
  v176 = v10;
  v171 = a1[44];
  v172 = a1[47];
  v159 = *a2;
  if ( (unsigned __int8)(v159 + 103) <= 1u )
    v5 = a2 + 1;
  else
    v159 = -119;
  v157 = a1[3][v5 - (char *)a1[2]];
  v160 = sub_869380((__int64)a1, (unsigned __int8 *)v5, nullptr, 0, &v178);
  v165[6] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v160), _mm_cvtsi32_si128(v157)).m128i_u64[0];
  v11 = *v5;
  v12 = *(_WORD *)(v5 + 1);
  v13 = (const double *)&v179;
  v14 = (*v5 & 0xFD) == 0x80;
  if ( (*v5 & 0xFD) != 0x80 )
    v13 = v166;
  v158 = *v5 & 0xFD;
  LOBYTE(v155) = v14;
  v15 = v11 + 126;
  v161 = (double *)v13;
  v16 = &v5[(unsigned __int16)__ROL2__(v12, 8)];
  if ( v159 == -102 )
  {
    sub_86B8E0(v8, 32, 2, 0, 140, 0);
    v79 = (unsigned int *)*a1;
    if ( !**a1 )
    {
      v80 = (unsigned int *)*a1;
      v79[36] = 0;
      if ( (unsigned int)sub_86C5C0(v80, 12, 0, 12, 0, 127, 8) == 4 )
        sub_86D220(v79, 0x5030100u, 12, 0, 12, 0, 127, 8);
    }
    v177 = sub_86E080(v8, 0, 2, 0, 127, 0);
    if ( v15 > 1u )
    {
      if ( v160 >= 0 )
      {
        v162 = 8;
        v153 = 0;
        goto LABEL_11;
      }
      v154 = 1;
      v27 = (unsigned int *)(v5 + 3);
      v153 = 0;
LABEL_104:
      if ( v178 )
      {
LABEL_123:
        if ( v160 == -1 )
          sub_86B8E0(v8, 32, 142, v157, 12, 0);
        ++v154;
      }
      else if ( v160 == -1 )
      {
        sub_86B8E0(v8, 32, 142, v157, 12, 0);
      }
      goto LABEL_107;
    }
  }
  else
  {
    v177 = nullptr;
    v153 = 0;
    if ( v15 > 1u )
      goto LABEL_9;
  }
  v81 = v5;
  do
  {
    if ( v81[3] == 127 )
    {
      v153 = 3;
      goto LABEL_9;
    }
    v81 += (unsigned __int16)__ROL2__(*(_WORD *)(v81 + 1), 8);
  }
  while ( *v81 == 121 );
  v153 = 0;
LABEL_9:
  if ( v160 >= 0 )
  {
    v162 = 8 * v153 + 8;
LABEL_11:
    v17 = 2;
    if ( v178 )
      v17 = 3;
    v154 = v153 + v17;
    v18 = v153 + v17;
    sub_86B8E0(v8, 32, 4, 0, 12, 0);
    v19 = (unsigned int *)*a1;
    v20 = v160 + v18;
    sub_86D900((unsigned int *)*a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8 * v20);
    v21 = sub_86E080(v19, 2, 12, 0, 11, 0);
    v22 = (unsigned int *)*a1;
    v163 = v21;
    if ( !*v22 )
    {
      v23 = sub_868B50((__int64)v22, 24);
      if ( v23 )
      {
        v24 = v163;
        v163 = v23;
        *v23 = v24;
        v25 = sub_868BC0((__int64)v22);
        v26 = (int *)v163;
        v163[1] = v25;
        *((_QWORD *)v26 + 2) = a1[39];
        a1[39] = v26;
      }
    }
    sub_86B8E0(v8, 32, 1, 0, 142, v157);
    sub_86B8E0(v8, 32, 142, v157, 4, 0);
    if ( v178 )
      sub_86B8E0(v8, 32, 4, 0, 142, *((int *)a1 + 27));
    sub_86B8E0(v8, 32, 140, 0, 2, 0);
    if ( v178 )
    {
      sub_86B8E0(v8, 32, 140, 8 * v153 + 16, 1, 0);
      sub_86B8E0(v8, 32, 140, v162, 4, 0);
      sub_86B8E0(v8, 32, 142, *((int *)a1 + 27), 127, 0);
    }
    else
    {
      sub_86B8E0(v8, 32, 140, v162, 1, 0);
    }
    sub_86BD40((__int64)a1, (unsigned __int8 *)v5, nullptr, v20 - 1);
    LOBYTE(v163) = 1;
    v27 = (unsigned int *)(v5 + 3);
LABEL_21:
    if ( v153 )
      goto LABEL_113;
    goto LABEL_22;
  }
  v27 = (unsigned int *)(v5 + 3);
  v154 = v153 + 1;
  v70 = (unsigned __int8 *)(v5 + 3);
  if ( v159 != -119 )
    goto LABEL_104;
  while ( 1 )
  {
    while ( 1 )
    {
      v78 = *v70;
      if ( (_BYTE)v78 != 120 )
        break;
      v70 += (unsigned __int16)__ROL2__(*(_WORD *)(v70 + 5), 8);
    }
    if ( (unsigned __int8)v78 > 0x78u )
      break;
    if ( (unsigned __int8)v78 > 0x1Cu )
    {
      if ( (_BYTE)v78 != 119 )
        goto LABEL_226;
    }
    else if ( (unsigned __int8)v78 <= 0x18u && (unsigned __int8)(v78 - 4) > 1u )
    {
LABEL_226:
      v154 = v153 + 1;
      goto LABEL_104;
    }
LABEL_117:
    v70 += byte_23C3B20[v78];
  }
  if ( (_BYTE)v78 != 122 )
  {
    if ( (unsigned __int8)v78 > 0x7Au && (unsigned __int8)(v78 + 85) > 1u )
      goto LABEL_226;
    goto LABEL_117;
  }
  v154 = v178;
  if ( v178 )
  {
    v154 = v153;
    goto LABEL_123;
  }
  if ( v160 == -1 )
  {
    sub_86B8E0(v8, 32, 142, v157, 12, 0);
    if ( v153 )
      goto LABEL_307;
    if ( v178 )
    {
      sub_86B8E0(v8, 32, 1, 0, 142, *((int *)a1 + 27));
      LOBYTE(v163) = 0;
      goto LABEL_111;
    }
LABEL_251:
    LOBYTE(v163) = 0;
    goto LABEL_22;
  }
  if ( !v153 )
    goto LABEL_251;
LABEL_307:
  v154 = 3;
LABEL_107:
  v71 = (unsigned int *)*a1;
  sub_86D900((unsigned int *)*a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8 * v154);
  v72 = sub_86E080(v71, 2, 12, 0, 11, 0);
  v73 = (unsigned int *)*a1;
  v162 = (__int64)v72;
  if ( *v73 || (v74 = sub_868B50((__int64)v73, 24)) == nullptr )
  {
    if ( v178 )
      goto LABEL_202;
  }
  else
  {
    v75 = v162;
    v162 = (__int64)v74;
    *v74 = v75;
    v76 = sub_868BC0((__int64)v73);
    v77 = v162;
    *(_QWORD *)(v162 + 8) = v76;
    *(_QWORD *)(v77 + 16) = a1[39];
    LODWORD(v76) = v178;
    a1[39] = (int *)v77;
    if ( !(_DWORD)v76 )
      goto LABEL_110;
LABEL_202:
    sub_86B8E0(v8, 32, 1, 0, 142, *((int *)a1 + 27));
  }
LABEL_110:
  sub_86B8E0(v8, 32, 140, 0, 2, 0);
  LOBYTE(v163) = 1;
LABEL_111:
  if ( !v178 )
    goto LABEL_21;
  sub_86B8E0(v8, 32, 142, *((int *)a1 + 27), 127, 0);
  sub_86B8E0(v8, 32, 140, 8 * v153 + 8, 1, 0);
  if ( v153 )
  {
LABEL_113:
    sub_86B8E0(v8, 32, 140, 8, 13, 0);
    sub_86B8E0(v8, 32, 13, 0, 2, 0);
  }
LABEL_22:
  v182 = nullptr;
  v180 = 0;
  if ( v156 || (v167 = 0, v158 == -127) )
  {
    *((_DWORD *)a1 + 28) = 0;
    *((_DWORD *)a1 + 49) = 1;
    a1[35] = nullptr;
    a1[43] = nullptr;
    v167 = 1;
  }
  v28 = (unsigned __int8)v155;
  v14 = v158 == -127;
  a1[44] = nullptr;
  v29 = v27;
  v30 = v160;
  v31 = v5;
  *((_DWORD *)a1 + 50) = v28;
  v32 = v30;
  LOBYTE(v162) = v156 & 1 | !v14;
  v164 = 8LL * (v30 + 1);
  while ( 2 )
  {
    a1[37] = nullptr;
    a1[47] = nullptr;
    v181 = 0;
    if ( *v31 == 121 && (_BYTE)v163 )
    {
      v155 = v29;
      sub_86B8E0(v8, 32, 2, 0, 140, 0);
      v29 = v155;
    }
    v182 = v31;
    v33 = v31[3];
    if ( (unsigned __int8)(v33 - 126) > 1u )
    {
      sub_87FEC0((__int64)a1, (unsigned __int8 *)v29, (unsigned __int8 *)v16, (__int64)&v180);
      if ( *v8 )
        break;
      goto LABEL_31;
    }
    v50 = (unsigned __int8 *)sub_870AE0((__int64)a1, (__int64)v29, (__int64)&v180);
    sub_87FEC0((__int64)a1, v50, (unsigned __int8 *)v16, (__int64)&v180);
    if ( !*v8 )
    {
      if ( v33 == 127 )
      {
        v51 = (unsigned int *)sub_86E080(v8, 2, 2, 0, 13, 0);
        v52 = v181;
        v53 = v51;
        if ( !*v8 )
        {
          v54 = *((_QWORD *)v8 + 10);
          v55 = *(_QWORD *)(v54 + 8);
          v56 = v55 + 16;
          if ( (unsigned __int64)(v55 + 16) <= 0xFF0 )
          {
            v59 = (__m128 *)(v54 + v55 + 16);
            *(_QWORD *)(v54 + 8) = v56;
            if ( !v59 )
              goto LABEL_31;
          }
          else
          {
            v57 = *((_QWORD *)v8 + 7);
            v155 = v53;
            v58 = (__m128 *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(4096, *(_QWORD *)(v57 + 16));
            if ( !v58 )
            {
              *v8 = 2;
              goto LABEL_31;
            }
            v58->m128_u64[0] = *((_QWORD *)v8 + 10);
            v59 = v58 + 1;
            *((_QWORD *)v8 + 10) = v58;
            v58->m128_u64[1] = 16;
          }
          *v59 = _mm_loadh_ps((const double *)(v52 + 8));
          *(_QWORD *)(v52 + 8) = v59;
        }
      }
LABEL_31:
      v34 = (int *)sub_868BC0((__int64)v8);
      v35 = (__int64 *)a1[47];
      for ( a1[37] = v34; v35; v35 = (__int64 *)v35[1] )
      {
        v36 = *v35;
        if ( *v35 && v34 )
        {
          *(_QWORD *)(v36 + 16) &= ~1uLL;
          *(_QWORD *)(v36 + 24) = v34;
        }
      }
      if ( v32 < 0 )
      {
        if ( v32 == -1 )
        {
          sub_86B8E0(v8, 32, 12, 0, 142, v157);
        }
        else if ( v154 )
        {
          v68 = (unsigned int *)*a1;
          v69 = 8 * v154;
          if ( !**a1 )
          {
            v68[36] = 0;
            v155 = v68;
            if ( (unsigned int)sub_86C5C0(v68, 12, 0, 12, 0, 127, v69) == 4 )
              sub_86D220(v155, 0x5030100u, 12, 0, 12, 0, 127, v69);
          }
        }
        if ( v153 )
          sub_86B8E0(v8, 32, 13, 0, 140, 8 * (1 - v154));
        if ( v178 )
        {
          sub_86B8E0(v8, 32, 142, *((int *)a1 + 27), 140, -8);
          if ( v158 != -127 )
            goto LABEL_47;
        }
        else if ( v158 != -127 )
        {
          goto LABEL_47;
        }
        if ( v156 )
          goto LABEL_43;
        if ( v159 != -103 )
          goto LABEL_47;
        sub_86B8E0(v8, 32, 2, 0, 140, -8 * v154);
        goto LABEL_139;
      }
      v37 = v157;
      if ( (_BYTE)v162 )
      {
        sub_86D900(v8, 0x42u, 12, 0, 142, v157, 0x7Fu, v164);
        if ( v153 )
          sub_86B8E0(v8, 32, 13, 0, 140, 8 * (2 - v154));
        if ( !v178 )
        {
          if ( v158 == -127 )
            goto LABEL_42;
LABEL_47:
          v39.m128_u64[0] = (unsigned __int64)sub_868C70((__int64)v8, 36);
          if ( !*v8 )
          {
            v40 = *((_QWORD *)v8 + 10);
            v41 = *(_QWORD *)(v40 + 8);
            v42 = v41 + 16;
            if ( (unsigned __int64)(v41 + 16) <= 0xFF0 )
            {
              v45 = (__m128 *)(v40 + v41 + 16);
              *(_QWORD *)(v40 + 8) = v42;
              if ( v45 )
              {
LABEL_51:
                v46 = v161;
                v39 = _mm_loadh_ps(v161);
                *v45 = v39;
                *(_QWORD *)v46 = v45;
              }
            }
            else
            {
              v43 = *((_QWORD *)v8 + 7);
              v155 = (unsigned int *)v39.m128_u64[0];
              v44 = (__m128 *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(4096, *(_QWORD *)(v43 + 16));
              v39.m128_u64[0] = (unsigned __int64)v155;
              if ( v44 )
              {
                v44->m128_u64[0] = *((_QWORD *)v8 + 10);
                *((_QWORD *)v8 + 10) = v44;
                v45 = v44 + 1;
                v45[-1].m128_u64[1] = 16;
                goto LABEL_51;
              }
              *v8 = 2;
            }
          }
          sub_888AE0(a1, v181);
          if ( *v8 )
            break;
          v47 = sub_868BC0((__int64)v8);
          v48 = *((__int64 **)&v181 + 1);
          if ( *((_QWORD *)&v181 + 1) )
          {
            do
            {
              v49 = *v48;
              if ( *v48 && v47 )
              {
                *(_QWORD *)(v49 + 16) &= ~1uLL;
                *(_QWORD *)(v49 + 24) = v47;
              }
              v48 = (__int64 *)v48[1];
            }
            while ( v48 );
          }
          if ( *v16 != 121 )
          {
            v82 = a1[43];
            v83 = a1[44];
            if ( v167 )
            {
              a1[44] = v82;
              v83 = v82;
            }
            if ( v83 )
            {
              v84 = sub_868C70((__int64)v8, 36);
              v85 = sub_868BC0((__int64)v8);
              for ( i = (__int64 *)a1[44]; i; i = (__int64 *)i[1] )
              {
                v87 = *i;
                if ( *i && v85 )
                {
                  *(_QWORD *)(v87 + 16) &= ~1uLL;
                  *(_QWORD *)(v87 + 24) = v85;
                }
              }
              if ( v160 < 0 )
              {
                sub_86D900(v8, 0x42u, 12, 0, 142, v157, 0x7Fu, 8LL * v154);
              }
              else
              {
                sub_86B8E0(v8, 32, 12, 0, 142, v157);
                sub_868C70((__int64)v8, 37);
                if ( !*v8 )
                {
                  v88 = *((_QWORD *)v8 + 10);
                  v89 = *(_QWORD *)(v88 + 8);
                  v90 = v89 + 16;
                  if ( (unsigned __int64)(v89 + 16) <= 0xFF0 )
                  {
                    v92 = (__m128 *)(v88 + v89 + 16);
                    *(_QWORD *)(v88 + 8) = v90;
                    if ( v92 )
                    {
LABEL_157:
                      v39 = _mm_loadh_ps((const double *)a1 + 50);
                      *v92 = v39;
                      a1[50] = (int *)v92;
                    }
                  }
                  else
                  {
                    v91 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD, double))v8 + 7))(
                                      4096,
                                      *(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL),
                                      *(double *)v39.m128_u64);
                    if ( v91 )
                    {
                      v91->m128_u64[0] = *((_QWORD *)v8 + 10);
                      *((_QWORD *)v8 + 10) = v91;
                      v92 = v91 + 1;
                      v92[-1].m128_u64[1] = 16;
                      goto LABEL_157;
                    }
                    *v8 = 2;
                  }
                }
                sub_86D900(v8, 0x42u, 12, 0, 12, 0, 0x7Fu, 8LL * (v154 + 1));
              }
              v93 = sub_868BC0((__int64)v8);
              if ( v84 && v93 )
              {
                v84[2] &= ~1uLL;
                v84[3] = v93;
              }
            }
            if ( v153 )
              sub_86B8E0(v8, 32, 13, 0, 140, 8);
            if ( v178 )
              sub_86B8E0(v8, 32, 142, *((int *)a1 + 27), 140, (unsigned int)(8 * v153 + 8));
            if ( v158 != (char)0x80 )
            {
              if ( v160 >= 0 )
              {
                sub_86B8E0(v8, 32, 2, 0, 140, 0);
                sub_86B8E0(v8, 32, 1, 0, 140, 8 * v154 - 8);
                v121 = (unsigned int *)*a1;
                v122 = v157;
                v123 = **a1;
                if ( v159 == -119 )
                {
                  v140 = 8 * (v160 + v154);
                  if ( v123
                    || (v141 = (unsigned int *)*a1,
                        v121[36] = 0,
                        (unsigned int)sub_86C5C0(v141, 12, 0, 12, 0, 127, v140) != 4) )
                  {
                    sub_86B8E0(v8, 32, 142, v122, 1, 0);
                  }
                  else
                  {
                    sub_86D220(v121, 0x5030100u, 12, 0, 12, 0, 127, v140);
                    sub_86B8E0(v8, 32, 142, v122, 1, 0);
                  }
                  goto LABEL_220;
                }
                v124 = 8 * (v154 + v160 - 1);
                if ( !v123 )
                {
                  v125 = (unsigned int *)*a1;
                  v121[36] = 0;
                  if ( (unsigned int)sub_86C5C0(v125, 12, 0, 12, 0, 127, v124) == 4 )
                    sub_86D220(v121, 0x5030100u, 12, 0, 12, 0, 127, v124);
                }
                sub_86B8E0(v8, 32, 140, 0, 127, 0);
                v112 = v122;
                v113 = 142;
                v111 = 1;
              }
              else
              {
                if ( v154 )
                {
                  sub_86B8E0(v8, 32, 2, 0, 140, 0);
                  if ( v159 == -119 )
                  {
                    v150 = (unsigned int *)*a1;
                    v151 = 8 * v154;
                    if ( !**a1 )
                    {
                      v152 = (unsigned int *)*a1;
                      v150[36] = 0;
                      if ( (unsigned int)sub_86C5C0(v152, 12, 0, 12, 0, 127, v151) == 4 )
                        sub_86D220(v150, 0x5030100u, 12, 0, 12, 0, 127, v151);
                    }
                    goto LABEL_220;
                  }
                  if ( v154 != 1 )
                  {
                    v135 = (unsigned int *)*a1;
                    if ( !**a1 )
                    {
                      v136 = (unsigned int *)*a1;
                      v135[36] = 0;
                      if ( (unsigned int)sub_86C5C0(v136, 12, 0, 12, 0, 127, 8 * v154 - 8) == 4 )
                        sub_86D220(v135, 0x5030100u, 12, 0, 12, 0, 127, 8 * v154 - 8);
                    }
                  }
                }
                else if ( v159 == -119 )
                {
                  goto LABEL_220;
                }
                v111 = 127;
                v112 = 0;
                v113 = 140;
              }
              sub_86B8E0(v8, 32, v113, v112, v111, 0);
              if ( v159 == -103 )
              {
                v134 = sub_868BC0((__int64)v8);
                v165[7] = v134;
              }
              else
              {
                v114 = v165[7];
                v115 = sub_868C70((__int64)v8, 36);
                if ( v114 && v115 )
                {
                  v115[2] &= ~1uLL;
                  v115[3] = v114;
                }
                v116 = sub_868BC0((__int64)v8);
                if ( v116 )
                {
                  v117 = v177;
                  if ( v177 )
                  {
                    v177[2] &= ~1uLL;
                    v117[3] = v116;
                  }
                }
              }
              v118 = sub_868BC0((__int64)v8);
              for ( j = (__int64 *)v165[3]; j; j = (__int64 *)j[1] )
              {
                v120 = *j;
                if ( *j && v118 )
                {
                  *(_QWORD *)(v120 + 16) &= ~1uLL;
                  *(_QWORD *)(v120 + 24) = v118;
                }
              }
              v165[3] = 0;
              goto LABEL_220;
            }
            if ( ((unsigned __int8)v156 & (unsigned __int8)v163) != 0 || v159 == -103 )
            {
              sub_86B8E0(v8, 32, 2, 0, 140, 0);
              if ( v160 < 0 )
              {
                if ( v159 != -103 )
                  goto LABEL_170;
                if ( v154 > 1 )
                {
                  v142 = (unsigned int *)*a1;
                  if ( !**a1 )
                  {
                    v143 = (unsigned int *)*a1;
                    v142[36] = 0;
                    if ( (unsigned int)sub_86C5C0(v143, 12, 0, 12, 0, 127, 8 * v154 - 8) == 4 )
                      sub_86D220(v142, 0x5030100u, 12, 0, 12, 0, 127, 8 * v154 - 8);
                  }
                }
                sub_86B8E0(v8, 32, 140, 0, 127, 0);
                v94 = sub_868C70((__int64)v8, 36);
                v101 = sub_868BC0((__int64)v8);
                k = v179;
                if ( v179 )
                  goto LABEL_178;
                if ( !v154 )
                  goto LABEL_238;
                goto LABEL_286;
              }
              sub_86B8E0(v8, 32, 1, 0, 140, 8 * v154 - 8);
              if ( v159 == -103 )
              {
                v127 = (unsigned int *)*a1;
                v128 = 8 * (v154 + v160 - 1);
                if ( !**a1 )
                {
                  v129 = (unsigned int *)*a1;
                  v127[36] = 0;
                  if ( (unsigned int)sub_86C5C0(v129, 12, 0, 12, 0, 127, v128) == 4 )
                    sub_86D220(v127, 0x5030100u, 12, 0, 12, 0, 127, v128);
                }
                sub_86B8E0(v8, 32, 140, 0, 127, 0);
                v130 = v157;
                sub_86B8E0(v8, 32, 142, v157, 1, 0);
                v94 = sub_868C70((__int64)v8, 36);
                v101 = sub_868BC0((__int64)v8);
                k = v179;
                if ( v179 )
                  goto LABEL_178;
                sub_86D900(v8, 0x42u, 12, 0, 142, v130, 0x7Fu, 8LL * (v160 + v153 + 2));
                if ( v154 != (v153 == 0 ? 2 : 5) )
                {
                  sub_86B8E0(v8, 32, 2, 0, 140, -8);
                  goto LABEL_262;
                }
                sub_86B8E0(v8, 32, 2, 0, 140, 0);
                goto LABEL_239;
              }
            }
            else
            {
              if ( v160 < 0 )
              {
LABEL_170:
                if ( v154 )
                {
                  v137 = (unsigned int *)*a1;
                  v138 = 8 * v154;
                  if ( !**a1 )
                  {
                    v139 = (unsigned int *)*a1;
                    v137[36] = 0;
                    if ( (unsigned int)sub_86C5C0(v139, 12, 0, 12, 0, 127, v138) == 4 )
                    {
                      sub_86D220(v137, 0x5030100u, 12, 0, 12, 0, 127, v138);
                      v94 = sub_868C70((__int64)v8, 36);
LABEL_172:
                      if ( !*v8 )
                      {
                        v95 = *((_QWORD *)v8 + 10);
                        v96 = *(_QWORD *)(v95 + 8);
                        v97 = v96 + 16;
                        if ( (unsigned __int64)(v96 + 16) <= 0xFF0 )
                        {
                          v99 = (__m128 *)(v95 + v96 + 16);
                          *(_QWORD *)(v95 + 8) = v97;
                          if ( v99 )
                          {
LABEL_176:
                            v100 = v166;
                            v39 = _mm_loadh_ps(v166);
                            *v99 = v39;
                            *(_QWORD *)v100 = v99;
                          }
                        }
                        else
                        {
                          v98 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD, double))v8 + 7))(
                                            4096,
                                            *(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL),
                                            *(double *)v39.m128_u64);
                          if ( v98 )
                          {
                            v98->m128_u64[0] = *((_QWORD *)v8 + 10);
                            *((_QWORD *)v8 + 10) = v98;
                            v99 = v98 + 1;
                            v99[-1].m128_u64[1] = 16;
                            goto LABEL_176;
                          }
                          *v8 = 2;
                        }
                      }
                      v101 = sub_868BC0((__int64)v8);
                      for ( k = v179; k; k = (__int64 *)k[1] )
                      {
LABEL_178:
                        v103 = *k;
                        if ( *k && v101 )
                        {
                          *(_QWORD *)(v103 + 16) &= ~1uLL;
                          *(_QWORD *)(v103 + 24) = v101;
                        }
                      }
                      if ( v160 >= 0 )
                      {
                        if ( v159 == -119 )
                        {
                          sub_86D900(v8, 0x42u, 12, 0, 142, v157, 0x7Fu, v164);
                          sub_86B8E0(v8, 32, 2, 0, 140, 8 * (1 - v154));
                          goto LABEL_220;
                        }
                        sub_86D900(v8, 0x42u, 12, 0, 142, v157, 0x7Fu, 8LL * (v160 + v153 + 2));
                        if ( (v153 == 0 ? 2 : 5) != v154 )
                        {
                          sub_86B8E0(v8, 32, 2, 0, 140, -8);
                          if ( v159 != -103 )
                            goto LABEL_186;
LABEL_262:
                          sub_86B8E0(v8, 32, 140, 0, 2, 0);
LABEL_239:
                          v126 = sub_868BC0((__int64)v8);
                          v165[7] = v126;
                          if ( v94 && v126 )
                          {
                            v94[2] &= ~1uLL;
                            v94[3] = v126;
                          }
LABEL_220:
                          if ( v167 )
                          {
                            *((_DWORD *)a1 + 49) = v174;
                            a1[35] = v175;
                            a1[43] = v176;
                          }
                          result = v16 + 3;
                          goto LABEL_94;
                        }
                        sub_86B8E0(v8, 32, 2, 0, 140, 0);
                        if ( v159 != -102 )
                          goto LABEL_239;
LABEL_186:
                        sub_86B8E0(v8, 32, 140, 0, 127, 0);
LABEL_187:
                        v104 = v165[7];
                        v105 = sub_868C70((__int64)v8, 36);
                        if ( v105 && v104 )
                        {
                          v105[2] &= ~1uLL;
                          v105[3] = v104;
                        }
                        v106 = sub_868BC0((__int64)v8);
                        if ( v106 )
                        {
                          v107 = v177;
                          if ( v177 )
                          {
                            v177[2] &= ~1uLL;
                            v107[3] = v106;
                          }
                        }
                        if ( v160 <= 0 )
                        {
LABEL_194:
                          v108 = sub_868BC0((__int64)v8);
                          for ( m = (__int64 *)v165[3]; m; m = (__int64 *)m[1] )
                          {
                            v110 = *m;
                            if ( *m && v108 )
                            {
                              *(_QWORD *)(v110 + 16) &= ~1uLL;
                              *(_QWORD *)(v110 + 24) = v108;
                            }
                          }
                          goto LABEL_220;
                        }
                        v144 = v157;
                        sub_86B8E0(v8, 32, 12, 0, 142, v157);
                        sub_868C70((__int64)v8, 37);
                        if ( !*v8 )
                        {
                          v145 = *((_QWORD *)v8 + 10);
                          v146 = *(_QWORD *)(v145 + 8);
                          v147 = v146 + 16;
                          if ( (unsigned __int64)(v146 + 16) <= 0xFF0 )
                          {
                            v149 = (__m128 *)(v145 + v146 + 16);
                            *(_QWORD *)(v145 + 8) = v147;
                            if ( v149 )
                            {
LABEL_297:
                              *v149 = _mm_loadh_ps((const double *)a1 + 50);
                              a1[50] = (int *)v149;
                            }
                          }
                          else
                          {
                            v148 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD, double))v8 + 7))(
                                               4096,
                                               *(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL),
                                               *(double *)v39.m128_u64);
                            if ( v148 )
                            {
                              v148->m128_u64[0] = *((_QWORD *)v8 + 10);
                              *((_QWORD *)v8 + 10) = v148;
                              v149 = v148 + 1;
                              v149[-1].m128_u64[1] = 16;
                              goto LABEL_297;
                            }
                            *v8 = 2;
                          }
                        }
                        sub_86B8E0(v8, 32, 1, 0, 140, -16);
                        sub_86D900(v8, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (v160 - 1));
                        sub_86B8E0(v8, 32, 142, v144, 1, 0);
                        goto LABEL_194;
                      }
                      if ( !v154 )
                      {
                        if ( v159 != -103 )
                        {
LABEL_247:
                          if ( v159 != -102 )
                            goto LABEL_220;
                          sub_86D900(v8, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
                          sub_86B8E0(v8, 32, 140, 0, 127, 0);
                          goto LABEL_187;
                        }
LABEL_238:
                        sub_86D900(v8, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
                        goto LABEL_239;
                      }
LABEL_286:
                      sub_86B8E0(v8, 32, 2, 0, 140, -8 * v154);
                      if ( v159 == -103 )
                      {
                        sub_86D900(v8, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
                        if ( v154 != 1 )
                          goto LABEL_262;
                        goto LABEL_239;
                      }
                      goto LABEL_247;
                    }
                  }
                }
LABEL_171:
                v94 = sub_868C70((__int64)v8, 36);
                goto LABEL_172;
              }
              sub_86B8E0(v8, 32, 1, 0, 140, 8 * v154 - 8);
            }
            v131 = (unsigned int *)*a1;
            v132 = 8 * (v154 + v160);
            if ( !**a1 )
            {
              v133 = (unsigned int *)*a1;
              v131[36] = 0;
              if ( (unsigned int)sub_86C5C0(v133, 12, 0, 12, 0, 127, v132) == 4 )
                sub_86D220(v131, 0x5030100u, 12, 0, 12, 0, 127, v132);
            }
            sub_86B8E0(v8, 32, 142, v157, 1, 0);
            goto LABEL_171;
          }
          v31 = v16;
          v29 = (unsigned int *)(v16 + 3);
          v16 += (unsigned __int16)__ROL2__(*(_WORD *)(v16 + 1), 8);
          continue;
        }
        sub_86B8E0(v8, 32, 142, *((int *)a1 + 27), 140, -8);
        if ( v158 != -127 )
          goto LABEL_47;
LABEL_42:
        if ( v156 )
        {
LABEL_43:
          if ( v154 )
          {
            v38 = 1;
            if ( v178 )
              v38 = 2;
            sub_86B8E0(v8, 32, 2, 0, 140, -8 * (v38 + v153));
          }
          goto LABEL_47;
        }
LABEL_89:
        if ( v159 != -103 )
        {
          sub_86B8E0(v8, 32, 142, v37, 140, 8 * ~v32);
          goto LABEL_47;
        }
        sub_86B8E0(v8, 32, 1, 0, 140, 8 * ~v32);
        sub_86B8E0(v8, 32, 2, 0, 140, -8 * (v154 + v32));
        sub_86B8E0(v8, 32, 142, v37, 1, 0);
LABEL_139:
        sub_86D900(v8, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
        sub_86B8E0(v8, 32, 140, 0, 127, 0);
        goto LABEL_47;
      }
      sub_86B8E0(v8, 32, 12, 0, 142, v157);
      if ( v153 )
        sub_86B8E0(v8, 32, 13, 0, 140, 8 * (1 - v32 - v154));
      if ( v178 )
        sub_86B8E0(v8, 32, 142, *((int *)a1 + 27), 140, 8 * (-2 - v32));
      v60 = (unsigned int *)sub_868C70((__int64)v8, 37);
      if ( !*v8 )
      {
        v61 = *((_QWORD *)v8 + 10);
        v62 = *(_QWORD *)(v61 + 8);
        v63 = v62 + 16;
        if ( (unsigned __int64)(v62 + 16) <= 0xFF0 )
        {
          v66 = (__m128 *)(v61 + v62 + 16);
          *(_QWORD *)(v61 + 8) = v63;
          if ( v66 )
          {
LABEL_87:
            *v66 = _mm_loadh_ps((const double *)a1 + 50);
            a1[50] = (int *)v66;
          }
        }
        else
        {
          v64 = *((_QWORD *)v8 + 7);
          v155 = v60;
          v65 = (__m128 *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(4096, *(_QWORD *)(v64 + 16));
          if ( v65 )
          {
            v65->m128_u64[0] = *((_QWORD *)v8 + 10);
            *((_QWORD *)v8 + 10) = v65;
            v66 = v65 + 1;
            v66[-1].m128_u64[1] = 16;
            goto LABEL_87;
          }
          *v8 = 2;
        }
      }
      sub_86D900(v8, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (v32 - 1));
      goto LABEL_89;
    }
    break;
  }
  if ( v167 )
  {
    *((_DWORD *)a1 + 49) = v174;
    a1[35] = v175;
    a1[43] = v176;
  }
  result = nullptr;
LABEL_94:
  *((_DWORD *)a1 + 50) = v168;
  *((_DWORD *)a1 + 28) = v173;
  a1[8] = v169;
  a1[37] = v170;
  a1[44] = v171;
  a1[47] = v172;
  return result;
}
