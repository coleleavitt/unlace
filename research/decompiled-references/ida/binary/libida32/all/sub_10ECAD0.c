__int64 __fastcall sub_10ECAD0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // rbp
  char *v8; // rbx
  __int64 v9; // r13
  void *v10; // rdi
  void *v11; // rdi
  void **v12; // rdi
  void **v13; // r15
  void **v14; // r14
  void *v15; // rdi
  void *v16; // rdi
  const __m128i *v17; // rsi
  __int64 v18; // rax
  void *v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rbp
  char *v22; // r13
  char *v23; // r15
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // r12
  __int64 v33; // r14
  unsigned int v34; // eax
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned int v37; // eax
  char *v38; // r14
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  _BYTE *v41; // rax
  unsigned __int64 v42; // rbx
  _BYTE *v43; // r14
  _BYTE *v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // rdx
  _BYTE *v47; // rax
  char *v48; // rdi
  __int64 v49; // rdx
  _BYTE *v50; // rax
  size_t *v51; // rdi
  __int64 v52; // rdx
  void **v53; // r12
  void **v54; // r13
  void **v55; // r15
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  _BYTE *v60; // rax
  _BYTE *v61; // rdi
  __int64 v62; // rdx
  bool v63; // zf
  void *v64; // rdi
  _BYTE *v65; // rdi
  __int64 v66; // rdx
  char *v67; // rdi
  __int64 v68; // rdx
  size_t *v69; // rdi
  __int64 v70; // rdx
  void **v71; // r15
  void **v72; // r13
  void **v73; // r12
  _BYTE *v74; // rdi
  __int64 v75; // rax
  _BYTE *v76; // rdi
  void **v77; // r13
  void **v78; // r12
  void *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // r12
  char *v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // r13
  char v85; // si
  __int64 v86; // rax
  char *v87; // rsi
  unsigned __int64 v88; // r15
  signed __int64 v89; // r12
  __int64 v90; // rax
  __m128i v91; // xmm0
  char *v92; // rcx
  char *v93; // r14
  _QWORD *v94; // r12
  _QWORD *v95; // rdx
  _QWORD *v96; // rdi
  _BYTE *v97; // rdx
  void *v98; // rax
  size_t v99; // rdx
  size_t v100; // rdx
  size_t v101; // rdx
  size_t v102; // rdx
  size_t v103; // rdx
  size_t v104; // rdx
  size_t v105; // rdx
  size_t v106; // rdx
  __int64 v107; // r12
  __int64 v108; // r14
  unsigned int v109; // eax
  __int64 v110; // r12
  __int64 v111; // r14
  unsigned int v112; // eax
  __int64 v113; // r12
  __int64 v114; // r14
  unsigned int v115; // eax
  __int64 v116; // r9
  __m128i *v117; // rcx
  int v118; // eax
  int v119; // esi
  __int64 v120; // r8
  size_t *v121; // rax
  _BYTE *v122; // rax
  char *v123; // rax
  void **v124; // r12
  void **v125; // rbx
  unsigned int v127; // eax
  __int64 v128; // rdx
  unsigned __int64 v129; // rax
  int v130; // ebx
  __m128i *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r8
  __m128i *v134; // rcx
  __m128i v135; // xmm5
  char *v136; // rcx
  __int64 v137; // rdx
  __int64 *v138; // r15
  __int64 v139; // rax
  char *v140; // r12
  __int64 v141; // r14
  char *v142; // r13
  __int64 v143; // r15
  __int64 v144; // rsi
  __int64 v145; // rdi
  char *v146; // r12
  int v147; // r12d
  __int64 *v148; // rax
  __m128i *v149; // rax
  __int64 v150; // rdx
  __m128i v151; // xmm6
  __int64 v152; // rcx
  __m128i v153; // [rsp+0h] [rbp-1F8h] BYREF
  void *src; // [rsp+10h] [rbp-1E8h]
  char *v155; // [rsp+18h] [rbp-1E0h]
  size_t *v156; // [rsp+20h] [rbp-1D8h]
  _BYTE *v157; // [rsp+28h] [rbp-1D0h]
  __int64 *v158; // [rsp+30h] [rbp-1C8h]
  char v159; // [rsp+3Fh] [rbp-1B9h]
  _BYTE *v160; // [rsp+40h] [rbp-1B8h]
  void **v161; // [rsp+48h] [rbp-1B0h]
  __m128i *v162; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v163; // [rsp+58h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+60h] [rbp-198h] BYREF
  int v165; // [rsp+68h] [rbp-190h]
  int v166; // [rsp+6Ch] [rbp-18Ch]
  __int64 v167; // [rsp+80h] [rbp-178h] BYREF
  __int64 v168; // [rsp+88h] [rbp-170h]
  unsigned int v169; // [rsp+90h] [rbp-168h]
  void *v170; // [rsp+A0h] [rbp-158h] BYREF
  void **v171; // [rsp+A8h] [rbp-150h]
  void *v172; // [rsp+B8h] [rbp-140h]
  __int64 v173; // [rsp+C0h] [rbp-138h]
  size_t v174[2]; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v175; // [rsp+110h] [rbp-E8h] BYREF
  void *v176; // [rsp+120h] [rbp-D8h]
  size_t v177; // [rsp+128h] [rbp-D0h]
  __int64 v178; // [rsp+130h] [rbp-C8h] BYREF
  void *v179; // [rsp+140h] [rbp-B8h]
  size_t n; // [rsp+148h] [rbp-B0h]
  __int64 v181; // [rsp+150h] [rbp-A8h] BYREF
  void *v182; // [rsp+160h] [rbp-98h]
  void **v183; // [rsp+168h] [rbp-90h]
  __int64 i; // [rsp+170h] [rbp-88h]
  void *v185; // [rsp+178h] [rbp-80h]
  size_t v186; // [rsp+180h] [rbp-78h]
  _QWORD v187[2]; // [rsp+188h] [rbp-70h] BYREF
  void *v188[2]; // [rsp+198h] [rbp-60h] BYREF
  __m128i v189; // [rsp+1A8h] [rbp-50h] BYREF
  char v190; // [rsp+1B8h] [rbp-40h]

  v7 = a1;
  v158 = a4;
  v161 = &v170;
  sub_10E7F70((__int64)&v170, a1, a2, a3);
  v153.m128i_i64[0] = (__int64)&ptr;
  sub_10EC4A0((__int64)&ptr, a1, &v170);
  v8 = (char *)*a4;
  v9 = *a4 + 192LL * *((unsigned int *)a4 + 2);
  while ( (char *)v9 != v8 )
  {
    while ( 1 )
    {
      v9 -= 192;
      if ( *(_BYTE *)(v9 + 184) )
      {
        v10 = *(void **)(v9 + 152);
        if ( v10 != (void *)(v9 + 168) )
          operator delete(v10);
      }
      v11 = *(void **)(v9 + 120);
      if ( v11 != (void *)(v9 + 136) )
        operator delete(v11);
      v12 = *(void ***)(v9 + 96);
      v13 = *(void ***)(v9 + 104);
      v14 = v12;
      if ( v13 != v12 )
      {
        do
        {
          while ( *v14 != v14 + 2 )
          {
            operator delete(*v14);
            v14 += 4;
            if ( v13 == v14 )
              goto LABEL_11;
          }
          v14 += 4;
        }
        while ( v13 != v14 );
LABEL_11:
        v12 = *(void ***)(v9 + 96);
      }
      if ( v12 )
        operator delete(v12);
      v15 = *(void **)(v9 + 64);
      if ( v15 != (void *)(v9 + 80) )
        operator delete(v15);
      v16 = *(void **)(v9 + 32);
      if ( v16 != (void *)(v9 + 48) )
        operator delete(v16);
      if ( *(_QWORD *)v9 == v9 + 16 )
        break;
      operator delete(*(void **)v9);
      if ( (char *)v9 == v8 )
        goto LABEL_20;
    }
  }
LABEL_20:
  *((_DWORD *)v158 + 2) = 0;
  if ( a5 )
  {
    v17 = (const __m128i *)v172;
    if ( v172 == v161 + 5 )
    {
      v128 = (unsigned int)v173;
      v129 = *(unsigned int *)(a5 + 8);
      v130 = v173;
      if ( (unsigned int)v173 <= v129 )
      {
        if ( (_DWORD)v173 )
        {
          v149 = *(__m128i **)a5;
          v150 = *(_QWORD *)a5 + 16LL * (unsigned int)v173;
          do
          {
            v151 = _mm_loadu_si128(v17);
            ++v149;
            ++v17;
            v149[-1] = v151;
          }
          while ( v149 != (__m128i *)v150 );
        }
      }
      else
      {
        if ( (unsigned int)v173 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
        {
          *(_DWORD *)(a5 + 8) = 0;
          sub_22134E0(a5, a5 + 16, v128, 16);
          v136 = (char *)v172;
          v131 = *(__m128i **)a5;
          v133 = 0;
          v128 = (unsigned int)v173;
          v17 = (const __m128i *)v172;
        }
        else
        {
          v131 = *(__m128i **)a5;
          if ( *(_DWORD *)(a5 + 8) )
          {
            v132 = 16 * v129;
            v133 = v132;
            v134 = &v131[(unsigned __int64)v132 / 0x10];
            do
            {
              v135 = _mm_loadu_si128(v17);
              ++v131;
              ++v17;
              v131[-1] = v135;
            }
            while ( v131 != v134 );
            v136 = (char *)v172;
            v17 = (const __m128i *)((char *)v172 + v132);
            v131 = (__m128i *)(*(_QWORD *)a5 + v132);
          }
          else
          {
            v133 = 0;
            v136 = (char *)v172;
          }
        }
        v137 = 16 * v128;
        if ( v17 != (const __m128i *)&v136[v137] )
          memcpy(v131, v17, v137 - v133);
      }
      *(_DWORD *)(a5 + 8) = v130;
      LODWORD(v173) = 0;
    }
    else
    {
      if ( *(_QWORD *)a5 != a5 + 16 )
      {
        free(*(void **)a5);
        v17 = (const __m128i *)v172;
      }
      v18 = v173;
      *(_QWORD *)a5 = v17;
      v173 = 0;
      *(_QWORD *)(a5 + 8) = v18;
      v172 = v161 + 5;
    }
  }
  v19 = *(void **)v7;
  v20 = *(_QWORD *)(v7 + 8);
  v167 = 0;
  v168 = 0;
  v169 = 0;
  src = v19;
  v159 = 0;
  if ( (void *)v20 == v19 )
  {
    v38 = (char *)*v158;
    v127 = *((_DWORD *)v158 + 2);
    v152 = *v158 + 192LL * v127;
    if ( v152 == *v158 )
      goto LABEL_235;
    v40 = v152 - 192;
    if ( (unsigned __int64)v38 >= v40 )
      goto LABEL_235;
LABEL_38:
    v153.m128i_i64[0] = (__int64)&v175;
    v153.m128i_i64[1] = (__int64)&v178;
    src = &v181;
    v41 = (_BYTE *)(v40 + 16);
    v42 = (unsigned __int64)v38;
    while ( 1 )
    {
      v43 = v41;
      sub_10EA330((__int64)v174, v42);
      v44 = *((_BYTE **)v43 - 2);
      v45 = *(_BYTE **)v42;
      if ( v44 == v43 )
      {
        v105 = *((_QWORD *)v43 - 1);
        if ( v105 )
        {
          if ( v105 == 1 )
            *v45 = *v43;
          else
            memcpy(v45, v43, v105);
          v105 = *((_QWORD *)v43 - 1);
          v45 = *(_BYTE **)v42;
        }
        *(_QWORD *)(v42 + 8) = v105;
        v45[v105] = 0;
        v45 = *((_BYTE **)v43 - 2);
      }
      else
      {
        if ( v45 == (_BYTE *)(v42 + 16) )
        {
          *(_QWORD *)v42 = v44;
          *(_QWORD *)(v42 + 8) = *((_QWORD *)v43 - 1);
          *(_QWORD *)(v42 + 16) = *(_QWORD *)v43;
        }
        else
        {
          *(_QWORD *)v42 = v44;
          v46 = *(_QWORD *)(v42 + 16);
          *(_QWORD *)(v42 + 8) = *((_QWORD *)v43 - 1);
          *(_QWORD *)(v42 + 16) = *(_QWORD *)v43;
          if ( v45 )
          {
            *((_QWORD *)v43 - 2) = v45;
            *(_QWORD *)v43 = v46;
            goto LABEL_43;
          }
        }
        *((_QWORD *)v43 - 2) = v43;
        v45 = v43;
      }
LABEL_43:
      *((_QWORD *)v43 - 1) = 0;
      *v45 = 0;
      v47 = *((_BYTE **)v43 + 2);
      v48 = *(char **)(v42 + 32);
      v155 = v43 + 32;
      if ( v43 + 32 == v47 )
      {
        v104 = *((_QWORD *)v43 + 3);
        if ( v104 )
        {
          if ( v104 == 1 )
            *v48 = v43[32];
          else
            memcpy(v48, v43 + 32, v104);
          v104 = *((_QWORD *)v43 + 3);
          v48 = *(char **)(v42 + 32);
        }
        *(_QWORD *)(v42 + 40) = v104;
        v48[v104] = 0;
        v48 = *((char **)v43 + 2);
      }
      else
      {
        if ( v48 == (char *)(v42 + 48) )
        {
          *(_QWORD *)(v42 + 32) = v47;
          *(_QWORD *)(v42 + 40) = *((_QWORD *)v43 + 3);
          *(_QWORD *)(v42 + 48) = *((_QWORD *)v43 + 4);
        }
        else
        {
          *(_QWORD *)(v42 + 32) = v47;
          v49 = *(_QWORD *)(v42 + 48);
          *(_QWORD *)(v42 + 40) = *((_QWORD *)v43 + 3);
          *(_QWORD *)(v42 + 48) = *((_QWORD *)v43 + 4);
          if ( v48 )
          {
            *((_QWORD *)v43 + 2) = v48;
            *((_QWORD *)v43 + 4) = v49;
            goto LABEL_47;
          }
        }
        v123 = v155;
        *((_QWORD *)v43 + 2) = v155;
        v48 = v123;
      }
LABEL_47:
      *((_QWORD *)v43 + 3) = 0;
      *v48 = 0;
      v50 = *((_BYTE **)v43 + 6);
      v51 = *(size_t **)(v42 + 64);
      v156 = (size_t *)(v43 + 64);
      if ( v43 + 64 == v50 )
      {
        v103 = *((_QWORD *)v43 + 7);
        if ( v103 )
        {
          if ( v103 == 1 )
            *(_BYTE *)v51 = v43[64];
          else
            memcpy(v51, v43 + 64, v103);
          v103 = *((_QWORD *)v43 + 7);
          v51 = *(size_t **)(v42 + 64);
        }
        *(_QWORD *)(v42 + 72) = v103;
        *((_BYTE *)v51 + v103) = 0;
        v51 = *((size_t **)v43 + 6);
      }
      else
      {
        if ( v51 == (size_t *)(v42 + 80) )
        {
          *(_QWORD *)(v42 + 64) = v50;
          *(_QWORD *)(v42 + 72) = *((_QWORD *)v43 + 7);
          *(_QWORD *)(v42 + 80) = *((_QWORD *)v43 + 8);
        }
        else
        {
          *(_QWORD *)(v42 + 64) = v50;
          v52 = *(_QWORD *)(v42 + 80);
          *(_QWORD *)(v42 + 72) = *((_QWORD *)v43 + 7);
          *(_QWORD *)(v42 + 80) = *((_QWORD *)v43 + 8);
          if ( v51 )
          {
            *((_QWORD *)v43 + 6) = v51;
            *((_QWORD *)v43 + 8) = v52;
            goto LABEL_51;
          }
        }
        v121 = v156;
        *((_QWORD *)v43 + 6) = v156;
        v51 = v121;
      }
LABEL_51:
      *((_QWORD *)v43 + 7) = 0;
      *(_BYTE *)v51 = 0;
      v53 = *(void ***)(v42 + 96);
      *(_QWORD *)(v42 + 112) = 0;
      v54 = *(void ***)(v42 + 104);
      *(_OWORD *)(v42 + 96) = 0;
      v55 = v53;
      *(_QWORD *)(v42 + 96) = *((_QWORD *)v43 + 10);
      v56 = *((_QWORD *)v43 + 11);
      *((_QWORD *)v43 + 10) = 0;
      v57 = *(_QWORD *)(v42 + 104);
      *(_QWORD *)(v42 + 104) = v56;
      v58 = *((_QWORD *)v43 + 12);
      *((_QWORD *)v43 + 11) = v57;
      v59 = *(_QWORD *)(v42 + 112);
      *(_QWORD *)(v42 + 112) = v58;
      for ( *((_QWORD *)v43 + 12) = v59; v54 != v55; v55 += 4 )
      {
        while ( *v55 != v55 + 2 )
        {
          operator delete(*v55);
          v55 += 4;
          if ( v54 == v55 )
            goto LABEL_54;
        }
      }
LABEL_54:
      if ( v53 )
        operator delete(v53);
      v60 = *((_BYTE **)v43 + 13);
      v61 = *(_BYTE **)(v42 + 120);
      v157 = v43 + 120;
      if ( v60 == v43 + 120 )
      {
        v101 = *((_QWORD *)v43 + 14);
        if ( v101 )
        {
          if ( v101 == 1 )
            *v61 = v43[120];
          else
            memcpy(v61, v43 + 120, v101);
          v101 = *((_QWORD *)v43 + 14);
          v61 = *(_BYTE **)(v42 + 120);
        }
        *(_QWORD *)(v42 + 128) = v101;
        v61[v101] = 0;
        v61 = *((_BYTE **)v43 + 13);
      }
      else
      {
        if ( v61 == (_BYTE *)(v42 + 136) )
        {
          *(_QWORD *)(v42 + 120) = v60;
          *(_QWORD *)(v42 + 128) = *((_QWORD *)v43 + 14);
          *(_QWORD *)(v42 + 136) = *((_QWORD *)v43 + 15);
        }
        else
        {
          *(_QWORD *)(v42 + 120) = v60;
          v62 = *(_QWORD *)(v42 + 136);
          *(_QWORD *)(v42 + 128) = *((_QWORD *)v43 + 14);
          *(_QWORD *)(v42 + 136) = *((_QWORD *)v43 + 15);
          if ( v61 )
          {
            *((_QWORD *)v43 + 13) = v61;
            *((_QWORD *)v43 + 15) = v62;
            goto LABEL_60;
          }
        }
        v122 = v157;
        *((_QWORD *)v43 + 13) = v157;
        v61 = v122;
      }
LABEL_60:
      *((_QWORD *)v43 + 14) = 0;
      *v61 = 0;
      v63 = *(_BYTE *)(v42 + 184) == 0;
      v160 = v43 + 136;
      if ( v63 )
      {
        if ( v43[168] )
        {
          *(_QWORD *)(v42 + 152) = v42 + 168;
          v97 = *((_BYTE **)v43 + 17);
          if ( v97 == v43 + 152 )
          {
            *(__m128i *)(v42 + 168) = _mm_loadu_si128((const __m128i *)(v43 + 152));
          }
          else
          {
            *(_QWORD *)(v42 + 152) = v97;
            *(_QWORD *)(v42 + 168) = *((_QWORD *)v43 + 19);
          }
          *(_QWORD *)(v42 + 160) = *((_QWORD *)v43 + 18);
          *((_QWORD *)v43 + 17) = v43 + 152;
          *((_QWORD *)v43 + 18) = 0;
          v43[152] = 0;
          *(_BYTE *)(v42 + 184) = 1;
        }
      }
      else if ( v43[168] )
      {
        sub_9E6D90(v42 + 152, (_QWORD *)v43 + 17);
      }
      else
      {
        v64 = *(void **)(v42 + 152);
        *(_BYTE *)(v42 + 184) = 0;
        if ( v64 != (void *)(v42 + 168) )
          operator delete(v64);
      }
      v65 = *((_BYTE **)v43 - 2);
      if ( v174[0] == v153.m128i_i64[0] )
      {
        v100 = v174[1];
        if ( v174[1] )
        {
          if ( v174[1] == 1 )
            *v65 = v175;
          else
            memcpy(v65, (const void *)v153.m128i_i64[0], v174[1]);
          v100 = v174[1];
          v65 = *((_BYTE **)v43 - 2);
        }
        *((_QWORD *)v43 - 1) = v100;
        v65[v100] = 0;
        v65 = (_BYTE *)v174[0];
      }
      else
      {
        if ( v65 == v43 )
        {
          *((_QWORD *)v43 - 2) = v174[0];
          *((_QWORD *)v43 - 1) = v174[1];
          *(_QWORD *)v43 = v175;
        }
        else
        {
          *((_QWORD *)v43 - 2) = v174[0];
          v66 = *(_QWORD *)v43;
          *((_QWORD *)v43 - 1) = v174[1];
          *(_QWORD *)v43 = v175;
          if ( v65 )
          {
            v174[0] = (size_t)v65;
            v175 = v66;
            goto LABEL_68;
          }
        }
        v174[0] = v153.m128i_i64[0];
        v65 = (_BYTE *)v153.m128i_i64[0];
      }
LABEL_68:
      v174[1] = 0;
      *v65 = 0;
      v67 = *((char **)v43 + 2);
      if ( v176 == (void *)v153.m128i_i64[1] )
      {
        v106 = v177;
        if ( v177 )
        {
          if ( v177 == 1 )
            *v67 = v178;
          else
            memcpy(v67, (const void *)v153.m128i_i64[1], v177);
          v106 = v177;
          v67 = *((char **)v43 + 2);
        }
        *((_QWORD *)v43 + 3) = v106;
        v67[v106] = 0;
        v67 = (char *)v176;
      }
      else
      {
        if ( v155 == v67 )
        {
          *((_QWORD *)v43 + 2) = v176;
          *((_QWORD *)v43 + 3) = v177;
          *((_QWORD *)v43 + 4) = v178;
        }
        else
        {
          *((_QWORD *)v43 + 2) = v176;
          v68 = *((_QWORD *)v43 + 4);
          *((_QWORD *)v43 + 3) = v177;
          *((_QWORD *)v43 + 4) = v178;
          if ( v67 )
          {
            v176 = v67;
            v178 = v68;
            goto LABEL_72;
          }
        }
        v176 = (void *)v153.m128i_i64[1];
        v67 = (char *)v153.m128i_i64[1];
      }
LABEL_72:
      v177 = 0;
      *v67 = 0;
      v69 = *((size_t **)v43 + 6);
      if ( v179 == src )
      {
        v99 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)v69 = v181;
          else
            memcpy(v69, src, n);
          v99 = n;
          v69 = *((size_t **)v43 + 6);
        }
        *((_QWORD *)v43 + 7) = v99;
        *((_BYTE *)v69 + v99) = 0;
        v69 = (size_t *)v179;
      }
      else
      {
        if ( v156 == v69 )
        {
          *((_QWORD *)v43 + 6) = v179;
          *((_QWORD *)v43 + 7) = n;
          *((_QWORD *)v43 + 8) = v181;
        }
        else
        {
          *((_QWORD *)v43 + 6) = v179;
          v70 = *((_QWORD *)v43 + 8);
          *((_QWORD *)v43 + 7) = n;
          *((_QWORD *)v43 + 8) = v181;
          if ( v69 )
          {
            v179 = v69;
            v181 = v70;
            goto LABEL_76;
          }
        }
        v179 = src;
        v69 = (size_t *)src;
      }
LABEL_76:
      n = 0;
      *(_BYTE *)v69 = 0;
      v71 = *((void ***)v43 + 10);
      *((_QWORD *)v43 + 12) = 0;
      v72 = *((void ***)v43 + 11);
      *((_OWORD *)v43 + 5) = 0;
      v73 = v71;
      *((_QWORD *)v43 + 10) = v182;
      v182 = nullptr;
      *((_QWORD *)v43 + 11) = v183;
      v183 = nullptr;
      *((_QWORD *)v43 + 12) = i;
      for ( i = 0; v72 != v73; v73 += 4 )
      {
        while ( *v73 != v73 + 2 )
        {
          operator delete(*v73);
          v73 += 4;
          if ( v72 == v73 )
            goto LABEL_79;
        }
      }
LABEL_79:
      if ( v71 )
        operator delete(v71);
      v74 = *((_BYTE **)v43 + 13);
      if ( v185 == v187 )
      {
        v102 = v186;
        if ( v186 )
        {
          if ( v186 == 1 )
            *v74 = v187[0];
          else
            memcpy(v74, v185, v186);
          v102 = v186;
          v74 = *((_BYTE **)v43 + 13);
        }
        *((_QWORD *)v43 + 14) = v102;
        v74[v102] = 0;
        v74 = v185;
        goto LABEL_85;
      }
      if ( v157 == v74 )
      {
        *((_QWORD *)v43 + 13) = v185;
        *((_QWORD *)v43 + 14) = v186;
        *((_QWORD *)v43 + 15) = v187[0];
LABEL_216:
        v74 = v187;
        v185 = v187;
        goto LABEL_85;
      }
      *((_QWORD *)v43 + 13) = v185;
      v75 = *((_QWORD *)v43 + 15);
      *((_QWORD *)v43 + 14) = v186;
      *((_QWORD *)v43 + 15) = v187[0];
      if ( !v74 )
        goto LABEL_216;
      v185 = v74;
      v187[0] = v75;
LABEL_85:
      v186 = 0;
      *v74 = 0;
      if ( v43[168] )
      {
        if ( v190 )
        {
          sub_9E6D90((__int64)v160, v188);
        }
        else
        {
          v76 = *((_BYTE **)v43 + 17);
          v43[168] = 0;
          if ( v76 != v43 + 152 )
            operator delete(v76);
        }
        if ( v190 && v188[0] != &v189 )
          operator delete(v188[0]);
      }
      else if ( v190 )
      {
        *((_QWORD *)v43 + 17) = v43 + 152;
        if ( v188[0] == &v189 )
        {
          *(__m128i *)(v43 + 152) = _mm_loadu_si128(&v189);
        }
        else
        {
          *((void **)v43 + 17) = v188[0];
          *((_QWORD *)v43 + 19) = v189.m128i_i64[0];
        }
        v98 = v188[1];
        v43[168] = 1;
        *((_QWORD *)v43 + 18) = v98;
      }
      if ( v185 != v187 )
        operator delete(v185);
      v77 = v183;
      v78 = (void **)v182;
      if ( v183 != v182 )
      {
        do
        {
          while ( *v78 != v78 + 2 )
          {
            operator delete(*v78);
            v78 += 4;
            if ( v77 == v78 )
              goto LABEL_97;
          }
          v78 += 4;
        }
        while ( v77 != v78 );
LABEL_97:
        v78 = (void **)v182;
      }
      if ( v78 )
        operator delete(v78);
      if ( v179 != src )
        operator delete(v179);
      if ( v176 != (void *)v153.m128i_i64[1] )
        operator delete(v176);
      if ( v174[0] != v153.m128i_i64[0] )
        operator delete((void *)v174[0]);
      v42 += 192LL;
      v41 = v43 - 192;
      if ( v42 >= (unsigned __int64)(v43 - 208) )
        goto LABEL_107;
    }
  }
  v21 = v153.m128i_i64[0];
  v156 = v174;
  do
  {
    v20 -= 192LL;
    v22 = *(char **)(v20 + 104);
    v23 = *(char **)(v20 + 96);
    v24 = (v22 - v23) >> 7;
    v25 = (v22 - v23) >> 5;
    if ( v24 <= 0 )
    {
LABEL_125:
      if ( v25 != 2 )
      {
        if ( v25 != 3 )
        {
          if ( v25 != 1 )
            goto LABEL_128;
          goto LABEL_192;
        }
        v107 = *((_QWORD *)v23 + 1);
        v108 = *(_QWORD *)v23;
        v109 = sub_2220DF0(*(_QWORD *)v23, v107);
        if ( (unsigned int)sub_2221120(v21, v108, v107, v109) == -1 )
          goto LABEL_34;
        v23 += 32;
      }
      v110 = *((_QWORD *)v23 + 1);
      v111 = *(_QWORD *)v23;
      v112 = sub_2220DF0(*(_QWORD *)v23, v110);
      if ( (unsigned int)sub_2221120(v21, v111, v110, v112) == -1 )
        goto LABEL_34;
      v23 += 32;
LABEL_192:
      v113 = *((_QWORD *)v23 + 1);
      v114 = *(_QWORD *)v23;
      v115 = sub_2220DF0(*(_QWORD *)v23, v113);
      if ( (unsigned int)sub_2221120(v21, v114, v113, v115) == -1 )
        goto LABEL_34;
      if ( !*(_QWORD *)(v20 + 128) )
        goto LABEL_129;
LABEL_194:
      v174[0] = *(_QWORD *)(v20 + 120);
      v174[1] = *(_QWORD *)(v20 + 128);
      if ( (unsigned __int8)sub_10C5570(&v167, v156, &v162) )
        continue;
      v117 = v162;
      v118 = v168 + 1;
      v119 = 2 * v169;
      v120 = (unsigned int)(4 * (v168 + 1));
      v163 = (__int64)v162;
      if ( (unsigned int)v120 < 3 * v169 )
      {
        if ( v169 - HIDWORD(v168) - v118 > v169 >> 3 )
        {
LABEL_197:
          v63 = v117->m128i_i64[0] == -1;
          LODWORD(v168) = v118;
          if ( !v63 )
            --HIDWORD(v168);
          *v117 = _mm_load_si128((const __m128i *)v174);
          goto LABEL_129;
        }
        v119 = v169;
      }
      sub_10D8F50((__int64)&v167, v119, v169, (__int64)v162, v120, v116);
      sub_10C5570(&v167, v156, &v163);
      v117 = (__m128i *)v163;
      v118 = v168 + 1;
      goto LABEL_197;
    }
    v153.m128i_i64[0] = (__int64)&v23[128 * v24];
    while ( 1 )
    {
      v35 = *((_QWORD *)v23 + 1);
      v36 = *(_QWORD *)v23;
      v37 = sub_2220DF0(*(_QWORD *)v23, v35);
      if ( (unsigned int)sub_2221120(v21, v36, v35, v37) == -1 )
        break;
      v26 = *((_QWORD *)v23 + 5);
      v27 = *((_QWORD *)v23 + 4);
      v28 = sub_2220DF0(v27, v26);
      if ( (unsigned int)sub_2221120(v21, v27, v26, v28) == -1 )
      {
        v23 += 32;
        break;
      }
      v29 = *((_QWORD *)v23 + 9);
      v30 = *((_QWORD *)v23 + 8);
      v31 = sub_2220DF0(v30, v29);
      if ( (unsigned int)sub_2221120(v21, v30, v29, v31) == -1 )
      {
        v23 += 64;
        break;
      }
      v32 = *((_QWORD *)v23 + 13);
      v33 = *((_QWORD *)v23 + 12);
      v34 = sub_2220DF0(v33, v32);
      if ( (unsigned int)sub_2221120(v21, v33, v32, v34) == -1 )
      {
        v23 += 96;
        break;
      }
      v23 += 128;
      if ( (char *)v153.m128i_i64[0] == v23 )
      {
        v25 = (v22 - v23) >> 5;
        goto LABEL_125;
      }
    }
LABEL_34:
    if ( v22 != v23 )
      continue;
LABEL_128:
    if ( *(_QWORD *)(v20 + 128) )
      goto LABEL_194;
LABEL_129:
    v84 = v20;
    v85 = v159;
    if ( *(_BYTE *)(v20 + 184) )
      v85 = *(_BYTE *)(v20 + 184);
    v86 = *((unsigned int *)v158 + 2);
    v159 = v85;
    v87 = (char *)*v158;
    v88 = *v158 + 192 * v86;
    if ( v86 + 1 > (unsigned __int64)*((unsigned int *)v158 + 3) )
    {
      v153.m128i_i64[0] = -1;
      v153.m128i_i8[8] = 0;
      if ( (unsigned __int64)v87 <= v20 && v88 > v20 )
      {
        v153.m128i_i8[8] = 1;
        v153.m128i_i64[0] = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v20 - (_QWORD)v87) >> 6);
      }
      v138 = v158;
      v155 = (char *)(v158 + 2);
      v139 = sub_22136C0(v158, v158 + 2, v86 + 1, 192, v156);
      v140 = (char *)*v138;
      v141 = v139;
      v142 = (char *)(*v138 + 192LL * *((unsigned int *)v138 + 2));
      if ( (char *)*v138 != v142 )
      {
        v143 = v139;
        do
        {
          v144 = (__int64)v140;
          v145 = v143;
          v140 += 192;
          v143 += 192;
          sub_10EA330(v145, v144);
        }
        while ( v142 != v140 );
        v146 = (char *)*v158;
        v142 = (char *)(*v158 + 192LL * *((unsigned int *)v158 + 2));
        if ( (char *)*v158 != v142 )
        {
          do
          {
            v142 -= 192;
            sub_10E71B0((__int64)v142);
          }
          while ( v146 != v142 );
          v142 = (char *)*v158;
        }
      }
      v147 = v174[0];
      if ( v155 != v142 )
        free(v142);
      v148 = v158;
      v84 = v20;
      *v158 = v141;
      *((_DWORD *)v148 + 3) = v147;
      v88 = v141 + 192LL * *((unsigned int *)v148 + 2);
      if ( v153.m128i_i8[8] )
        v84 = v141 + 192 * v153.m128i_i64[0];
    }
    *(_QWORD *)v88 = v88 + 16;
    sub_10E6B70((_QWORD *)v88, *(_BYTE **)v84, *(_QWORD *)v84 + *(_QWORD *)(v84 + 8));
    *(_QWORD *)(v88 + 32) = v88 + 48;
    sub_10E6B70((_QWORD *)(v88 + 32), *(_BYTE **)(v84 + 32), *(_QWORD *)(v84 + 32) + *(_QWORD *)(v84 + 40));
    *(_QWORD *)(v88 + 64) = v88 + 80;
    sub_10E6B70((_QWORD *)(v88 + 64), *(_BYTE **)(v84 + 64), *(_QWORD *)(v84 + 64) + *(_QWORD *)(v84 + 72));
    v89 = *(_QWORD *)(v84 + 104) - *(_QWORD *)(v84 + 96);
    *(_OWORD *)(v88 + 96) = 0;
    *(_QWORD *)(v88 + 112) = 0;
    if ( v89 >> 5 )
    {
      if ( (unsigned __int64)(v89 >> 5) > 0x7FFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v153.m128i_i64[1] = operator new(v89);
    }
    else
    {
      v153.m128i_i64[1] = 0;
    }
    v90 = v153.m128i_i64[1];
    v153.m128i_i64[0] = v153.m128i_i64[1];
    v91 = _mm_loadl_epi64(&v153);
    *(_QWORD *)(v88 + 112) = v153.m128i_i64[1] + v89;
    *(__m128i *)(v88 + 96) = _mm_unpacklo_epi64(v91, v91);
    v92 = *(char **)(v84 + 96);
    v153.m128i_i64[0] = *(_QWORD *)(v84 + 104);
    v155 = v92;
    if ( (char *)v153.m128i_i64[0] != v92 )
    {
      v93 = v92;
      v94 = (_QWORD *)v90;
      do
      {
        v95 = v94 + 2;
        v96 = v94;
        v93 += 32;
        v94 += 4;
        *(v94 - 4) = v95;
        sub_10E6B70(v96, *((_BYTE **)v93 - 4), *((_QWORD *)v93 - 4) + *((_QWORD *)v93 - 3));
      }
      while ( (char *)v153.m128i_i64[0] != v93 );
      v153.m128i_i64[1] += ((v153.m128i_i64[0] - 32 - (_QWORD)v155) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    }
    *(_QWORD *)(v88 + 104) = v153.m128i_i64[1];
    *(_QWORD *)(v88 + 120) = v88 + 136;
    sub_10E6B70((_QWORD *)(v88 + 120), *(_BYTE **)(v84 + 120), *(_QWORD *)(v84 + 120) + *(_QWORD *)(v84 + 128));
    sub_10CF690(v88 + 152, v84 + 152);
    ++*((_DWORD *)v158 + 2);
  }
  while ( src != (void *)v20 );
  v38 = (char *)*v158;
  v39 = *v158 + 192LL * *((unsigned int *)v158 + 2);
  if ( *v158 != v39 )
  {
    v40 = v39 - 192;
    if ( v40 > (unsigned __int64)v38 )
      goto LABEL_38;
  }
LABEL_107:
  LODWORD(v7) = 0;
  if ( !v159 )
  {
    v127 = *((_DWORD *)v158 + 2);
LABEL_235:
    LOBYTE(v7) = v127 != 0;
  }
  operator delete();
  if ( v166 )
  {
    v79 = ptr;
    if ( v165 )
    {
      v80 = 0;
      v81 = 8LL * (unsigned int)(v165 - 1) + 8;
      v82 = (char *)ptr;
      do
      {
        v83 = *(_QWORD *)&v82[v80];
        if ( v83 != -8 && v83 )
        {
          operator delete();
          v82 = (char *)ptr;
        }
        v80 += 8;
      }
      while ( v80 != v81 );
      v79 = v82;
    }
  }
  else
  {
    v79 = ptr;
  }
  free(v79);
  if ( v172 != v161 + 5 )
    free(v172);
  v124 = v171;
  v125 = (void **)v170;
  if ( v171 != v170 )
  {
    do
    {
      while ( *v125 != v125 + 2 )
      {
        operator delete(*v125);
        v125 += 4;
        if ( v125 == v124 )
          goto LABEL_230;
      }
      v125 += 4;
    }
    while ( v124 != v125 );
LABEL_230:
    v125 = (void **)v170;
  }
  if ( v125 )
    operator delete(v125);
  return (unsigned int)v7;
}

