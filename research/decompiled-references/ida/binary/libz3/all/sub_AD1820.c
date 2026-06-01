__int64 __fastcall sub_AD1820(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // edx
  _QWORD *v17; // r14
  unsigned __int64 v18; // rsi
  __int64 (__fastcall *v19)(_QWORD *, unsigned __int64, int); // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rsi
  __int64 v24; // rbx
  char *v25; // rax
  int *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // r12
  __int64 *i; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 (__fastcall *v36)(_QWORD *, unsigned __int64, int); // rax
  __int64 v37; // rax
  __int64 v38; // r13
  int v39; // eax
  unsigned __int64 *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 *v44; // rbx
  unsigned __int64 *v45; // r13
  __int64 (__fastcall *v46)(_QWORD *, unsigned __int64, int); // rax
  __int64 v47; // rax
  char *v48; // r14
  _QWORD *v49; // r12
  unsigned __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rbx
  int *v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // rsi
  unsigned __int64 v57; // r14
  _DWORD *v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  int v62; // edi
  __int64 *v63; // rcx
  unsigned int v64; // edx
  __int64 *v65; // rsi
  __int64 v66; // rdx
  __int64 *v67; // r8
  __int64 *j; // rax
  __int64 v69; // rdx
  __int64 v70; // rbx
  int v71; // eax
  int v72; // r8d
  int v73; // r9d
  __m128i *v74; // r13
  __int64 v75; // rdx
  __m128i *v76; // r12
  size_t v77; // rbx
  int v78; // esi
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __m128i *v81; // rdi
  __m128i *v82; // rcx
  __m128i *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rbx
  __int64 v94; // r8
  __int64 v95; // rax
  int v96; // esi
  __int64 *v97; // rcx
  unsigned int v98; // edx
  __int64 *v99; // r11
  __int64 v100; // rdx
  __int64 *v101; // r9
  __int64 *v102; // rax
  __int64 v103; // rdx
  unsigned __int64 *v104; // rbx
  unsigned __int64 *k; // r14
  __int64 v106; // rax
  __int64 (__fastcall *v107)(_QWORD *, unsigned __int64, int); // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rax
  __m128i *v114; // rdx
  __m128i *v115; // rcx
  __m128i *v116; // rdi
  __int64 v117; // rdx
  const __m128i *v118; // r9
  __int64 v119; // rdx
  __m128i *v120; // rsi
  __m128i *v121; // rax
  __m128i *v122; // rdx
  int v123; // [rsp-8h] [rbp-138h]
  int v124; // [rsp+0h] [rbp-130h]
  int v125; // [rsp+0h] [rbp-130h]
  int v126; // [rsp+8h] [rbp-128h]
  __m128i *v127; // [rsp+8h] [rbp-128h]
  int *v128; // [rsp+10h] [rbp-120h]
  int v129; // [rsp+10h] [rbp-120h]
  __int64 v130; // [rsp+18h] [rbp-118h]
  int v131; // [rsp+18h] [rbp-118h]
  unsigned int v132; // [rsp+20h] [rbp-110h]
  int v133; // [rsp+20h] [rbp-110h]
  __int64 v134; // [rsp+28h] [rbp-108h]
  char v135; // [rsp+28h] [rbp-108h]
  int v136[2]; // [rsp+30h] [rbp-100h]
  int v137; // [rsp+30h] [rbp-100h]
  int v138[2]; // [rsp+30h] [rbp-100h]
  __int64 v139; // [rsp+38h] [rbp-F8h]
  int v140; // [rsp+38h] [rbp-F8h]
  unsigned int v141; // [rsp+40h] [rbp-F0h]
  int v142; // [rsp+40h] [rbp-F0h]
  const __m128i *v143; // [rsp+40h] [rbp-F0h]
  __int64 (__fastcall *v144)(_QWORD *, unsigned __int64, int); // [rsp+48h] [rbp-E8h]
  void *v145; // [rsp+48h] [rbp-E8h]
  unsigned int v146; // [rsp+48h] [rbp-E8h]
  unsigned __int64 v147; // [rsp+50h] [rbp-E0h]
  unsigned int v148; // [rsp+50h] [rbp-E0h]
  __int64 v149; // [rsp+50h] [rbp-E0h]
  unsigned __int64 *v150; // [rsp+58h] [rbp-D8h]
  __m128i *v151; // [rsp+58h] [rbp-D8h]
  __int64 v152; // [rsp+58h] [rbp-D8h]
  __m128i *v153; // [rsp+60h] [rbp-D0h] BYREF
  int v154[2]; // [rsp+68h] [rbp-C8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C0h]
  __int64 v156; // [rsp+78h] [rbp-B8h]
  int v157[10]; // [rsp+80h] [rbp-B0h] BYREF
  void *v158; // [rsp+A8h] [rbp-88h]
  int v159; // [rsp+B0h] [rbp-80h]
  __int64 v160; // [rsp+B8h] [rbp-78h]

  v2 = a2;
  v139 = a2;
  do
  {
    v4 = v2;
    v2 = *(_QWORD *)(v2 + 8);
  }
  while ( v2 );
  v134 = *(_QWORD *)(v4 + 56);
  v5 = a2;
  do
  {
    v6 = v5;
    v5 = *(_QWORD *)(v5 + 8);
  }
  while ( v5 );
  v130 = v6;
  v7 = a2;
  do
  {
    v8 = v7;
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
  result = v134;
  if ( !*(_DWORD *)(v134 + 20) )
    return result;
  v10 = *(_QWORD *)(v130 + 48);
  if ( !v10 || !*(_DWORD *)(v10 - 4) )
  {
    v20 = *(_QWORD *)(v8 + 40);
    if ( !v20 || !*(_DWORD *)(v20 - 4) )
      goto LABEL_25;
  }
  v128 = v157;
  ptr = v157;
  v156 = 0x1000000000LL;
  v11 = a2;
  do
  {
    v12 = v11;
    v11 = *(_QWORD *)(v11 + 8);
  }
  while ( v11 );
  v13 = *(unsigned __int64 **)(v12 + 48);
  if ( v13 )
  {
    v150 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 != v150 )
    {
      v144 = sub_AD0270;
      do
      {
        v18 = *v13;
        v19 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a1 + 16LL);
        if ( v19 == sub_AD0270 )
          v14 = sub_AC8870(a1, v18);
        else
          v14 = v19((_QWORD *)a1, v18, 1);
        v15 = v14;
        if ( v14 )
        {
          v16 = v156;
          if ( (unsigned int)v156 >= HIDWORD(v156) )
          {
            v24 = (unsigned int)(2 * HIDWORD(v156));
            v25 = (char *)sub_186B270(8 * v24);
            v16 = v156;
            v26 = (int *)ptr;
            v17 = v25;
            if ( (_DWORD)v156 )
            {
              if ( (unsigned int)(v156 - 1) <= 2 || v25 == (char *)ptr + 8 )
              {
                v59 = 0;
                v60 = 8LL * (unsigned int)v156;
                do
                {
                  v17[v59 / 8] = *(_QWORD *)&v26[v59 / 4];
                  v59 += 8LL;
                }
                while ( v59 != v60 );
              }
              else
              {
                v27 = 0;
                v28 = 16LL * ((unsigned int)v156 >> 1);
                do
                {
                  *(__m128i *)&v17[v27 / 8] = _mm_loadu_si128((const __m128i *)&v26[v27 / 4]);
                  v27 += 16LL;
                }
                while ( v27 != v28 );
                if ( (v16 & 1) != 0 )
                  v17[v16 & 0xFFFFFFFE] = *(_QWORD *)&v26[2 * (v16 & 0xFFFFFFFE)];
              }
            }
            if ( v26 != v157 && v26 )
            {
              sub_186B220(v26);
              v16 = v156;
            }
            ptr = v17;
            HIDWORD(v156) = v24;
          }
          else
          {
            v17 = ptr;
          }
          v17[v16] = v15;
          LODWORD(v156) = v16 + 1;
        }
        ++v13;
      }
      while ( v150 != v13 );
    }
  }
  v29 = v139;
  do
  {
    v30 = v29;
    v29 = *(_QWORD *)(v29 + 8);
  }
  while ( v29 );
  v31 = *(__int64 **)(v30 + 40);
  if ( v31 )
  {
    for ( i = &v31[*((unsigned int *)v31 - 1)]; i != v31; ++v31 )
    {
      v33 = *v31;
      do
      {
        v34 = v33;
        v33 = *(_QWORD *)(v33 + 8);
      }
      while ( v33 );
      if ( !*(_BYTE *)(v34 + 32) )
      {
        v35 = *(_QWORD *)(v34 + 64);
        if ( v35 )
        {
          v36 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a1 + 16LL);
          v37 = v36 == sub_AD0270 ? sub_AC8870(a1, v35) : v36((_QWORD *)a1, v35, 1);
          v38 = v37;
          if ( v37 )
          {
            v39 = v156;
            if ( (unsigned int)v156 >= HIDWORD(v156) )
            {
              v53 = (unsigned int)(2 * HIDWORD(v156));
              v40 = (unsigned __int64 *)sub_186B270(8 * v53);
              v39 = v156;
              v54 = (int *)ptr;
              if ( (_DWORD)v156 )
              {
                if ( (unsigned int)(v156 - 1) <= 2 || v40 == (unsigned __int64 *)((char *)ptr + 8) )
                {
                  v86 = 0;
                  v87 = 8LL * (unsigned int)v156;
                  do
                  {
                    v40[v86 / 8] = *(_QWORD *)&v54[v86 / 4];
                    v86 += 8LL;
                  }
                  while ( v86 != v87 );
                }
                else
                {
                  v55 = 0;
                  v56 = 16LL * ((unsigned int)v156 >> 1);
                  do
                  {
                    *(__m128i *)&v40[v55 / 8] = _mm_loadu_si128((const __m128i *)&v54[v55 / 4]);
                    v55 += 16LL;
                  }
                  while ( v55 != v56 );
                  if ( (v39 & 1) != 0 )
                    v40[v39 & 0xFFFFFFFE] = *(_QWORD *)&v54[2 * (v39 & 0xFFFFFFFE)];
                }
              }
              if ( v54 != v157 && v54 )
              {
                v150 = v40;
                sub_186B220(v54);
                v39 = v156;
                v40 = v150;
              }
              ptr = v40;
              HIDWORD(v156) = v53;
            }
            else
            {
              v40 = (unsigned __int64 *)ptr;
            }
            v40[v39] = v38;
            LODWORD(v156) = v39 + 1;
          }
        }
      }
    }
  }
  v41 = v139;
  do
  {
    v42 = v41;
    v41 = *(_QWORD *)(v41 + 8);
  }
  while ( v41 );
  v43 = *(_QWORD *)(v42 + 56);
  v44 = *(unsigned __int64 **)(v43 + 8);
  v45 = &v44[2 * *(unsigned int *)(v43 + 16)];
  if ( v44 != v45 )
  {
    while ( *v44 <= 1 )
    {
      v44 += 2;
      if ( v45 == v44 )
        goto LABEL_103;
    }
    if ( v45 != v44 )
    {
      *(_QWORD *)v136 = 0;
      v132 = -1;
      v147 = *v44;
      v144 = sub_AD0270;
      do
      {
        v141 = *((_DWORD *)v44 + 2);
        v46 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a1 + 16LL);
        if ( v46 == sub_AD0270 )
          v47 = sub_AC8870(a1, v147);
        else
          v47 = v46((_QWORD *)a1, v147, 1);
        v150 = (unsigned __int64 *)v47;
        if ( !v47 )
          break;
        v48 = (char *)ptr + 8 * (unsigned int)v156;
        if ( ptr == v48 )
        {
LABEL_86:
          if ( !*(_QWORD *)v136 || v141 < v132 )
          {
            v132 = v141;
            *(_QWORD *)v136 = v147;
          }
        }
        else
        {
          v49 = ptr;
          while ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 8), v150, *v49) )
          {
            if ( v48 == (char *)++v49 )
              goto LABEL_86;
          }
        }
        v50 = v44 + 2;
        if ( v45 == v44 + 2 )
          break;
        while ( 1 )
        {
          v44 = v50;
          if ( *v50 > 1 )
            break;
          v50 += 2;
          if ( v45 == v50 )
            goto LABEL_79;
        }
        v147 = *v50;
      }
      while ( v45 != v50 );
LABEL_79:
      if ( *(_QWORD *)v136 )
      {
        v51 = v139;
        do
        {
          v52 = v51;
          v51 = *(_QWORD *)(v51 + 8);
        }
        while ( v51 );
        *(_QWORD *)(v52 + 64) = *(_QWORD *)v136;
        goto LABEL_83;
      }
    }
  }
LABEL_103:
  v57 = *(_QWORD *)(v139 + 24);
  v58 = *(_DWORD **)(v57 + 24);
  if ( !v58 || *v58 == -1 || *v58 == 4 || v58[6] != 2 )
  {
LABEL_107:
    if ( ptr && ptr != v128 )
      sub_186B220(ptr);
LABEL_25:
    v21 = *(_QWORD **)(v134 + 8);
    v22 = &v21[2 * *(unsigned int *)(v134 + 16)];
    if ( v21 == v22 )
    {
      v88 = *v21;
      v89 = v139;
    }
    else
    {
      do
      {
        v88 = *v21;
        v23 = v21;
        if ( *v21 > 1u )
        {
          v89 = v139;
          goto LABEL_30;
        }
        v21 += 2;
      }
      while ( v22 != v21 );
      v88 = v23[2];
      v89 = v139;
    }
    do
    {
LABEL_30:
      result = v89;
      v89 = *(_QWORD *)(v89 + 8);
    }
    while ( v89 );
    *(_QWORD *)(result + 64) = v88;
    return result;
  }
  v61 = *(unsigned int *)(a1 + 160);
  v62 = *(_DWORD *)(v57 + 12);
  v63 = *(__int64 **)(a1 + 152);
  v64 = v61 - 1;
  v61 *= 16;
  v65 = (__int64 *)((char *)v63 + v61);
  v66 = 16LL * (v62 & v64);
  v67 = &v63[(unsigned __int64)v66 / 8];
  if ( v66 != v61 )
  {
    for ( j = &v63[(unsigned __int64)v66 / 8]; v65 != j; j += 2 )
    {
      v69 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v69 + 12) == v62 && v57 == v69 )
        {
          v63 = j;
LABEL_149:
          v74 = (__m128i *)v63[1];
          goto LABEL_150;
        }
      }
      else if ( !v69 )
      {
        goto LABEL_120;
      }
    }
  }
  for ( ; v67 != v63; v63 += 2 )
  {
    v90 = *v63;
    if ( (unsigned __int64)*v63 > 1 )
    {
      if ( *(_DWORD *)(v90 + 12) == v62 && v57 == v90 )
        goto LABEL_149;
    }
    else if ( !v90 )
    {
      break;
    }
  }
LABEL_120:
  v70 = *(_QWORD *)(a1 + 8);
  sub_180C5A0(v154, "k");
  v71 = sub_15E3D10(
          v70,
          (int)v154,
          (int)&qword_18D6CD0,
          0,
          0,
          v57,
          1,
          v123,
          v124,
          0,
          (int)v157,
          v130,
          v132,
          v134,
          v136[0],
          v139,
          v141,
          (int)v144,
          v147,
          (int)v150,
          (int)v153,
          v154[0],
          (int)ptr,
          v156,
          v157[0],
          v157[2],
          v157[4],
          v157[6],
          v157[8],
          v158,
          v159,
          v160);
  v74 = (__m128i *)sub_15DC610(v70, v71, 0, 0, v72, v73, v125, v126, v129, v131, v133, v135, v137, v140, v142, v145);
  sub_C04D90(*(_QWORD *)(a1 + 192), v74[1].m128i_i64[0]);
  v75 = *(unsigned int *)(a1 + 160);
  v148 = 2 * v75;
  if ( 3 * (int)v75 < (unsigned int)(4 * (*(_DWORD *)(a1 + 164) + *(_DWORD *)(a1 + 168))) )
  {
    v77 = 16LL * v148;
    v76 = (__m128i *)sub_186B270(v77);
    v114 = v76;
    v115 = &v76[v77 / 0x10];
    if ( v148 )
    {
      if ( (v77 & 0x10) == 0 || (v114 = v76 + 1, *v76 = 0, &v76[1] != v115) )
      {
        do
        {
          *v114 = 0;
          v114 += 2;
          v114[-1] = 0;
        }
        while ( v114 != v115 );
      }
    }
    v151 = &v76[v77 / 0x10];
    v116 = *(__m128i **)(a1 + 152);
    v117 = *(unsigned int *)(a1 + 160);
    v146 = v148 - 1;
    v118 = v116;
    v143 = &v116[v117];
    if ( v116 != &v116[v117] )
    {
      do
      {
        if ( v118->m128i_i64[0] > 1uLL )
        {
          v119 = 16LL * (*(_DWORD *)(v118->m128i_i64[0] + 12) & v146);
          v120 = &v76[(unsigned __int64)v119 / 0x10];
          if ( v77 == v119 )
          {
LABEL_205:
            if ( v76 == v120 )
            {
LABEL_215:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v121 = v151;
            v122 = v76;
            while ( v122->m128i_i64[0] )
            {
              if ( v120 == ++v122 )
                goto LABEL_215;
            }
          }
          else
          {
            v121 = v151;
            v122 = &v76[(unsigned __int64)v119 / 0x10];
            while ( v122->m128i_i64[0] )
            {
              if ( v115 == ++v122 )
                goto LABEL_205;
            }
          }
          v151 = v121;
          *v122 = _mm_loadu_si128(v118);
        }
        ++v118;
      }
      while ( v143 != v118 );
      v116 = *(__m128i **)(a1 + 152);
    }
    if ( v116 )
      sub_186B220(v116);
    *(_QWORD *)(a1 + 152) = v76;
    *(_DWORD *)(a1 + 168) = 0;
    *(_DWORD *)(a1 + 160) = v148;
  }
  else
  {
    v76 = *(__m128i **)(a1 + 152);
    v77 = 16 * v75;
    v146 = v75 - 1;
    v151 = &v76[v75];
  }
  v78 = *(_DWORD *)(v57 + 12);
  v79 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)(unsigned __int64)v74);
  v80 = 16LL * (v78 & v146);
  v81 = &v76[(unsigned __int64)v80 / 0x10];
  if ( v80 == v77 )
    goto LABEL_133;
  v82 = v127;
  v83 = &v76[(unsigned __int64)v80 / 0x10];
  while ( 1 )
  {
    v84 = v83->m128i_i64[0];
    if ( v83->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v84 + 12) == v78 && v57 == v84 )
      {
        *v83 = v79;
        goto LABEL_188;
      }
      goto LABEL_126;
    }
    if ( !v84 )
      break;
    v82 = v83;
LABEL_126:
    if ( ++v83 == v151 )
    {
      v127 = v82;
      while ( 1 )
      {
LABEL_133:
        if ( v81 == v76 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v85 = v76->m128i_i64[0];
        if ( v76->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v85 + 12) == v78 && v57 == v85 )
          {
            *v76 = v79;
            goto LABEL_188;
          }
        }
        else
        {
          if ( !v85 )
          {
            if ( v127 )
            {
              --*(_DWORD *)(a1 + 168);
              v76 = v127;
            }
            *v76 = v79;
            ++*(_DWORD *)(a1 + 164);
            goto LABEL_188;
          }
          v127 = v76;
        }
        ++v76;
      }
    }
  }
  if ( v82 )
  {
    --*(_DWORD *)(a1 + 168);
    v83 = v82;
  }
  *v83 = v79;
  ++*(_DWORD *)(a1 + 164);
LABEL_188:
  ++v74->m128i_i32[2];
  v153 = v74;
  sub_AC8490((_QWORD *)(a1 + 184), &v153);
LABEL_150:
  v91 = sub_15D1F10(v74);
  v92 = *(_QWORD *)(a1 + 192);
  v93 = v74[1].m128i_i64[0];
  v94 = v91;
  v95 = *(unsigned int *)(v92 + 32);
  v96 = *(_DWORD *)(v93 + 12);
  v97 = *(__int64 **)(v92 + 24);
  v98 = v95 - 1;
  v95 *= 24;
  v99 = (__int64 *)((char *)v97 + v95);
  v100 = 24LL * (v96 & v98);
  v101 = &v97[(unsigned __int64)v100 / 8];
  if ( v100 == v95 )
  {
LABEL_176:
    while ( v101 != v97 )
    {
      v113 = *v97;
      if ( (unsigned __int64)*v97 > 1 )
      {
        if ( *(_DWORD *)(v113 + 12) == v96 && v93 == v113 )
          goto LABEL_185;
      }
      else if ( !v113 )
      {
        break;
      }
      v97 += 3;
    }
LABEL_157:
    v152 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v92 + 48LL))(v92, v94);
    if ( v152 )
    {
      sub_135F9B0(*(_QWORD *)(a1 + 192), v93, v152);
      goto LABEL_159;
    }
    goto LABEL_107;
  }
  v102 = &v97[(unsigned __int64)v100 / 8];
  while ( 2 )
  {
    v103 = *v102;
    if ( (unsigned __int64)*v102 <= 1 )
    {
      if ( !v103 )
        goto LABEL_157;
      goto LABEL_154;
    }
    if ( *(_DWORD *)(v103 + 12) != v96 || v93 != v103 )
    {
LABEL_154:
      v102 += 3;
      if ( v99 == v102 )
        goto LABEL_176;
      continue;
    }
    break;
  }
  v97 = v102;
LABEL_185:
  v152 = v97[2];
  if ( !v152 )
    goto LABEL_157;
LABEL_159:
  v104 = *(unsigned __int64 **)(v130 + 48);
  if ( v104 )
  {
    for ( k = &v104[*((unsigned int *)v104 - 1)]; k != v104; ++v104 )
    {
      v107 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a1 + 16LL);
      if ( v107 == sub_AD0270 )
        v106 = sub_AC8870(a1, *v104);
      else
        v106 = v107((_QWORD *)a1, *v104, 1);
      if ( v106 && !(unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 8), v152, v106) )
      {
        v149 = *(_QWORD *)(a1 + 272);
        *(_QWORD *)v138 = *(_QWORD *)(a1 + 8);
        sub_15E1B70(v138[0]);
        v108 = sub_15E1A70(v138[0]);
        *(_QWORD *)v154 = v108;
        if ( v108 )
          ++*(_DWORD *)(v108 + 8);
        sub_AC8490((_QWORD *)(v149 + 8), v154);
      }
    }
  }
  v109 = v139;
  do
  {
    v110 = v109;
    v109 = *(_QWORD *)(v109 + 8);
  }
  while ( v109 );
  sub_AC8A00(*(_QWORD *)(v110 + 56), v74);
  v111 = v139;
  do
  {
    v112 = v111;
    v111 = *(_QWORD *)(v111 + 8);
  }
  while ( v111 );
  *(_QWORD *)(v112 + 64) = v74;
LABEL_83:
  result = (__int64)v128;
  if ( ptr != v128 && ptr )
    return sub_186B220(ptr);
  return result;
}

