void __fastcall sub_1675F20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int a8)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rbx
  char v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __m128i v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r8
  __m128i v23; // xmm0
  unsigned __int8 v24; // r10
  bool v25; // r10
  _BOOL8 v26; // r8
  __int64 v27; // rdi
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // r10
  _BOOL8 v37; // r8
  __int64 v38; // rdi
  int v39; // ecx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r13
  unsigned __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // r14
  unsigned int v55; // eax
  unsigned int v56; // edx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // r12
  unsigned __int64 v62; // rax
  _DWORD *v63; // rdi
  unsigned __int8 v64; // al
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  _QWORD *v75; // rax
  __int64 *v76; // rdx
  __int64 *v77; // r11
  _QWORD *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rsi
  _QWORD *v81; // rcx
  __int64 v82; // rax
  bool v83; // r10
  void *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ecx
  int v95; // edx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  _QWORD *v101; // rax
  __int64 *v102; // rdx
  __int64 *v103; // r11
  _QWORD *v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rsi
  _QWORD *v107; // rcx
  __int64 v108; // rax
  bool v109; // r10
  void *v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  _QWORD *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // ecx
  int v121; // edx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int32 v127; // ebx
  void *v128; // rax
  void *v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rbx
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdi
  __m128i v136; // xmm7
  __m128i v137; // xmm6
  __int64 v139; // [rsp+28h] [rbp-190h]
  __int64 v140; // [rsp+30h] [rbp-188h]
  __int64 v141; // [rsp+30h] [rbp-188h]
  int v142; // [rsp+38h] [rbp-180h]
  __int64 v143; // [rsp+38h] [rbp-180h]
  __int64 v144; // [rsp+40h] [rbp-178h]
  __int64 *v145; // [rsp+48h] [rbp-170h]
  int v146; // [rsp+58h] [rbp-160h]
  int v147; // [rsp+5Ch] [rbp-15Ch]
  int v148; // [rsp+60h] [rbp-158h]
  int v149; // [rsp+64h] [rbp-154h]
  __m128i *v150; // [rsp+68h] [rbp-150h]
  __m128i *v151; // [rsp+68h] [rbp-150h]
  bool v152; // [rsp+68h] [rbp-150h]
  __int64 v153; // [rsp+68h] [rbp-150h]
  __m128i *v154; // [rsp+68h] [rbp-150h]
  bool v155; // [rsp+68h] [rbp-150h]
  __int64 v156; // [rsp+68h] [rbp-150h]
  __m128i *v157; // [rsp+68h] [rbp-150h]
  char v158; // [rsp+70h] [rbp-148h]
  char v159; // [rsp+70h] [rbp-148h]
  __int64 *v160; // [rsp+70h] [rbp-148h]
  __int64 *v161; // [rsp+70h] [rbp-148h]
  int v162; // [rsp+78h] [rbp-140h]
  char v163; // [rsp+7Eh] [rbp-13Ah]
  bool v164; // [rsp+7Fh] [rbp-139h]
  bool v165; // [rsp+7Fh] [rbp-139h]
  int v166; // [rsp+80h] [rbp-138h]
  int v167; // [rsp+84h] [rbp-134h]
  int v168; // [rsp+88h] [rbp-130h]
  int v169; // [rsp+8Ch] [rbp-12Ch]
  __m128i v170; // [rsp+90h] [rbp-128h] BYREF
  unsigned int v171; // [rsp+A0h] [rbp-118h]
  __m128i v172; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int v173; // [rsp+C0h] [rbp-F8h]
  void *ptr[2]; // [rsp+D0h] [rbp-E8h] BYREF
  _DWORD v175[8]; // [rsp+E0h] [rbp-D8h] BYREF
  void *v176[2]; // [rsp+100h] [rbp-B8h] BYREF
  __int128 v177; // [rsp+110h] [rbp-A8h] BYREF
  unsigned int v178; // [rsp+120h] [rbp-98h]

  v8 = a3;
  v9 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = *(_BYTE *)(a3 + 72) & 1;
  v11 = a2 & 4;
  v144 = v9;
  if ( (_DWORD)v11 || !v9 )
  {
    if ( v10 )
    {
      v136 = _mm_loadu_si128((const __m128i *)&a7);
      v11 = v9;
      sub_16724A0(a1, v9, *(_BYTE *)(a3 + 80) & 3, a4, a5, a6, v136.m128i_i64[0], v136.m128i_i64[1], a8);
    }
    v163 = 0;
    v12 = 0;
    v13 = *(_DWORD *)(v9 + 104);
    v145 = (__int64 *)v9;
    if ( v13 )
      goto LABEL_6;
  }
  else
  {
    if ( v10 )
    {
      v137 = _mm_loadu_si128((const __m128i *)&a7);
      v11 = v9;
      sub_16724A0(a1, v9, *(_BYTE *)(a3 + 80) & 3, a4, a5, a6, v137.m128i_i64[0], v137.m128i_i64[1], a8);
    }
    v12 = v9;
    v13 = sub_B76070(v9, v11, a3, a4);
    v163 = 1;
    v145 = nullptr;
    if ( v13 )
    {
LABEL_6:
      v14 = 0;
      v15 = 0;
      v139 = (unsigned int)(v13 - 1);
      while ( 1 )
      {
        if ( v12 )
          v19 = *(_QWORD *)(v12 + 120);
        else
          v19 = v145[12];
        v20 = *(_QWORD *)(v19 + 8 * v14);
        a3 = *(_QWORD *)(v8 + 152);
        v21 = *(_QWORD *)(v20 + 48);
        if ( 0xEEEEEEEEEEEEEEEFLL * ((*(_QWORD *)(v8 + 160) - a3) >> 3) <= v14 )
          goto LABEL_7;
        v22 = a8;
        v23 = _mm_loadu_si128((const __m128i *)&a7);
        v170 = v23;
        v171 = a8;
        v24 = *(_BYTE *)(a3 + 120 * v14 + 112);
        v140 = a3 + 120 * v14;
        if ( (v24 & 1) != 0 )
          break;
LABEL_24:
        if ( (v24 & 4) != 0 )
        {
          v36 = (v24 & 8) != 0;
          v172 = _mm_load_si128(&v170);
          v173 = v171;
          *(__m128i *)ptr = v172;
          v175[0] = v171;
          if ( (v171 & 1) == 0 )
          {
            v37 = (v171 & 2) != 0;
            v38 = *(_QWORD *)(a1 + 248);
            if ( v36 )
            {
              v39 = v148;
              v40 = v147;
              *(_OWORD *)v176 = 0;
              BYTE1(v39) = BYTE1(v148) & 0xFC;
              v159 = (v171 & 2) != 0;
              BYTE1(v40) = BYTE1(v147) & 0xFC;
              v148 = v39;
              v147 = v40;
              v41 = BYTE1(v39) & 1;
              v178 = v178 & 0xFF000000 | 0x101A4;
              v177 = 0;
              HIBYTE(v178) = (2 * ((v40 & 0x200) != 0)) | v41 | HIBYTE(v178) & 0xFC;
              v151 = (__m128i *)sub_1672F50((__int64 *)(v38 + 2352), 40, 3u, v41, v37, a6);
              sub_B13E30(v151, *(_QWORD *)(a1 + 248), (const __m128i *)v176);
              v42 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)ptr[0], (__int64)ptr[1], (__int64)v151, v159, 0);
            }
            else
            {
              v42 = sub_B35E00(v38, (__int64)ptr[0], (__int64)ptr[1], 67, v37, 0);
            }
            sub_B8CC60(v20, v42, v43, v44, v45, v46);
LABEL_29:
            v24 = *(_BYTE *)(v140 + 112);
            goto LABEL_30;
          }
          v155 = v36;
          v101 = (_QWORD *)sub_9C8850(v20);
          v103 = v102;
          v104 = v101;
          v105 = ((char *)v103 - (char *)v101) >> 5;
          v106 = v103 - v101;
          if ( v105 > 0 )
          {
            if ( *(_WORD *)(*v101 + 36LL) != 67 )
            {
              if ( *(_WORD *)(v101[1] + 36LL) == 67 )
              {
                v103 = v101 + 1;
              }
              else if ( *(_WORD *)(v101[2] + 36LL) == 67 )
              {
                v103 = v101 + 2;
              }
              else
              {
                v107 = &v101[4 * v105];
                if ( *(_WORD *)(v101[3] + 36LL) == 67 )
                {
                  v103 = v101 + 3;
                }
                else
                {
                  while ( 1 )
                  {
                    v101 = v104 + 4;
                    if ( v104 + 4 == v107 )
                    {
                      v106 = v103 - v107;
                      goto LABEL_95;
                    }
                    if ( *(_WORD *)(v104[4] + 36LL) == 67 )
                      goto LABEL_116;
                    if ( *(_WORD *)(v104[5] + 36LL) == 67 )
                    {
                      v103 = v104 + 5;
                      goto LABEL_98;
                    }
                    if ( *(_WORD *)(v104[6] + 36LL) == 67 )
                    {
                      v103 = v104 + 6;
                      goto LABEL_98;
                    }
                    if ( *(_WORD *)(v104[7] + 36LL) == 67 )
                      break;
                    v104 += 4;
                  }
                  v103 = v104 + 7;
                }
              }
              goto LABEL_98;
            }
LABEL_116:
            v103 = v101;
LABEL_98:
            v161 = v103;
            v108 = sub_9C88C0(v20);
            v109 = v155;
            if ( (__int64 *)v108 != v161 )
            {
              v110 = ptr[0];
              v165 = v155;
              v156 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)ptr[0], (__int64)ptr[1], *v161, 1, 0);
              v115 = sub_B8C3D0(v20, (__int64)v110, v111, v112, v113, v114);
              sub_1672BE0((__int64)v115, (__int64)v161);
              sub_B8CC60(v20, v156, v116, v117, v118, v119);
              v109 = v165;
            }
            if ( v109 )
            {
              v120 = v167;
              v121 = v166;
              *(_OWORD *)v176 = 0;
              BYTE1(v120) = BYTE1(v167) & 0xFC;
              v177 = 0;
              BYTE1(v121) = BYTE1(v166) & 0xFC;
              v167 = v120;
              v178 = v178 & 0xFF000000 | 0x101A4;
              v122 = BYTE1(v120) & 1;
              v166 = v121;
              HIBYTE(v178) = (2 * ((v121 & 0x200) != 0)) | v122 | HIBYTE(v178) & 0xFC;
              v157 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v122, v22, a6);
              sub_B13E30(v157, *(_QWORD *)(a1 + 248), (const __m128i *)v176);
              sub_B8CC60(v20, (__int64)v157, v123, v124, v125, v126);
            }
            goto LABEL_29;
          }
LABEL_95:
          if ( v106 != 2 )
          {
            if ( v106 != 3 )
            {
              if ( v106 != 1 )
                goto LABEL_98;
LABEL_135:
              if ( *(_WORD *)(*v101 + 36LL) == 67 )
                v103 = v101;
              goto LABEL_98;
            }
            if ( *(_WORD *)(*v101 + 36LL) == 67 )
              goto LABEL_116;
            ++v101;
          }
          if ( *(_WORD *)(*v101 + 36LL) == 67 )
            goto LABEL_116;
          ++v101;
          goto LABEL_135;
        }
LABEL_30:
        v47 = 0;
        if ( (v24 & 0x70) != 0 )
        {
          v47 = 1;
          v142 = ((v24 >> 4) & 7) - 1;
        }
        sub_1673220(a1, v20, v142, v47, v22, a6, (__int128)_mm_load_si128(&v170), v171);
        v11 = v20;
        sub_1675E00(a1, v20, v140, v48, v49, v50, (__int128)_mm_load_si128(&v170), v171);
LABEL_7:
        if ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
        {
          v16 = (unsigned int)(v14 + 1);
          v17 = 0;
          if ( (unsigned __int8)(*(_WORD *)(v8 + 72) >> 1) >= (unsigned int)v16 )
          {
            v16 = (unsigned int)(2 * v16);
            v17 = (*(_QWORD *)(v8 + 80) >> v16) & 3LL;
          }
          v11 = v20;
          v18 = _mm_loadu_si128((const __m128i *)&a7);
          sub_16724A0(a1, v20, v17, v16, a5, a6, v18.m128i_i64[0], v18.m128i_i64[1], a8);
        }
        if ( *(_QWORD *)(v20 + 48) != v21 )
          v15 = 1;
        if ( v139 == v14 )
          goto LABEL_37;
        ++v14;
      }
      v172 = v23;
      v25 = (v24 & 2) != 0;
      v173 = a8;
      *(__m128i *)ptr = v23;
      v175[0] = a8;
      if ( (a8 & 1) == 0 )
      {
        v26 = (a8 & 2) != 0;
        v27 = *(_QWORD *)(a1 + 248);
        if ( v25 )
        {
          v28 = v162;
          v29 = v149;
          *(_OWORD *)v176 = 0;
          BYTE1(v28) = BYTE1(v162) & 0xFC;
          v158 = (a8 & 2) != 0;
          BYTE1(v29) = BYTE1(v149) & 0xFC;
          v162 = v28;
          v149 = v29;
          v30 = BYTE1(v28) & 1;
          v178 = v178 & 0xFF000000 | 0x101A4;
          v177 = 0;
          HIBYTE(v178) = (2 * ((v29 & 0x200) != 0)) | v30 | HIBYTE(v178) & 0xFC;
          v150 = (__m128i *)sub_1672F50((__int64 *)(v27 + 2352), 40, 3u, v30, v26, a6);
          sub_B14D90(v150, *(_QWORD *)(a1 + 248), (const __m128i *)v176);
          v31 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)ptr[0], (__int64)ptr[1], (__int64)v150, v158, 0);
        }
        else
        {
          v31 = sub_B35E00(v27, (__int64)ptr[0], (__int64)ptr[1], 421, v26, 0);
        }
        sub_B8CC60(v20, v31, v32, v33, v34, v35);
LABEL_23:
        v24 = *(_BYTE *)(v140 + 112);
        goto LABEL_24;
      }
      v152 = v25;
      v75 = (_QWORD *)sub_9C8850(v20);
      v77 = v76;
      v78 = v75;
      v79 = ((char *)v77 - (char *)v75) >> 5;
      v80 = v77 - v75;
      if ( v79 > 0 )
      {
        if ( *(_WORD *)(*v75 + 36LL) != 421 )
        {
          if ( *(_WORD *)(v75[1] + 36LL) == 421 )
          {
            v77 = v75 + 1;
          }
          else if ( *(_WORD *)(v75[2] + 36LL) == 421 )
          {
            v77 = v75 + 2;
          }
          else
          {
            v81 = &v75[4 * v79];
            if ( *(_WORD *)(v75[3] + 36LL) == 421 )
            {
              v77 = v75 + 3;
            }
            else
            {
              while ( 1 )
              {
                v75 = v78 + 4;
                if ( v78 + 4 == v81 )
                {
                  v80 = v77 - v81;
                  goto LABEL_75;
                }
                if ( *(_WORD *)(v78[4] + 36LL) == 421 )
                  goto LABEL_117;
                if ( *(_WORD *)(v78[5] + 36LL) == 421 )
                {
                  v77 = v78 + 5;
                  goto LABEL_78;
                }
                if ( *(_WORD *)(v78[6] + 36LL) == 421 )
                {
                  v77 = v78 + 6;
                  goto LABEL_78;
                }
                if ( *(_WORD *)(v78[7] + 36LL) == 421 )
                  break;
                v78 += 4;
              }
              v77 = v78 + 7;
            }
          }
          goto LABEL_78;
        }
        goto LABEL_117;
      }
LABEL_75:
      if ( v80 != 2 )
      {
        if ( v80 != 3 )
        {
          if ( v80 != 1 )
          {
LABEL_78:
            v160 = v77;
            v82 = sub_9C88C0(v20);
            v83 = v152;
            if ( (__int64 *)v82 != v160 )
            {
              v84 = ptr[0];
              v164 = v152;
              v153 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)ptr[0], (__int64)ptr[1], *v160, 1, 0);
              v89 = sub_B8C3D0(v20, (__int64)v84, v85, v86, v87, v88);
              sub_1672BE0((__int64)v89, (__int64)v160);
              sub_B8CC60(v20, v153, v90, v91, v92, v93);
              v83 = v164;
            }
            if ( v83 )
            {
              v94 = v169;
              v95 = v168;
              *(_OWORD *)v176 = 0;
              BYTE1(v94) = BYTE1(v169) & 0xFC;
              v177 = 0;
              BYTE1(v95) = BYTE1(v168) & 0xFC;
              v169 = v94;
              v178 = v178 & 0xFF000000 | 0x101A4;
              v96 = BYTE1(v94) & 1;
              v168 = v95;
              HIBYTE(v178) = (2 * ((v95 & 0x200) != 0)) | v96 | HIBYTE(v178) & 0xFC;
              v154 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v96, v22, a6);
              sub_B14D90(v154, *(_QWORD *)(a1 + 248), (const __m128i *)v176);
              sub_B8CC60(v20, (__int64)v154, v97, v98, v99, v100);
            }
            goto LABEL_23;
          }
LABEL_128:
          if ( *(_WORD *)(*v75 + 36LL) == 421 )
            v77 = v75;
          goto LABEL_78;
        }
        if ( *(_WORD *)(*v75 + 36LL) == 421 )
        {
LABEL_117:
          v77 = v75;
          goto LABEL_78;
        }
        ++v75;
      }
      if ( *(_WORD *)(*v75 + 36LL) != 421 )
      {
        ++v75;
        goto LABEL_128;
      }
      goto LABEL_117;
    }
  }
  v15 = 0;
LABEL_37:
  if ( *(_QWORD *)(v8 + 128) )
  {
    sub_C05100((__int64)v176, "returns_", v8 + 120);
    v11 = sub_B36010(*(_QWORD *)(a1 + 248), v176[0], (__int64)v176[1], 0);
    sub_B8CC60(v144, v11, v71, v72, v73, v74);
    if ( v176[0] != &v177 )
      operator delete(v176[0]);
  }
  if ( (a8 & 1) == 0 )
    goto LABEL_59;
  v51 = *(_QWORD *)(v8 + 96);
  if ( !v51 )
  {
    v163 &= v15;
    goto LABEL_41;
  }
  if ( !*(_QWORD *)(a1 + 480) )
    goto LABEL_59;
  v127 = *(_DWORD *)(v144 + 24);
  v128 = (void *)j__strlen("<API Notes>");
  v129 = *(void **)(v8 + 88);
  ptr[1] = (void *)v51;
  v176[1] = v128;
  v11 = (__int64)ptr;
  ptr[0] = v129;
  v176[0] = (void *)"<API Notes>";
  v172.m128i_i32[0] = v127;
  v130 = (*(__int64 (__fastcall **)(__int64, void **, void **, __m128i *))(a1 + 488))(a1 + 464, ptr, v176, &v172);
  if ( !v130 || (_BYTE)a3 )
    goto LABEL_59;
  v132 = sub_1E5F010(v130, 0);
  if ( v145 )
  {
    v51 = 0;
    v11 = *(unsigned int *)(v144 + 24);
    v163 &= v15;
    if ( !(unsigned __int8)sub_16750D0(a1, v11, v145[10], v132) )
    {
      v11 = v132;
      v133 = sub_A81910(*(_QWORD **)(a1 + 248), v132, *(_DWORD *)(v144 + 24));
      a4 = (__int64)v145;
      v145[10] = v132;
      v145[11] = (__int64)v133;
    }
    goto LABEL_41;
  }
  v69 = *(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v70 = (unsigned int)*(unsigned __int8 *)(v69 + 16) - 25;
  if ( (unsigned int)v70 > 1 )
    v69 = sub_F63050(v69, 0, v70, v131);
  v11 = *(unsigned int *)(v12 + 24);
  v51 = v132;
  if ( (unsigned __int8)sub_16750D0(a1, v11, *(_QWORD *)(v69 + 24), v132) )
  {
LABEL_59:
    v163 &= v15;
    v51 = 0;
  }
LABEL_41:
  if ( v163 )
  {
    v52 = *(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v53 = *(_QWORD *)v52;
    if ( *(_BYTE *)(*(_QWORD *)v52 + 16LL) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && (v53 = sub_F63050(v53, v11, a3, a4)) != 0 )
    {
      if ( (v51 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        v51 = *(_QWORD *)(v53 + 24);
      v54 = *(_QWORD *)(v12 + 120);
      ptr[0] = v175;
      ptr[1] = (void *)0x400000000LL;
      v55 = sub_B76070(v12, v11, a3, a4);
      v56 = (unsigned int)ptr[1];
      v57 = v54 + 8LL * v55;
      if ( v57 != v54 )
      {
        do
        {
          while ( 1 )
          {
            v58 = *(_QWORD *)(*(_QWORD *)v54 + 48LL);
            v59 = v56;
            v60 = v56 + 1LL;
            if ( v60 > HIDWORD(ptr[1]) )
              break;
            v54 += 8;
            *((_QWORD *)ptr[0] + v59) = v58;
            v56 = ++LODWORD(ptr[1]);
            if ( v57 == v54 )
              goto LABEL_50;
          }
          v143 = v57;
          v141 = *(_QWORD *)(*(_QWORD *)v54 + 48LL);
          v54 += 8;
          sub_2237220(ptr, v175, v60, 8);
          v57 = v143;
          *((_QWORD *)ptr[0] + LODWORD(ptr[1])) = v141;
          v56 = ++LODWORD(ptr[1]);
        }
        while ( v143 != v54 );
      }
LABEL_50:
      v61 = *(_QWORD *)(a1 + 248);
      sub_A5E110((__m128 *)v176, v53);
      v62 = sub_A73610(v61, v51, (__int64 *)ptr[0], LODWORD(ptr[1]), (const __m128i *)v176, 0);
      v63 = ptr[0];
      *(_QWORD *)(v12 + 48) = v62;
      if ( v63 != v175 )
        free(v63);
    }
    else if ( (v51 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v134 = *(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v134 + 16) != 25 )
        v134 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL), v11, a3, a4);
      v135 = *(_QWORD *)(a1 + 248);
      LOWORD(v176[0]) = *(_WORD *)(v134 + 20) >> 2;
      *(_QWORD *)(v12 + 48) = sub_A71610(v135, v51, (unsigned __int16 *)v176);
    }
  }
  v64 = *(_BYTE *)(v8 + 73);
  v65 = 0;
  if ( (v64 & 0xE) != 0 )
  {
    v65 = 1;
    v146 = ((v64 >> 1) & 7) - 1;
  }
  sub_1673220(a1, v144, v146, v65, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8);
  sub_1673CA0(a1, v144, v8, v66, v67, v68, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8);
}
