__int64 __fastcall sub_1C214B0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __m128 *a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  __m128 *v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // ax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rax
  __m128 *v30; // r15
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  unsigned int v33; // ebx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rax
  unsigned int v36; // ebp
  unsigned __int64 v37; // r13
  unsigned __int8 *v38; // rdi
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  char v51; // al
  __int32 v52; // eax
  void *v53; // rdi
  char v54; // r12
  unsigned __int64 v55; // rax
  __m128 *v56; // r14
  unsigned __int8 *v57; // r12
  __int64 v58; // rax
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  char v62; // r12
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rbx
  unsigned __int8 *v65; // r12
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rax
  _WORD *v73; // r8
  __int64 *v74; // rcx
  unsigned __int64 v75; // rdi
  __int64 v76; // rbx
  unsigned int v77; // ebp
  __int64 v78; // r12
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  char *v81; // r10
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r12
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // r13
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // r12
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // r12
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r14
  unsigned __int64 v116; // rdx
  unsigned __int64 v117; // rdx
  char v118; // di
  __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rdx
  int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rcx
  int v126; // eax
  __int64 v127; // rdx
  int v128; // eax
  __int64 v129; // rax
  __int64 v130; // r13
  __int64 v131; // rdx
  __int64 v132; // r13
  int v133; // r15d
  unsigned int v134; // ebp
  __int64 v135; // rbx
  void *v136; // rdi
  __int64 v137; // rax
  __int64 v138; // r13
  __int64 v139; // r14
  __int64 v140; // r13
  void *v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rax
  unsigned __int64 v144; // rax
  int v145; // r15d
  unsigned int v146; // r13d
  unsigned __int64 v147; // rbx
  void *v148; // rdi
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // r14
  __int64 v153; // r15
  __int64 v154; // rbx
  void *v155; // rdi
  void *srca; // [rsp+8h] [rbp-1A0h]
  void *srcb; // [rsp+8h] [rbp-1A0h]
  void *srcc; // [rsp+8h] [rbp-1A0h]
  unsigned int src; // [rsp+8h] [rbp-1A0h]
  __int64 v160; // [rsp+10h] [rbp-198h]
  __int64 v161; // [rsp+10h] [rbp-198h]
  unsigned __int64 v162; // [rsp+10h] [rbp-198h]
  __m128 *v163; // [rsp+10h] [rbp-198h]
  __m128 *v164; // [rsp+18h] [rbp-190h] BYREF
  __int64 *v165; // [rsp+20h] [rbp-188h]
  __int64 *v166; // [rsp+28h] [rbp-180h]
  __int64 v167; // [rsp+38h] [rbp-170h] BYREF
  __int64 v168; // [rsp+40h] [rbp-168h] BYREF
  int v169; // [rsp+48h] [rbp-160h]
  _UNKNOWN **v170; // [rsp+50h] [rbp-158h] BYREF
  __int64 v171; // [rsp+58h] [rbp-150h]
  int v172; // [rsp+60h] [rbp-148h]
  int v173; // [rsp+64h] [rbp-144h]
  bool v174; // [rsp+68h] [rbp-140h]
  void *ptr; // [rsp+70h] [rbp-138h]
  __int64 v176; // [rsp+78h] [rbp-130h]
  _BYTE v177[32]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v178; // [rsp+A0h] [rbp-108h]
  __int64 v179; // [rsp+A8h] [rbp-100h]
  __int64 v180; // [rsp+B0h] [rbp-F8h]
  __int64 v181; // [rsp+B8h] [rbp-F0h]
  __int64 v182; // [rsp+C0h] [rbp-E8h]
  __int64 v183; // [rsp+C8h] [rbp-E0h]
  __int64 v184; // [rsp+D0h] [rbp-D8h]
  __m128 v185; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v186; // [rsp+F0h] [rbp-B8h]
  bool v187; // [rsp+F8h] [rbp-B0h]
  unsigned __int8 *v188; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v189; // [rsp+108h] [rbp-A0h]
  _BYTE v190[32]; // [rsp+110h] [rbp-98h] BYREF
  _WORD *v191; // [rsp+130h] [rbp-78h]
  __int64 v192; // [rsp+138h] [rbp-70h]
  void *v193; // [rsp+140h] [rbp-68h] BYREF
  __int64 v194; // [rsp+148h] [rbp-60h]
  __int64 v195; // [rsp+150h] [rbp-58h] BYREF
  __int64 v196; // [rsp+158h] [rbp-50h]
  __int64 v197; // [rsp+160h] [rbp-48h]

  v9 = a3;
  v10 = a4;
  v11 = a6;
  v12 = (unsigned __int64)a5;
  if ( (*a5 & 0x10000) == 0 && (a6->m128_i32[0] & 0x10000) == 0 )
  {
    v17 = *(_QWORD *)(a6->m128_u64[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      result = sub_1907C70(*a1, a6, (__m128i)a7, a8, a3, a4, (__int64)a5, (__int64)a6);
      v11 = (__m128 *)(result & 0xFFFFFFFFFFFFFFFELL);
      if ( result == 1 )
        return result;
    }
    v18 = sub_BFB9F0(v12);
    v21 = *(_WORD *)v18 & 0x1FF;
    if ( v21 == 32 )
    {
      v22 = *(_DWORD *)(v18 + 32);
      v23 = *a1;
      v178 = v18;
      v172 = -1;
      v173 = v22;
      v171 = v23;
      v174 = v10 == 21;
      ptr = v177;
      v176 = 0x400000000LL;
      v170 = &off_2BC79B0;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v183 = 0;
      v184 = 0;
      if ( (unsigned __int8)sub_1C1A190((__int64)&v170, 1, v23, (__int64)&v170, v19, v20) )
      {
        if ( v10 == 21 || v181 || sub_1C19F70(&v170, 1, v24, v25, v26, v27) )
        {
          result = sub_1C16AD0((__int64)&v170, a2, v9, v10, v12, (__int64)v11, a7, a8);
          if ( result != 1 && (*(_BYTE *)(*(_QWORD *)(v171 + 232) + 107LL) & 4) != 0 && v180 )
          {
            v160 = result;
            sub_1A8EB30(
              *(__int64 **)(v171 + 736),
              *(_QWORD *)(v180 + 16),
              (unsigned __int64)v11,
              *(double *)a7.m128_u64);
            sub_16D2940(v171, v9, v12, (unsigned __int64)v11, *(double *)a7.m128_u64);
            result = v160;
          }
        }
        else
        {
          v48 = v171 + 8;
          sub_168B9F0((__int64)&v185, (__int64 *)(v171 + 8), v9, 0x10BFu, 0);
          v167 = sub_EEC8C0(v12, v48, *(double *)a7.m128_u64);
          v49 = sub_1587DB0((__int64)&v185, &v167);
          v168 = sub_EEC8C0((unsigned __int64)v11, (__int64)&v167, *(double *)a7.m128_u64);
          sub_1587DB0(v49, &v168);
          sub_15F7200(&v185);
          result = 1;
        }
      }
      else
      {
        v28 = v171;
        if ( (*(_BYTE *)(*(_QWORD *)(v171 + 232) + 1LL) & 8) == 0 )
          goto LABEL_15;
        v29 = v181;
        if ( !v181 )
        {
          sub_1C19F70(&v170, v171, v24, v25, v26, v27);
          v29 = v181;
          if ( !v181 )
            goto LABEL_22;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 43 )
        {
          v28 = v171;
LABEL_15:
          v30 = &v185;
          sub_168B9F0((__int64)&v185, (__int64 *)(v28 + 8), v9, 0x10E3u, 0);
          v31 = *(__int64 *)(v178 + 16) >> 2;
          if ( (_BYTE)v196 )
          {
            v31 &= 1u;
            sub_AE9DF0(&v188, v31, 3u);
          }
          else
          {
            if ( !BYTE4(v197) )
            {
LABEL_17:
              v32 = sub_EEC8C0(v12, v31, *(double *)a7.m128_u64);
              v33 = v32;
              v34 = HIDWORD(v32);
              goto LABEL_18;
            }
            v93 = sub_168B9E0(&v185);
            v94 = v186;
            if ( v186 )
              v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v186 + 32LL))(v186);
            v168 = v94;
            v95 = sub_1587BC0(v93, &v168, v89, v90, v91, v92);
            v31 &= 1u;
            sub_AE9DF0((unsigned __int8 **)(*v95 + 32LL * (unsigned int)v197 + 8), v31, 3u);
          }
          if ( (_BYTE)v196 )
          {
            v31 = v183;
            sub_AE9DF0(&v188, v183, 9u);
            v54 = v196;
          }
          else
          {
            if ( !BYTE4(v197) )
              goto LABEL_17;
            v86 = sub_168B9E0(&v185);
            v87 = v186;
            if ( v186 )
              v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v186 + 32LL))(v186);
            v168 = v87;
            v88 = sub_1587BC0(v86, &v168, v82, v83, v84, v85);
            v31 = v183;
            sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * (unsigned int)v197 + 8), v183, 9u);
            v54 = v196;
          }
          v55 = sub_EEC8C0(v12, v31, *(double *)a7.m128_u64);
          v33 = v55;
          v56 = (__m128 *)HIDWORD(v55);
          LODWORD(v34) = HIDWORD(v55);
          if ( v54 )
          {
            v57 = v188;
            if ( v188 )
            {
              v58 = *((unsigned int *)v188 + 106);
              v59 = *((unsigned int *)v188 + 107);
              v60 = v58 + 1;
            }
            else
            {
              v122 = v189;
              v123 = *(_DWORD *)(v189 + 14976);
              if ( v123 )
              {
                v129 = (unsigned int)(v123 - 1);
                *(_DWORD *)(v189 + 14976) = v129;
                v57 = *(unsigned __int8 **)(v122 + 8 * v129 + 14848);
                v130 = *((unsigned int *)v57 + 134);
                v131 = *((_QWORD *)v57 + 66);
                *v57 = 0;
                *((_DWORD *)v57 + 106) = 0;
                v132 = v131 + (v130 << 6);
                if ( v131 != v132 )
                {
                  v133 = (int)v56;
                  v56 = v11;
                  v134 = v33;
                  v135 = v131;
                  do
                  {
                    while ( 1 )
                    {
                      v132 -= 64;
                      v136 = *(void **)(v132 + 24);
                      if ( v136 == (void *)(v132 + 40) )
                        break;
                      operator delete(v136);
                      if ( v135 == v132 )
                        goto LABEL_131;
                    }
                  }
                  while ( v135 != v132 );
LABEL_131:
                  v33 = v134;
                  v11 = v56;
                  LODWORD(v56) = v133;
                  v30 = &v185;
                }
                v58 = *((unsigned int *)v57 + 106);
                v59 = *((unsigned int *)v57 + 107);
                *((_DWORD *)v57 + 134) = 0;
                v60 = v58 + 1;
              }
              else
              {
                v124 = operator new(0x3A0u);
                v59 = 8;
                v60 = 1;
                v57 = (unsigned __int8 *)v124;
                *(_BYTE *)v124 = 0;
                *(_QWORD *)(v124 + 96) = v124 + 112;
                *(_QWORD *)(v124 + 128) = v124 + 144;
                *(_QWORD *)(v124 + 160) = v124 + 176;
                *(_QWORD *)(v124 + 192) = v124 + 208;
                *(_QWORD *)(v124 + 224) = v124 + 240;
                *(_QWORD *)(v124 + 256) = v124 + 272;
                *(_QWORD *)(v124 + 288) = v124 + 304;
                *(_QWORD *)(v124 + 320) = v124 + 336;
                *(_QWORD *)(v124 + 352) = v124 + 368;
                *(_QWORD *)(v124 + 384) = v124 + 400;
                *(_QWORD *)(v124 + 416) = v124 + 432;
                *(_QWORD *)(v124 + 104) = 0;
                *(_BYTE *)(v124 + 112) = 0;
                *(_QWORD *)(v124 + 136) = 0;
                *(_BYTE *)(v124 + 144) = 0;
                *(_QWORD *)(v124 + 168) = 0;
                *(_BYTE *)(v124 + 176) = 0;
                *(_QWORD *)(v124 + 200) = 0;
                *(_BYTE *)(v124 + 208) = 0;
                *(_QWORD *)(v124 + 232) = 0;
                *(_BYTE *)(v124 + 240) = 0;
                *(_QWORD *)(v124 + 264) = 0;
                *(_BYTE *)(v124 + 272) = 0;
                *(_QWORD *)(v124 + 296) = 0;
                *(_BYTE *)(v124 + 304) = 0;
                *(_QWORD *)(v124 + 328) = 0;
                *(_BYTE *)(v124 + 336) = 0;
                *(_QWORD *)(v124 + 360) = 0;
                *(_BYTE *)(v124 + 368) = 0;
                *(_QWORD *)(v124 + 392) = 0;
                *(_BYTE *)(v124 + 400) = 0;
                *(_QWORD *)(v124 + 424) = 0x800000000LL;
                *(_QWORD *)(v124 + 528) = v124 + 544;
                *(_QWORD *)(v124 + 536) = 0x600000000LL;
                v58 = 0;
              }
              v188 = v57;
            }
            v168 = __PAIR64__((unsigned int)v56, v33);
            LOBYTE(v169) = 1;
            if ( v60 > v59 )
            {
LABEL_101:
              v59 = (unsigned __int64)(v57 + 432);
              sub_2237220(v57 + 416, v57 + 432, v60, 12);
              v58 = *((unsigned int *)v57 + 106);
            }
LABEL_63:
            v61 = *((_QWORD *)v57 + 52) + 12 * v58;
            *(_QWORD *)v61 = v168;
            *(_DWORD *)(v61 + 8) = v169;
            ++*((_DWORD *)v57 + 106);
            v62 = v196;
            v63 = sub_EEC8C0((unsigned __int64)v11, v59, *(double *)a7.m128_u64);
            v36 = v63;
            v64 = HIDWORD(v63);
            LODWORD(v37) = HIDWORD(v63);
            if ( v62 )
            {
              v65 = v188;
              if ( v188 )
              {
                v66 = *((unsigned int *)v188 + 106);
                v67 = *((unsigned int *)v188 + 107);
                v68 = v66 + 1;
              }
              else
              {
                v119 = v189;
                v120 = *(_DWORD *)(v189 + 14976);
                if ( v120 )
                {
                  v137 = (unsigned int)(v120 - 1);
                  *(_DWORD *)(v189 + 14976) = v137;
                  v65 = *(unsigned __int8 **)(v119 + 8 * v137 + 14848);
                  v138 = *((unsigned int *)v65 + 134);
                  v139 = *((_QWORD *)v65 + 66);
                  *v65 = 0;
                  *((_DWORD *)v65 + 106) = 0;
                  v140 = v139 + (v138 << 6);
                  while ( v139 != v140 )
                  {
                    while ( 1 )
                    {
                      v140 -= 64;
                      v141 = *(void **)(v140 + 24);
                      if ( v141 == (void *)(v140 + 40) )
                        break;
                      operator delete(v141);
                      if ( v139 == v140 )
                        goto LABEL_139;
                    }
                  }
LABEL_139:
                  v66 = *((unsigned int *)v65 + 106);
                  v67 = *((unsigned int *)v65 + 107);
                  *((_DWORD *)v65 + 134) = 0;
                  v68 = v66 + 1;
                }
                else
                {
                  v121 = operator new(0x3A0u);
                  v67 = 8;
                  v68 = 1;
                  v65 = (unsigned __int8 *)v121;
                  *(_BYTE *)v121 = 0;
                  *(_QWORD *)(v121 + 96) = v121 + 112;
                  *(_QWORD *)(v121 + 128) = v121 + 144;
                  *(_QWORD *)(v121 + 160) = v121 + 176;
                  *(_QWORD *)(v121 + 192) = v121 + 208;
                  *(_QWORD *)(v121 + 224) = v121 + 240;
                  *(_QWORD *)(v121 + 256) = v121 + 272;
                  *(_QWORD *)(v121 + 288) = v121 + 304;
                  *(_QWORD *)(v121 + 320) = v121 + 336;
                  *(_QWORD *)(v121 + 352) = v121 + 368;
                  *(_QWORD *)(v121 + 384) = v121 + 400;
                  *(_QWORD *)(v121 + 416) = v121 + 432;
                  *(_QWORD *)(v121 + 104) = 0;
                  *(_BYTE *)(v121 + 112) = 0;
                  *(_QWORD *)(v121 + 136) = 0;
                  *(_BYTE *)(v121 + 144) = 0;
                  *(_QWORD *)(v121 + 168) = 0;
                  *(_BYTE *)(v121 + 176) = 0;
                  *(_QWORD *)(v121 + 200) = 0;
                  *(_BYTE *)(v121 + 208) = 0;
                  *(_QWORD *)(v121 + 232) = 0;
                  *(_BYTE *)(v121 + 240) = 0;
                  *(_QWORD *)(v121 + 264) = 0;
                  *(_BYTE *)(v121 + 272) = 0;
                  *(_QWORD *)(v121 + 296) = 0;
                  *(_BYTE *)(v121 + 304) = 0;
                  *(_QWORD *)(v121 + 328) = 0;
                  *(_BYTE *)(v121 + 336) = 0;
                  *(_QWORD *)(v121 + 360) = 0;
                  *(_BYTE *)(v121 + 368) = 0;
                  *(_QWORD *)(v121 + 392) = 0;
                  *(_BYTE *)(v121 + 400) = 0;
                  *(_QWORD *)(v121 + 424) = 0x800000000LL;
                  *(_QWORD *)(v121 + 528) = v121 + 544;
                  *(_QWORD *)(v121 + 536) = 0x600000000LL;
                  v66 = 0;
                }
                v188 = v65;
              }
              v168 = __PAIR64__(v64, v36);
              LOBYTE(v169) = 1;
              if ( v68 > v67 )
              {
                sub_2237220(v65 + 416, v65 + 432, v68, 12);
                v66 = *((unsigned int *)v65 + 106);
              }
              v69 = *((_QWORD *)v65 + 52) + 12 * v66;
              *(_QWORD *)v69 = v168;
              *(_DWORD *)(v69 + 8) = v169;
              ++*((_DWORD *)v65 + 106);
              goto LABEL_21;
            }
LABEL_20:
            if ( BYTE4(v197) )
            {
              v98 = sub_168B9E0(v30);
              v101 = v186;
              if ( v186 )
                v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v186 + 32LL))(v186);
              v167 = v101;
              v102 = sub_1587BC0(v98, &v167, v96, v97, v99, v100);
              v103 = *v102 + 32LL * (unsigned int)v197;
              v104 = *(_QWORD *)(v103 + 8);
              if ( !v104 )
              {
                v127 = *(_QWORD *)(v103 + 16);
                v128 = *(_DWORD *)(v127 + 14976);
                if ( v128 )
                {
                  v149 = (unsigned int)(v128 - 1);
                  *(_DWORD *)(v127 + 14976) = v149;
                  v104 = *(_QWORD *)(v127 + 8 * v149 + 14848);
                  v150 = *(unsigned int *)(v104 + 536);
                  *(_BYTE *)v104 = 0;
                  v151 = *(_QWORD *)(v104 + 528);
                  *(_DWORD *)(v104 + 424) = 0;
                  v150 <<= 6;
                  v152 = v151 + v150;
                  if ( v151 != v151 + v150 )
                  {
                    v163 = v30;
                    v153 = v104;
                    v154 = v151;
                    do
                    {
                      while ( 1 )
                      {
                        v152 -= 64;
                        v155 = *(void **)(v152 + 24);
                        if ( v155 == (void *)(v152 + 40) )
                          break;
                        operator delete(v155);
                        if ( v154 == v152 )
                          goto LABEL_152;
                      }
                    }
                    while ( v154 != v152 );
LABEL_152:
                    v104 = v153;
                    v30 = v163;
                  }
                  *(_DWORD *)(v104 + 536) = 0;
                }
                else
                {
                  v104 = operator new(0x3A0u);
                  *(_BYTE *)v104 = 0;
                  *(_QWORD *)(v104 + 96) = v104 + 112;
                  *(_QWORD *)(v104 + 128) = v104 + 144;
                  *(_QWORD *)(v104 + 160) = v104 + 176;
                  *(_QWORD *)(v104 + 192) = v104 + 208;
                  *(_QWORD *)(v104 + 224) = v104 + 240;
                  *(_QWORD *)(v104 + 256) = v104 + 272;
                  *(_QWORD *)(v104 + 288) = v104 + 304;
                  *(_QWORD *)(v104 + 320) = v104 + 336;
                  *(_QWORD *)(v104 + 352) = v104 + 368;
                  *(_QWORD *)(v104 + 384) = v104 + 400;
                  *(_QWORD *)(v104 + 416) = v104 + 432;
                  *(_BYTE *)(v104 + 112) = 0;
                  *(_QWORD *)(v104 + 104) = 0;
                  *(_QWORD *)(v104 + 136) = 0;
                  *(_BYTE *)(v104 + 144) = 0;
                  *(_QWORD *)(v104 + 168) = 0;
                  *(_BYTE *)(v104 + 176) = 0;
                  *(_QWORD *)(v104 + 200) = 0;
                  *(_BYTE *)(v104 + 208) = 0;
                  *(_QWORD *)(v104 + 232) = 0;
                  *(_BYTE *)(v104 + 240) = 0;
                  *(_QWORD *)(v104 + 264) = 0;
                  *(_BYTE *)(v104 + 272) = 0;
                  *(_QWORD *)(v104 + 296) = 0;
                  *(_BYTE *)(v104 + 304) = 0;
                  *(_QWORD *)(v104 + 328) = 0;
                  *(_BYTE *)(v104 + 336) = 0;
                  *(_QWORD *)(v104 + 360) = 0;
                  *(_BYTE *)(v104 + 368) = 0;
                  *(_QWORD *)(v104 + 392) = 0;
                  *(_BYTE *)(v104 + 400) = 0;
                  *(_QWORD *)(v104 + 424) = 0x800000000LL;
                  *(_QWORD *)(v104 + 528) = v104 + 544;
                  *(_QWORD *)(v104 + 536) = 0x600000000LL;
                }
                *(_QWORD *)(v103 + 8) = v104;
              }
              v168 = __PAIR64__(v37, v36);
              LOBYTE(v169) = 1;
              v105 = *(unsigned int *)(v104 + 424);
              if ( v105 + 1 > (unsigned __int64)*(unsigned int *)(v104 + 428) )
              {
                sub_2237220(v104 + 416, v104 + 432, v105 + 1, 12);
                v105 = *(unsigned int *)(v104 + 424);
              }
              v106 = *(_QWORD *)(v104 + 416) + 12 * v105;
              *(_QWORD *)v106 = v168;
              *(_DWORD *)(v106 + 8) = v169;
              ++*(_DWORD *)(v104 + 424);
            }
LABEL_21:
            sub_15F7200(v30);
LABEL_22:
            result = 1;
            goto LABEL_23;
          }
LABEL_18:
          if ( !BYTE4(v197) )
          {
            v35 = sub_EEC8C0((unsigned __int64)v11, v31, *(double *)a7.m128_u64);
            v36 = v35;
            v37 = HIDWORD(v35);
            goto LABEL_20;
          }
          v111 = sub_168B9E0(&v185);
          v112 = v186;
          if ( v186 )
            v112 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v186 + 32LL))(v186);
          v59 = (unsigned __int64)&v167;
          v167 = v112;
          v113 = sub_1587BC0(v111, &v167, v107, v108, v109, v110);
          v114 = *v113 + 32LL * (unsigned int)v197;
          v57 = *(unsigned __int8 **)(v114 + 8);
          v115 = v114;
          if ( !v57 )
          {
            v125 = *(_QWORD *)(v114 + 16);
            v126 = *(_DWORD *)(v125 + 14976);
            if ( v126 )
            {
              v142 = (unsigned int)(v126 - 1);
              *(_DWORD *)(v125 + 14976) = v142;
              v57 = *(unsigned __int8 **)(v125 + 8 * v142 + 14848);
              v143 = *((unsigned int *)v57 + 134);
              v59 = *((_QWORD *)v57 + 66);
              *v57 = 0;
              *((_DWORD *)v57 + 106) = 0;
              v144 = v59 + (v143 << 6);
              if ( v59 != v144 )
              {
                v164 = &v185;
                v145 = v34;
                v146 = v33;
                v147 = v144;
                do
                {
                  while ( 1 )
                  {
                    v147 -= 64LL;
                    v148 = *(void **)(v147 + 24);
                    if ( v148 == (void *)(v147 + 40) )
                      break;
                    operator delete(v148);
                    if ( v59 == v147 )
                      goto LABEL_144;
                  }
                }
                while ( v59 != v147 );
LABEL_144:
                v33 = v146;
                LODWORD(v34) = v145;
                v30 = v164;
              }
              *((_DWORD *)v57 + 134) = 0;
            }
            else
            {
              v57 = (unsigned __int8 *)operator new(0x3A0u);
              *v57 = 0;
              *((_QWORD *)v57 + 12) = v57 + 112;
              *((_QWORD *)v57 + 16) = v57 + 144;
              *((_QWORD *)v57 + 20) = v57 + 176;
              *((_QWORD *)v57 + 24) = v57 + 208;
              *((_QWORD *)v57 + 28) = v57 + 240;
              *((_QWORD *)v57 + 32) = v57 + 272;
              *((_QWORD *)v57 + 36) = v57 + 304;
              *((_QWORD *)v57 + 40) = v57 + 336;
              *((_QWORD *)v57 + 44) = v57 + 368;
              *((_QWORD *)v57 + 48) = v57 + 400;
              *((_QWORD *)v57 + 52) = v57 + 432;
              *((_QWORD *)v57 + 13) = 0;
              v57[112] = 0;
              *((_QWORD *)v57 + 17) = 0;
              v57[144] = 0;
              *((_QWORD *)v57 + 21) = 0;
              v57[176] = 0;
              *((_QWORD *)v57 + 25) = 0;
              v57[208] = 0;
              *((_QWORD *)v57 + 29) = 0;
              v57[240] = 0;
              *((_QWORD *)v57 + 33) = 0;
              v57[272] = 0;
              *((_QWORD *)v57 + 37) = 0;
              v57[304] = 0;
              *((_QWORD *)v57 + 41) = 0;
              v57[336] = 0;
              *((_QWORD *)v57 + 45) = 0;
              v57[368] = 0;
              *((_QWORD *)v57 + 49) = 0;
              v57[400] = 0;
              *((_QWORD *)v57 + 53) = 0x800000000LL;
              *((_QWORD *)v57 + 66) = v57 + 544;
              *((_QWORD *)v57 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v115 + 8) = v57;
          }
          v168 = __PAIR64__(v34, v33);
          LOBYTE(v169) = 1;
          v58 = *((unsigned int *)v57 + 106);
          v60 = v58 + 1;
          if ( v58 + 1 > (unsigned __int64)*((unsigned int *)v57 + 107) )
            goto LABEL_101;
          goto LABEL_63;
        }
        v70 = sub_1C20420((__int64)&v170, v12, a7, a8);
        if ( v70 == 1 )
          goto LABEL_22;
        result = sub_1929BB0(v171, a2, v9, v10, v70 & 0xFFFFFFFFFFFFFFFELL, v11, a7, a8, 0);
      }
LABEL_23:
      v38 = (unsigned __int8 *)ptr;
      v170 = (_UNKNOWN **)&unk_2C66D98;
      if ( ptr == v177 )
        return result;
      goto LABEL_24;
    }
    if ( v21 == 28 )
    {
      v39 = *a1;
      LODWORD(v186) = -1;
      HIDWORD(v186) = sub_EEC8C0(v18, v18, *(double *)a7.m128_u64);
      v185.m128_u64[1] = v39;
      v187 = v10 == 21;
      v188 = v190;
      v189 = 0x400000000LL;
      v185.m128_u64[0] = (unsigned __int64)&off_2BC79F8;
      v191 = (_WORD *)v18;
      v192 = 0;
      v193 = nullptr;
      v194 = 0;
      v195 = 0;
      v196 = 0;
      v197 = 0;
      if ( (unsigned __int8)sub_1C1AC60(&v185, v18, a7, a8, v40, v41, v42, v43)
        && (v10 == 21 || v194 || (unsigned __int8)sub_1C1D810(&v185, v18, a7, a8, v44, v45, v46, v47))
        && (result = sub_1C16AD0((__int64)&v185, a2, v9, v10, v12, (__int64)v11, a7, a8), result != 1) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v185.m128_u64[1] + 232) + 107LL) & 4) != 0 && v192 )
        {
          srcb = (void *)result;
          sub_1A8EB30(
            *(__int64 **)(v185.m128_u64[1] + 736),
            *(_QWORD *)(v192 + 16),
            (unsigned __int64)v11,
            *(double *)a7.m128_u64);
          sub_16D2940(v185.m128_i64[1], v9, v12, (unsigned __int64)v11, *(double *)a7.m128_u64);
          result = (__int64)srcb;
        }
      }
      else
      {
        result = 1;
      }
      goto LABEL_43;
    }
    if ( v21 != 50 )
    {
      v71 = *a1;
      LODWORD(v186) = -1;
      HIDWORD(v186) = sub_EEC8C0(v18, v18, *(double *)a7.m128_u64);
      v185.m128_u64[1] = v71;
      v187 = v10 == 21;
      v185.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
      v188 = v190;
      v194 = 0x400000000LL;
      v189 = 0x400000000LL;
      v192 = 0;
      v193 = &v195;
      v72 = *(_QWORD *)(v18 + 24);
      LODWORD(v194) = 1;
      v195 = v72;
      v73 = (_WORD *)sub_BFB9F0(*(_QWORD *)(v18 + 16));
      if ( (*v73 & 0x1FF) == 0x31 )
      {
        v74 = &v195;
        src = v10;
        v75 = 4;
        v162 = v12;
        v76 = (__int64)v73;
        v166 = &v195;
        v164 = v11;
        v77 = 1;
        while ( 1 )
        {
          v78 = *(_QWORD *)(v76 + 24);
          v79 = 8LL * v77;
          v80 = v77 + 1LL;
          v81 = (char *)&v74[(unsigned __int64)v79 / 8];
          if ( v79 )
          {
            if ( v75 < v80 )
            {
              sub_2237220(&v193, v166, v80, 8);
              v74 = (__int64 *)v193;
              v77 = v194;
              v79 = 8LL * (unsigned int)v194;
              v81 = (char *)v193 + v79;
            }
            *(_QWORD *)v81 = v74[(unsigned __int64)v79 / 8 - 1];
            if ( (char *)v193 + v79 - 8 != (char *)v74 )
            {
              v165 = v74;
              memmove(v74 + 1, v74, (char *)v193 + v79 - 8 - (char *)v74);
              v77 = v194;
              v74 = v165;
            }
            LODWORD(v194) = ++v77;
            *v74 = v78;
          }
          else
          {
            if ( v75 < v80 )
            {
              sub_2237220(&v193, v166, v80, 8);
              v81 = (char *)v193 + 8 * (unsigned int)v194;
            }
            *(_QWORD *)v81 = v78;
            v77 = v194 + 1;
            LODWORD(v194) = v194 + 1;
          }
          v76 = sub_BFB9F0(*(_QWORD *)(v76 + 16));
          if ( (*(_WORD *)v76 & 0x1FF) != 0x31 )
            break;
          v74 = (__int64 *)v193;
          v75 = HIDWORD(v194);
        }
        v73 = (_WORD *)v76;
        v10 = src;
        v12 = v162;
        v11 = v164;
      }
      v191 = v73;
      result = sub_1C16AD0((__int64)&v185, a2, v9, v10, v12, (__int64)v11, a7, a8);
      v53 = v193;
      v185.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
      if ( v193 == &v195 )
      {
LABEL_43:
        v38 = v188;
        v185.m128_u64[0] = (unsigned __int64)&unk_2C66D98;
        if ( v188 == v190 )
          return result;
LABEL_24:
        srca = (void *)result;
        free(v38);
        return (__int64)srca;
      }
LABEL_53:
      srcc = (void *)result;
      free(v53);
      result = (__int64)srcc;
      goto LABEL_43;
    }
    v50 = *(_QWORD *)(v18 + 16);
    v161 = *a1;
    if ( v50 )
    {
      v164 = (__m128 *)v18;
      v51 = sub_BFE300(v50);
      if ( v51 )
      {
        if ( v164[2].m128_u64[1] )
        {
          v116 = v164[2].m128_u64[1];
          a8 = (__m128)_mm_loadu_si128((const __m128i *)&v164[2].m128_u16[4]);
          v185 = a8;
          if ( v116 )
          {
            v117 = *(_QWORD *)(v116 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v117 )
            {
              v118 = 0;
              v164 = (__m128 *)v185.m128_u64[1];
              a7 = _mm_loadh_ps((const double *)&v164);
              v185 = a7;
              while ( (*(_QWORD *)(v117 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v118 = v51;
                v117 = *(_QWORD *)(v117 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v118 )
                v185.m128_u64[0] = v117;
            }
          }
          v164 = (__m128 *)v18;
          v52 = sub_E90530((__int64 *)&v185);
          v18 = (__int64)v164;
        }
        else
        {
          v52 = v164[2].m128_i32[0];
        }
LABEL_52:
        HIDWORD(v186) = v52;
        v187 = v10 == 21;
        v185.m128_u64[1] = v161;
        v188 = v190;
        v191 = (_WORD *)v18;
        v185.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
        v193 = &v195;
        LODWORD(v186) = -1;
        v189 = 0x400000000LL;
        v192 = 0;
        v194 = 0x400000000LL;
        result = sub_1C16AD0((__int64)&v185, a2, v9, v10, v12, (__int64)v11, a7, a8);
        v53 = v193;
        v185.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
        if ( v193 == &v195 )
          goto LABEL_43;
        goto LABEL_53;
      }
      v50 = v164[1].m128_u64[0];
    }
    v164 = (__m128 *)v18;
    v52 = sub_EEB7E0(v50, v18, *(double *)a7.m128_u64);
    goto LABEL_52;
  }
  v13 = *(unsigned int *)(*a1 + 1952);
  v14 = *(unsigned int *)(*a1 + 1956);
  if ( *(_QWORD *)(*a1 + 1944) == __PAIR64__(v14, v13) )
  {
    v14 = 0;
    v13 = 0;
  }
  return sub_C09F10(
           *(_QWORD **)(*a1 + 248),
           (unsigned __int64)a5,
           (unsigned __int64)a6,
           v10,
           *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 19072LL),
           0,
           0,
           a3,
           (v14 << 32) | v13);
}
