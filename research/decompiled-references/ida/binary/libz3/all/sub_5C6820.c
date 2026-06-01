_QWORD *__fastcall sub_5C6820(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v6; // rax
  const __m128i *v7; // rbx
  __int64 v8; // rax
  const __m128i *v9; // r15
  __int64 v10; // rbp
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i *v19; // rbp
  __int32 v20; // r9d
  __int64 v21; // rcx
  __m128i *v22; // r12
  int v23; // esi
  __m128i v24; // xmm1
  __int64 v25; // r9
  __m128i *v26; // rdi
  __m128i *v27; // rax
  __m128i *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r12d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  const __m128i *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  bool v38; // zf
  _QWORD *v39; // rdi
  char *v40; // r8
  __int64 v41; // rsi
  char *v42; // rdx
  char *v43; // rax
  int v44; // ecx
  __int64 v45; // rbp
  __int64 v46; // rax
  int v47; // r11d
  __m128i *v48; // rbp
  __int64 v49; // r15
  int v50; // r11d
  __int64 v51; // rsi
  int v52; // r9d
  __int64 v53; // rax
  __m128i *v54; // r10
  __m128i *v55; // rsi
  __m128i *i; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rax
  __int64 v59; // r9
  __int64 v60; // rax
  int v61; // edi
  unsigned int v62; // edx
  __m128i *v63; // rsi
  __int64 v64; // rdx
  __m128i *v65; // r8
  __m128i *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int32 v69; // r10d
  __m128i *v70; // rdx
  __m128i *v71; // rax
  const __m128i *v72; // r14
  __m128i *v73; // r11
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  __m128i v77; // xmm1
  __int64 v78; // rax
  unsigned int v79; // ebp
  size_t v80; // rbx
  _OWORD *v81; // rdx
  _OWORD *v82; // rcx
  _OWORD *v83; // rax
  unsigned int v84; // ebx
  unsigned int v85; // edx
  unsigned int *v86; // rax
  __int64 v87; // rdx
  _QWORD *v88; // rax
  __int64 *j; // rax
  __int64 v90; // rdx
  _QWORD *v91; // rax
  size_t v92; // rsi
  __int64 v93; // rbx
  __int64 v94; // rdi
  int v96; // ebx
  __int64 v97; // r10
  __int64 v98; // rax
  __int64 *v99; // rdx
  int v100; // r9d
  unsigned int v101; // ecx
  __int64 *v102; // r11
  __int64 v103; // rcx
  __int64 *v104; // rsi
  __int64 *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rbp
  _QWORD *v109; // rax
  unsigned int v110; // edx
  unsigned __int64 *v111; // rcx
  __int64 v112; // rdx
  __int64 *v113; // r12
  size_t v114; // rbx
  __m128i *v115; // r14
  int v116; // edi
  __m128i v117; // xmm0
  __int64 v118; // rdx
  __int64 *v119; // r10
  __m128i *v120; // rdx
  __m128i *v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // r14d
  __m128i *v125; // rax
  __m128i *v126; // rdx
  __m128i *v127; // rcx
  __m128i *v128; // rdi
  __int64 v129; // rdx
  const __m128i *v130; // r10
  __int64 v131; // rdx
  __m128i *v132; // rsi
  __m128i *v133; // rdx
  __int64 v134; // rax
  unsigned int v135; // r14d
  size_t v136; // rbx
  int v137; // edi
  __m128i v138; // xmm0
  __int64 v139; // rax
  __m128i *v140; // r9
  __m128i *v141; // rax
  __m128i *v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rcx
  unsigned int v145; // ebx
  unsigned int v146; // ecx
  unsigned int *v147; // rdx
  __int64 v148; // rcx
  __m128i *v149; // rax
  __int64 m128i_i64; // r9
  __m128i *v151; // rdi
  const __m128i *v152; // rax
  const __m128i *v153; // r12
  __int64 v154; // rdx
  __m128i *v155; // rsi
  __m128i *v156; // rdx
  _QWORD *v157; // rax
  char **v158; // r12
  char **exception; // rbp
  char **v160; // rbp
  unsigned int v161; // [rsp+0h] [rbp-C0h]
  unsigned int v162; // [rsp+0h] [rbp-C0h]
  size_t v164; // [rsp+10h] [rbp-B0h]
  __int64 v165; // [rsp+10h] [rbp-B0h]
  int v166; // [rsp+10h] [rbp-B0h]
  __m128i *v167; // [rsp+10h] [rbp-B0h]
  __m128i v168; // [rsp+18h] [rbp-A8h] BYREF
  __m128i v169; // [rsp+28h] [rbp-98h] BYREF
  __int32 v170; // [rsp+3Ch] [rbp-84h]
  __m128i *v171; // [rsp+40h] [rbp-80h]
  __int64 v172; // [rsp+58h] [rbp-68h] BYREF
  __int64 v173; // [rsp+60h] [rbp-60h]
  __int64 v174[11]; // [rsp+68h] [rbp-58h] BYREF

  v6 = *a5;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)*a5, (__m128i)a3);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  if ( !*(_DWORD *)(a2 + 132) )
  {
    v7 = *(const __m128i **)(a2 + 72);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = &v7[*(unsigned int *)(a2 + 80)];
    if ( v7 != v9 )
    {
      while ( v7->m128i_i64[0] <= 1uLL )
      {
        if ( v9 == ++v7 )
          goto LABEL_43;
      }
      v172 = 0;
      v173 = v8;
      if ( v9 != v7 )
      {
        while ( 1 )
        {
          sub_62E310(*(_QWORD *)(a2 + 32), v7->m128i_i64[1], &v172);
          v10 = v172;
          if ( v172 )
            ++*(_DWORD *)(v172 + 8);
          v11 = *(_QWORD **)(a2 + 64);
          if ( v11 )
          {
            v12 = *((_DWORD *)v11 - 1);
            if ( v12 == *((_DWORD *)v11 - 2) )
            {
              v31 = (3 * v12 + 1) >> 1;
              v32 = 8 * v31 + 8;
              if ( 8 * v12 + 8 >= (unsigned int)v32 || v12 >= v31 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v174, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v174);
                sub_233E40((__int64)v174);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v33 = (unsigned int *)sub_186B300(v11 - 1, v32);
              v34 = v33[1];
              v11 = v33 + 2;
              *v33 = v31;
              *(_QWORD *)(a2 + 64) = v33 + 2;
              LODWORD(v33) = v34;
              v15 = &v11[v34];
              v14 = (_DWORD)v33 + 1;
            }
            else
            {
              v13 = v12;
              v14 = v12 + 1;
              v15 = &v11[v13];
            }
          }
          else
          {
            v88 = (_QWORD *)sub_186B270(0x18u);
            v11 = v88 + 1;
            *v88 = 2;
            v14 = 1;
            *(_QWORD *)(a2 + 64) = v11;
            v15 = v11;
          }
          *v15 = v10;
          v16 = _mm_loadl_epi64(v7);
          *((_DWORD *)v11 - 1) = v14;
          v17 = *(unsigned int *)(a2 + 128);
          v18 = v172;
          if ( 3 * (int)v17 < (unsigned int)(4 * (*(_DWORD *)(a2 + 132) + *(_DWORD *)(a2 + 136))) )
          {
            v168.m128i_i64[1] = v172;
            v168.m128i_i32[0] = 2 * v17;
            v164 = 16LL * (unsigned int)(2 * v17);
            v169.m128i_i64[0] = v16.m128i_i64[0];
            v68 = sub_186B270(v164);
            v69 = v168.m128i_i32[0];
            v21 = v164;
            v19 = (__m128i *)v68;
            v70 = (__m128i *)v68;
            v18 = v168.m128i_i64[1];
            v16 = _mm_loadl_epi64(&v169);
            v71 = (__m128i *)(v164 + v68);
            if ( v168.m128i_i32[0] )
            {
              if ( (((_BYTE)v71 - (_BYTE)v19) & 0x10) == 0 || (v70 = v19 + 1, *v19 = 0, v71 != &v19[1]) )
              {
                do
                {
                  v70 += 2;
                  v70[-2] = 0;
                  v70[-1] = 0;
                }
                while ( v71 != v70 );
              }
            }
            v72 = *(const __m128i **)(a2 + 120);
            v20 = v69 - 1;
            v22 = v71;
            v73 = (__m128i *)&v72[*(unsigned int *)(a2 + 128)];
            if ( v72 != v73 )
            {
              do
              {
                while ( v72->m128i_i64[0] <= 1uLL )
                {
                  if ( v73 == ++v72 )
                    goto LABEL_89;
                }
                v74 = 16LL * (*(_DWORD *)(v72->m128i_i64[0] + 12) & (unsigned int)v20);
                v75 = &v19[(unsigned __int64)v74 / 0x10];
                if ( v164 == v74 )
                {
LABEL_93:
                  if ( v19 == v75 )
                  {
LABEL_101:
                    v171 = v71;
                    v170 = v69;
                    v169.m128i_i64[1] = v164;
                    v169.m128i_i32[0] = v69 - 1;
                    v168.m128i_i64[1] = (__int64)v73;
                    v168.m128i_i64[0] = v16.m128i_i64[0];
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v76 = v19;
                  while ( v76->m128i_i64[0] )
                  {
                    if ( v75 == ++v76 )
                      goto LABEL_101;
                  }
                }
                else
                {
                  v76 = &v19[(unsigned __int64)v74 / 0x10];
                  while ( v76->m128i_i64[0] )
                  {
                    if ( v71 == ++v76 )
                      goto LABEL_93;
                  }
                }
                v77 = _mm_loadu_si128(v72++);
                *v76 = v77;
              }
              while ( v73 != v72 );
LABEL_89:
              v73 = *(__m128i **)(a2 + 120);
            }
            if ( v73 )
            {
              v169.m128i_i32[2] = v69;
              v169.m128i_i64[0] = v164;
              v168.m128i_i32[2] = v69 - 1;
              v165 = v18;
              v168.m128i_i64[0] = v16.m128i_i64[0];
              sub_186B220(v73);
              v69 = v169.m128i_i32[2];
              v21 = v169.m128i_i64[0];
              v20 = v168.m128i_i32[2];
              v16 = _mm_loadl_epi64(&v168);
              v18 = v165;
            }
            *(_QWORD *)(a2 + 120) = v19;
            *(_DWORD *)(a2 + 128) = v69;
            *(_DWORD *)(a2 + 136) = 0;
          }
          else
          {
            v19 = *(__m128i **)(a2 + 120);
            v20 = v17 - 1;
            v21 = 16 * v17;
            v22 = (__m128i *)((char *)v19 + v21);
          }
          v23 = *(_DWORD *)(v18 + 12);
          v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, v16);
          v25 = 16LL * (v23 & (unsigned int)v20);
          v26 = &v19[(unsigned __int64)v25 / 0x10];
          if ( v25 != v21 )
          {
            v27 = &v19[(unsigned __int64)v25 / 0x10];
            v28 = nullptr;
            while ( 1 )
            {
              v29 = v27->m128i_i64[0];
              if ( v27->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v29 + 12) == v23 && v18 == v29 )
                {
                  *v27 = v24;
                  goto LABEL_35;
                }
              }
              else
              {
                if ( !v29 )
                {
                  if ( v28 )
                    goto LABEL_99;
                  v28 = v27;
                  goto LABEL_100;
                }
                v28 = v27;
              }
              if ( ++v27 == v22 )
                goto LABEL_27;
            }
          }
          v28 = nullptr;
          while ( 1 )
          {
LABEL_27:
            if ( v26 == v19 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v30 = v19->m128i_i64[0];
            if ( v19->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v30 + 12) == v23 && v18 == v30 )
            {
              *v19 = v24;
              goto LABEL_35;
            }
LABEL_26:
            ++v19;
          }
          if ( v30 )
            break;
          if ( v28 )
LABEL_99:
            --*(_DWORD *)(a2 + 136);
          else
            v28 = v19;
LABEL_100:
          *v28 = v24;
          ++*(_DWORD *)(a2 + 132);
LABEL_35:
          v35 = v7 + 1;
          if ( v9 != &v7[1] )
          {
            while ( 1 )
            {
              v7 = v35;
              if ( v35->m128i_i64[0] > 1uLL )
                break;
              if ( v9 == ++v35 )
                goto LABEL_40;
            }
            if ( v9 != v35 )
              continue;
          }
LABEL_40:
          v36 = v172;
          if ( v172 )
          {
            v37 = v173;
            v38 = (*(_DWORD *)(v172 + 8))-- == 1;
            if ( v38 )
              sub_15D7BC0(v37, v36);
          }
          goto LABEL_43;
        }
        v28 = v19;
        goto LABEL_26;
      }
    }
  }
LABEL_43:
  v39 = *(_QWORD **)(a2 + 144);
  if ( !v39 )
  {
    if ( !*(_DWORD *)(a2 + 164) && !*(_DWORD *)(a2 + 168) )
    {
      v45 = *a1;
      goto LABEL_141;
    }
LABEL_45:
    v40 = *(char **)(a2 + 152);
    v41 = *(unsigned int *)(a2 + 160);
    v42 = &v40[16 * v41];
    if ( v40 == v42 )
      goto LABEL_51;
    v43 = *(char **)(a2 + 152);
    v44 = 0;
    do
    {
      while ( *(_QWORD *)v43 )
      {
        *(_QWORD *)v43 = 0;
        v43 += 16;
        if ( v42 == v43 )
          goto LABEL_50;
      }
      v43 += 16;
      ++v44;
    }
    while ( v42 != v43 );
LABEL_50:
    if ( (unsigned int)v41 <= 0x10 || 3 * (int)v41 >= (unsigned int)(4 * v44) )
    {
LABEL_51:
      *(_QWORD *)(a2 + 164) = 0;
      v45 = *a1;
      if ( v39 )
      {
        v46 = *((unsigned int *)v39 - 1);
        if ( (_DWORD)v46 == *((_DWORD *)v39 - 2) )
          goto LABEL_122;
LABEL_53:
        v47 = v46 + 1;
        v39[v46] = v45;
        v48 = *(__m128i **)(a2 + 152);
        *((_DWORD *)v39 - 1) = v46 + 1;
        goto LABEL_54;
      }
LABEL_141:
      v91 = (_QWORD *)sub_186B270(0x18u);
      v39 = v91 + 1;
      v91[1] = v45;
      v47 = 1;
      *(_QWORD *)(a2 + 144) = v91 + 1;
      v48 = *(__m128i **)(a2 + 152);
      *v91 = 0x100000002LL;
      goto LABEL_54;
    }
    if ( v40 )
    {
      sub_186B220(v40);
      v79 = *(_DWORD *)(a2 + 160);
      *(_QWORD *)(a2 + 152) = 0;
      v79 >>= 1;
      *(_DWORD *)(a2 + 160) = v79;
      v80 = v79;
      v81 = (_OWORD *)sub_186B270(v80 * 16);
      if ( !v79 )
      {
LABEL_119:
        *(_QWORD *)(a2 + 152) = v81;
        v39 = *(_QWORD **)(a2 + 144);
        goto LABEL_51;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 152) = 0;
      v92 = (unsigned int)v41 >> 1;
      *(_DWORD *)(a2 + 160) = v92;
      v80 = v92;
      v81 = (_OWORD *)sub_186B270(16 * v92);
    }
    v82 = &v81[v80];
    v83 = v81;
    if ( ((v80 * 16) & 0x10) == 0 || (v83 = v81 + 1, *v81 = 0, v81 + 1 != v82) )
    {
      do
      {
        *v83 = 0;
        v83 += 2;
        *(v83 - 1) = 0;
      }
      while ( v83 != v82 );
    }
    goto LABEL_119;
  }
  *((_DWORD *)v39 - 1) = 0;
  if ( *(_DWORD *)(a2 + 164) || *(_DWORD *)(a2 + 168) )
    goto LABEL_45;
  v45 = *a1;
  v46 = *((unsigned int *)v39 - 1);
  if ( (_DWORD)v46 != *((_DWORD *)v39 - 2) )
    goto LABEL_53;
LABEL_122:
  v84 = (unsigned int)(3 * v46 + 1) >> 1;
  v85 = 8 * v84 + 8;
  if ( 8 * (int)v46 + 8 >= v85 || (unsigned int)v46 >= v84 )
  {
    v160 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v174, "Overflow encountered when expanding vector");
    *v160 = (char *)off_1C63128;
    sub_2333C0(v160 + 1, v174);
    sub_233E40((__int64)v174);
    __cxa_throw(v160, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v86 = (unsigned int *)sub_186B300(v39 - 1, v85);
  v87 = v86[1];
  v39 = v86 + 2;
  *v86 = v84;
  *(_QWORD *)(a2 + 144) = v86 + 2;
  v47 = v87 + 1;
  *(_QWORD *)&v86[2 * v87 + 2] = v45;
  v48 = *(__m128i **)(a2 + 152);
  v86[1] = v87 + 1;
  while ( 1 )
  {
LABEL_54:
    if ( !v47 )
      goto LABEL_68;
    v49 = v39[v47 - 1];
    v50 = v47 - 1;
    v51 = 16LL * *(unsigned int *)(a2 + 160);
    v52 = *(_DWORD *)(v49 + 12);
    v53 = 16LL * (v52 & (unsigned int)(*(_DWORD *)(a2 + 160) - 1));
    v54 = &v48[(unsigned __int64)v53 / 0x10];
    if ( v53 != v51 )
    {
      v55 = &v48[(unsigned __int64)v51 / 0x10];
      for ( i = &v48[(unsigned __int64)v53 / 0x10]; i != v55; ++i )
      {
        v57 = i->m128i_i64[0];
        if ( i->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v57 + 12) == v52 && v49 == v57 )
          {
LABEL_126:
            *((_DWORD *)v39 - 1) = v50;
            goto LABEL_127;
          }
        }
        else if ( !v57 )
        {
          goto LABEL_62;
        }
      }
    }
    if ( v54 != v48 )
    {
      for ( j = (__int64 *)v48; v54 != (__m128i *)j; j += 2 )
      {
        v90 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v90 + 12) == v52 && v49 == v90 )
            goto LABEL_126;
        }
        else if ( !v90 )
        {
          break;
        }
      }
    }
LABEL_62:
    if ( *(_WORD *)(v49 + 4) )
      goto LABEL_65;
    v58 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL);
    if ( !v58 )
      goto LABEL_65;
    if ( *v58 )
      goto LABEL_65;
    if ( v58[1] != 14 )
      goto LABEL_65;
    v96 = *(_DWORD *)(v49 + 24);
    if ( v96 != 1 )
      goto LABEL_65;
    v97 = *(_QWORD *)(v49 + 32);
    v98 = *(unsigned int *)(a2 + 128);
    v99 = *(__int64 **)(a2 + 120);
    v100 = *(_DWORD *)(v97 + 12);
    v101 = v98 - 1;
    v98 *= 16;
    v102 = (__int64 *)((char *)v99 + v98);
    v103 = 16LL * (v100 & v101);
    v104 = &v99[(unsigned __int64)v103 / 8];
    if ( v103 != v98 )
      break;
LABEL_160:
    while ( v104 != v99 )
    {
      v107 = *v99;
      if ( (unsigned __int64)*v99 > 1 )
      {
        if ( *(_DWORD *)(v107 + 12) == v100 && v97 == v107 )
          goto LABEL_169;
      }
      else if ( !v107 )
      {
        break;
      }
      v99 += 2;
    }
LABEL_65:
    if ( (unsigned __int8)sub_5C4900(a2, v49) )
      goto LABEL_66;
    v134 = *(unsigned int *)(a2 + 160);
    v135 = 2 * v134;
    if ( 3 * (int)v134 < (unsigned int)(4 * (*(_DWORD *)(a2 + 164) + *(_DWORD *)(a2 + 168))) )
    {
      v136 = 16LL * v135;
      v149 = (__m128i *)sub_186B270(v136);
      v48 = v149;
      m128i_i64 = (__int64)v149[v136 / 0x10].m128i_i64;
      if ( v135 )
      {
        if ( (v136 & 0x10) == 0 || (*v149 = 0, ++v149, (__m128i *)m128i_i64 != v149) )
        {
          do
          {
            *v149 = 0;
            v149 += 2;
            v149[-1] = 0;
          }
          while ( (__m128i *)m128i_i64 != v149 );
        }
      }
      v151 = *(__m128i **)(a2 + 152);
      v167 = (__m128i *)m128i_i64;
      v162 = v135 - 1;
      v152 = v151;
      v153 = &v151[*(unsigned int *)(a2 + 160)];
      if ( v151 != v153 )
      {
        do
        {
          if ( v152->m128i_i64[0] > 1uLL )
          {
            v154 = 16LL * (*(_DWORD *)(v152->m128i_i64[0] + 12) & v162);
            v155 = &v48[(unsigned __int64)v154 / 0x10];
            if ( v136 == v154 )
            {
LABEL_259:
              if ( v48 == v155 )
              {
LABEL_268:
                v168.m128i_i64[1] = m128i_i64;
                v168.m128i_i64[0] = (__int64)v152;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v156 = v48;
              while ( v156->m128i_i64[0] )
              {
                if ( v155 == ++v156 )
                  goto LABEL_268;
              }
            }
            else
            {
              v156 = &v48[(unsigned __int64)v154 / 0x10];
              while ( v156->m128i_i64[0] )
              {
                if ( (__m128i *)m128i_i64 == ++v156 )
                  goto LABEL_259;
              }
            }
            *v156 = _mm_loadu_si128(v152);
          }
          ++v152;
        }
        while ( v153 != v152 );
        v151 = *(__m128i **)(a2 + 152);
      }
      if ( v151 )
        sub_186B220(v151);
      *(_QWORD *)(a2 + 152) = v48;
      *(_DWORD *)(a2 + 160) = v135;
      *(_DWORD *)(a2 + 168) = 0;
    }
    else
    {
      v48 = *(__m128i **)(a2 + 152);
      v162 = v134 - 1;
      v136 = 16 * v134;
      v167 = &v48[v134];
    }
    v137 = *(_DWORD *)(v49 + 12);
    v138 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
    v139 = 16LL * (v137 & v162);
    v140 = &v48[(unsigned __int64)v139 / 0x10];
    if ( v139 == v136 )
    {
      v142 = nullptr;
LABEL_231:
      if ( v140 == v48 )
      {
LABEL_271:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v141 = v48;
      while ( 1 )
      {
        v144 = v141->m128i_i64[0];
        if ( v141->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v144 + 12) == v137 && v49 == v144 )
            goto LABEL_270;
        }
        else
        {
          if ( !v144 )
            goto LABEL_239;
          v142 = v141;
        }
        if ( v140 == ++v141 )
          goto LABEL_271;
      }
    }
    v141 = &v48[(unsigned __int64)v139 / 0x10];
    v142 = nullptr;
    while ( 1 )
    {
      v143 = v141->m128i_i64[0];
      if ( v141->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v143 + 12) == v137 && v49 == v143 )
      {
LABEL_270:
        *v141 = v138;
        goto LABEL_242;
      }
LABEL_226:
      if ( ++v141 == v167 )
        goto LABEL_231;
    }
    if ( v143 )
    {
      v142 = v141;
      goto LABEL_226;
    }
LABEL_239:
    if ( v142 )
    {
      --*(_DWORD *)(a2 + 168);
      v141 = v142;
    }
    *v141 = v138;
    ++*(_DWORD *)(a2 + 164);
LABEL_242:
    v39 = *(_QWORD **)(a2 + 144);
    --*((_DWORD *)v39 - 1);
LABEL_127:
    v47 = *((_DWORD *)v39 - 1);
  }
  v105 = &v99[(unsigned __int64)v103 / 8];
  while ( 1 )
  {
    v106 = *v105;
    if ( (unsigned __int64)*v105 > 1 )
      break;
    if ( !v106 )
      goto LABEL_65;
LABEL_156:
    v105 += 2;
    if ( v102 == v105 )
      goto LABEL_160;
  }
  if ( *(_DWORD *)(v106 + 12) != v100 || v97 != v106 )
    goto LABEL_156;
  v99 = v105;
LABEL_169:
  v168.m128i_i64[0] = *(_QWORD *)(a2 + 24);
  v108 = *(_QWORD *)(v99[1] + 48);
  if ( v108 )
    *(_DWORD *)(v108 + 8) += 2;
  v109 = *(_QWORD **)(a2 + 64);
  if ( v109 )
  {
    v110 = *((_DWORD *)v109 - 1);
    if ( v110 == *((_DWORD *)v109 - 2) )
    {
      v145 = (3 * v110 + 1) >> 1;
      v146 = 8 * v145 + 8;
      if ( 8 * v110 + 8 >= v146 || v110 >= v145 )
      {
        v158 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v174, "Overflow encountered when expanding vector");
        *v158 = (char *)off_1C63128;
        sub_2333C0(v158 + 1, v174);
        sub_233E40((__int64)v174);
        __cxa_throw(v158, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v147 = (unsigned int *)sub_186B300(v109 - 1, v146);
      v109 = v147 + 2;
      v39 = *(_QWORD **)(a2 + 144);
      v148 = v147[1];
      *v147 = v145;
      *(_QWORD *)(a2 + 64) = v147 + 2;
      LODWORD(v147) = v148;
      v111 = &v109[v148];
      v96 = (_DWORD)v147 + 1;
    }
    else
    {
      v96 = v110 + 1;
      v111 = &v109[v110];
    }
  }
  else
  {
    v157 = (_QWORD *)sub_186B270(0x18u);
    *v157 = 2;
    v109 = v157 + 1;
    v39 = *(_QWORD **)(a2 + 144);
    *(_QWORD *)(a2 + 64) = v109;
    v111 = v109;
  }
  *v111 = v108;
  *((_DWORD *)v109 - 1) = v96;
  --*((_DWORD *)v39 - 1);
  v112 = *(unsigned int *)(a2 + 160);
  v166 = 2 * v112;
  if ( 3 * (int)v112 < (unsigned int)(4 * (*(_DWORD *)(a2 + 164) + *(_DWORD *)(a2 + 168))) )
  {
    v124 = 2 * v112;
    v114 = 16LL * (unsigned int)(2 * v112);
    v125 = (__m128i *)sub_186B270(v114);
    v113 = (__int64 *)v125;
    v126 = v125;
    v127 = &v125[v114 / 0x10];
    if ( v124 )
    {
      if ( (v114 & 0x10) == 0 || (v126 = v125 + 1, *v125 = 0, &v125[1] != v127) )
      {
        do
        {
          *v126 = 0;
          v126 += 2;
          v126[-1] = 0;
        }
        while ( v126 != v127 );
      }
    }
    v115 = &v125[v114 / 0x10];
    v128 = *(__m128i **)(a2 + 152);
    v129 = *(unsigned int *)(a2 + 160);
    v161 = v166 - 1;
    v130 = v128;
    v168.m128i_i64[1] = (__int64)v128[v129].m128i_i64;
    if ( v128 != &v128[v129] )
    {
      do
      {
        if ( v130->m128i_i64[0] > 1uLL )
        {
          v131 = 16LL * (*(_DWORD *)(v130->m128i_i64[0] + 12) & v161);
          v132 = &v125[(unsigned __int64)v131 / 0x10];
          if ( v114 == v131 )
          {
LABEL_211:
            if ( v125 == v132 )
            {
LABEL_278:
              v169.m128i_i64[1] = (__int64)v125[v114 / 0x10].m128i_i64;
              v169.m128i_i64[0] = (__int64)v130;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v133 = v125;
            while ( v133->m128i_i64[0] )
            {
              if ( v132 == ++v133 )
                goto LABEL_278;
            }
          }
          else
          {
            v133 = &v125[(unsigned __int64)v131 / 0x10];
            while ( v133->m128i_i64[0] )
            {
              if ( v127 == ++v133 )
                goto LABEL_211;
            }
          }
          *v133 = _mm_loadu_si128(v130);
        }
        ++v130;
      }
      while ( (const __m128i *)v168.m128i_i64[1] != v130 );
      v128 = *(__m128i **)(a2 + 152);
    }
    if ( v128 )
      sub_186B220(v128);
    *(_QWORD *)(a2 + 152) = v113;
    *(_DWORD *)(a2 + 168) = 0;
    *(_DWORD *)(a2 + 160) = v166;
  }
  else
  {
    v113 = *(__int64 **)(a2 + 152);
    v161 = v112 - 1;
    v114 = 16 * v112;
    v115 = (__m128i *)&v113[2 * v112];
  }
  v116 = *(_DWORD *)(v49 + 12);
  v117 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)v108);
  v118 = 16LL * (v116 & v161);
  v119 = &v113[(unsigned __int64)v118 / 8];
  if ( v118 == v114 )
  {
    v121 = nullptr;
    while ( 1 )
    {
LABEL_187:
      if ( v119 == v113 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v123 = *v113;
      if ( (unsigned __int64)*v113 > 1 )
      {
        if ( *(_DWORD *)(v123 + 12) == v116 && v49 == v123 )
        {
          *(__m128i *)v113 = v117;
          goto LABEL_192;
        }
      }
      else
      {
        if ( !v123 )
        {
          if ( v121 )
          {
            --*(_DWORD *)(a2 + 168);
            v113 = (__int64 *)v121;
          }
          *(__m128i *)v113 = v117;
          ++*(_DWORD *)(a2 + 164);
          goto LABEL_192;
        }
        v121 = (__m128i *)v113;
      }
      v113 += 2;
    }
  }
  v120 = (__m128i *)&v113[(unsigned __int64)v118 / 8];
  v121 = nullptr;
  while ( 2 )
  {
    v122 = v120->m128i_i64[0];
    if ( v120->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v122 + 12) == v116 && v49 == v122 )
      {
        *v120 = v117;
        goto LABEL_192;
      }
      goto LABEL_180;
    }
    if ( v122 )
    {
      v121 = v120;
LABEL_180:
      if ( ++v120 == v115 )
        goto LABEL_187;
      continue;
    }
    break;
  }
  if ( v121 )
  {
    --*(_DWORD *)(a2 + 168);
    v120 = v121;
  }
  *v120 = v117;
  ++*(_DWORD *)(a2 + 164);
LABEL_192:
  if ( v108 )
  {
    v38 = (*(_DWORD *)(v108 + 8))-- == 1;
    if ( v38 )
    {
      sub_15D7BC0(v168.m128i_i64[0], v108);
      v39 = *(_QWORD **)(a2 + 144);
      v48 = *(__m128i **)(a2 + 152);
      goto LABEL_67;
    }
  }
LABEL_66:
  v39 = *(_QWORD **)(a2 + 144);
  v48 = *(__m128i **)(a2 + 152);
LABEL_67:
  if ( v39 )
    goto LABEL_127;
LABEL_68:
  v59 = *a1;
  v60 = *(unsigned int *)(a2 + 160);
  v61 = *(_DWORD *)(*a1 + 12LL);
  v62 = v60 - 1;
  v60 *= 16;
  v63 = (__m128i *)((char *)v48 + v60);
  v64 = 16LL * (v61 & v62);
  v65 = &v48[(unsigned __int64)v64 / 0x10];
  if ( v64 == v60 )
  {
LABEL_104:
    while ( v65 != v48 )
    {
      v78 = v48->m128i_i64[0];
      if ( v48->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v78 + 12) == v61 && v59 == v78 )
        {
          v66 = v48;
          goto LABEL_145;
        }
      }
      else if ( !v78 )
      {
        break;
      }
      ++v48;
    }
LABEL_75:
    BUG();
  }
  v66 = &v48[(unsigned __int64)v64 / 0x10];
  while ( 2 )
  {
    v67 = v66->m128i_i64[0];
    if ( v66->m128i_i64[0] <= 1uLL )
    {
      if ( !v67 )
        goto LABEL_75;
      goto LABEL_72;
    }
    if ( *(_DWORD *)(v67 + 12) != v61 || v59 != v67 )
    {
LABEL_72:
      if ( v63 == ++v66 )
        goto LABEL_104;
      continue;
    }
    break;
  }
LABEL_145:
  v93 = v66->m128i_i64[1];
  v94 = a1[1];
  if ( v93 )
    ++*(_DWORD *)(v93 + 8);
  v38 = (*(_DWORD *)(v59 + 8))-- == 1;
  if ( v38 )
    sub_15D7BC0(v94, v59);
  *a1 = v93;
  return a1;
}

