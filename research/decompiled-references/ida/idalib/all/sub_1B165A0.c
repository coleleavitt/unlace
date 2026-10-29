__int64 __fastcall sub_1B165A0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int16 *a11)
{
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rbp
  int v14; // eax
  void **p_ptr; // rbx
  __m128i v16; // xmm3
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  char *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  void *v24; // r9
  __int64 v25; // r13
  signed __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r8
  char v29; // al
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  char *v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  size_t v39; // r12
  const void *v40; // rbp
  __int64 v41; // r14
  __int16 v42; // cx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rbp
  void **v46; // r12
  _QWORD *i; // rbx
  __int64 v48; // r14
  __int64 v49; // rax
  unsigned __int64 v50; // r13
  void **v51; // rsi
  unsigned __int64 v52; // rdx
  void **v53; // rdi
  void *v54; // r14
  char *v55; // r13
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // rbp
  void **v60; // rbx
  _QWORD *v62; // rax
  void **v63; // r13
  __int64 v64; // r15
  __int64 v65; // rbp
  char *v66; // rbx
  __int64 v67; // r13
  int v68; // r10d
  char ***v69; // rsi
  char ***v70; // rdi
  __int64 v71; // r15
  __int64 v72; // rbx
  int v73; // r15d
  __int64 v74; // r14
  __int64 v75; // rdx
  void **v76; // r15
  char *v77; // rbp
  void **v78; // r15
  _QWORD *v79; // r12
  __int64 v80; // rbx
  int v81; // r9d
  __int64 v82; // r14
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rsi
  _QWORD *v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  char v89; // al
  __m128i v90; // xmm5
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // r9
  __int64 v106; // r14
  void **v107; // rax
  unsigned __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  signed __int64 v114; // r9
  __int64 v115; // r15
  __int64 v116; // r14
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  void **v121; // [rsp+0h] [rbp-428h]
  __int64 *v122; // [rsp+0h] [rbp-428h]
  int v123; // [rsp+18h] [rbp-410h]
  __int64 v124; // [rsp+18h] [rbp-410h]
  void *v126; // [rsp+18h] [rbp-410h]
  __int64 v127; // [rsp+18h] [rbp-410h]
  __int64 v128; // [rsp+18h] [rbp-410h]
  __int64 v129; // [rsp+18h] [rbp-410h]
  __int64 v130; // [rsp+28h] [rbp-400h]
  __int64 v132; // [rsp+28h] [rbp-400h]
  void **v133; // [rsp+28h] [rbp-400h]
  unsigned __int64 v136; // [rsp+38h] [rbp-3F0h]
  unsigned __int64 v137; // [rsp+48h] [rbp-3E0h]
  char v138; // [rsp+57h] [rbp-3D1h]
  __int64 v139; // [rsp+58h] [rbp-3D0h]
  _QWORD *v140; // [rsp+60h] [rbp-3C8h]
  int v141; // [rsp+60h] [rbp-3C8h]
  __int64 v142; // [rsp+68h] [rbp-3C0h] BYREF
  __int64 v143; // [rsp+78h] [rbp-3B0h] BYREF
  unsigned __int64 v144; // [rsp+80h] [rbp-3A8h] BYREF
  __int64 *v145; // [rsp+88h] [rbp-3A0h]
  __int64 v146; // [rsp+90h] [rbp-398h]
  __int64 v147; // [rsp+98h] [rbp-390h] BYREF
  void *v148[2]; // [rsp+D8h] [rbp-350h]
  __int64 v149; // [rsp+E8h] [rbp-340h]
  __int64 v150; // [rsp+F0h] [rbp-338h]
  __m128i v151; // [rsp+F8h] [rbp-330h]
  __int64 v152; // [rsp+108h] [rbp-320h]
  __int64 v153; // [rsp+110h] [rbp-318h]
  __int64 v154; // [rsp+118h] [rbp-310h]
  __int64 v155; // [rsp+120h] [rbp-308h]
  char *v156; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v157; // [rsp+138h] [rbp-2F0h]
  _QWORD v158[2]; // [rsp+140h] [rbp-2E8h] BYREF
  __int64 v159; // [rsp+150h] [rbp-2D8h] BYREF
  void *ptr; // [rsp+280h] [rbp-1A8h] BYREF
  void *src; // [rsp+288h] [rbp-1A0h]
  __int64 v162; // [rsp+290h] [rbp-198h]
  _QWORD v163[8]; // [rsp+298h] [rbp-190h] BYREF
  void *v164[2]; // [rsp+2D8h] [rbp-150h]
  __int64 v165; // [rsp+2E8h] [rbp-140h]
  __int64 v166; // [rsp+2F0h] [rbp-138h]
  __m128i v167; // [rsp+2F8h] [rbp-130h]
  __int64 v168; // [rsp+308h] [rbp-120h]
  __int64 v169; // [rsp+310h] [rbp-118h]
  __int64 v170; // [rsp+318h] [rbp-110h]
  __int64 v171; // [rsp+320h] [rbp-108h]
  void **v172; // [rsp+328h] [rbp-100h]
  __int64 v173; // [rsp+330h] [rbp-F8h]
  int v174; // [rsp+338h] [rbp-F0h]
  char v175; // [rsp+33Ch] [rbp-ECh]
  __int64 v176; // [rsp+360h] [rbp-C8h]
  void **v177; // [rsp+368h] [rbp-C0h]
  __int64 v178; // [rsp+370h] [rbp-B8h]
  int v179; // [rsp+3D8h] [rbp-50h]
  __int64 v180; // [rsp+3E0h] [rbp-48h]
  __int16 v181; // [rsp+3E8h] [rbp-40h]
  char v182; // [rsp+3EAh] [rbp-3Eh]

  v11 = a4;
  v12 = a5;
  v13 = a1;
  v14 = *(_DWORD *)a5;
  v142 = a3;
  if ( v14 && *(_DWORD *)(a5 + 4) && !*(_QWORD *)(a5 + 8) )
    return 1;
  v156 = (char *)v158;
  v157 = 0x400000000LL;
  if ( !a4 )
  {
    if ( !a11 )
      goto LABEL_86;
    v42 = *a11;
    v158[1] = 0x800000000LL;
    LODWORD(v157) = 1;
    v158[0] = &v159;
    v43 = a11 + 40;
    v44 = *((unsigned int *)a11 + 1);
    if ( (v42 & 0x1FF) == 0x18 )
      v43 = a11 + 32;
    if ( v43 == &v43[v44] )
    {
LABEL_86:
      p_ptr = &ptr;
      goto LABEL_24;
    }
    v45 = &v43[v44];
    v46 = &ptr;
    for ( i = v43 + 1; ; ++i )
    {
      v50 = *v43 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v50 != v11 )
        break;
      v51 = v46;
      ptr = v46 + 2;
      src = (void *)0x800000000LL;
      v52 = (unsigned int)v157 + 1LL;
      v53 = (void **)&v156[80 * (unsigned int)v157];
      if ( v52 > HIDWORD(v157) )
      {
        v137 = -1;
        v138 = 0;
        if ( v156 <= (char *)v46 && v53 > v46 )
        {
          v138 = 1;
          v137 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v46 - v156) >> 4);
        }
        v74 = sub_2237400(&v156, v158, v52, 80, &v144);
        v139 = v74;
        v75 = 80LL * (unsigned int)v157;
        v76 = (void **)&v156[v75];
        if ( v156 != &v156[v75] )
        {
          v140 = v45;
          v77 = &v156[v75];
          v78 = v46;
          v79 = i;
          v80 = (__int64)v156;
          do
          {
            *(_DWORD *)(v74 + 8) = 0;
            *(_DWORD *)(v74 + 12) = 8;
            v81 = *(_DWORD *)(v80 + 8);
            *(_QWORD *)v74 = v74 + 16;
            if ( v81 )
              sub_183F920((char ***)v74, (char ***)v80);
            v80 += 80;
            v74 += 80;
          }
          while ( v77 != (char *)v80 );
          v82 = (__int64)v156;
          i = v79;
          v46 = v78;
          v45 = v140;
          v83 = 80LL * (unsigned int)v157;
          v76 = (void **)&v156[v83];
          if ( v156 != &v156[v83] )
          {
            do
            {
              while ( 1 )
              {
                v76 -= 10;
                if ( *v76 == v76 + 2 )
                  break;
                free(*v76);
                if ( v76 == (void **)v82 )
                  goto LABEL_99;
              }
            }
            while ( v76 != (void **)v82 );
LABEL_99:
            v76 = (void **)v156;
          }
        }
        v84 = v144;
        if ( v76 != v158 )
        {
          v141 = v144;
          free(v76);
          v84 = v141;
        }
        HIDWORD(v157) = v84;
        v51 = v46;
        v156 = (char *)v139;
        v53 = (void **)(v139 + 80LL * (unsigned int)v157);
        if ( v138 )
          v51 = (void **)(v139 + 80 * v137);
      }
      *v53 = v53 + 2;
      v53[1] = (void *)0x800000000LL;
      if ( *((_DWORD *)v51 + 2) )
        sub_183F920((char ***)v53, (char ***)v51);
      LODWORD(v157) = v157 + 1;
      if ( ptr == v46 + 2 )
        goto LABEL_44;
      free(ptr);
      v43 = i;
      if ( v45 == i )
      {
LABEL_52:
        p_ptr = v46;
        v13 = a1;
        v12 = a5;
        goto LABEL_24;
      }
LABEL_45:
      v11 = v50;
    }
    if ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0x1A )
    {
      ptr = (void *)(v50 | 3);
      v48 = (__int64)&v156[80 * (unsigned int)v157 - 80];
      v49 = *(unsigned int *)(v48 + 8);
      if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(v48 + 12) )
      {
        sub_2237220(&v156[80 * (unsigned int)v157 - 80], v48 + 16, v49 + 1, 8);
        v49 = *(unsigned int *)(v48 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v48 + 8 * v49) = v50 | 3;
      ++*(_DWORD *)(v48 + 8);
    }
LABEL_44:
    v43 = i;
    if ( v45 == i )
      goto LABEL_52;
    goto LABEL_45;
  }
  p_ptr = &ptr;
  ptr = nullptr;
  v162 = 0x800000000LL;
  src = v163;
  *(_OWORD *)v164 = 0;
  v16 = _mm_loadu_si128(a6);
  v17 = a6[1].m128i_i64[0];
  v165 = 0;
  v166 = a1;
  v168 = v17;
  v171 = 0x101010000LL;
  v167 = v16;
  v169 = 0;
  v170 = 13;
  sub_1A395A0((__int64)&ptr);
  *(_WORD *)((char *)&v171 + 3) = 0;
  while ( sub_1A5D3E0(v13, (__int64)p_ptr, (__int64 *)v11, v12, 0, 0, 0.0, *(double *)a8.m128_u64, 0) )
  {
    v18 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
LABEL_8:
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( !v11 )
        break;
      if ( *(_BYTE *)(v11 + 100) )
      {
        v19 = *(_QWORD **)(v11 + 80);
        v20 = &v19[*(unsigned int *)(v11 + 92)];
        if ( v19 != v20 )
        {
          while ( v18 != *v19 )
          {
            if ( v20 == ++v19 )
              goto LABEL_8;
          }
LABEL_14:
          v11 = *(_QWORD *)v11;
          break;
        }
      }
      else if ( sub_2236570(v11 + 80, v18) )
      {
        goto LABEL_14;
      }
    }
    if ( HIDWORD(v157) <= (unsigned int)v157 )
    {
      v22 = sub_2237400(&v156, v158, 0, 80, &v144);
      v62 = (_QWORD *)(v22 + 80LL * (unsigned int)v157);
      v62[1] = 0x800000000LL;
      *v62 = v62 + 2;
      v63 = (void **)&v156[80 * (unsigned int)v157];
      if ( v156 != (char *)v63 )
      {
        v127 = v13;
        v64 = v22;
        v65 = (__int64)v156;
        v133 = p_ptr;
        v66 = &v156[80 * (unsigned int)v157];
        v67 = v22;
        do
        {
          while ( 1 )
          {
            *(_DWORD *)(v64 + 8) = 0;
            *(_DWORD *)(v64 + 12) = 8;
            v68 = *(_DWORD *)(v65 + 8);
            *(_QWORD *)v64 = v64 + 16;
            if ( v68 )
              break;
            v65 += 80;
            v64 += 80;
            if ( v66 == (char *)v65 )
              goto LABEL_75;
          }
          v69 = (char ***)v65;
          v70 = (char ***)v64;
          v65 += 80;
          v64 += 80;
          sub_183F920(v70, v69);
        }
        while ( v66 != (char *)v65 );
LABEL_75:
        v22 = v67;
        v13 = v127;
        v71 = (__int64)v156;
        p_ptr = v133;
        v63 = (void **)&v156[80 * (unsigned int)v157];
        if ( v156 != (char *)v63 )
        {
          v72 = v22;
          do
          {
            while ( 1 )
            {
              v63 -= 10;
              if ( *v63 == v63 + 2 )
                break;
              free(*v63);
              if ( v63 == (void **)v71 )
              {
                v22 = v72;
                v63 = (void **)v156;
                p_ptr = v133;
                goto LABEL_80;
              }
            }
          }
          while ( v63 != (void **)v71 );
          v22 = v72;
          v63 = (void **)v156;
          p_ptr = v133;
        }
      }
LABEL_80:
      v73 = v144;
      if ( v63 != v158 )
      {
        v128 = v22;
        free(v63);
        v22 = v128;
      }
      v156 = (char *)v22;
      HIDWORD(v157) = v73;
      v23 = (unsigned int)(v157 + 1);
      LODWORD(v157) = v157 + 1;
    }
    else
    {
      v21 = &v156[80 * (unsigned int)v157];
      *((_QWORD *)v21 + 1) = 0x800000000LL;
      *(_QWORD *)v21 = v21 + 16;
      v22 = (__int64)v156;
      v23 = (unsigned int)(v157 + 1);
      LODWORD(v157) = v157 + 1;
    }
    v24 = src;
    v25 = v22 + 80 * v23 - 80;
    v26 = 8LL * (unsigned int)v162;
    v27 = *(unsigned int *)(v25 + 8);
    v28 = v26 >> 3;
    if ( (v26 >> 3) + v27 > (unsigned __int64)*(unsigned int *)(v25 + 12) )
    {
      v132 = (8LL * (unsigned int)v162) >> 3;
      v126 = src;
      sub_2237220(v25, v25 + 16, v28 + v27, 8);
      v27 = *(unsigned int *)(v25 + 8);
      LODWORD(v28) = v132;
      v24 = v126;
    }
    if ( v26 )
    {
      v123 = v28;
      memcpy((void *)(*(_QWORD *)v25 + 8 * v27), v24, v26);
      LODWORD(v27) = *(_DWORD *)(v25 + 8);
      LODWORD(v28) = v123;
    }
    *(_DWORD *)(v25 + 8) = v27 + v28;
    LODWORD(ptr) = 0;
    LODWORD(v162) = 0;
    if ( v164[0] )
    {
      sub_1A39780((char *)v164[0]);
      a8 = 0;
      BYTE6(v171) = 0;
      *(_OWORD *)v164 = 0;
      if ( !v11 )
        break;
    }
    else
    {
      BYTE6(v171) = 0;
      *(_OWORD *)v164 = 0;
      if ( !v11 )
        break;
    }
  }
  sub_169D230((__int64)p_ptr);
LABEL_24:
  v29 = sub_B8E180(*(_QWORD *)(v13 + 544));
  v33 = (__int64)v156;
  if ( v29 )
  {
    v34 = &v156[80 * (unsigned int)v157];
LABEL_26:
    v35 = 0x800000000LL;
    ptr = p_ptr + 2;
    src = (void *)0x800000000LL;
    if ( v156 == v34 )
    {
      v55 = (char *)(p_ptr + 2);
      v54 = p_ptr + 2;
LABEL_58:
      v56 = sub_15AB9E0(v12, *(_QWORD **)(v13 + 248), v30, v35, v31, v32);
      v58 = sub_C98860(*(_QWORD **)(v13 + 248), 0, v56, v57, a6, 1, v54, (__int64)v55, 0, 0);
      if ( ptr != p_ptr + 2 )
        free(ptr);
      goto LABEL_60;
    }
LABEL_27:
    v36 = 0;
    v124 = v13;
    v121 = p_ptr + 2;
    v130 = v12;
    do
    {
      v30 = *(unsigned int *)(v33 + 8);
      v35 = v36;
      if ( (_DWORD)v30 )
      {
        v39 = 8 * v30;
        v40 = *(const void **)v33;
        v41 = (8 * v30) >> 3;
        if ( v41 + v36 > (unsigned __int64)HIDWORD(src) )
        {
          sub_2237220(p_ptr, v121, v41 + v36, 8);
          v35 = (unsigned int)src;
        }
        memcpy((char *)ptr + 8 * v35, v40, v39);
        LODWORD(src) = v41 + (_DWORD)src;
        v37 = (unsigned int)src;
        v35 = HIDWORD(src);
        v38 = (unsigned int)src + 1LL;
        v31 = *(_QWORD *)(*(_QWORD *)v33 + 8LL * (unsigned int)(*(_DWORD *)(v33 + 8) - 1)) & 0xFFFFFFFFFFFFFFF8LL | 3;
        v144 = v31;
        if ( v38 > HIDWORD(src) )
        {
          v136 = v31;
          sub_2237220(p_ptr, v121, v38, 8);
          v37 = (unsigned int)src;
          v31 = v136;
        }
        v30 = (__int64)ptr;
        *((_QWORD *)ptr + v37) = v31;
        v36 = (unsigned int)((_DWORD)src + 1);
        LODWORD(src) = (_DWORD)src + 1;
      }
      v33 += 80;
    }
    while ( v34 != (char *)v33 );
    v54 = ptr;
    v13 = v124;
    v12 = v130;
    v55 = (char *)ptr + 8 * v36;
    goto LABEL_58;
  }
  v34 = &v156[80 * (unsigned int)v157];
  if ( (*(_BYTE *)(*(_QWORD *)(a9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 7) != 0 )
    goto LABEL_26;
  if ( v156 != v34 )
  {
    v85 = (__int64)v156;
    while ( 1 )
    {
      v86 = *(_QWORD **)v85;
      v87 = *(_QWORD *)v85 + 8LL * *(unsigned int *)(v85 + 8);
      if ( *(_QWORD *)v85 != v87 )
        break;
LABEL_115:
      v85 += 80;
      if ( v34 == (char *)v85 )
        goto LABEL_116;
    }
    while ( 1 )
    {
      v88 = *v86 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(char *)(v88 + 28) >= 0 )
      {
        v89 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v88 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
        if ( (v89 & 4) != 0 || (v89 & 2) != 0 || (v89 & 1) != 0 )
          break;
      }
      if ( (_QWORD *)v87 == ++v86 )
        goto LABEL_115;
    }
    ptr = p_ptr + 2;
    src = (void *)0x800000000LL;
    goto LABEL_27;
  }
LABEL_116:
  v144 = 0;
  *(_OWORD *)v148 = 0;
  v145 = &v147;
  v146 = 0x800000000LL;
  v149 = 0;
  v90 = _mm_loadu_si128(a6);
  v91 = a6[1].m128i_i64[0];
  v150 = v13;
  v153 = 0;
  v152 = v91;
  v155 = 0x101010000LL;
  v151 = v90;
  v154 = 13;
  sub_1A395A0((__int64)&v144);
  *(_WORD *)((char *)&v155 + 3) = 0;
  v92 = *(_QWORD *)(*(_QWORD *)(a9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v93 = *(_QWORD *)v92;
  if ( *(_BYTE *)(*(_QWORD *)v92 + 16LL) == 48 )
  {
    if ( !(unsigned __int8)sub_1E63330(v13, a2, a9, 1, 0)
      || (unsigned __int8)sub_F60F20(v93, a2, v94, v95, v96, v97)
      || (v109 = sub_F60F10(v93, a2, v94, v95, v96, v97), sub_B7E870((__int64)v109, a2, v110, v111, v112, v113)) )
    {
      LODWORD(v144) = 0;
      LODWORD(v146) = 0;
      if ( v148[0] )
        sub_1A39780((char *)v148[0]);
      BYTE6(v155) = 0;
      *(_OWORD *)v148 = 0;
      v98 = sub_F60F10(v93, a2, v94, v95, v96, v97);
      if ( v98 )
        v98 += 8;
      sub_1A48440(v13, (__int64)&v144, (__int64)v98, 0);
      if ( !(_DWORD)v146 )
      {
        sub_1AF7180((__int64)&v156);
        v114 = 8LL * (unsigned int)v146;
        v115 = (__int64)&v156[80 * (unsigned int)v157 - 80];
        v116 = v114 >> 3;
        v122 = v145;
        v117 = *(unsigned int *)(v115 + 8);
        if ( (v114 >> 3) + v117 > (unsigned __int64)*(unsigned int *)(v115 + 12) )
        {
          v129 = 8LL * (unsigned int)v146;
          sub_2237220(&v156[80 * (unsigned int)v157 - 80], v115 + 16, v116 + v117, 8);
          v117 = *(unsigned int *)(v115 + 8);
          v114 = v129;
        }
        if ( v114 )
        {
          memcpy((void *)(*(_QWORD *)v115 + 8 * v117), v122, v114);
          LODWORD(v117) = *(_DWORD *)(v115 + 8);
        }
        *(_DWORD *)(v115 + 8) = v116 + v117;
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 8) != 0 )
    sub_1AF6C20(v13, a6->m128i_i64, a2, a9, (__int64)&v156);
  ptr = (void *)v13;
  src = (void *)a9;
  v99 = sub_1AE6A20((__int64 *)&v156, (__int64 (__fastcall *)(__int64, unsigned __int64))sub_1AE66E0, (__int64)p_ptr);
  v102 = v99;
  if ( !v99 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 8) != 0 )
    {
      ptr = (void *)v13;
      src = (void *)a9;
      LODWORD(v162) = a2;
      v106 = sub_1AE6A20(
               (__int64 *)&v156,
               (__int64 (__fastcall *)(__int64, unsigned __int64))sub_1AE7430,
               (__int64)p_ptr);
      if ( v106 )
      {
        ptr = nullptr;
        v163[0] = 0;
        v163[1] = 1;
        v162 = (__int64)(p_ptr + 1);
        src = p_ptr + 1;
        v107 = p_ptr + 5;
        do
        {
          *v107 = nullptr;
          v107 += 2;
        }
        while ( v107 != p_ptr + 21 );
        v173 = 4;
        v172 = p_ptr + 24;
        v177 = p_ptr + 31;
        v181 = 257;
        v174 = 0;
        v175 = 1;
        v176 = 0;
        v178 = 0x400000000LL;
        v179 = 0;
        v180 = 0;
        v182 = 0;
        if ( (unsigned __int8)sub_183BEE0(v13, a2, a9, *(_QWORD *)(v106 + 48), (__int64)p_ptr, v105) )
        {
          v143 = *(_QWORD *)(v106 + 48);
          v108 = sub_6D5440(&v143);
          if ( !sub_B65DB0(
                  (__int64)p_ptr,
                  *(_QWORD *)&byte_8[v108 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v108 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v108) & 7)
            && (unsigned int)sub_16643B0((_QWORD *)v13, a2, *(_QWORD *)(v106 + 48), a9, (__int64)src + 16, 0, 0, 0) != 1 )
          {
            sub_183BF30(v13, (__int64)p_ptr, a10);
            v143 = *(_QWORD *)(v106 + 48);
            v120 = sub_C1BEF0((__int64)&v143, (__int64)p_ptr, v118, v119);
            v58 = sub_190BDA0(v13, v106, v120, 1, a2, 0, 0.0, a8);
            sub_F7C4A0((__int64)p_ptr);
            goto LABEL_127;
          }
        }
        sub_F7C4A0((__int64)p_ptr);
      }
    }
    v58 = 0;
    if ( *(_QWORD *)(v12 + 8) )
    {
      v58 = 1;
      sub_168B9F0((__int64)p_ptr, (__int64 *)(v13 + 8), a2, 0x11D3u, 0);
      v104 = sub_1605D30((__int64)p_ptr, &a9);
      sub_15884C0(v104, &v142);
      sub_15F7200(p_ptr);
    }
    goto LABEL_127;
  }
  ptr = *(void **)(v99 + 48);
  v103 = sub_C1BEF0((__int64)p_ptr, (__int64)sub_1AE66E0, v100, v101);
  v58 = sub_190BDA0(v13, v102, v103, 1, a2, 0, 0.0, a8);
LABEL_127:
  sub_169D230((__int64)&v144);
LABEL_60:
  v59 = (__int64)v156;
  v60 = (void **)&v156[80 * (unsigned int)v157];
  if ( v156 != (char *)v60 )
  {
    do
    {
      while ( 1 )
      {
        v60 -= 10;
        if ( *v60 == v60 + 2 )
          break;
        free(*v60);
        if ( (void **)v59 == v60 )
          goto LABEL_63;
      }
    }
    while ( (void **)v59 != v60 );
LABEL_63:
    v60 = (void **)v156;
  }
  if ( v60 != v158 )
    free(v60);
  return v58;
}
