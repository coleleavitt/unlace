void __fastcall sub_1FA92D0(__int64 a1, __int64 a2, unsigned int *a3, _DWORD **a4, _DWORD **a5)
{
  unsigned __int64 v5; // rbp
  _DWORD **v6; // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __m128 *v15; // r12
  unsigned __int64 v16; // r14
  __int64 *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 *v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // rsi
  char *v31; // rdi
  size_t v32; // rsi
  _DWORD **v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // esi
  char v36; // r15
  __int64 v37; // r14
  int v38; // eax
  unsigned __int64 v39; // rcx
  __int64 v40; // rdi
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  unsigned __int64 v43; // r13
  __int64 *v44; // r13
  __int64 *v45; // r14
  __int64 v46; // rsi
  void *v47; // r8
  _BYTE *v48; // rdx
  __int64 *v49; // r13
  __int64 *v50; // r14
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  int v56; // edx
  int v57; // edx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rcx
  unsigned int *v63; // rbx
  __int64 v64; // rsi
  unsigned int *v65; // rbp
  unsigned int *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rbp
  void *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  unsigned int *v74; // r13
  void *v75; // rax
  __int64 *v76; // rcx
  __m128 *v77; // r13
  unsigned __int64 v78; // rdx
  __m128 v79; // xmm0
  __int64 v80; // r9
  unsigned int *v81; // rdx
  unsigned __int64 v82; // rbp
  unsigned __int64 v83; // rbx
  __int64 *v84; // rax
  __int32 v85; // r14d
  __int64 *v86; // r12
  __int64 *v87; // r15
  unsigned __int32 v88; // edx
  __int64 v89; // rax
  __int64 v90; // r13
  unsigned __int64 v91; // rdx
  int v92; // ecx
  int v93; // esi
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  __int64 v96; // rdx
  void *v97; // rax
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // rax
  unsigned int *v101; // r14
  unsigned int *v102; // r15
  __int64 *v103; // r14
  unsigned int v104; // ebx
  __int64 *v105; // rbp
  __int64 v106; // rax
  __int64 v107; // rdx
  int v108; // esi
  unsigned int *v109; // rax
  char v110; // [rsp+10h] [rbp-728h]
  unsigned __int64 v111; // [rsp+10h] [rbp-728h]
  unsigned __int64 v112; // [rsp+10h] [rbp-728h]
  unsigned __int8 v113; // [rsp+18h] [rbp-720h]
  __m128 *v114; // [rsp+20h] [rbp-718h] BYREF
  void **p_base; // [rsp+28h] [rbp-710h]
  unsigned int *v116; // [rsp+30h] [rbp-708h]
  __int64 v117; // [rsp+38h] [rbp-700h]
  __m128 *v118; // [rsp+40h] [rbp-6F8h]
  unsigned __int64 v119; // [rsp+48h] [rbp-6F0h]
  _DWORD **v120; // [rsp+50h] [rbp-6E8h]
  _DWORD **v121; // [rsp+58h] [rbp-6E0h]
  unsigned __int64 v122; // [rsp+60h] [rbp-6D8h]
  _DWORD **v123; // [rsp+68h] [rbp-6D0h]
  __m128 v124; // [rsp+70h] [rbp-6C8h] BYREF
  void *v125; // [rsp+80h] [rbp-6B8h] BYREF
  __int64 v126; // [rsp+88h] [rbp-6B0h]
  _BYTE v127[64]; // [rsp+90h] [rbp-6A8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-668h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-660h]
  _BYTE v130[64]; // [rsp+E0h] [rbp-658h] BYREF
  __int64 v131; // [rsp+120h] [rbp-618h] BYREF
  __m128 v132; // [rsp+128h] [rbp-610h] BYREF
  char *v133; // [rsp+138h] [rbp-600h]
  __int64 v134; // [rsp+140h] [rbp-5F8h]
  char v135; // [rsp+148h] [rbp-5F0h] BYREF
  __int128 *v136; // [rsp+168h] [rbp-5D0h]
  __int64 v137; // [rsp+170h] [rbp-5C8h]
  __int128 v138; // [rsp+178h] [rbp-5C0h] BYREF
  void *v139; // [rsp+188h] [rbp-5B0h]
  __int64 v140; // [rsp+190h] [rbp-5A8h] BYREF
  __m128 v141; // [rsp+198h] [rbp-5A0h] BYREF
  _BYTE *v142; // [rsp+1A8h] [rbp-590h]
  __int64 v143; // [rsp+1B0h] [rbp-588h]
  _BYTE v144[32]; // [rsp+1B8h] [rbp-580h] BYREF
  __int128 *v145; // [rsp+1D8h] [rbp-560h]
  __int64 v146; // [rsp+1E0h] [rbp-558h]
  __int128 v147; // [rsp+1E8h] [rbp-550h] BYREF
  void *v148; // [rsp+1F8h] [rbp-540h]
  void *base; // [rsp+200h] [rbp-538h] BYREF
  __int64 v150; // [rsp+208h] [rbp-530h]
  char v151; // [rsp+210h] [rbp-528h] BYREF
  __m128 v152; // [rsp+290h] [rbp-4A8h] BYREF
  __int64 v153; // [rsp+2A0h] [rbp-498h]
  _BYTE v154[520]; // [rsp+2A8h] [rbp-490h] BYREF
  __int64 v155; // [rsp+4B0h] [rbp-288h] BYREF
  void *v156; // [rsp+4B8h] [rbp-280h]
  __int64 v157; // [rsp+4C0h] [rbp-278h]
  _BYTE v158[512]; // [rsp+4C8h] [rbp-270h] BYREF
  __int64 v159; // [rsp+6C8h] [rbp-70h]
  __int64 v160; // [rsp+6D0h] [rbp-68h]
  __int64 v161; // [rsp+6D8h] [rbp-60h]
  unsigned int v162; // [rsp+6E0h] [rbp-58h]
  unsigned int *v163; // [rsp+6E8h] [rbp-50h]
  __int64 v164; // [rsp+6F0h] [rbp-48h]
  unsigned int v165; // [rsp+6F8h] [rbp-40h]

  v5 = a1;
  v6 = (_DWORD **)a2;
  v116 = a3;
  v133 = &v135;
  v134 = 0x400000000LL;
  v120 = a4;
  v121 = a5;
  v132 = 0;
  v136 = &v138;
  v137 = 0;
  v138 = 0;
  v131 = 64;
  v7 = calloc(0x40u, 0x10u);
  if ( !v7 )
    sub_2221CE0("Allocation failed");
  v139 = v7;
  v156 = v158;
  v157 = 0x4000000000LL;
  p_base = &base;
  base = &v151;
  v155 = a1;
  v159 = a2;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = nullptr;
  v164 = 0;
  v165 = 0;
  v150 = 0x1000000000LL;
  v12 = sub_B941C0(a2, 16, v8, v9, v10, v11);
  if ( *(_DWORD *)v12 >> 1 )
  {
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      v13 = (__int64 *)(v12 + 8);
      v14 = 8;
    }
    else
    {
      v13 = *(__int64 **)(v12 + 8);
      v14 = 2LL * *(unsigned int *)(v12 + 16);
    }
    v15 = &v152;
    sub_ACC7B0(&v152, v13, &v13[v14], v12, 0);
    v16 = v152.m128_u64[1];
    v17 = (__int64 *)v152.m128_u64[0];
  }
  else
  {
    v15 = &v152;
    v17 = (__int64 *)sub_ACC810(v12);
    v16 = v78;
  }
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v18 = v12 + 8;
    v19 = 64;
  }
  else
  {
    v18 = *(_QWORD *)(v12 + 8);
    v19 = 16LL * *(unsigned int *)(v12 + 16);
  }
  sub_ACC7B0(&v152, (__int64 *)(v18 + v19), (__int64 *)(v18 + v19), v12, 1);
  v110 = 0;
  v24 = v152.m128_u64[0];
  v113 = 0;
  v114 = (__m128 *)(p_base + 2);
  if ( (__int64 *)v152.m128_u64[0] != v17 )
  {
    while ( 1 )
    {
      if ( (!*(_BYTE *)(a1 + 157) || !(unsigned __int8)sub_1F6D8C0(a1, (__int64)(v17 + 1)))
        && (v17[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v23 = *v17;
        v25 = *v17 & 7;
        if ( (_DWORD)v25 == 7 )
          goto LABEL_12;
        if ( (_DWORD)v25 == 3 )
        {
          v113 = 1;
          goto LABEL_15;
        }
        if ( (_DWORD)v25 != 5 )
        {
LABEL_12:
          v26 = (unsigned int)v150;
          v21 = HIDWORD(v150);
          v27 = (unsigned int)v150 + 1LL;
          if ( v27 > HIDWORD(v150) )
          {
            v117 = *v17;
            sub_2237220(p_base, v114, v27, 8);
            v26 = (unsigned int)v150;
            v23 = v117;
          }
          v20 = (__int64)base;
          *((_QWORD *)base + v26) = v23;
          LODWORD(v150) = v150 + 1;
        }
        else
        {
          v110 = 1;
        }
      }
LABEL_15:
      if ( v17 + 2 != (__int64 *)v16 )
      {
        if ( (unsigned __int64)v17[2] < 0xFFFFFFFFFFFFFFFELL )
        {
          v17 += 2;
          goto LABEL_21;
        }
        v28 = v17 + 4;
        while ( 1 )
        {
          v17 = v28;
          if ( v28 == (__int64 *)v16 )
            break;
          v28 += 2;
          if ( (unsigned __int64)*v17 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_21;
        }
      }
      v17 = (__int64 *)v16;
LABEL_21:
      if ( (__int64 *)v24 == v17 )
      {
        v29 = v113;
        LOBYTE(v29) = v110 | v113;
        v30 = 8LL * (unsigned int)v150;
        if ( (unsigned __int64)v30 > 8 )
        {
          v31 = (char *)base;
          v32 = v30 >> 3;
          goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
  }
  v31 = (char *)base;
  v43 = 8LL * (unsigned int)v150;
  if ( v43 > 8 )
  {
    v29 = 0;
    v32 = (8LL * (unsigned int)v150) >> 3;
LABEL_24:
    qsort(v31, v32, 8u, (__compar_fn_t)sub_1F6A9F0);
LABEL_25:
    if ( (_BYTE)v29 )
    {
      v33 = v6 - 8;
      v152.m128_u64[1] = 8;
      v152.m128_u64[0] = (unsigned __int64)v154;
      if ( !v6 )
        v33 = nullptr;
      BYTE4(v153) = 1;
      LODWORD(v153) = 0;
      v34 = sub_B8E970((__int64)(v33 + 8));
      v35 = BYTE4(v153);
      v22 = v34;
      if ( v34 )
      {
        v36 = v110;
        v114 = (__m128 *)(p_base + 2);
        do
        {
          if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 18 <= 0x3F )
          {
            v37 = *(_QWORD *)(v22 + 40);
            v38 = v37 & 7;
            if ( v38 != 7 )
            {
              if ( v38 == 3 )
              {
                if ( v113 )
                {
                  if ( !(_BYTE)v35 )
                    goto LABEL_113;
                  goto LABEL_35;
                }
              }
              else if ( v38 == 5 && v36 )
              {
                if ( !(_BYTE)v35 )
                {
LABEL_113:
                  v111 = v22;
                  v42 = (_QWORD *)sub_2236760(&v152, *(_QWORD *)(v22 + 40));
                  v35 = BYTE4(v153);
                  v22 = v111;
                  v39 = v152.m128_u64[0];
                  if ( !BYTE4(v153) )
                  {
                    v21 = v152.m128_u64[0] + 8LL * v152.m128_u32[2];
LABEL_43:
                    if ( (_QWORD *)v21 != v42 && (*v42 == -2 || *v42 == -1) )
                    {
                      do
                        ++v42;
                      while ( (_QWORD *)v21 != v42 && *v42 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                    if ( (_BYTE)v20 )
                    {
                      v72 = (unsigned int)v150;
                      v21 = HIDWORD(v150);
                      v73 = (unsigned int)v150 + 1LL;
                      if ( v73 > HIDWORD(v150) )
                      {
                        v112 = v22;
                        sub_2237220(p_base, v114, v73, 8);
                        v72 = (unsigned int)v150;
                        v22 = v112;
                      }
                      v20 = (__int64)base;
                      *((_QWORD *)base + v72) = v37;
                      v35 = BYTE4(v153);
                      LODWORD(v150) = v150 + 1;
                    }
                    goto LABEL_49;
                  }
LABEL_42:
                  v21 = v39 + 8LL * v152.m128_u32[3];
                  v35 = v29;
                  goto LABEL_43;
                }
LABEL_35:
                v39 = v152.m128_u64[0];
                v40 = 8LL * v152.m128_u32[3];
                v41 = (_QWORD *)(v152.m128_u64[0] + v40);
                if ( v152.m128_u64[0] != v152.m128_u64[0] + v40 )
                {
                  v42 = (_QWORD *)v152.m128_u64[0];
                  if ( v37 == *(_QWORD *)v152.m128_u64[0] )
                  {
LABEL_121:
                    v20 = 0;
                    goto LABEL_42;
                  }
                  while ( v41 != ++v42 )
                  {
                    if ( *v42 == v37 )
                      goto LABEL_121;
                  }
                }
                if ( v152.m128_i32[3] >= (unsigned __int32)v152.m128_i32[2] )
                  goto LABEL_113;
                ++v152.m128_i32[3];
                *v41 = v37;
                v39 = v152.m128_u64[0];
                v20 = v35;
                v42 = (_QWORD *)(v152.m128_u64[0] + v40);
                goto LABEL_42;
              }
            }
          }
LABEL_49:
          v22 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( v22 );
      }
      if ( !(_BYTE)v35 )
        free((void *)v152.m128_u64[0]);
    }
    v31 = (char *)base;
    v43 = 8LL * (unsigned int)v150;
  }
  v44 = (__int64 *)&v31[v43];
  if ( v44 == (__int64 *)v31 )
  {
    v125 = v127;
    v126 = 0x800000000LL;
    ptr = v130;
    v129 = 0x800000000LL;
    goto LABEL_67;
  }
  v45 = (__int64 *)v31;
  do
  {
    v46 = *v45++;
    sub_B94670((unsigned __int64)v6, v46, v20, v21, v22, v23);
  }
  while ( v44 != v45 );
  v47 = base;
  v48 = v130;
  v49 = (__int64 *)((char *)base + 8 * (unsigned int)v150);
  ptr = v130;
  v125 = v127;
  v126 = 0x800000000LL;
  v129 = 0x800000000LL;
  if ( v49 != base )
  {
    v50 = (__int64 *)base;
    v114 = (__m128 *)&v140;
    while ( 1 )
    {
      v55 = (_QWORD *)sub_B94050((unsigned __int64)v6, *v50, (__int64)v48, v21, (__int64)v47, v23);
      v56 = *(_DWORD *)v50;
      v124.m128_u64[0] = (unsigned __int64)v55;
      v57 = v56 & 7;
      switch ( v57 )
      {
        case 7:
          goto LABEL_58;
        case 3:
          ++v50;
          sub_1F704B0((__int64)&v125, v55, nullptr);
          if ( v49 == v50 )
          {
LABEL_63:
            if ( (_DWORD)v126 )
            {
              v140 = sub_1FA8920(&v155, (__int64)&v125);
              sub_1EAAB80((__int64)&v152, *(_QWORD *)(*(_QWORD *)v125 + 40LL));
              sub_1F74F60((unsigned int *)&v131, v152.m128_i32[0], v152.m128_i64[1], &v140, v58, v59);
            }
            if ( (_DWORD)v129 )
            {
              v140 = sub_1FA8920(&v155, (__int64)&ptr);
              sub_1EAAB80((__int64)&v152, *(_QWORD *)(*(_QWORD *)ptr + 40LL));
              sub_1F74F60((unsigned int *)&v131, v152.m128_i32[0], v152.m128_i64[1], &v140, v60, v61);
            }
            goto LABEL_67;
          }
          break;
        case 5:
          sub_1F704B0((__int64)&ptr, v55, nullptr);
          goto LABEL_59;
        default:
LABEL_58:
          v51 = sub_1FA7FA0((unsigned int *)&v155, (__int64)&v124);
          v52 = *v50;
          v140 = v51;
          sub_1EAAB80((__int64)&v152, v52);
          sub_1F74F60((unsigned int *)&v131, v152.m128_i32[0], v152.m128_i64[1], (__int64 *)v114, v53, v54);
LABEL_59:
          if ( v49 == ++v50 )
            goto LABEL_63;
          break;
      }
    }
  }
LABEL_67:
  v62 = *(__int64 **)(v5 + 48);
  if ( v62 )
    v62 = (__int64 *)sub_1ECD110(*(_QWORD *)(v5 + 48), (__int64)v6);
  sub_1FA3420((unsigned int *)&v131, (_DWORD **)v116, &v155, v62);
  if ( (_DWORD)v161 )
  {
    v146 = 0;
    v74 = (unsigned int *)&v140;
    v141 = 0;
    v147 = 0;
    v142 = v144;
    v143 = 0x400000000LL;
    v145 = &v147;
    v140 = 64;
    v75 = sub_1F6B9A0();
    v152.m128_u64[0] = v5;
    v148 = v75;
    v152.m128_u64[1] = (unsigned __int64)v154;
    v153 = 0x4000000000LL;
    if ( (_DWORD)v161 )
    {
      v116 = (unsigned int *)v154;
      v114 = (__m128 *)(v160 + 552LL * v162);
      v79 = _mm_loadh_ps((const double *)&v114);
      v114 = &v124;
      v124 = v79;
      sub_1F734B0((__int64)&v124);
      v117 = v160 + 552LL * v162;
      if ( v117 != v124.m128_u64[0] )
      {
        v81 = v116;
        v118 = &v152;
        v116 = (unsigned int *)&v140;
        v119 = (unsigned __int64)v81;
        v122 = v5;
        v82 = v124.m128_u64[1];
        v123 = v6;
        v83 = v124.m128_u64[0];
        do
        {
          v84 = *(__int64 **)(v83 + 24);
          v85 = v153;
          v86 = &v84[*(unsigned int *)(v83 + 32)];
          if ( v84 == v86 )
          {
            v88 = v153;
          }
          else
          {
            v87 = *(__int64 **)(v83 + 24);
            v88 = v153;
            do
            {
              v89 = v88;
              v90 = *v87;
              v91 = v88 + 1LL;
              if ( v91 > HIDWORD(v153) )
              {
                sub_2237220(&v118->m128_u16[4], v119, v91, 8);
                *(_QWORD *)(v152.m128_u64[1] + 8LL * (unsigned int)v153) = v90;
              }
              else
              {
                *(_QWORD *)(v152.m128_u64[1] + 8 * v89) = v90;
              }
              ++v87;
              v88 = v153 + 1;
              LODWORD(v153) = v153 + 1;
            }
            while ( v86 != v87 );
          }
          v92 = *(_DWORD *)(v83 + 16);
          v124.m128_i32[1] = v88;
          v93 = *(_DWORD *)v83;
          v94 = *(_QWORD *)(v83 + 8);
          v124.m128_i32[0] = v85;
          sub_1F752E0(v116, v93, v94, v92, (__int64 *)v114, v80);
          v95 = v83 + 552;
          if ( v83 + 552 == v82 )
          {
            v95 = v82;
          }
          else if ( *(_DWORD *)(v83 + 552) == -1 )
          {
            do
            {
              v96 = *(_QWORD *)(v95 + 8);
              if ( v96 == 1 )
              {
                if ( *(_DWORD *)(v95 + 16) != -1 )
                  break;
              }
              else if ( v96 != 2 || *(_DWORD *)(v95 + 16) != -2 )
              {
                break;
              }
              v95 += 552LL;
            }
            while ( v82 != v95 && *(_DWORD *)v95 == -1 );
          }
          v83 = v95;
        }
        while ( v117 != v95 );
        v5 = v122;
        v6 = v123;
        v15 = v118;
        v74 = v116;
      }
    }
    v76 = *(__int64 **)(v5 + 48);
    if ( v76 )
      v76 = (__int64 *)sub_1ECD3E0(*(_QWORD *)(v5 + 48), (__int64)v6);
    sub_1FA4B80(v74, v120, (__int64 *)v15, v76);
    if ( (unsigned __int16 *)v152.m128_u64[1] != &v15[1].m128_u16[4] )
      free((void *)v152.m128_u64[1]);
    v77 = (__m128 *)(v74 + 2);
    free(v148);
    sub_A24B10(v77);
    sub_9B7090((__int64)v77);
  }
  if ( (_DWORD)v164 && !*(_BYTE *)(v5 + 157) )
  {
    v146 = 0;
    v141 = 0;
    v147 = 0;
    v142 = v144;
    v143 = 0x400000000LL;
    v145 = &v147;
    v140 = 64;
    v97 = sub_1F6B9A0();
    v152.m128_u64[0] = v5;
    v148 = v97;
    v152.m128_u64[1] = (unsigned __int64)&v15[1].m128_u64[1];
    v153 = 0x4000000000LL;
    if ( (_DWORD)v164 )
    {
      v101 = v163;
      v116 = &v163[136 * v165];
      if ( v163 != v116 )
      {
        if ( *v163 != -1 )
          goto LABEL_162;
        do
        {
          if ( (unsigned __int64)(*((_QWORD *)v101 + 1) - 1LL) > 1 )
            break;
          v101 += 136;
          if ( v116 == v101 )
            goto LABEL_151;
        }
        while ( *v101 == -1 );
        if ( v101 != v116 )
        {
LABEL_162:
          v119 = v5;
          v102 = v101;
          v114 = &v124;
          v118 = (__m128 *)((char *)v15 + 24);
          v120 = v6;
          while ( 1 )
          {
            v103 = *((__int64 **)v102 + 2);
            v104 = v153;
            v105 = &v103[v102[6]];
            if ( v103 == v105 )
            {
              LODWORD(v106) = v153;
            }
            else
            {
              v106 = (unsigned int)v153;
              do
              {
                v98 = *v103;
                if ( v106 + 1 > (unsigned __int64)HIDWORD(v153) )
                {
                  v117 = *v103;
                  sub_2237220(&v15->m128_u16[4], v118, v106 + 1, 8);
                  v98 = v117;
                  *(_QWORD *)(v152.m128_u64[1] + 8LL * (unsigned int)v153) = v117;
                }
                else
                {
                  *(_QWORD *)(v152.m128_u64[1] + 8 * v106) = v98;
                }
                ++v103;
                v106 = (unsigned int)(v153 + 1);
                LODWORD(v153) = v153 + 1;
              }
              while ( v105 != v103 );
            }
            v107 = *((_QWORD *)v102 + 1);
            v108 = *v102;
            v124.m128_u64[0] = __PAIR64__(v106, v104);
            sub_1F75120((unsigned int *)&v140, v108, v107, (__int64 *)v114, v98, v99);
            v109 = v102 + 136;
            if ( v102 + 136 == v116 )
              break;
            if ( v102[136] == -1 )
            {
              while ( (unsigned __int64)(*((_QWORD *)v109 + 1) - 1LL) <= 1 )
              {
                v109 += 136;
                if ( v116 == v109 )
                  goto LABEL_175;
                if ( *v109 != -1 )
                  goto LABEL_170;
              }
              if ( v109 == v116 )
                break;
            }
LABEL_170:
            v102 = v109;
          }
LABEL_175:
          v5 = v119;
          v6 = v120;
        }
      }
    }
LABEL_151:
    v100 = *(__int64 **)(v5 + 48);
    if ( v100 )
      v100 = (__int64 *)sub_1ECD240(*(_QWORD *)(v5 + 48), (__int64)v6);
    sub_1FA3FD0((unsigned int *)&v140, v121, (__int64 *)v15, v100);
    if ( (unsigned __int16 *)v152.m128_u64[1] != &v15[1].m128_u16[4] )
      free((void *)v152.m128_u64[1]);
    free(v148);
    sub_A24B10(&v141);
    sub_9B7090((__int64)&v141);
  }
  if ( ptr != v130 )
    free(ptr);
  if ( v125 != v127 )
    free(v125);
  if ( base != p_base + 2 )
    free(base);
  v63 = v163;
  v64 = 544LL * v165;
  if ( v165 )
  {
    v65 = &v163[136 * v165];
    do
    {
      while ( *v63 == -1 && (unsigned __int64)(*((_QWORD *)v63 + 1) - 1LL) <= 1 )
      {
        v63 += 136;
        if ( v65 == v63 )
          goto LABEL_86;
      }
      v66 = *((unsigned int **)v63 + 2);
      if ( v66 != v63 + 8 )
        free(v66);
      v63 += 136;
    }
    while ( v65 != v63 );
LABEL_86:
    v63 = v163;
    v64 = 544LL * v165;
  }
  operator delete(v63, v64, 8);
  v67 = v162;
  if ( !v162 )
    goto LABEL_98;
  v68 = v160;
  v69 = v160 + 552LL * v162;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v68 != -1 )
      {
LABEL_89:
        v70 = *(void **)(v68 + 24);
        if ( v70 != (void *)(v68 + 40) )
          free(v70);
        goto LABEL_91;
      }
      v71 = *(_QWORD *)(v68 + 8);
      if ( v71 != 1 )
        break;
      if ( *(_DWORD *)(v68 + 16) != -1 )
        goto LABEL_89;
LABEL_91:
      v68 += 552;
      if ( v69 == v68 )
        goto LABEL_97;
    }
    if ( v71 != 2 || *(_DWORD *)(v68 + 16) != -2 )
      goto LABEL_89;
    v68 += 552;
  }
  while ( v69 != v68 );
LABEL_97:
  v67 = v162;
LABEL_98:
  operator delete(v160, 552 * v67, 8);
  if ( v156 != v158 )
    free(v156);
  free(v139);
  sub_A24B10(&v132);
  sub_9B7090((__int64)&v132);
}
