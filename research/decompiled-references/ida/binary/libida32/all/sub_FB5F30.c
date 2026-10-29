__int64 __fastcall sub_FB5F30(__int64 a1, __int64 a2, const void *a3, size_t a4, int a5, int a6, int a7)
{
  unsigned int v11; // eax
  std::_V2 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  __int64 *v16; // r14
  size_t v17; // rax
  __int64 v19; // rax
  void **v20; // rcx
  char *v21; // rdx
  void **v22; // r11
  __int64 v23; // rax
  void **v24; // rcx
  __int64 v25; // rdi
  __int64 *v26; // rsi
  char v27; // r8
  unsigned __int64 **v28; // rax
  unsigned __int64 *v29; // r13
  void **v30; // r9
  void ***v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  unsigned int v34; // r14d
  void ***v35; // r8
  size_t v36; // rax
  void **v37; // rax
  size_t v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r14
  int v41; // eax
  size_t v42; // rax
  unsigned int v43; // r14d
  __int64 **v44; // r10
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _OWORD *v47; // rax
  size_t *v48; // r10
  __int64 v49; // rdx
  const __m128i *v50; // r11
  _OWORD *i; // rdx
  const __m128i *v52; // r14
  __int64 v53; // rdi
  size_t v54; // rax
  int v55; // r13d
  int v56; // eax
  __int64 v57; // r8
  __int64 v58; // rdi
  int v59; // r9d
  __int32 v60; // edx
  __m128i *v61; // r9
  unsigned int j; // eax
  __m128i *v63; // rcx
  __int64 v64; // rsi
  unsigned int v65; // eax
  __m128 v66; // xmm0
  int v67; // eax
  _QWORD *v68; // rcx
  __m128i v69; // xmm0
  unsigned int v70; // eax
  int ii; // esi
  _QWORD *v72; // rdx
  void *v73; // rdi
  unsigned int v74; // eax
  unsigned int v75; // eax
  int v76; // eax
  __int64 *v77; // rsi
  _QWORD *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r9
  unsigned int v82; // eax
  int v83; // eax
  _QWORD *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r10
  __int64 v90; // r8
  size_t v91; // r14
  int v92; // eax
  void *v93; // rbx
  unsigned int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // r8
  __int64 v97; // r10
  __int64 v98; // r9
  __int64 *v99; // rbp
  __int64 *v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  void ***v103; // rbx
  __int64 v104; // rsi
  void **v105; // rcx
  __int64 v106; // kr00_8
  void *v107; // rsi
  int v108; // edx
  __m128i v109; // xmm2
  void **v110; // rax
  int v111; // edx
  void *v112; // rdi
  __m128i *(__fastcall *v113)(__m128i *, __int64); // rdx
  size_t *v114; // rbp
  size_t v115; // rbx
  __m128i *v116; // rax
  char v117; // al
  __int64 v118; // rax
  unsigned __int64 v119; // rbx
  size_t v120; // rdx
  _BYTE *v121; // rcx
  unsigned __int64 v122; // rax
  __int64 v123; // rdi
  unsigned int v124; // eax
  bool v125; // zf
  __int64 v126; // rax
  char *v127; // r8
  __int64 v128; // r14
  int v129; // eax
  int v130; // ecx
  _QWORD *v131; // rsi
  int v132; // r8d
  int v133; // r8d
  unsigned int m; // eax
  void *v135; // rdi
  unsigned int v136; // eax
  _BYTE *v137; // rax
  __m128i v138; // xmm5
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned __int64 v142; // rax
  _OWORD *v143; // rax
  __m128i v144; // xmm0
  __int64 v145; // r11
  __int64 v146; // rdx
  const __m128i *v147; // r11
  _OWORD *kk; // rdx
  __int64 v149; // rdi
  int v150; // r9d
  size_t v151; // rax
  int v152; // eax
  __int64 v153; // r8
  __int64 v154; // rdi
  int v155; // r10d
  int v156; // r9d
  int v157; // edx
  __m128i *v158; // r9
  unsigned int mm; // eax
  __m128i *v160; // rcx
  __int64 v161; // rsi
  unsigned int v162; // eax
  int v163; // eax
  int v164; // ecx
  int v165; // r8d
  int v166; // r8d
  unsigned int nn; // eax
  void *v168; // rdi
  unsigned int v169; // eax
  __int64 v170; // rax
  __int64 v171; // rdx
  _OWORD *k; // rdx
  __int64 v173; // rdx
  _OWORD *jj; // rdx
  void ***v175; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v176; // [rsp+8h] [rbp-1E0h]
  void **p_s1; // [rsp+10h] [rbp-1D8h]
  size_t *v178; // [rsp+18h] [rbp-1D0h]
  __int64 *v179; // [rsp+20h] [rbp-1C8h]
  unsigned __int64 v180; // [rsp+28h] [rbp-1C0h]
  __int64 v181; // [rsp+30h] [rbp-1B8h]
  const void *v182; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 v183; // [rsp+40h] [rbp-1A8h]
  void *src; // [rsp+48h] [rbp-1A0h]
  __m128i v185; // [rsp+50h] [rbp-198h] BYREF
  __int64 v186; // [rsp+60h] [rbp-188h]
  unsigned __int64 *v187; // [rsp+68h] [rbp-180h]
  int v188; // [rsp+70h] [rbp-178h]
  int v189; // [rsp+74h] [rbp-174h]
  __int64 v190; // [rsp+78h] [rbp-170h]
  void *v191; // [rsp+88h] [rbp-160h] BYREF
  size_t v192; // [rsp+90h] [rbp-158h] BYREF
  char v193; // [rsp+98h] [rbp-150h]
  __m128i *v194; // [rsp+A0h] [rbp-148h]
  size_t v195; // [rsp+A8h] [rbp-140h]
  __m128i v196; // [rsp+B0h] [rbp-138h] BYREF
  void *v197; // [rsp+C0h] [rbp-128h] BYREF
  size_t v198; // [rsp+C8h] [rbp-120h]
  __m128i v199; // [rsp+D0h] [rbp-118h] BYREF
  char v200; // [rsp+E0h] [rbp-108h]
  void *s1; // [rsp+F0h] [rbp-F8h] BYREF
  size_t n; // [rsp+F8h] [rbp-F0h]
  char v203; // [rsp+100h] [rbp-E8h]
  __m128i v204; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v205; // [rsp+120h] [rbp-C8h]
  void *v206; // [rsp+130h] [rbp-B8h]
  int v207; // [rsp+138h] [rbp-B0h]
  char v208; // [rsp+140h] [rbp-A8h]
  size_t v209[2]; // [rsp+150h] [rbp-98h] BYREF
  char v210; // [rsp+1A8h] [rbp-40h]

  ++*(_DWORD *)(a2 + 784);
  v188 = a5;
  LODWORD(v178) = a7;
  LODWORD(v175) = a6;
  v209[0] = (size_t)a3;
  v209[1] = a4;
  v176 = a2 + 520;
  v11 = sub_2220DF0(a3, a4);
  v12 = (std::_V2 *)(a2 + 520);
  v15 = sub_2220F70(a2 + 520, a3, a4, v11);
  v16 = (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * v15);
  if ( !*v16 )
    goto LABEL_8;
  if ( *v16 == -8 )
  {
    --*(_DWORD *)(a2 + 536);
LABEL_8:
    *(_QWORD *)(a2 + 624) += a4 + 33;
    v181 = a2 + 544;
    v19 = *(_QWORD *)(a2 + 544);
    v20 = (void **)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v21 = (char *)v20 + a4 + 33;
    if ( *(_QWORD *)(a2 + 552) >= (unsigned __int64)v21 && v19 )
    {
      *(_QWORD *)(a2 + 544) = v21;
    }
    else
    {
      v12 = (std::_V2 *)(a2 + 544);
      v20 = (void **)sub_962430(a2 + 544, a4 + 33, a4 + 33, 3, v13, v14);
    }
    v22 = v20 + 4;
    if ( a4 )
    {
      v12 = (std::_V2 *)(v20 + 4);
      p_s1 = v20;
      v37 = (void **)memcpy(v20 + 4, a3, a4);
      v20 = p_s1;
      v22 = v37;
    }
    *((_BYTE *)v22 + a4) = 0;
    *((_BYTE *)v20 + 24) |= 1u;
    *v20 = (void *)a4;
    *((_DWORD *)v20 + 2) = 2;
    p_s1 = v20;
    v23 = std::_V2::generic_category(v12);
    v24 = p_s1;
    v25 = v176;
    p_s1[2] = (void *)v23;
    *v16 = (__int64)v24;
    ++*(_DWORD *)(a2 + 532);
    v26 = (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * (unsigned int)sub_2221390(v25, v15));
    p_s1 = &s1;
    sub_FB4EA0((__int64 **)&s1, v26, 0);
    v27 = (char)v175;
    v28 = (unsigned __int64 **)s1;
    ++*(_DWORD *)(a2 + 792);
    v29 = *v28;
    v180 = **v28;
    v182 = v29 + 4;
    v179 = (__int64 *)&v192;
    sub_FB5B50((std::_V2 *)&v192, a2, (__int64)a3, a4, v27);
    if ( (v193 & 1) != 0 )
    {
      v38 = v192;
      v192 = 0;
      v209[0] = v38;
      v178 = v209;
      LODWORD(p_s1) = sub_21FD070(v209);
      v40 = v39;
      if ( v209[0] )
        (*(void (__fastcall **)(size_t))(*(_QWORD *)v209[0] + 8LL))(v209[0]);
      if ( (_BYTE)v175 )
      {
        v41 = (int)p_s1;
        *((_BYTE *)v29 + 24) |= 1u;
        v29[2] = v40;
        *((_DWORD *)v29 + 2) = v41;
      }
      else
      {
        v82 = sub_2220DF0(a3, a4);
        v83 = sub_2221120(v176, a3, a4, v82);
        if ( v83 == -1 )
          sub_FB4EA0((__int64 **)v178, (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * *(unsigned int *)(a2 + 528)), 1);
        else
          sub_FB4EA0((__int64 **)v178, (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * v83), 1);
        v84 = (_QWORD *)v209[0];
        sub_FB4EA0((__int64 **)v178, (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * *(unsigned int *)(a2 + 528)), 1);
        if ( (_QWORD *)v209[0] != v84 )
          sub_2221250(v176, *v84, v85, v86, v87, v88);
      }
      sub_21FC7C0(v178, (unsigned int)p_s1, v40);
      v42 = v209[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v42;
LABEL_30:
      sub_9E1030(v179);
      return a1;
    }
    v30 = &v191;
    v191 = nullptr;
    v183 = v192;
    s1 = p_s1 + 2;
    n = 0;
    if ( !(_BYTE)v188 )
      v30 = nullptr;
    v203 = 0;
    v205 = 0;
    v207 = 0;
    v208 = 0;
    v34 = sub_FB41D0((_QWORD *)a2, v29 + 4, v180, (__int64)p_s1, 1u, (__int64)v30);
    v35 = v31;
    if ( v34 )
    {
      if ( (_BYTE)v175 )
      {
        *((_BYTE *)v29 + 24) |= 1u;
        *((_DWORD *)v29 + 2) = v34;
        v29[2] = (unsigned __int64)v31;
        v178 = v209;
      }
      else
      {
        v175 = v31;
        v75 = sub_2220DF0(a3, a4);
        v76 = sub_2221120(v176, a3, a4, v75);
        if ( v76 == -1 )
          v77 = (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * *(unsigned int *)(a2 + 528));
        else
          v77 = (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * v76);
        v178 = v209;
        sub_FB4EA0((__int64 **)v209, v77, 1);
        v78 = (_QWORD *)v209[0];
        sub_FB4EA0((__int64 **)v209, (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * *(unsigned int *)(a2 + 528)), 1);
        v35 = v175;
        if ( (_QWORD *)v209[0] != v78 )
        {
          sub_2221250(v176, *v78, v79, v80, v175, v81);
          v35 = v175;
        }
      }
      sub_21FC7C0(v178, v34, v35);
      v36 = v209[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v36;
LABEL_20:
      if ( s1 != p_s1 + 2 )
        operator delete(s1);
      if ( v191 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v191 + 8LL))(v191);
      goto LABEL_30;
    }
    v43 = *(_DWORD *)(a2 + 280);
    v44 = *(__int64 ***)(a2 + 264);
    v175 = (void ***)v204.m128i_i64[1];
    src = (void *)v204.m128i_i64[0];
    if ( !v43 )
    {
LABEL_32:
      v178 = (size_t *)v44;
      v45 = (((((((2 * v43 - 1) | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 2)
              | (2 * v43 - 1)
              | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 4)
            | (((2 * v43 - 1) | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 2)
            | (2 * v43 - 1)
            | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 8)
          | (((((2 * v43 - 1) | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 2)
            | (2 * v43 - 1)
            | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 4)
          | (((2 * v43 - 1) | ((unsigned __int64)(2 * v43 - 1) >> 1)) >> 2)
          | (2 * v43 - 1)
          | ((unsigned __int64)(2 * v43 - 1) >> 1);
      v46 = ((v45 >> 16) | v45) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      *(_DWORD *)(a2 + 280) = v46;
      v47 = (_OWORD *)sub_220C370(24LL * (unsigned int)v46, 8, 64, v32, v35, v33);
      v48 = v178;
      *(_QWORD *)(a2 + 264) = v47;
      if ( v48 )
      {
        *(_QWORD *)(a2 + 272) = 0;
        v49 = *(unsigned int *)(a2 + 280);
        v186 = 24LL * v43;
        v50 = (const __m128i *)((char *)v48 + v186);
        for ( i = (_OWORD *)((char *)v47 + 24 * v49); i != v47; v47 = (_OWORD *)((char *)v47 + 24) )
          *v47 = -1;
        v52 = (const __m128i *)v48;
        v178 = v209;
        if ( v48 != (size_t *)v50 )
        {
          v187 = v29;
          while ( 1 )
          {
            v53 = v52->m128i_i64[0];
            if ( v52->m128i_i64[0] == -1 )
            {
              if ( v52->m128i_i64[1] != -1 )
                goto LABEL_41;
            }
            else if ( v53 != -2 || v52->m128i_i64[1] != -2 )
            {
LABEL_41:
              if ( !*(_DWORD *)(a2 + 280) )
                goto LABEL_215;
              v54 = v52->m128i_u64[1];
              v209[0] = v52->m128i_i64[0];
              v55 = 1;
              v209[1] = v54;
              v56 = sub_FB2B50(v53, (__int64 *)v178 + 1);
              v58 = v52->m128i_i64[0];
              v60 = v59 - 1;
              v61 = nullptr;
              v185.m128i_i32[0] = v60;
              for ( j = v60 & v56; ; j = v185.m128i_i32[0] & v65 )
              {
                v63 = (__m128i *)(v57 + 24LL * j);
                v64 = v63->m128i_i64[0];
                if ( v58 == v63->m128i_i64[0] && v52->m128i_i64[1] == v63->m128i_i64[1] )
                  break;
                if ( v64 == -1 )
                {
                  if ( v63->m128i_i64[1] == -1 )
                  {
                    if ( v61 )
                      v63 = v61;
                    break;
                  }
                }
                else if ( v64 == -2 && v63->m128i_i64[1] == -2 && !v61 )
                {
                  v61 = (__m128i *)(v57 + 24LL * j);
                }
                v65 = v55 + j;
                ++v55;
              }
              v140 = v52[1].m128i_i64[0];
              *v63 = _mm_loadu_si128(v52);
              v63[1].m128i_i64[0] = v140;
              ++*(_DWORD *)(a2 + 272);
            }
            v52 = (const __m128i *)((char *)v52 + 24);
            if ( v50 == v52 )
            {
              v29 = v187;
              break;
            }
          }
        }
        operator delete();
      }
      else
      {
        v171 = *(unsigned int *)(a2 + 280);
        *(_QWORD *)(a2 + 272) = 0;
        for ( k = (_OWORD *)((char *)v47 + 24 * v171); k != v47; v47 = (_OWORD *)((char *)v47 + 24) )
          *v47 = -1;
      }
      if ( *(_DWORD *)(a2 + 280) )
      {
        v178 = v209;
        *(__m128 *)v209 = _mm_loadh_ps((const double *)&v175);
        v185 = *(__m128i *)v209;
        v129 = sub_FB2B50((__int64)src, (__int64 *)&v209[1]);
        v69 = _mm_load_si128(&v185);
        v130 = 1;
        v131 = nullptr;
        v133 = v132 - 1;
        for ( m = v133 & v129; ; m = v133 & v136 )
        {
          v72 = (_QWORD *)(v33 + 24LL * m);
          v135 = (void *)*v72;
          if ( src == (void *)*v72 && v175 == (void ***)v72[1] )
            break;
          if ( v135 == (void *)-1LL )
          {
            if ( v72[1] == -1 )
              goto LABEL_186;
          }
          else if ( v135 == (void *)-2LL && v72[1] == -2 && !v131 )
          {
            v131 = (_QWORD *)(v33 + 24LL * m);
          }
          v136 = v130 + m;
          ++v130;
        }
LABEL_174:
        LODWORD(v32) = *(_DWORD *)(a2 + 272) + 1;
        goto LABEL_107;
      }
      goto LABEL_214;
    }
    v178 = (size_t *)v204.m128i_i64[0];
    v186 = (__int64)v44;
    v66 = _mm_loadh_ps((const double *)&v175);
    v178 = v209;
    *(__m128 *)v209 = v66;
    v185 = (__m128i)v66;
    v67 = sub_FB2B50(v204.m128i_i64[0], (__int64 *)&v209[1]);
    v35 = (void ***)(v43 - 1);
    v68 = nullptr;
    v69 = _mm_load_si128(&v185);
    v70 = (unsigned int)v35 & v67;
    for ( ii = 1; ; ++ii )
    {
      v72 = (_QWORD *)(v186 + 24LL * v70);
      v73 = (void *)*v72;
      if ( src == (void *)*v72 && v175 == (void ***)v72[1] )
      {
        v89 = v72[2];
        v175 = (void ***)(v72 + 2);
        v90 = v89 & 0xFFFFFFFFFFFFFFFBLL;
        if ( !v89 )
          goto LABEL_110;
        goto LABEL_65;
      }
      if ( v73 == (void *)-1LL )
        break;
      if ( v73 == (void *)-2LL && v72[1] == -2 && !v68 )
        v68 = (_QWORD *)(v186 + 24LL * v70);
LABEL_52:
      v74 = ii + v70;
      v70 = (unsigned int)v35 & v74;
    }
    if ( v72[1] != -1 )
      goto LABEL_52;
    v43 = *(_DWORD *)(a2 + 280);
    if ( v68 )
      v72 = v68;
    v32 = (unsigned int)(*(_DWORD *)(a2 + 272) + 1);
    if ( 4 * (int)v32 >= 3 * v43 )
    {
      v44 = *(__int64 ***)(a2 + 264);
      goto LABEL_32;
    }
    if ( v43 - *(_DWORD *)(a2 + 276) - (unsigned int)v32 > v43 >> 3 )
    {
LABEL_107:
      v125 = *v72 == -1;
      *(_DWORD *)(a2 + 272) = v32;
      if ( !v125 || v72[1] != -1 )
        --*(_DWORD *)(a2 + 276);
      v72[2] = 0;
      v175 = (void ***)(v72 + 2);
      *(__m128i *)v72 = v69;
LABEL_110:
      v126 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 128) += 96LL;
      v127 = (char *)((v126 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(a2 + 56) >= (unsigned __int64)(v127 + 96) && v126 )
      {
        *(_QWORD *)(a2 + 48) = v127 + 96;
        v128 = (v126 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v128 = sub_962430(a2 + 48, 96, 96, 3, (__int64)v127, v33);
        v127 = (char *)(v128 & 0xFFFFFFFFFFFFFFFBLL);
      }
      src = v127;
      sub_FB2660(v128);
      v89 = 0;
      v90 = (__int64)src;
      *v175 = (void **)v128;
LABEL_65:
      if ( v208
        && ((v91 = n, src = s1, n != a4)
         || a4
         && (v186 = v89, v185.m128i_i64[0] = v90, v92 = memcmp(s1, a3, a4), v90 = v185.m128i_i64[0], v89 = v186, v92)) )
      {
        v93 = src;
        v186 = v89;
        v185.m128i_i64[0] = v90;
        v209[0] = (size_t)src;
        v209[1] = v91;
        v94 = sub_2220DF0(src, v91);
        v95 = sub_2220F70(v176, v93, v91, v94);
        v96 = v185.m128i_i64[0];
        v97 = v186;
        v98 = v95;
        v99 = (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * v95);
        if ( *v99 )
        {
          if ( *v99 != -8 )
          {
            v176 = v186;
            sub_FB4EA0((__int64 **)&v197, v99, 0);
            v100 = (__int64 *)v197;
            v89 = v176;
            goto LABEL_72;
          }
          --*(_DWORD *)(a2 + 536);
        }
        v118 = *(_QWORD *)(a2 + 544);
        *(_QWORD *)(a2 + 624) += v91 + 33;
        v119 = (v118 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v120 = v91 + 33 + v119;
        if ( *(_QWORD *)(a2 + 552) >= v120 && v118 )
        {
          *(_QWORD *)(a2 + 544) = v120;
        }
        else
        {
          LODWORD(v187) = v98;
          v186 = v97;
          v185.m128i_i64[0] = v96;
          v139 = sub_962430(v181, v91 + 33, v91 + 33, 3, v96, v98);
          LODWORD(v98) = (_DWORD)v187;
          v97 = v186;
          v119 = v139;
          v96 = v185.m128i_i64[0];
        }
        v121 = (_BYTE *)(v119 + 32);
        if ( v91 )
        {
          LODWORD(v186) = v98;
          v185.m128i_i64[0] = v97;
          v181 = v96;
          v137 = memcpy((void *)(v119 + 32), src, v91);
          LODWORD(v98) = v186;
          v97 = v185.m128i_i64[0];
          v96 = v181;
          v121 = v137;
        }
        v122 = v183;
        v123 = v176;
        v121[v91] = 0;
        *(_QWORD *)(v119 + 8) = v96;
        *(_QWORD *)v119 = v91;
        *(_BYTE *)(v119 + 24) &= ~1u;
        *(_QWORD *)(v119 + 16) = v122;
        *v99 = v119;
        ++*(_DWORD *)(a2 + 532);
        v181 = v97;
        v124 = sub_2221390(v123, (unsigned int)v98);
        sub_FB4EA0((__int64 **)&v197, (__int64 *)(*(_QWORD *)(a2 + 520) + 8LL * v124), 0);
        v100 = (__int64 *)v197;
        v89 = v181;
LABEL_72:
        v101 = *v100;
        *((_BYTE *)v29 + 24) &= ~1u;
        v29[1] = v101 | 4;
        v29[2] = v183;
      }
      else
      {
        v102 = v183;
        *((_BYTE *)v29 + 24) &= ~1u;
        v29[1] = v90;
        v29[2] = v102;
      }
      if ( v89 )
      {
LABEL_74:
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_QWORD *)a1 = v29;
        goto LABEL_20;
      }
      v103 = v175;
      v104 = v205;
      v105 = *v175;
      v105[4] = v206;
      v106 = v104;
      v105[6] = *(void **)(v183 + 8);
      v107 = v191;
      v105[5] = (void *)(v106 / 1000000000);
      v108 = *(_DWORD *)(a2 + 776);
      v109 = _mm_load_si128(&v204);
      *(_DWORD *)(a2 + 776) = v108 + 1;
      v110 = *v103;
      v191 = nullptr;
      *((_DWORD *)v110 + 18) = v108;
      v111 = v207;
      v112 = v110[10];
      *(__m128i *)(v110 + 7) = v109;
      v110[10] = v107;
      *((_BYTE *)v110 + 76) = v111 == 7;
      *((_BYTE *)v110 + 77) = v111 == 6;
      if ( v112 )
      {
        (*(void (__fastcall **)(void *, double))(*(_QWORD *)v112 + 8LL))(v112, *(double *)v69.m128i_i64);
        v110 = *v103;
        v107 = (*v103)[10];
      }
      if ( !v107 )
      {
        if ( !(_BYTE)v188 )
          sub_FB3D70(a2, v110, v182, v180);
        goto LABEL_74;
      }
      v113 = *(__m128i *(__fastcall **)(__m128i *, __int64))(*(_QWORD *)v107 + 24LL);
      if ( v113 == sub_FB2750 )
      {
        (*(void (__fastcall **)(size_t *, double))(*(_QWORD *)v107 + 16LL))(v178, *(double *)v69.m128i_i64);
        if ( (v210 & 1) != 0 )
          goto LABEL_74;
        v114 = (size_t *)v209[0];
        if ( v209[0] )
        {
          v115 = v209[1];
          v116 = &v196;
          v194 = &v196;
          if ( v209[1] > 0xF )
          {
            if ( (v209[1] & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v116 = (__m128i *)operator new(v209[1] + 1);
            v196.m128i_i64[0] = v115;
            v194 = v116;
            goto LABEL_167;
          }
          if ( v209[1] == 1 )
          {
            v196.m128i_i8[0] = *(_BYTE *)v209[0];
            goto LABEL_85;
          }
          if ( v209[1] )
          {
LABEL_167:
            memcpy(v116, v114, v115);
            v116 = v194;
          }
LABEL_85:
          v195 = v115;
          v116->m128i_i8[v115] = 0;
          v197 = &v199;
          v200 &= ~1u;
          if ( v194 == &v196 )
          {
            v199 = _mm_load_si128(&v196);
          }
          else
          {
            v197 = v194;
            v199.m128i_i64[0] = v196.m128i_i64[0];
          }
          v198 = v195;
          if ( (v210 & 1) == 0 )
          {
            v114 = (size_t *)v209[0];
            goto LABEL_89;
          }
          goto LABEL_92;
        }
        v196.m128i_i8[0] = 0;
        v138 = _mm_load_si128(&v196);
        v200 &= ~1u;
        v197 = &v199;
        v199 = v138;
        v198 = 0;
LABEL_89:
        if ( v114 == v178 + 2 )
        {
LABEL_92:
          sub_FB3D70(a2, *v175, v197, v198);
          if ( (v200 & 1) == 0 && v197 != &v199 )
            operator delete(v197);
          goto LABEL_74;
        }
        operator delete(v114);
        v117 = v200 & 1;
      }
      else
      {
        ((void (__fastcall *)(void **, double))v113)(&v197, *(double *)v69.m128i_i64);
        v117 = v200 & 1;
      }
      if ( v117 )
        goto LABEL_74;
      goto LABEL_92;
    }
    v141 = *(_QWORD *)(a2 + 264);
    v185 = v69;
    v186 = v141;
    v142 = ((((((((((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2)
                | (v43 - 1)
                | ((unsigned __int64)(v43 - 1) >> 1)) >> 4)
              | (((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2)
              | (v43 - 1)
              | ((unsigned __int64)(v43 - 1) >> 1)) >> 8)
            | (((((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2) | (v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 4)
            | (((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2)
            | (v43 - 1)
            | ((unsigned __int64)(v43 - 1) >> 1)) >> 16)
          | (((((((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2) | (v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 4)
            | (((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2)
            | (v43 - 1)
            | ((unsigned __int64)(v43 - 1) >> 1)) >> 8)
          | (((((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2) | (v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 4)
          | (((v43 - 1) | ((unsigned __int64)(v43 - 1) >> 1)) >> 2)
          | (v43 - 1)
          | ((unsigned __int64)(v43 - 1) >> 1))
         + 1;
    if ( (unsigned int)v142 < 0x40 )
      LODWORD(v142) = 64;
    *(_DWORD *)(a2 + 280) = v142;
    v143 = (_OWORD *)sub_220C370(24LL * (unsigned int)v142, 8, 64, v32, v35, v33);
    v125 = v186 == 0;
    v144 = _mm_load_si128(&v185);
    *(_QWORD *)(a2 + 264) = v143;
    if ( v125 )
    {
      v173 = *(unsigned int *)(a2 + 280);
      *(_QWORD *)(a2 + 272) = 0;
      for ( jj = (_OWORD *)((char *)v143 + 24 * v173); jj != v143; v143 = (_OWORD *)((char *)v143 + 24) )
        *v143 = -1;
    }
    else
    {
      v145 = v186;
      *(_QWORD *)(a2 + 272) = 0;
      v146 = *(unsigned int *)(a2 + 280);
      v190 = 24LL * v43;
      v147 = (const __m128i *)(v190 + v145);
      for ( kk = (_OWORD *)((char *)v143 + 24 * v146); kk != v143; v143 = (_OWORD *)((char *)v143 + 24) )
        *v143 = -1;
      v52 = (const __m128i *)v186;
      v187 = v178 + 1;
      if ( (const __m128i *)v186 != v147 )
      {
        do
        {
          v149 = v52->m128i_i64[0];
          if ( v52->m128i_i64[0] == -1 )
          {
            if ( v52->m128i_i64[1] != -1 )
              goto LABEL_144;
          }
          else if ( v149 != -2 || v52->m128i_i64[1] != -2 )
          {
LABEL_144:
            v150 = *(_DWORD *)(a2 + 280);
            v185 = v144;
            if ( !v150 )
            {
LABEL_215:
              *(__m128i *)&dword_0 = _mm_loadu_si128(v52);
              BUG();
            }
            v151 = v52->m128i_u64[1];
            v209[0] = v149;
            v209[1] = v151;
            v152 = sub_FB2B50(v149, (__int64 *)v187);
            v154 = v52->m128i_i64[0];
            v144 = _mm_load_si128(&v185);
            v155 = 1;
            v157 = v156 - 1;
            v158 = nullptr;
            v189 = v157;
            for ( mm = v157 & v152; ; mm = v189 & v162 )
            {
              v160 = (__m128i *)(v153 + 24LL * mm);
              v161 = v160->m128i_i64[0];
              if ( v154 == v160->m128i_i64[0] && v52->m128i_i64[1] == v160->m128i_i64[1] )
                break;
              if ( v161 == -1 )
              {
                if ( v160->m128i_i64[1] == -1 )
                {
                  if ( v158 )
                    v160 = v158;
                  break;
                }
              }
              else if ( v161 == -2 && v160->m128i_i64[1] == -2 && !v158 )
              {
                v158 = (__m128i *)(v153 + 24LL * mm);
              }
              v162 = v155 + mm;
              ++v155;
            }
            v170 = v52[1].m128i_i64[0];
            *v160 = _mm_loadu_si128(v52);
            v160[1].m128i_i64[0] = v170;
            ++*(_DWORD *)(a2 + 272);
          }
          v52 = (const __m128i *)((char *)v52 + 24);
        }
        while ( v147 != v52 );
      }
      v185 = v144;
      operator delete();
      v144 = _mm_load_si128(&v185);
    }
    if ( *(_DWORD *)(a2 + 280) )
    {
      *(__m128i *)v209 = v144;
      v185 = v144;
      v163 = sub_FB2B50((__int64)src, (__int64 *)v178 + 1);
      v69 = _mm_load_si128(&v185);
      v164 = 1;
      v131 = nullptr;
      v166 = v165 - 1;
      for ( nn = v166 & v163; ; nn = v166 & v169 )
      {
        v72 = (_QWORD *)(v33 + 24LL * nn);
        v168 = (void *)*v72;
        if ( src == (void *)*v72 && v175 == (void ***)v72[1] )
          break;
        if ( v168 == (void *)-1LL )
        {
          if ( v72[1] == -1 )
          {
LABEL_186:
            if ( v131 )
              v72 = v131;
            LODWORD(v32) = *(_DWORD *)(a2 + 272) + 1;
            goto LABEL_107;
          }
        }
        else if ( v168 == (void *)-2LL && v72[1] == -2 && !v131 )
        {
          v131 = (_QWORD *)(v33 + 24LL * nn);
        }
        v169 = v164 + nn;
        ++v164;
      }
      goto LABEL_174;
    }
LABEL_214:
    ++*(_DWORD *)(a2 + 272);
    BUG();
  }
  sub_FB4EA0((__int64 **)&s1, v16, 0);
  v17 = *(_QWORD *)s1;
  if ( (*(_BYTE *)(*(_QWORD *)s1 + 24LL) & 1) != 0 )
  {
    sub_21FC7C0(v209, *(unsigned int *)(v17 + 8), *(_QWORD *)(v17 + 16));
    v17 = v209[0];
    *(_BYTE *)(a1 + 8) |= 1u;
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
  }
  *(_QWORD *)a1 = v17;
  return a1;
}

