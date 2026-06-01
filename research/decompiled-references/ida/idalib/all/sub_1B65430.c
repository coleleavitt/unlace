unsigned __int64 __fastcall sub_1B65430(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __m128 a5,
        __m128 a6)
{
  unsigned __int64 *i; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbx
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // r11
  unsigned int v33; // ecx
  __int64 v34; // r12
  _BYTE *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // r12
  __int64 v46; // rax
  unsigned __int64 *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  int v55; // ebp
  void **v56; // rcx
  void **v57; // rax
  void **v58; // rdx
  _BYTE *v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  unsigned __int64 *v62; // rax
  __int64 *v63; // rbx
  unsigned __int64 v64; // rbp
  unsigned int *v65; // rbp
  char **v66; // r15
  char *v67; // r12
  __int64 v68; // rax
  void **v69; // r12
  void **v70; // rbx
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  unsigned int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  _BYTE *v90; // r8
  unsigned __int64 v91; // r12
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  unsigned int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // edi
  __int64 v102; // rdx
  __int64 v103; // rcx
  _BYTE *v104; // rcx
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 *v108; // rsi
  _QWORD *j; // rdx
  __int64 v110; // r13
  __int64 *v111; // r12
  __int64 *v112; // rbx
  __int64 v113; // rax
  int v114; // edi
  int v115; // edi
  __int64 v116; // r9
  unsigned int v117; // esi
  __int64 *v118; // rbp
  __int64 v119; // r8
  void **v120; // r14
  __int64 v121; // rax
  void **v122; // rbp
  int v123; // esi
  int v124; // esi
  __int64 v125; // rdi
  int v126; // esi
  int v127; // esi
  __int64 v128; // rdi
  __int64 v129; // rax
  _QWORD *v130; // r10
  int v131; // r8d
  __int64 v132; // rdx
  _QWORD *v133; // rcx
  _QWORD *v134; // rdx
  int v135; // eax
  int v136; // r9d
  _BYTE *v137; // r8
  int v138; // r10d
  __int64 *v139; // rdx
  int v140; // r8d
  unsigned __int64 *v141; // [rsp+0h] [rbp-848h]
  __int64 v142; // [rsp+0h] [rbp-848h]
  __int64 v143; // [rsp+8h] [rbp-840h]
  unsigned __int64 v144; // [rsp+28h] [rbp-820h]
  unsigned int v145; // [rsp+28h] [rbp-820h]
  __int64 v146; // [rsp+30h] [rbp-818h]
  __int64 v147; // [rsp+50h] [rbp-7F8h]
  __int64 v148; // [rsp+50h] [rbp-7F8h]
  __int64 *v149; // [rsp+60h] [rbp-7E8h]
  __int64 v150; // [rsp+60h] [rbp-7E8h]
  __int64 v151; // [rsp+60h] [rbp-7E8h]
  int v153; // [rsp+70h] [rbp-7D8h]
  __int64 v154; // [rsp+70h] [rbp-7D8h]
  __int64 v155; // [rsp+70h] [rbp-7D8h]
  unsigned int v156; // [rsp+70h] [rbp-7D8h]
  __int64 v157; // [rsp+78h] [rbp-7D0h]
  unsigned __int64 v158; // [rsp+78h] [rbp-7D0h]
  __int64 v159; // [rsp+78h] [rbp-7D0h]
  __int64 *v160; // [rsp+80h] [rbp-7C8h]
  _BYTE *v161; // [rsp+88h] [rbp-7C0h]
  unsigned int v162; // [rsp+9Ch] [rbp-7ACh] BYREF
  _WORD *v163; // [rsp+A0h] [rbp-7A8h] BYREF
  __int64 v164; // [rsp+A8h] [rbp-7A0h] BYREF
  _QWORD v165[2]; // [rsp+B0h] [rbp-798h] BYREF
  __m128i v166; // [rsp+C0h] [rbp-788h] BYREF
  __int64 v167; // [rsp+D0h] [rbp-778h] BYREF
  __m128i v168; // [rsp+E0h] [rbp-768h] BYREF
  char v169; // [rsp+F0h] [rbp-758h] BYREF
  unsigned int v170; // [rsp+100h] [rbp-748h] BYREF
  unsigned int v171; // [rsp+104h] [rbp-744h]
  _QWORD v172[20]; // [rsp+130h] [rbp-718h] BYREF
  void *v173; // [rsp+1D0h] [rbp-678h] BYREF
  __int64 v174; // [rsp+1D8h] [rbp-670h]
  _BYTE v175[128]; // [rsp+1E0h] [rbp-668h] BYREF
  void **v176; // [rsp+260h] [rbp-5E8h] BYREF
  __int64 v177; // [rsp+268h] [rbp-5E0h]
  _BYTE v178[1152]; // [rsp+270h] [rbp-5D8h] BYREF
  void *v179; // [rsp+6F0h] [rbp-158h] BYREF
  __int64 v180; // [rsp+6F8h] [rbp-150h]
  _BYTE v181[128]; // [rsp+700h] [rbp-148h] BYREF
  void *ptr; // [rsp+780h] [rbp-C8h]
  __int64 v183; // [rsp+788h] [rbp-C0h]
  _BYTE v184[184]; // [rsp+790h] [rbp-B8h] BYREF

  v172[19] = a3;
  v172[18] = a2;
  v173 = v175;
  v176 = (void **)v178;
  v174 = 0x1000000000LL;
  v177 = 0x800000000LL;
  v179 = v181;
  v180 = 0x1000000000LL;
  ptr = v184;
  v183 = 0x1000000000LL;
  if ( a3 > 8 )
  {
    sub_1B5B6F0((__int64)&v176, a3);
    if ( HIDWORD(v180) < a3 )
      sub_2237220(&v179, v181, a3, 8);
  }
  v141 = &a2[a3];
  if ( v141 != a2 )
  {
    for ( i = a2; v141 != i; ++i )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = *i;
          v10 = *a1;
          v162 = 0;
          v163 = (_WORD *)v9;
          v164 = 0;
          v11 = sub_1B06DD0(
                  v10,
                  (unsigned __int64 *)&v163,
                  &v162,
                  &v164,
                  (__int64)&byte_22F0C30,
                  0,
                  *(double *)a5.m128_u64);
          if ( v12 )
          {
            v72 = (unsigned int)v174;
            v73 = (unsigned int)v174 + 1LL;
            if ( v73 > HIDWORD(v174) )
            {
              sub_2237220(&v173, v175, v73, 8);
              v72 = (unsigned int)v174;
            }
            *((_QWORD *)v173 + v72) = v9;
            LODWORD(v174) = v174 + 1;
          }
          if ( !v11 )
            goto LABEL_42;
          sub_1AFBE90((__int64)&v170, a1[1], v11);
          if ( !(unsigned __int8)sub_FFEF20(v171) )
            break;
          v145 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
          sub_168B9F0((__int64)v172, a1, v162, 0x1224u, 0);
          sub_1AF81E0(&v166, v171);
          v74 = sub_1682AF0((__int64)v172, (__int64)&v166);
          sub_1AF81E0(&v168, 0x29u);
          v75 = sub_1682AF0(v74, (__int64)&v168);
          v76 = a1[1];
          v77 = 103;
          v78 = v75;
          v79 = *(unsigned int *)(v76 + 344);
          if ( (_DWORD)v79 )
          {
            v80 = *(_QWORD *)(v76 + 336) + 6776 * v79 - 6776;
            if ( *(_QWORD *)(v80 + 6768) == *(_QWORD *)(v76 + 328) )
            {
              v96 = *(unsigned int *)(v80 + 8);
              v97 = *(unsigned int *)(v76 + 27504);
              if ( (unsigned int)v96 > (unsigned int)v97 )
              {
                v98 = v96 - v97;
                if ( v98 )
                {
                  v99 = *(_QWORD *)v80 + 1688 * (v98 - 1);
                  if ( v99 )
                    v77 = *(unsigned int *)(v99 + 976);
                }
              }
            }
          }
          v165[0] = sub_20EAB70(v77, v145);
          v165[1] = v81;
          sub_166BAF0(v78, (__int64)v165);
          if ( (char *)v168.m128i_i64[0] != &v169 )
            operator delete((void *)v168.m128i_i64[0]);
          if ( (__int64 *)v166.m128i_i64[0] != &v167 )
            operator delete((void *)v166.m128i_i64[0]);
          ++i;
          sub_15F7200(v172);
          sub_1B20830(*a1, a1[1], v11, &v170, 0);
          if ( v141 == i )
            goto LABEL_43;
        }
        v13 = a1[1];
        v172[0] = &v166;
        v14 = *(unsigned int *)(v13 + 344);
        if ( !(_DWORD)v14 )
          goto LABEL_9;
        v15 = *(_QWORD *)(v13 + 336) + 6776 * v14 - 6776;
        if ( *(_QWORD *)(v15 + 6768) != *(_QWORD *)(v13 + 328) )
          goto LABEL_9;
        v82 = *(_DWORD *)(v15 + 8);
        v83 = *(unsigned int *)(v13 + 27504);
        if ( v82 <= (unsigned int)v83 )
          goto LABEL_9;
        v84 = *(_QWORD *)v15;
        v85 = *(_QWORD *)v15 + 1688 * (v82 - v83);
        if ( v84 == v85 )
          goto LABEL_9;
        v86 = *(_QWORD *)(v85 - 984);
        v87 = *(unsigned int *)(v85 - 968);
        if ( !(_DWORD)v87 )
          goto LABEL_9;
        LODWORD(v88) = (v87 - 1) & (((unsigned int)v11 >> 4) ^ ((unsigned int)v11 >> 9));
        v89 = v86 + 1184LL * (unsigned int)v88;
        v90 = *(_BYTE **)v89;
        if ( v11 != *(_QWORD *)v89 )
          break;
LABEL_76:
        if ( v89 == v86 + 1184 * v87 || !(9LL * *(unsigned int *)(v89 + 16)) )
          goto LABEL_9;
        ++i;
        v91 = ***(_QWORD ***)(v89 + 8);
        sub_168B9F0((__int64)v172, a1, v162, 0x11C6u, 0);
        v91 &= 0xFFFFFFFFFFFFFFFCLL;
        v168.m128i_i64[0] = sub_EEC8C0(v9, (__int64)a1, *(double *)a5.m128_u64);
        sub_1587DB0((__int64)v172, v168.m128i_i64);
        sub_15F7200(v172);
        v95 = sub_C00A40(v91, (__int64)&v168, v92, v93, v94);
        sub_168B9F0((__int64)v172, a1, v95, 0x1934u, 0);
        v168.m128i_i64[0] = sub_EEC8C0(v91, (__int64)a1, *(double *)a5.m128_u64);
        sub_1587DB0((__int64)v172, v168.m128i_i64);
        sub_15F7200(v172);
        if ( v141 == i )
          goto LABEL_43;
      }
      v135 = 1;
      if ( v90 != (_BYTE *)-4096LL )
      {
        do
        {
          v136 = v135 + 1;
          v88 = ((_DWORD)v87 - 1) & (unsigned int)(v88 + v135);
          v89 = v86 + 1184 * v88;
          v137 = *(_BYTE **)v89;
          if ( v11 == *(_QWORD *)v89 )
            goto LABEL_76;
          v135 = v136;
        }
        while ( v137 != (_BYTE *)-4096LL );
      }
LABEL_9:
      v16 = (unsigned __int64)v163;
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 40 > 6 )
      {
        v147 = 0;
      }
      else
      {
        if ( ((*(_WORD *)sub_BFBAE0(v9) + 389) & 0x1FFu) <= 1 )
          v16 = sub_19179A0(*a1, (_QWORD *)v16, 1u, v17, v18, v19, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        v147 = v11;
      }
      v144 = v16 & 0xFFFFFFFFFFFFFFFDLL;
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
      v23 = a1[1];
      v146 = v20;
      v24 = *(unsigned int *)(v23 + 344);
      if ( !(_DWORD)v24
        || (v25 = *(_QWORD *)(v23 + 336) + 6776 * v24 - 6776, *(_QWORD *)(v25 + 6768) != *(_QWORD *)(v23 + 328))
        || (v26 = *(unsigned int *)(v25 + 8),
            v27 = *(unsigned int *)(v23 + 27504),
            (unsigned int)v26 <= (unsigned int)v27)
        || (v28 = v26 - v27) == 0 )
      {
        BUG();
      }
      v29 = v28 - 1;
      v30 = *(_QWORD *)v25 + 1688 * v29;
      v31 = *(unsigned int *)(v30 + 720);
      v32 = v30;
      v149 = *(__int64 **)(v30 + 704);
      if ( !(_DWORD)v31 )
        goto LABEL_95;
      v33 = (v31 - 1) & (((unsigned int)v11 >> 4) ^ ((unsigned int)v11 >> 9));
      v34 = *(_QWORD *)(v30 + 704) + 1184LL * v33;
      v35 = *(_BYTE **)v34;
      if ( v11 == *(_QWORD *)v34 )
      {
LABEL_19:
        v36 = *(unsigned int *)(v34 + 16);
        v37 = v34 + 8;
        v38 = (unsigned int)(v36 + 1);
        v39 = 144 * (v36 + 1);
        v40 = 144 * v38 - 144;
        if ( *(unsigned int *)(v34 + 20) < (unsigned __int64)(v36 + 1) )
        {
          v157 = 144 * v38 - 144;
          v153 = v36 + 1;
          sub_1B5B6F0(v34 + 8, v36 + 1);
          v36 = *(unsigned int *)(v34 + 16);
          v40 = v157;
          LODWORD(v38) = v153;
          v37 = v34 + 8;
        }
        goto LABEL_21;
      }
      v101 = 1;
      v22 = 0;
      if ( v35 != (_BYTE *)-4096LL )
      {
        while ( 1 )
        {
          if ( v35 == (_BYTE *)-8192LL && !v22 )
            v22 = v34;
          v21 = (unsigned int)(v101 + 1);
          v33 = (v31 - 1) & (v33 + v101);
          v34 = (__int64)&v149[148 * v33];
          v35 = *(_BYTE **)v34;
          if ( v11 == *(_QWORD *)v34 )
            goto LABEL_19;
          if ( v35 == (_BYTE *)-4096LL )
            break;
          ++v101;
        }
        if ( v22 )
          v34 = v22;
      }
      v29 = (unsigned int)(3 * v31);
      v102 = (unsigned int)(*(_DWORD *)(v32 + 712) + 1);
      if ( 4 * (int)v102 < (unsigned int)v29 )
      {
        v103 = (unsigned int)(v31 - *(_DWORD *)(v32 + 716) - v102);
        if ( (unsigned int)v103 > (unsigned int)v31 >> 3 )
        {
LABEL_91:
          v104 = *(_BYTE **)v34;
          goto LABEL_92;
        }
        v151 = v32;
        v156 = ((unsigned int)v11 >> 4) ^ ((unsigned int)v11 >> 9);
        sub_1B5BC20((__int64 *)(v32 + 704), v31, v102, v103, v21, v22);
        v32 = v151;
        v126 = *(_DWORD *)(v151 + 720);
        if ( !v126 )
          goto LABEL_170;
        v127 = v126 - 1;
        v128 = *(_QWORD *)(v151 + 704);
        LODWORD(v129) = v127 & v156;
        v34 = v128 + 1184LL * (v127 & v156);
        LODWORD(v102) = *(_DWORD *)(v151 + 712) + 1;
        v104 = *(_BYTE **)v34;
        if ( v11 == *(_QWORD *)v34 )
          goto LABEL_92;
        if ( v104 != (_BYTE *)-4096LL )
        {
          v130 = (_QWORD *)(v128 + 1184LL * (v127 & v156));
          v131 = 1;
          v34 = 0;
          while ( 1 )
          {
            if ( !v34 && v104 == (_BYTE *)-8192LL )
              v34 = (__int64)v130;
            v129 = v127 & (unsigned int)(v129 + v131);
            v130 = (_QWORD *)(v128 + 1184 * v129);
            v104 = (_BYTE *)*v130;
            if ( v11 == *v130 )
              goto LABEL_131;
            if ( v104 == (_BYTE *)-4096LL )
              goto LABEL_164;
            ++v131;
          }
        }
      }
      else
      {
LABEL_95:
        v154 = v32;
        v105 = (((((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v31 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v31 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 8)
             | (((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v31 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v31 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1);
        v106 = ((v105 >> 16) | v105) + 1;
        if ( (unsigned int)v106 < 0x40 )
          LODWORD(v106) = 64;
        *(_DWORD *)(v32 + 720) = v106;
        v107 = (_QWORD *)sub_22300B0(1184LL * (unsigned int)v106, 8, 9LL * (unsigned int)v106, v29, v21, v22);
        v32 = v154;
        *(_QWORD *)(v154 + 704) = v107;
        if ( v149 )
        {
          *(_QWORD *)(v154 + 712) = 0;
          v155 = 1184 * v31;
          v108 = &v149[148 * v31];
          for ( j = &v107[148 * *(unsigned int *)(v32 + 720)]; j != v107; v107 += 148 )
            *v107 = -4096;
          if ( v149 != v108 )
          {
            v158 = v9;
            v110 = v32;
            v111 = v108;
            v160 = a1;
            v161 = (_BYTE *)v11;
            v112 = v149;
            do
            {
              v113 = *v112;
              if ( *v112 != -4096 && v113 != -8192 )
              {
                v114 = *(_DWORD *)(v110 + 720);
                if ( !v114 )
                {
                  *(_QWORD *)&dword_0 = *v112;
                  BUG();
                }
                v115 = v114 - 1;
                v116 = *(_QWORD *)(v110 + 704);
                v117 = v115 & (((unsigned int)v113 >> 9) ^ ((unsigned int)v113 >> 4));
                v118 = (__int64 *)(v116 + 1184LL * v117);
                v119 = *v118;
                if ( *v118 != v113 )
                {
                  v138 = 1;
                  v139 = nullptr;
                  if ( v119 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( !v139 && v119 == -8192 )
                        v139 = v118;
                      v117 = v115 & (v117 + v138);
                      v118 = (__int64 *)(v116 + 1184LL * v117);
                      v119 = *v118;
                      if ( v113 == *v118 )
                        break;
                      if ( v119 == -4096 )
                      {
                        if ( v139 )
                          v118 = v139;
                        break;
                      }
                      ++v138;
                    }
                  }
                }
                *v118 = v113;
                v118[1] = (__int64)(v118 + 3);
                v118[2] = 0x800000000LL;
                if ( *((_DWORD *)v112 + 4) )
                  sub_1B5B8F0((__int64)(v118 + 1), (__int64)(v112 + 1));
                v120 = (void **)v112[1];
                *((_DWORD *)v118 + 294) = *((_DWORD *)v112 + 294);
                ++*(_DWORD *)(v110 + 712);
                v121 = 18LL * *((unsigned int *)v112 + 4);
                v122 = &v120[v121];
                if ( v120 != &v120[v121] )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v122 -= 18;
                      if ( *v122 == v122 + 2 )
                        break;
                      free(*v122);
                      if ( v120 == v122 )
                        goto LABEL_111;
                    }
                  }
                  while ( v120 != v122 );
LABEL_111:
                  v122 = (void **)v112[1];
                }
                if ( v122 != (void **)(v112 + 3) )
                  free(v122);
              }
              v112 += 148;
            }
            while ( v111 != v112 );
            v9 = v158;
            a1 = v160;
            v32 = v110;
            v11 = (__int64)v161;
          }
          v159 = v32;
          operator delete(v149, v155, 8);
          v32 = v159;
          v107 = *(_QWORD **)(v159 + 704);
          v123 = *(_DWORD *)(v159 + 720);
          LODWORD(v102) = *(_DWORD *)(v159 + 712) + 1;
        }
        else
        {
          v132 = *(unsigned int *)(v154 + 720);
          *(_QWORD *)(v154 + 712) = 0;
          v123 = v132;
          v133 = &v107[148 * v132];
          if ( v133 != v107 )
          {
            v134 = v107;
            do
            {
              *v134 = -4096;
              v134 += 148;
            }
            while ( v133 != v134 );
          }
          LODWORD(v102) = 1;
        }
        if ( !v123 )
        {
LABEL_170:
          ++*(_DWORD *)(v32 + 712);
          BUG();
        }
        v124 = v123 - 1;
        LODWORD(v125) = v124 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
        v34 = (__int64)&v107[148 * (unsigned int)v125];
        v104 = *(_BYTE **)v34;
        if ( v11 == *(_QWORD *)v34 )
          goto LABEL_92;
        if ( v104 != (_BYTE *)-4096LL )
        {
          v130 = &v107[148 * (v124 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4)))];
          v140 = 1;
          v34 = 0;
          while ( 1 )
          {
            if ( !v34 && v104 == (_BYTE *)-8192LL )
              v34 = (__int64)v130;
            v125 = v124 & (unsigned int)(v125 + v140);
            v130 = &v107[148 * v125];
            v104 = (_BYTE *)*v130;
            if ( v11 == *v130 )
              break;
            if ( v104 == (_BYTE *)-4096LL )
            {
LABEL_164:
              if ( v34 )
                goto LABEL_91;
              v34 = (__int64)v130;
              goto LABEL_120;
            }
            ++v140;
          }
LABEL_131:
          v34 = (__int64)v130;
LABEL_92:
          *(_DWORD *)(v32 + 712) = v102;
          if ( v104 != (_BYTE *)-4096LL )
            --*(_DWORD *)(v32 + 716);
          goto LABEL_94;
        }
      }
LABEL_120:
      *(_DWORD *)(v32 + 712) = v102;
LABEL_94:
      *(_QWORD *)v34 = v11;
      memset((void *)(v34 + 8), 0, 0x498u);
      v37 = v34 + 8;
      v40 = 0;
      *(_QWORD *)(v34 + 8) = v34 + 24;
      LODWORD(v38) = 1;
      v39 = 144;
      *(_QWORD *)(v34 + 16) = 0x800000000LL;
      v36 = 0;
      *(_DWORD *)(v34 + 1176) = 106;
LABEL_21:
      v41 = *(_QWORD *)v37;
      v42 = *(_QWORD *)v37 + 144 * v36;
      v43 = *(_QWORD *)v37 + v39;
      if ( v42 != v43 )
      {
        do
        {
          v44 = v42 + 16;
          *(_DWORD *)(v42 + 8) = 0;
          v42 += 144;
          *(_QWORD *)(v42 - 144) = v44;
          *(_DWORD *)(v42 - 132) = 8;
        }
        while ( v43 != v42 );
        v41 = *(_QWORD *)v37;
      }
      v45 = v40 + v41;
      *(_DWORD *)(v37 + 8) = v38;
      v46 = *(unsigned int *)(v45 + 8);
      if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(v45 + 12) )
      {
        v150 = v37;
        sub_2237220(v45, v45 + 16, v46 + 1, 16);
        v46 = *(unsigned int *)(v45 + 8);
        v37 = v150;
      }
      v47 = (unsigned __int64 *)(*(_QWORD *)v45 + 16 * v46);
      *v47 = v144;
      v47[1] = v146;
      ++*(_DWORD *)(v45 + 8);
      *(_DWORD *)(v37 + 1168) = 41;
      if ( v147 || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
      {
        v48 = sub_BFB9F0(v9);
        v49 = (unsigned int)v174;
        v50 = (unsigned int)v174 + 1LL;
        if ( v50 > HIDWORD(v174) )
        {
          v148 = v48;
          sub_2237220(&v173, v175, v50, 8);
          v49 = (unsigned int)v174;
          v48 = v148;
        }
        *((_QWORD *)v173 + v49) = v48;
        LODWORD(v174) = v174 + 1;
      }
      else
      {
        v100 = sub_1B22DF0(*a1, v11, (unsigned __int64)v163, 1, a5, a6);
        sub_14B7B40((__int64)&v173, v100);
      }
      if ( (*v163 & 0x1FF) != 0x47 )
        v11 = 0;
      v51 = (unsigned int)v180;
      v52 = (unsigned int)v180 + 1LL;
      if ( v52 > HIDWORD(v180) )
      {
        sub_2237220(&v179, v181, v52, 8);
        v51 = (unsigned int)v180;
      }
      *((_QWORD *)v179 + v51) = v11;
      v53 = (unsigned int)v177;
      LODWORD(v180) = v180 + 1;
      v54 = (unsigned int)v177 + 1LL;
      v55 = v177;
      if ( HIDWORD(v177) < v54 )
      {
        sub_1B5B6F0((__int64)&v176, (unsigned int)v177 + 1LL);
        v53 = (unsigned int)v177;
      }
      v56 = v176;
      v57 = &v176[18 * v53];
      v58 = &v176[18 * v54];
      if ( v57 != v58 )
      {
        do
        {
          v59 = v57 + 2;
          *((_DWORD *)v57 + 2) = 0;
          v57 += 18;
          *(v57 - 18) = v59;
          *((_DWORD *)v57 - 33) = 8;
        }
        while ( v58 != v57 );
        v56 = v176;
      }
      LODWORD(v177) = v55 + 1;
      v60 = (__int64)&v56[18 * (unsigned int)v54 - 18];
      v61 = *(unsigned int *)(v60 + 8);
      if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(v60 + 12) )
      {
        sub_2237220(v60, v60 + 16, v61 + 1, 16);
        v61 = *(unsigned int *)(v60 + 8);
      }
      v62 = (unsigned __int64 *)(*(_QWORD *)v60 + 16 * v61);
      *v62 = v144;
      v62[1] = v146;
      ++*(_DWORD *)(v60 + 8);
LABEL_42:
      ;
    }
  }
LABEL_43:
  v63 = (__int64 *)(unsigned int)v174;
  v64 = 0;
  if ( (_DWORD)v174 )
  {
    v65 = (unsigned int *)v173;
    v66 = (char **)v179;
    v142 = (__int64)v176;
    v67 = (char *)(unsigned int)v180;
    v143 = (unsigned int)v177;
    v68 = sub_168B6C0((__int64)a1);
    v64 = sub_EC4610(v68, a4, v65, v63, v66, v67, v142, v143);
  }
  if ( ptr != v184 )
    free(ptr);
  if ( v179 != v181 )
    free(v179);
  v69 = v176;
  v70 = &v176[18 * (unsigned int)v177];
  if ( v176 != v70 )
  {
    do
    {
      while ( 1 )
      {
        v70 -= 18;
        if ( *v70 == v70 + 2 )
          break;
        free(*v70);
        if ( v69 == v70 )
          goto LABEL_52;
      }
    }
    while ( v69 != v70 );
LABEL_52:
    v70 = v176;
  }
  if ( v70 != (void **)v178 )
    free(v70);
  if ( v173 != v175 )
    free(v173);
  return v64;
}
