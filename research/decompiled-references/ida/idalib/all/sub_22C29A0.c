__int64 __fastcall sub_22C29A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        const void *a7,
        size_t a8,
        __int64 a9)
{
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned int v23; // ebx
  __int64 *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 *v27; // r8
  unsigned int v28; // ebx
  __int64 *m128i_i64; // rsi
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 *v32; // r8
  _QWORD *v33; // rbx
  _QWORD *v34; // rax
  int *v35; // rax
  int *v36; // r15
  _QWORD *v37; // r13
  _QWORD *v38; // r14
  _QWORD *v39; // r12
  _QWORD *v40; // rsi
  _QWORD *v41; // rsi
  _QWORD *v42; // rax
  int *v43; // rax
  _QWORD *v44; // r15
  int *v45; // r14
  _QWORD *v46; // r13
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbp
  __int64 v51; // rbx
  __int64 *v52; // rax
  const char *v53; // rax
  size_t v54; // rdx
  __int64 v55; // rax
  __int64 *v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rax
  unsigned __int8 v59; // dl
  char *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  int v63; // r12d
  __int64 v64; // rax
  unsigned __int8 *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  char v70; // dl
  __int64 *v71; // rcx
  __int64 v72; // r10
  bool v73; // r11
  __int64 v74; // rax
  int v75; // eax
  int *v76; // rbx
  char *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  unsigned __int64 v84; // rbp
  __int64 v85; // rax
  char v86; // dl
  unsigned __int64 v87; // r12
  bool v88; // cl
  __int64 v89; // rax
  int v90; // eax
  __int64 *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // rax
  __int64 v101; // rax
  __int64 *v102; // rcx
  unsigned __int8 v103; // dl
  __int64 v104; // rax
  unsigned __int8 *v105; // rdi
  int v106; // eax
  __int64 v107; // rax
  int v108; // eax
  int i; // ebp
  __int64 *v110; // rax
  __int64 v111; // rax
  unsigned int v112; // ebp
  __int64 v113; // rax
  unsigned int v114; // r9d
  unsigned int v115; // esi
  int v116; // ebp
  unsigned __int64 v117; // r8
  __int64 v118; // rdx
  unsigned __int64 v119; // r8
  char *v122; // rsi
  __int64 v123; // rdx
  int j; // ebp
  unsigned __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // rax
  __int64 v128; // rax
  unsigned int v129; // ebp
  __int64 v130; // rax
  int v131; // ebp
  unsigned __int64 v132; // r8
  __int64 v135; // rcx
  int v136; // r12d
  __int64 *v137; // rbp
  __int64 *k; // rbx
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 *v141; // rbp
  int v142; // r12d
  __int64 *m; // rbx
  __int64 v144; // rdi
  __int64 *v145; // rax
  __int64 *v146; // rax
  __int64 v147; // rax
  const char *v148; // rsi
  __int64 v149; // rax
  _BYTE *v150; // rdx
  __int64 *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  __int64 *v158; // rax
  __int64 *v159; // rax
  __int64 v160; // rax
  __int64 *v161; // rax
  __int64 v162; // rdx
  unsigned __int8 v163; // al
  __int64 v164; // rdx
  unsigned __int8 *v165; // rdi
  int v166; // eax
  __int64 v167; // rax
  _DWORD *v168; // r12
  int v169; // eax
  __int64 v170; // rdx
  int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rcx
  bool v174; // zf
  __m128i v175; // xmm1
  unsigned __int64 v176; // rcx
  __int64 v177; // rax
  unsigned __int64 v178; // rdx
  __int64 v179; // rsi
  const __m128i *v180; // rcx
  __int64 v181; // rdx
  __m128i *v182; // rax
  __int64 *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 *v188; // rax
  __int64 *v189; // rax
  unsigned __int64 v190; // rbx
  __int64 v191; // rdi
  const void *v192; // rsi
  __m128i *v193; // rdx
  _QWORD *v194; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 *v195; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v196; // [rsp+10h] [rbp-198h]
  _QWORD *v197; // [rsp+18h] [rbp-190h]
  __int64 v198; // [rsp+20h] [rbp-188h]
  __int64 v199; // [rsp+28h] [rbp-180h]
  _QWORD *v200; // [rsp+30h] [rbp-178h]
  __m128i *p_ptr; // [rsp+38h] [rbp-170h]
  __int64 v202; // [rsp+40h] [rbp-168h]
  __int64 *p_s; // [rsp+48h] [rbp-160h]
  unsigned int v204; // [rsp+50h] [rbp-158h]
  unsigned int v205; // [rsp+54h] [rbp-154h]
  const void *v206; // [rsp+58h] [rbp-150h]
  size_t v207; // [rsp+60h] [rbp-148h]
  char v208; // [rsp+6Ah] [rbp-13Eh]
  unsigned __int8 v209; // [rsp+6Bh] [rbp-13Dh]
  int v210; // [rsp+6Ch] [rbp-13Ch]
  __m128i v211; // [rsp+70h] [rbp-138h] BYREF
  _QWORD *v212; // [rsp+88h] [rbp-120h] BYREF
  __m128 v213; // [rsp+90h] [rbp-118h] BYREF
  int *v214; // [rsp+A0h] [rbp-108h]
  __int16 v215; // [rsp+A8h] [rbp-100h]
  _QWORD *v216; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD *v217; // [rsp+B8h] [rbp-F0h]
  int *v218; // [rsp+C0h] [rbp-E8h]
  __int16 v219; // [rsp+C8h] [rbp-E0h]
  void *s; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v221; // [rsp+D8h] [rbp-D0h]
  unsigned int v222; // [rsp+110h] [rbp-98h]
  __m128i ptr; // [rsp+120h] [rbp-88h] BYREF
  __int64 v224; // [rsp+130h] [rbp-78h]
  __int64 v225; // [rsp+138h] [rbp-70h]
  unsigned int v226; // [rsp+160h] [rbp-48h]

  v200 = a1;
  v202 = a3;
  v206 = a7;
  v211.m128i_i64[0] = a4;
  v211.m128i_i64[1] = a5;
  v207 = a8;
  v210 = a6;
  v209 = a6;
  v10 = j__strlen("llvm.debugify");
  v11 = sub_20BE520((__int64)a1, (__int64)"llvm.debugify", v10);
  if ( !v11 )
  {
    v159 = sub_22BF6F0();
    v160 = sub_9954E0((__int64)v159, v206, v207);
    sub_995540(v160, ": Skipping module without debugify metadata\n");
    return 0;
  }
  v12 = v11;
  v13 = sub_20A0E20(v11, 0);
  v14 = *(_BYTE *)(v13 - 16);
  if ( (v14 & 2) != 0 )
    v15 = *(_QWORD *)(v13 - 32);
  else
    v15 = v13 - 8LL * ((v14 >> 2) & 0xF) - 16;
  v16 = *(_QWORD *)(*(_QWORD *)v15 + 128LL);
  v17 = *(_QWORD **)(v16 + 24);
  if ( *(_DWORD *)(v16 + 32) > 0x40u )
    v17 = (_QWORD *)*v17;
  v205 = (unsigned int)v17;
  v18 = sub_20A0E20(v12, 1u);
  v19 = *(_BYTE *)(v18 - 16);
  if ( (v19 & 2) != 0 )
    v20 = *(_QWORD *)(v18 - 32);
  else
    v20 = v18 - 8LL * ((v19 >> 2) & 0xF) - 16;
  v21 = *(_QWORD *)(*(_QWORD *)v20 + 128LL);
  v22 = *(_QWORD **)(v21 + 24);
  if ( *(_DWORD *)(v21 + 32) > 0x40u )
    v22 = (_QWORD *)*v22;
  v204 = (unsigned int)v22;
  if ( !a9 )
    goto LABEL_13;
  if ( !v211.m128i_i64[1] )
  {
    a9 = 0;
LABEL_13:
    p_s = (__int64 *)&s;
    p_ptr = &ptr;
    goto LABEL_14;
  }
  p_s = (__int64 *)&s;
  if ( !(unsigned __int8)sub_E3CF00((__int64 *)a9, &v211, &s) )
  {
    v168 = s;
    v169 = *(_DWORD *)(a9 + 8);
    v170 = *(unsigned int *)(a9 + 16);
    ptr.m128i_i64[0] = (__int64)s;
    LODWORD(v194) = v169;
    v171 = v169 + 1;
    v172 = (unsigned int)(3 * v170);
    if ( 4 * v171 >= (unsigned int)v172 )
    {
      sub_E3EFE0(a9, 2 * v170, v170, v172, v155, v156);
      p_ptr = &ptr;
      v193 = &ptr;
    }
    else
    {
      p_ptr = &ptr;
      v173 = (unsigned int)(v170 - *(_DWORD *)(a9 + 12) - v171);
      if ( (unsigned int)v173 > (unsigned int)v170 >> 3 )
      {
LABEL_201:
        v174 = *(_QWORD *)v168 == -1;
        *(_DWORD *)(a9 + 8) = v171;
        if ( !v174 )
          --*(_DWORD *)(a9 + 12);
        v175 = _mm_load_si128(&v211);
        v168[4] = 0;
        *(__m128i *)v168 = v175;
        v176 = *(unsigned int *)(a9 + 36);
        v224 = 0;
        ptr = v211;
        v225 = 0;
        v177 = *(unsigned int *)(a9 + 32);
        v178 = v177 + 1;
        if ( v177 + 1 > v176 )
        {
          v190 = *(_QWORD *)(a9 + 24);
          v191 = a9 + 24;
          v192 = (const void *)(a9 + 40);
          if ( v190 > (unsigned __int64)p_ptr || (unsigned __int64)p_ptr >= v190 + 32 * v177 )
          {
            sub_2237220(v191, v192, v178, 32);
            v180 = p_ptr;
            v179 = a9;
            v181 = *(_QWORD *)(a9 + 24);
            v177 = *(unsigned int *)(a9 + 32);
          }
          else
          {
            sub_2237220(v191, v192, v178, 32);
            v179 = a9;
            v181 = *(_QWORD *)(a9 + 24);
            v177 = *(unsigned int *)(a9 + 32);
            v180 = (__m128i *)((char *)p_ptr + v181 - v190);
          }
        }
        else
        {
          v179 = a9;
          v180 = p_ptr;
          v181 = *(_QWORD *)(a9 + 24);
        }
        v182 = (__m128i *)(v181 + 32 * v177);
        *v182 = _mm_loadu_si128(v180);
        v182[1] = _mm_loadu_si128(v180 + 1);
        v157 = *(unsigned int *)(a9 + 32);
        *(_DWORD *)(v179 + 32) = v157 + 1;
        v168[4] = v157;
        goto LABEL_188;
      }
      sub_E3EFE0(a9, v170, v170, v173, v155, v156);
      v193 = p_ptr;
    }
    sub_E3CF00((__int64 *)a9, &v211, v193);
    v168 = (_DWORD *)ptr.m128i_i64[0];
    LODWORD(v194) = *(_DWORD *)(a9 + 8);
    v171 = (_DWORD)v194 + 1;
    goto LABEL_201;
  }
  p_ptr = &ptr;
  v157 = *((unsigned int *)s + 4);
LABEL_188:
  a9 = *(_QWORD *)(a9 + 24) + 32 * v157 + 16;
LABEL_14:
  v23 = (v205 + 63) >> 6;
  v24 = p_s + 2;
  s = p_s + 2;
  v221 = 0x600000000LL;
  if ( v23 > 6 )
  {
    sub_2237220((__int64)p_s, v24, v23, 8);
    v161 = (__int64 *)memset(s, 255, 8LL * v23);
    LODWORD(v221) = (v205 + 63) >> 6;
    v27 = v161;
  }
  else
  {
    if ( v23 )
    {
      v25 = 0;
      do
      {
        v26 = v25;
        v25 += 8;
        *(__int64 *)((char *)v24 + v26) = -1;
      }
      while ( v25 < 8 * v23 );
    }
    LODWORD(v221) = v23;
    v27 = p_s + 2;
  }
  v222 = v205;
  if ( (v205 & 0x3F) != 0 )
    v27[v23 - 1] &= ~(-1LL << (v205 & 0x3F));
  v28 = (v204 + 63) >> 6;
  m128i_i64 = p_ptr[1].m128i_i64;
  ptr.m128i_i64[0] = (__int64)p_ptr[1].m128i_i64;
  ptr.m128i_i64[1] = 0x600000000LL;
  if ( v28 > 6 )
  {
    sub_2237220((__int64)p_ptr, m128i_i64, v28, 8);
    v158 = (__int64 *)memset((void *)ptr.m128i_i64[0], 255, 8LL * v28);
    ptr.m128i_i32[2] = (v204 + 63) >> 6;
    v32 = v158;
  }
  else
  {
    if ( v28 )
    {
      v30 = 0;
      do
      {
        v31 = v30;
        v30 += 8;
        *(__int64 *)((char *)m128i_i64 + v31) = -1;
      }
      while ( v30 < 8 * v28 );
    }
    ptr.m128i_i32[2] = v28;
    v32 = p_ptr[1].m128i_i64;
  }
  v226 = v204;
  if ( (v204 & 0x3F) != 0 )
    v32[v28 - 1] &= ~(-1LL << (v204 & 0x3F));
  v198 = a2;
  v208 = 0;
  if ( a2 != v202 )
  {
    while ( 1 )
    {
      v33 = (_QWORD *)(v198 - 56);
      if ( !v198 )
        v33 = nullptr;
      if ( !(unsigned __int8)sub_22BF9A0((__int64)v33) )
        break;
LABEL_30:
      v198 = *(_QWORD *)(v198 + 8);
      if ( v202 == v198 )
        goto LABEL_136;
    }
    v34 = (_QWORD *)v33[10];
    v214 = nullptr;
    v194 = v34;
    v197 = v33 + 9;
    v215 = 0;
    v213 = _mm_loadh_ps((const double *)&v194);
    if ( v33 + 9 == v34 )
    {
      v37 = v33 + 9;
      v36 = nullptr;
    }
    else
    {
      if ( !v34 )
        BUG();
      v35 = (int *)v34[4];
      LOBYTE(v215) = 1;
      v214 = v35;
      sub_2010760((__int64)&v213);
      v36 = v214;
      v34 = (_QWORD *)v213.m128_u64[1];
      v37 = (_QWORD *)v213.m128_u64[0];
    }
    v38 = v197;
    v194 = v33;
LABEL_38:
    v39 = v34;
LABEL_39:
    if ( v38 != v39 )
      goto LABEL_40;
    while ( 1 )
    {
      if ( v37 == v38 || !v36 )
      {
        v218 = nullptr;
        v219 = 0;
        v42 = (_QWORD *)v194[10];
        v216 = v197;
        v217 = v42;
        if ( v197 == v42 )
        {
          v44 = v197;
          v45 = nullptr;
        }
        else
        {
          if ( !v42 )
            BUG();
          v43 = (int *)v42[4];
          LOBYTE(v219) = 1;
          v218 = v43;
          sub_2010760((__int64)&v216);
          v44 = v216;
          v42 = v217;
          v45 = v218;
        }
        v194 = &v212;
LABEL_61:
        v46 = v42;
LABEL_62:
        if ( v197 != v46 )
          goto LABEL_63;
        while ( 1 )
        {
          if ( v44 == v197 || !v45 )
            goto LABEL_30;
          while ( 2 )
          {
            v47 = *((_QWORD *)v45 + 5);
            if ( v47 )
            {
              v48 = sub_208B290(v47);
              v50 = v49;
              v51 = v48;
              if ( v48 != v49 )
              {
                if ( !*(_BYTE *)(v48 + 32) )
                {
LABEL_69:
                  if ( (unsigned __int8)(*(_BYTE *)(v51 + 64) - 1) > 1u )
                    goto LABEL_72;
                  v195 = (__int64 *)(v51 + 72);
                  v58 = sub_208ACD0(v51 + 72);
                  v59 = *(_BYTE *)(v58 - 16);
                  if ( (v59 & 2) != 0 )
                  {
                    v60 = *(char **)(*(_QWORD *)(v58 - 32) + 8LL);
                    if ( v60 )
                      goto LABEL_91;
LABEL_103:
                    v62 = 0;
                  }
                  else
                  {
                    v60 = *(char **)(-16 - 8LL * ((v59 >> 2) & 0xF) + v58 + 8);
                    if ( !v60 )
                      goto LABEL_103;
LABEL_91:
                    v60 = (char *)sub_20A0B40((__int64)v60);
                    v62 = v61;
                  }
                  if ( sub_2247970(v60, v62, 0xAu, v194) || (v63 = (int)v212, v212 != (_QWORD *)(unsigned int)v212) )
                    v63 = -1;
                  v64 = sub_208ACA0(v51 + 80);
                  if ( (unsigned int)((__int64)(*(_QWORD *)(v64 + 24) - *(_QWORD *)(v64 + 16)) >> 3)
                    || (v65 = sub_208AE40(v51, 0)) == nullptr
                    || (v199 = *((_QWORD *)v65 + 1),
                        v196 = sub_22C0110((__int64)v200, v199, v66, v67, v68, v199),
                        v69 = sub_208AFD0(v51),
                        v71 = (__int64 *)v196,
                        v72 = v69,
                        !v196)
                    || !v70 )
                  {
LABEL_101:
                    *(_QWORD *)(ptr.m128i_i64[0] + 8LL * ((unsigned int)(v63 - 1) >> 6)) &= ~(1LL << ((unsigned __int8)v63 - 1));
                    goto LABEL_72;
                  }
                  v73 = v196 != v69;
                  if ( *(_BYTE *)(v199 + 8) == 12 )
                  {
                    v199 = v69;
                    v101 = sub_208ACD0((__int64)v195);
                    v102 = (__int64 *)v196;
                    v103 = *(_BYTE *)(v101 - 16);
                    if ( (v103 & 2) != 0 )
                      v104 = *(_QWORD *)(v101 - 32);
                    else
                      v104 = -16 - 8LL * ((v103 >> 2) & 0xF) + v101;
                    v105 = *(unsigned __int8 **)(v104 + 24);
                    v106 = *v105;
                    if ( v106 != 12 && v106 != 37 )
                      goto LABEL_101;
                    v196 = v199;
                    v195 = v102;
                    v107 = sub_206D480((__int64)v105);
                    if ( !BYTE4(v107) )
                      goto LABEL_101;
                    v71 = v195;
                    v72 = v196;
                    if ( (_DWORD)v107 )
                      goto LABEL_101;
                    v73 = (unsigned __int64)v195 < v196;
                  }
                  if ( !v73 )
                    goto LABEL_101;
                  LOBYTE(v196) = v73;
                  v199 = v72;
                  v195 = v71;
                  v91 = sub_22BF6F0();
                  v92 = sub_995540((__int64)v91, "ERROR: dbg.value operand has size ");
                  v93 = sub_227B910(v92, (unsigned __int64)v195);
                  v94 = sub_995540(v93, ", but its variable has size ");
                  v95 = sub_227B910(v94, v199);
                  sub_995540(v95, ": ");
                  v96 = sub_22BF6F0();
                  sub_203EF10(v51, (__int64)v96, 0, v97, v98, v99);
                  v100 = sub_22BF6F0();
                  sub_995540((__int64)v100, "\n");
                  v208 = v196;
LABEL_72:
                  while ( 1 )
                  {
                    v51 = *(_QWORD *)(v51 + 8);
                    if ( v50 == v51 )
                      goto LABEL_73;
                    if ( !*(_BYTE *)(v51 + 32) )
                      goto LABEL_69;
                  }
                }
                while ( 1 )
                {
                  v51 = *(_QWORD *)(v51 + 8);
                  if ( v51 == v49 )
                    break;
                  if ( !*(_BYTE *)(v51 + 32) )
                    goto LABEL_69;
                }
              }
            }
LABEL_73:
            if ( *((_BYTE *)v45 - 24) == 85 )
            {
              v74 = *((_QWORD *)v45 - 7);
              if ( v74 )
              {
                if ( *(_BYTE *)v74 == 13 && (*(_BYTE *)(v74 + 33) & 0x20) != 0 )
                {
                  v75 = *(_DWORD *)(v74 + 36);
                  if ( v75 == 68 || v75 == 71 )
                  {
                    v76 = v45 - 6;
                    v77 = (char *)sub_22BFB90(*(_QWORD *)(*(_QWORD *)&v45[8 * (1LL - (*(v45 - 5) & 0x7FFFFFF)) - 6]
                                                        + 24LL));
                    if ( sub_2247970(v77, v78, 0xAu, v194) || v212 != (_QWORD *)(unsigned int)v212 )
                      LODWORD(v195) = -1;
                    else
                      LODWORD(v195) = (_DWORD)v212;
                    v79 = *(_QWORD *)(*(_QWORD *)&v76[8 * (2LL - (*(v45 - 5) & 0x7FFFFFF))] + 24LL);
                    if ( (unsigned int)((__int64)(*(_QWORD *)(v79 + 24) - *(_QWORD *)(v79 + 16)) >> 3)
                      || (v80 = sub_2091330((__int64)(v45 - 6), 0)) == 0
                      || (v196 = *(_QWORD *)(v80 + 8),
                          v84 = sub_22C0110((__int64)v200, v196, v81, v82, v83, v196),
                          v85 = sub_2091380((__int64)(v45 - 6)),
                          v87 = v85,
                          !v84)
                      || !v86 )
                    {
LABEL_118:
                      *(_QWORD *)(ptr.m128i_i64[0] + 8LL * ((unsigned int)((_DWORD)v195 - 1) >> 6)) &= ~(1LL << ((unsigned __int8)v195 - 1));
                      goto LABEL_74;
                    }
                    v88 = v84 != v85;
                    if ( *(_BYTE *)(v196 + 8) == 12 )
                    {
                      v162 = *(_QWORD *)(*(_QWORD *)&v76[8 * (1LL - (*(v45 - 5) & 0x7FFFFFF))] + 24LL);
                      v163 = *(_BYTE *)(v162 - 16);
                      if ( (v163 & 2) != 0 )
                        v164 = *(_QWORD *)(v162 - 32);
                      else
                        v164 = -16 - 8LL * ((v163 >> 2) & 0xF) + v162;
                      v165 = *(unsigned __int8 **)(v164 + 24);
                      v166 = *v165;
                      if ( v166 != 12 && v166 != 37 )
                        goto LABEL_118;
                      v167 = sub_206D480((__int64)v165);
                      if ( !BYTE4(v167) || (_DWORD)v167 )
                        goto LABEL_118;
                      v88 = v84 < v87;
                    }
                    if ( !v88 )
                      goto LABEL_118;
                    LOBYTE(v195) = v88;
                    v183 = sub_22BF6F0();
                    v184 = sub_995540((__int64)v183, "ERROR: dbg.value operand has size ");
                    v185 = sub_227B910(v184, v84);
                    v186 = sub_995540(v185, ", but its variable has size ");
                    v187 = sub_227B910(v186, v87);
                    sub_995540(v187, ": ");
                    v188 = sub_22BF6F0();
                    sub_2045580((unsigned __int8 *)v45 - 24, (__int64)v188);
                    v189 = sub_22BF6F0();
                    sub_995540((__int64)v189, "\n");
                    v208 = (char)v195;
                  }
                }
              }
            }
LABEL_74:
            v45 = *((int **)v45 + 1);
            if ( v46 )
              goto LABEL_75;
            if ( v45 == &dword_30 )
            {
              while ( 1 )
              {
                v46 = (_QWORD *)v46[1];
                v42 = v44;
                if ( v46 == v44 )
                  goto LABEL_61;
                if ( !v46 )
                  BUG();
                v45 = (int *)v46[4];
LABEL_75:
                if ( v45 != (int *)(v46 + 3) )
                  goto LABEL_62;
              }
            }
            if ( v197 )
            {
LABEL_63:
              if ( !v45 )
                BUG();
              continue;
            }
            break;
          }
        }
      }
LABEL_41:
      if ( *((_BYTE *)v36 - 24) == 85 )
      {
        v89 = *((_QWORD *)v36 - 7);
        if ( v89 )
        {
          if ( *(_BYTE *)v89 == 13 && (*(_BYTE *)(v89 + 33) & 0x20) != 0 )
          {
            v90 = *(_DWORD *)(v89 + 36);
            if ( v90 == 68 || v90 == 71 )
              goto LABEL_48;
          }
        }
      }
      v40 = *((_QWORD **)v36 + 3);
      v212 = v40;
      if ( !v40 )
        break;
      sub_20B2EE0((__int64)&v212, v40, 1);
      if ( !v212 )
        break;
      if ( !(unsigned int)sub_208B340((__int64)&v212) )
      {
        v41 = v212;
        if ( *((_BYTE *)v36 - 24) != 84 )
        {
          if ( v212 )
            goto LABEL_47;
          goto LABEL_86;
        }
        goto LABEL_87;
      }
      v108 = sub_208B340((__int64)&v212);
      *((_QWORD *)s + ((unsigned int)(v108 - 1) >> 6)) &= ~(1LL << ((unsigned __int8)v108 - 1));
      v41 = v212;
      if ( v212 )
LABEL_47:
        sub_20A0850((__int64)&v212, v41);
LABEL_48:
      v36 = *((int **)v36 + 1);
      if ( v39 )
        goto LABEL_49;
      if ( v36 == &dword_30 )
      {
        while ( 1 )
        {
          v39 = (_QWORD *)v39[1];
          v34 = v37;
          if ( v39 == v37 )
            goto LABEL_38;
          if ( !v39 )
            BUG();
          v36 = (int *)v39[4];
LABEL_49:
          if ( v36 != (int *)(v39 + 3) )
            goto LABEL_39;
        }
      }
      if ( v38 )
      {
LABEL_40:
        if ( !v36 )
          BUG();
        goto LABEL_41;
      }
    }
    if ( *((_BYTE *)v36 - 24) == 84 )
      goto LABEL_48;
LABEL_86:
    v52 = sub_22BF6F0();
    sub_995540((__int64)v52, "WARNING: Instruction with empty DebugLoc in function ");
    v195 = sub_22BF6F0();
    v53 = sub_20CC3B0((__int64)v194);
    v55 = sub_9954E0((__int64)v195, v53, v54);
    sub_995540(v55, " --");
    v56 = sub_22BF6F0();
    sub_2045580((unsigned __int8 *)v36 - 24, (__int64)v56);
    v57 = sub_22BF6F0();
    sub_995540((__int64)v57, "\n");
    v41 = v212;
LABEL_87:
    if ( v41 )
      goto LABEL_47;
    goto LABEL_48;
  }
LABEL_136:
  for ( i = sub_22C01E0(p_s, 0, v222, 1); i != -1; i = ((_DWORD)v118 << 6) + _RAX )
  {
    v110 = sub_22BF6F0();
    v111 = sub_995540((__int64)v110, "WARNING: Missing line ");
    v112 = i + 1;
    v113 = sub_227B910(v111, v112);
    sub_995540(v113, "\n");
    if ( v112 == v222 )
      break;
    v114 = v112 >> 6;
    v115 = (v222 - 1) >> 6;
    if ( v112 >> 6 > v115 )
      break;
    v116 = v112 & 0x3F;
    v117 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v116);
    if ( v116 == 0 )
      v117 = 0;
    v118 = v114;
    v119 = ~v117;
    while ( 1 )
    {
      _RAX = *((_QWORD *)s + v118);
      if ( v114 == (_DWORD)v118 )
        _RAX = v119 & *((_QWORD *)s + v118);
      if ( (_DWORD)v118 == v115 )
        _RAX &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v222;
      if ( _RAX )
        break;
      if ( v115 < (unsigned int)++v118 )
        goto LABEL_149;
    }
    __asm { tzcnt   rax, rax }
  }
LABEL_149:
  v122 = nullptr;
  for ( j = sub_22C01E0(p_ptr->m128i_i64, 0, v226, 1); j != -1; j = ((_DWORD)v123 << 6) + _RAX )
  {
    v127 = sub_22BF6F0();
    v128 = sub_995540((__int64)v127, "WARNING: Missing variable ");
    v129 = j + 1;
    v130 = sub_227B910(v128, v129);
    v122 = "\n";
    sub_995540(v130, "\n");
    if ( v129 == v226 )
      break;
    v126 = v129 >> 6;
    v122 = (char *)((v226 - 1) >> 6);
    if ( (unsigned int)v126 > (unsigned int)v122 )
      break;
    v131 = v129 & 0x3F;
    v132 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v131);
    if ( v131 == 0 )
      v132 = 0;
    v123 = (unsigned int)v126;
    v125 = ~v132;
    while ( 1 )
    {
      _RAX = *(_QWORD *)(ptr.m128i_i64[0] + 8 * v123);
      if ( (_DWORD)v126 == (_DWORD)v123 )
        _RAX = v125 & *(_QWORD *)(ptr.m128i_i64[0] + 8 * v123);
      if ( (_DWORD)v123 == (_DWORD)v122 )
        _RAX &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v226;
      if ( _RAX )
        break;
      if ( (unsigned int)v122 < (unsigned int)++v123 )
        goto LABEL_162;
    }
    __asm { tzcnt   rax, rax }
  }
LABEL_162:
  if ( a9 )
  {
    v135 = v205;
    v136 = 0;
    v137 = (__int64 *)s;
    *(_DWORD *)(a9 + 12) += v205;
    for ( k = &v137[(unsigned int)v221]; k != v137; v136 += __popcountdi2(v139, v122, v123, v135, v125, v126) )
      v139 = *v137++;
    v140 = v204;
    v141 = (__int64 *)ptr.m128i_i64[0];
    *(_DWORD *)(a9 + 8) += v136;
    v142 = 0;
    *(_DWORD *)(a9 + 4) += v140;
    for ( m = &v141[ptr.m128i_u32[2]]; m != v141; v142 += __popcountdi2(v144, v140, v123, v135, v125, v126) )
      v144 = *v141++;
    *(_DWORD *)a9 += v142;
  }
  v145 = sub_22BF6F0();
  sub_9954E0((__int64)v145, v206, v207);
  if ( v211.m128i_i64[1] )
  {
    v152 = sub_22BF6F0();
    v153 = sub_995540((__int64)v152, " [");
    v154 = sub_9954E0(v153, (const void *)v211.m128i_i64[0], v211.m128i_u64[1]);
    sub_995540(v154, "]");
  }
  v146 = sub_22BF6F0();
  v147 = sub_995540((__int64)v146, ": ");
  v148 = "FAIL";
  if ( !v208 )
    v148 = "PASS";
  v149 = sub_995540(v147, v148);
  v150 = *(_BYTE **)(v149 + 32);
  if ( (unsigned __int64)v150 >= *(_QWORD *)(v149 + 24) )
  {
    sub_227BA10(v149, 10);
  }
  else
  {
    *(_QWORD *)(v149 + 32) = v150 + 1;
    *v150 = 10;
  }
  if ( (_BYTE)v210 )
    v209 = sub_22C02E0(v200);
  if ( (__m128i *)ptr.m128i_i64[0] != &p_ptr[1] )
    free((void *)ptr.m128i_i64[0]);
  if ( s != p_s + 2 )
    free(s);
  return v209;
}
