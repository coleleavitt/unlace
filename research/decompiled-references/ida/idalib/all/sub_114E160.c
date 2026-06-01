void __fastcall sub_114E160(__int64 *a1, _BYTE *a2, __int64 *a3, __int64 *a4)
{
  bool v5; // zf
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  const char *v8; // r15
  const char *v9; // rbp
  __int64 v10; // r13
  void **v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbp
  char *v14; // r13
  size_t v15; // rax
  _BYTE *v16; // rdi
  unsigned __int64 v17; // rdx
  size_t v18; // r13
  const char **v19; // rax
  const char *v20; // rbp
  size_t v21; // rax
  __int64 **v22; // r15
  __int64 *v23; // rdx
  __int64 v24; // rsi
  char *v25; // rax
  __m128i si128; // xmm1
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, _QWORD, _QWORD); // r13
  const char *v29; // rax
  size_t v30; // rdx
  __int64 **v31; // rax
  char *v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // r13
  _QWORD *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // r15
  __int64 *v39; // rbp
  __int64 v40; // r13
  __int64 *v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  char *v44; // rbp
  size_t v45; // rax
  size_t v46; // r14
  size_t v47; // rax
  size_t v48; // r13
  const char *v49; // rdi
  size_t v50; // rax
  __int64 *v51; // r15
  const char *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  char *v60; // rbp
  size_t v61; // rax
  size_t v62; // r14
  size_t v63; // rax
  size_t v64; // r13
  __int64 v65; // r14
  __int64 v66; // rbp
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  size_t v70; // rax
  __int64 *v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // r13
  const char *v76; // rdi
  __int64 v77; // r13
  __int64 v78; // rax
  const char *v79; // r15
  __int64 v80; // r14
  __int64 v81; // r13
  __int64 v82; // rbp
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  __int64 *v89; // r14
  __int64 *v90; // rbp
  __int64 v91; // r13
  unsigned __int64 v92; // rax
  __int64 v93; // rdx
  __int64 *v94; // r14
  __int64 *v95; // rbp
  __int64 v96; // r13
  __int64 *v97; // rbx
  size_t v98; // rax
  __int64 v99; // r13
  __int64 v100; // rax
  __int64 *v101; // r14
  __int64 v102; // r15
  __int64 v103; // r13
  __int64 v104; // rbp
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  size_t v109; // rax
  __int64 *v110; // r15
  __int64 v111; // r13
  __int64 v112; // rax
  __int64 *v113; // r14
  __int64 v114; // r15
  __int64 v115; // r13
  __int64 v116; // rbp
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 *v123; // r15
  __int64 v124; // r14
  __int64 *v125; // r13
  __int64 v126; // rsi
  size_t v127; // rax
  unsigned __int64 v128; // rdx
  size_t v129; // rax
  __int64 *v130; // r15
  unsigned __int8 *v131; // rbp
  __int64 v132; // rdx
  __int64 v133; // rax
  unsigned __int8 *v134; // rbp
  __int64 v135; // rdx
  __int64 v136; // rax
  unsigned __int8 *v137; // rbp
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rbp
  unsigned __int8 *v141; // rbp
  __int64 v142; // rdx
  __int64 v143; // rax
  size_t v144; // rax
  __int64 *v145; // r15
  __int64 v146; // r13
  __int64 v147; // rbp
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  int v153; // eax
  __int64 v154; // rdx
  int v155; // eax
  __int64 v156; // rdx
  int v157; // eax
  __int64 v158; // rdx
  int v159; // eax
  __int64 v160; // rax
  __int64 v161; // r13
  __int64 v162; // r14
  __int64 v163; // r13
  void *v164; // rdi
  __int64 v165; // rax
  __int64 v166; // r13
  __int64 v167; // r14
  __int64 v168; // r13
  void *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // r13
  __int64 v172; // r14
  __int64 v173; // r13
  void *v174; // rdi
  __int64 v175; // rax
  __int64 v176; // r13
  __int64 v177; // r14
  __int64 v178; // r13
  void *v179; // rdi
  __int64 *v180; // [rsp+8h] [rbp-1F0h] BYREF
  const char *v181; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 *v182; // [rsp+18h] [rbp-1E0h]
  void **p_dest; // [rsp+20h] [rbp-1D8h]
  __int64 *v184; // [rsp+28h] [rbp-1D0h]
  void *v185; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v186; // [rsp+38h] [rbp-1C0h]
  int v187; // [rsp+3Ch] [rbp-1BCh]
  void *dest; // [rsp+50h] [rbp-1A8h] BYREF
  __m128 v189; // [rsp+58h] [rbp-1A0h]
  void *v190[2]; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v191[2]; // [rsp+80h] [rbp-178h] BYREF
  __int16 v192; // [rsp+90h] [rbp-168h]
  _BYTE ptr[24]; // [rsp+A0h] [rbp-158h] BYREF
  _DWORD v194[80]; // [rsp+B8h] [rbp-140h] BYREF

  v5 = *((_DWORD *)a2 + 8) == 14;
  v184 = a1;
  v180 = (__int64 *)a2;
  v182 = a4;
  if ( v5 && !sub_10DF140((__int64)a3, 0x8D4u) )
  {
    *(_QWORD *)ptr = "+lsx";
    *(_QWORD *)&ptr[8] = j__strlen("+lsx");
    sub_11394A0((__int64)v182, (__int64 *)ptr);
  }
  *(_QWORD *)ptr = 0xA8C00000B17LL;
  v6 = sub_21B6DA0(a3, ptr, 2);
  v7 = a3[1];
  *(_QWORD *)&ptr[16] = 0xA8C00000B17LL;
  v8 = (const char *)(v7 + 8LL * (unsigned int)v6);
  v9 = (const char *)(v7 + 8 * HIDWORD(v6));
  v181 = v9;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v181);
  if ( v8 == v9 )
    goto LABEL_7;
  while ( 1 )
  {
    v10 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 )
    {
      if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v8, 2839) || (unsigned __int8)sub_21B9810(v10, 2700) )
        break;
    }
    v8 += 8;
    *(_QWORD *)ptr = v8;
    if ( v9 == v8 )
      goto LABEL_7;
  }
  v181 = v9;
  *(_QWORD *)&ptr[16] = 0xA8C00000B17LL;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v181);
  if ( v9 == v8 )
    goto LABEL_7;
  do
  {
    v77 = *(_QWORD *)v8;
    v78 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
    if ( !v78 )
      v78 = *(_QWORD *)v8;
    v79 = v8 + 8;
    *(_BYTE *)(v78 + 44) |= 1u;
    *(_QWORD *)ptr = v79;
    if ( v79 == v9 )
      break;
    while ( 1 )
    {
      v80 = *(_QWORD *)v79;
      if ( *(_QWORD *)v79 )
      {
        if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v79, 2839) || (unsigned __int8)sub_21B9810(v80, 2700) )
          break;
      }
      v79 += 8;
      *(_QWORD *)ptr = v79;
      if ( v9 == v79 )
        goto LABEL_118;
    }
    v8 = *(const char **)ptr;
  }
  while ( v9 != *(const char **)ptr );
LABEL_118:
  if ( !(unsigned __int8)sub_21B9810(v77, 2839) )
  {
    *(_QWORD *)ptr = "-relax";
    *(_QWORD *)&ptr[8] = j__strlen("-relax");
    sub_11394A0((__int64)v182, (__int64 *)ptr);
LABEL_7:
    p_dest = &dest;
    goto LABEL_8;
  }
  *(_QWORD *)ptr = "+relax";
  *(_QWORD *)&ptr[8] = j__strlen("+relax");
  sub_11394A0((__int64)v182, (__int64 *)ptr);
  p_dest = &dest;
  if ( (unsigned int)sub_118C150(v184, a3, &dest) )
  {
    sub_FC70B0((__int64)ptr, *v184, 0, 408);
    sub_21B5FF0(v190, dest, a3);
    sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v190[0], (signed __int64)v190[1]);
    if ( v190[0] != v191 )
      operator delete(v190[0]);
    sub_AEA040((__int64)ptr);
  }
LABEL_8:
  v11 = p_dest;
  v189.m128_u64[0] = 0;
  v189.m128_i8[8] = 0;
  dest = p_dest + 2;
  v12 = sub_10DCD30((__int64)a3, 0x8D4u);
  v13 = v12;
  if ( v12 )
  {
    v14 = **(char ***)(v12 + 48);
    v15 = j__strlen(v14);
    sub_99BDC0(v11, 0, v189.m128_u64[0], v14, v15);
  }
  sub_114DD40(ptr, (__int64)p_dest, (__int64)v180);
  v16 = dest;
  if ( *(_BYTE **)ptr == &ptr[16] )
  {
    v128 = *(_QWORD *)&ptr[8];
    if ( *(_QWORD *)&ptr[8] )
    {
      if ( *(_QWORD *)&ptr[8] == 1 )
        *(_BYTE *)dest = ptr[16];
      else
        memcpy(dest, *(const void **)ptr, *(size_t *)&ptr[8]);
      v128 = *(_QWORD *)&ptr[8];
      v16 = dest;
    }
    v189.m128_u64[0] = v128;
    v16[v128] = 0;
    v16 = *(_BYTE **)ptr;
  }
  else
  {
    if ( dest == p_dest + 2 )
    {
      v180 = *(__int64 **)&ptr[16];
      dest = *(void **)ptr;
      v189 = _mm_loadh_ps((const double *)&v180);
    }
    else
    {
      v180 = *(__int64 **)&ptr[16];
      v17 = v189.m128_u64[1];
      dest = *(void **)ptr;
      v189 = _mm_loadh_ps((const double *)&v180);
      if ( v16 )
      {
        *(_QWORD *)ptr = v16;
        *(_QWORD *)&ptr[16] = v17;
        goto LABEL_14;
      }
    }
    v16 = &ptr[16];
    *(_QWORD *)ptr = &ptr[16];
  }
LABEL_14:
  *(_QWORD *)&ptr[8] = 0;
  *v16 = 0;
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  sub_22A6F70(dest, v189.m128_u64[0], v182);
  if ( v13 )
  {
    v18 = j__strlen("native");
    v19 = *(const char ***)(v13 + 48);
    v20 = *v19;
    if ( *v19 )
    {
      v21 = j__strlen(*v19);
      if ( v21 != v18 || v21 && memcmp(v20, "native", v21) )
        goto LABEL_43;
    }
    else if ( v18 )
    {
      goto LABEL_43;
    }
    sub_22A4CC0(&v185);
    sub_EC0F90((__int64 **)ptr, (__int64 *)v185, v186 == 0);
    v22 = *(__int64 ***)ptr;
    sub_EC0F90((__int64 **)ptr, (__int64 *)v185 + v186, 1);
    v180 = *(__int64 **)ptr;
    if ( *(__int64 ***)ptr != v22 )
    {
      v23 = *v22;
      do
      {
        v24 = *v23;
        v25 = "-";
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        if ( *((_BYTE *)v23 + 8) )
          v25 = "+";
        v191[0] = v23 + 2;
        v191[1] = v24;
        v190[0] = v25;
        v27 = *a3;
        v192 = 1283;
        *(_QWORD *)ptr = v194;
        v28 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v27 + 16);
        *(__m128i *)&ptr[8] = si128;
        sub_22538C0(v190, ptr);
        v29 = (const char *)v28(a3, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
        if ( *(_DWORD **)ptr != v194 )
        {
          v181 = v29;
          free(*(void **)ptr);
          v29 = v181;
        }
        *(_QWORD *)ptr = v29;
        v30 = 0;
        if ( v29 )
          v30 = j__strlen(v29);
        *(_QWORD *)&ptr[8] = v30;
        sub_11394A0((__int64)v182, (__int64 *)ptr);
        v23 = v22[1];
        if ( v23 != (__int64 *)-8LL && v23 )
        {
          ++v22;
        }
        else
        {
          v31 = v22 + 2;
          do
          {
            do
            {
              v23 = *v31;
              v22 = v31++;
            }
            while ( !v23 );
          }
          while ( v23 == (__int64 *)-8LL );
        }
      }
      while ( v180 != (__int64 *)v22 );
    }
    v32 = (char *)v185;
    if ( v187 && v186 )
    {
      v33 = 0;
      v34 = 8LL * (v186 - 1) + 8;
      do
      {
        v35 = *(_QWORD **)&v32[v33];
        if ( v35 && v35 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v32[v33], *v35 + 17LL, 8);
          v32 = (char *)v185;
        }
        v33 += 8;
      }
      while ( v34 != v33 );
    }
    free(v32);
  }
LABEL_43:
  *(_QWORD *)ptr = 0xB3300000922LL;
  *(_DWORD *)&ptr[8] = 2874;
  v36 = sub_21B6DA0(a3, ptr, 3);
  v37 = a3[1];
  *(_QWORD *)&ptr[16] = 0xB3300000922LL;
  v194[0] = 2874;
  v38 = (__int64 *)(v37 + 8LL * (unsigned int)v36);
  v39 = (__int64 *)(v37 + 8 * HIDWORD(v36));
  v180 = v39;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v180);
  if ( v38 != v39 )
  {
    v180 = (__int64 *)&ptr[12];
    do
    {
      v40 = *v38;
      v41 = (__int64 *)ptr;
      if ( *v38 )
      {
        do
        {
          v42 = *((unsigned int *)v41 + 4);
          if ( !(_DWORD)v42 )
            break;
          if ( (unsigned __int8)sub_21B9810(v40, v42) )
          {
            v180 = v39;
            *(_QWORD *)&ptr[16] = 0xB3300000922LL;
            v194[0] = 2874;
            *(__m128 *)ptr = _mm_loadh_ps((const double *)&v180);
            if ( v39 == v38 )
              goto LABEL_50;
            v180 = (__int64 *)&ptr[12];
LABEL_216:
            v121 = *v38;
            v122 = *(_QWORD *)(*v38 + 16);
            v181 = (const char *)*v38;
            if ( !v122 )
              v122 = v121;
            v123 = v38 + 1;
            *(_BYTE *)(v122 + 44) |= 1u;
            for ( *(_QWORD *)ptr = v123; v39 != v123; *(_QWORD *)ptr = v123 )
            {
              v124 = *v123;
              v125 = (__int64 *)ptr;
              if ( *v123 )
              {
                do
                {
                  v126 = *((unsigned int *)v125 + 4);
                  if ( !(_DWORD)v126 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v124, v126) )
                  {
                    v38 = *(__int64 **)ptr;
                    if ( v39 != *(__int64 **)ptr )
                      goto LABEL_216;
                    goto LABEL_224;
                  }
                  v125 = (__int64 *)((char *)v125 + 4);
                }
                while ( v180 != v125 );
              }
              ++v123;
            }
LABEL_224:
            if ( (unsigned __int8)sub_21B9810(v181, 2338) )
              goto LABEL_230;
            if ( !(unsigned __int8)sub_21B9810(v181, 2867) )
              goto LABEL_60;
            goto LABEL_226;
          }
          v41 = (__int64 *)((char *)v41 + 4);
        }
        while ( v41 != v180 );
      }
      *(_QWORD *)ptr = ++v38;
    }
    while ( v39 != v38 );
  }
LABEL_50:
  v43 = sub_10DCD30((__int64)a3, 0x94Eu);
  if ( v43 )
  {
    v44 = **(char ***)(v43 + 48);
    v45 = j__strlen("64");
    v46 = v45;
    if ( v44 )
    {
      v47 = j__strlen(v44);
      v48 = v47;
      if ( v47 != v46 )
      {
        if ( v47 != j__strlen("32") )
        {
          if ( v48 != j__strlen("0") )
          {
LABEL_57:
            if ( v48 == j__strlen("none") )
            {
              if ( !v48 )
              {
LABEL_60:
                v49 = "-f";
LABEL_61:
                *(_QWORD *)ptr = v49;
                v50 = j__strlen(v49);
                v51 = v182;
                *(_QWORD *)&ptr[8] = v50;
                sub_11394A0((__int64)v182, (__int64 *)ptr);
                *(_QWORD *)ptr = "-d";
                *(_QWORD *)&ptr[8] = j__strlen("-d");
                sub_11394A0((__int64)v51, (__int64 *)ptr);
                v52 = "-lsx";
LABEL_62:
                *(_QWORD *)ptr = v52;
                *(_QWORD *)&ptr[8] = j__strlen(v52);
                sub_11394A0((__int64)v51, (__int64 *)ptr);
                goto LABEL_63;
              }
              goto LABEL_59;
            }
            goto LABEL_279;
          }
          if ( !v48 )
            goto LABEL_60;
LABEL_282:
          if ( !memcmp(v44, "0", v48) )
            goto LABEL_60;
          if ( v48 == j__strlen("none") )
          {
LABEL_59:
            if ( !memcmp(v44, "none", v48) )
              goto LABEL_60;
          }
LABEL_279:
          sub_FC70B0((__int64)ptr, *v184, 0, 405);
          sub_AEC220((unsigned __int8 **)ptr, v44, v48);
          sub_AEA040((__int64)ptr);
          goto LABEL_63;
        }
        if ( !v48 )
          goto LABEL_226;
        goto LABEL_272;
      }
      if ( v47 && memcmp(v44, "64", v47) )
      {
        if ( v48 != j__strlen("32") )
          goto LABEL_56;
LABEL_272:
        if ( memcmp(v44, "32", v48) )
        {
LABEL_56:
          if ( v48 != j__strlen("0") )
            goto LABEL_57;
          goto LABEL_282;
        }
LABEL_226:
        v49 = "+f";
        goto LABEL_61;
      }
    }
    else if ( v45 )
    {
      if ( j__strlen("32") )
      {
        if ( !j__strlen("0") || !j__strlen("none") )
          goto LABEL_60;
        v48 = 0;
        goto LABEL_279;
      }
      goto LABEL_226;
    }
LABEL_230:
    *(_QWORD *)ptr = "+f";
    v127 = j__strlen("+f");
    v51 = v182;
    *(_QWORD *)&ptr[8] = v127;
    sub_11394A0((__int64)v182, (__int64 *)ptr);
    v52 = "+d";
    goto LABEL_62;
  }
LABEL_63:
  v53 = sub_10DF140((__int64)a3, 0x8AEu);
  if ( v53 )
  {
    v54 = *(_QWORD *)(v53 + 16);
    if ( !v54 )
      v54 = v53;
    *(_BYTE *)(v54 + 44) |= 2u;
  }
  v55 = sub_10DF140((__int64)a3, 0x94Eu);
  if ( v55 )
  {
    v56 = *(_QWORD *)(v55 + 16);
    if ( !v56 )
      v56 = v55;
    *(_BYTE *)(v56 + 44) |= 2u;
  }
  v57 = sub_10DF140((__int64)a3, 0xB31u);
  if ( v57 )
  {
    v58 = *(_QWORD *)(v57 + 16);
    if ( !v58 )
      v58 = v57;
    *(_BYTE *)(v58 + 44) |= 2u;
  }
  v59 = sub_10DCD30((__int64)a3, 0xB31u);
  if ( !v59 )
    goto LABEL_147;
  v60 = **(char ***)(v59 + 48);
  v61 = j__strlen("lsx");
  v62 = v61;
  if ( v60 )
  {
    v63 = j__strlen(v60);
    v64 = v63;
    if ( v63 == v62 )
    {
      if ( v63 && memcmp(v60, "lsx", v63) )
      {
        if ( v64 != j__strlen("lasx") )
          goto LABEL_81;
LABEL_256:
        if ( memcmp(v60, "lasx", v64) )
        {
LABEL_81:
          if ( v64 != j__strlen("none") )
            goto LABEL_265;
          goto LABEL_82;
        }
LABEL_257:
        v140 = v182[1];
        if ( v140 != sub_114DB50(*v182, v140, "-d") )
        {
          sub_FC70B0((__int64)ptr, *v184, 0, 409);
          v141 = *(unsigned __int8 **)ptr;
          if ( !*(_QWORD *)ptr )
          {
            v158 = *(_QWORD *)&ptr[8];
            v159 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
            if ( v159 )
            {
              v175 = (unsigned int)(v159 - 1);
              *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v175;
              v141 = *(unsigned __int8 **)(v158 + 8 * v175 + 14848);
              v176 = *((unsigned int *)v141 + 134);
              *v141 = 0;
              v177 = *((_QWORD *)v141 + 66);
              *((_DWORD *)v141 + 106) = 0;
              v178 = v177 + (v176 << 6);
              while ( v177 != v178 )
              {
                while ( 1 )
                {
                  v178 -= 64;
                  v179 = *(void **)(v178 + 24);
                  if ( v179 == (void *)(v178 + 40) )
                    break;
                  operator delete(v179);
                  if ( v177 == v178 )
                    goto LABEL_362;
                }
              }
LABEL_362:
              *((_DWORD *)v141 + 134) = 0;
            }
            else
            {
              v141 = (unsigned __int8 *)operator new(0x3A0u);
              *v141 = 0;
              *((_QWORD *)v141 + 12) = v141 + 112;
              *((_QWORD *)v141 + 16) = v141 + 144;
              *((_QWORD *)v141 + 20) = v141 + 176;
              *((_QWORD *)v141 + 24) = v141 + 208;
              *((_QWORD *)v141 + 28) = v141 + 240;
              *((_QWORD *)v141 + 32) = v141 + 272;
              *((_QWORD *)v141 + 36) = v141 + 304;
              *((_QWORD *)v141 + 40) = v141 + 336;
              *((_QWORD *)v141 + 44) = v141 + 368;
              *((_QWORD *)v141 + 48) = v141 + 400;
              *((_QWORD *)v141 + 52) = v141 + 432;
              *((_QWORD *)v141 + 13) = 0;
              v141[112] = 0;
              *((_QWORD *)v141 + 17) = 0;
              v141[144] = 0;
              *((_QWORD *)v141 + 21) = 0;
              v141[176] = 0;
              *((_QWORD *)v141 + 25) = 0;
              v141[208] = 0;
              *((_QWORD *)v141 + 29) = 0;
              v141[240] = 0;
              *((_QWORD *)v141 + 33) = 0;
              v141[272] = 0;
              *((_QWORD *)v141 + 37) = 0;
              v141[304] = 0;
              *((_QWORD *)v141 + 41) = 0;
              v141[336] = 0;
              *((_QWORD *)v141 + 45) = 0;
              v141[368] = 0;
              *((_QWORD *)v141 + 49) = 0;
              v141[400] = 0;
              *((_QWORD *)v141 + 53) = 0x800000000LL;
              *((_QWORD *)v141 + 66) = v141 + 544;
              *((_QWORD *)v141 + 67) = 0x600000000LL;
            }
            *(_QWORD *)ptr = v141;
          }
          v141[*v141 + 1] = 2;
          v142 = *(_QWORD *)ptr;
          v143 = (unsigned __int8)**(_BYTE **)ptr;
          **(_BYTE **)ptr = v143 + 1;
          *(_QWORD *)(v142 + 8 * v143 + 16) = 1;
          sub_AEA040((__int64)ptr);
          goto LABEL_260;
        }
        v146 = v182[1];
        v147 = *v182;
        v148 = v146 - *v182;
        v149 = v148 >> 6;
        v150 = v148 >> 4;
        if ( v149 > 0 )
        {
          v151 = v147 + (v149 << 6);
          while ( *(_QWORD *)(v147 + 8) != 4 || **(_DWORD **)v147 != 2020830253 )
          {
            if ( *(_QWORD *)(v147 + 24) == 4 && **(_DWORD **)(v147 + 16) == 2020830253 )
            {
              v147 += 16;
              goto LABEL_313;
            }
            if ( *(_QWORD *)(v147 + 40) == 4 && **(_DWORD **)(v147 + 32) == 2020830253 )
            {
              v147 += 32;
              goto LABEL_313;
            }
            if ( *(_QWORD *)(v147 + 56) == 4 && **(_DWORD **)(v147 + 48) == 2020830253 )
            {
              v147 += 48;
              goto LABEL_313;
            }
            v147 += 64;
            if ( v147 == v151 )
            {
              v150 = (v146 - v147) >> 4;
              goto LABEL_309;
            }
          }
          goto LABEL_313;
        }
LABEL_309:
        if ( v150 != 2 )
        {
          if ( v150 != 3 )
          {
            if ( v150 != 1 )
              goto LABEL_260;
            goto LABEL_312;
          }
          if ( (unsigned __int8)sub_114B040("-lsx", v147) )
          {
LABEL_313:
            if ( v147 != v146 )
            {
              sub_FC70B0((__int64)ptr, *v184, 0, 407);
              sub_AEA040((__int64)ptr);
            }
            goto LABEL_260;
          }
          v147 += 16;
        }
        if ( !(unsigned __int8)sub_114B040("-lsx", v147) )
        {
          v147 += 16;
LABEL_312:
          if ( (unsigned __int8)sub_114B040("-lsx", v147) )
            goto LABEL_313;
LABEL_260:
          if ( !sub_10DCD30((__int64)a3, 0xA44u) )
          {
            *(_QWORD *)ptr = "+lsx";
            v144 = j__strlen("+lsx");
            v145 = v182;
            *(_QWORD *)&ptr[8] = v144;
            sub_11394A0((__int64)v182, (__int64 *)ptr);
            *(_QWORD *)ptr = "+lasx";
            *(_QWORD *)&ptr[8] = j__strlen("+lasx");
            sub_11394A0((__int64)v145, (__int64 *)ptr);
          }
          goto LABEL_147;
        }
        goto LABEL_313;
      }
LABEL_129:
      v81 = v182[1];
      v82 = *v182;
      v83 = v81 - *v182;
      v84 = v83 >> 6;
      v85 = v83 >> 4;
      if ( v84 > 0 )
      {
        v86 = v82 + (v84 << 6);
        while ( *(_QWORD *)(v82 + 8) != 2 || **(_WORD **)v82 != 25645 )
        {
          if ( *(_QWORD *)(v82 + 24) == 2 && **(_WORD **)(v82 + 16) == 25645 )
          {
            v82 += 16;
            break;
          }
          if ( *(_QWORD *)(v82 + 40) == 2 && **(_WORD **)(v82 + 32) == 25645 )
          {
            v82 += 32;
            break;
          }
          if ( *(_QWORD *)(v82 + 56) == 2 && **(_WORD **)(v82 + 48) == 25645 )
          {
            v82 += 48;
            break;
          }
          v82 += 64;
          if ( v86 == v82 )
          {
            v85 = (v81 - v82) >> 4;
            goto LABEL_141;
          }
        }
LABEL_249:
        if ( v81 != v82 )
        {
          sub_FC70B0((__int64)ptr, *v184, 0, 409);
          v137 = *(unsigned __int8 **)ptr;
          if ( !*(_QWORD *)ptr )
          {
            v156 = *(_QWORD *)&ptr[8];
            v157 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
            if ( v157 )
            {
              v170 = (unsigned int)(v157 - 1);
              *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v170;
              v137 = *(unsigned __int8 **)(v156 + 8 * v170 + 14848);
              v171 = *((unsigned int *)v137 + 134);
              *v137 = 0;
              v172 = *((_QWORD *)v137 + 66);
              *((_DWORD *)v137 + 106) = 0;
              v173 = v172 + (v171 << 6);
              while ( v172 != v173 )
              {
                while ( 1 )
                {
                  v173 -= 64;
                  v174 = *(void **)(v173 + 24);
                  if ( v174 == (void *)(v173 + 40) )
                    break;
                  operator delete(v174);
                  if ( v172 == v173 )
                    goto LABEL_357;
                }
              }
LABEL_357:
              *((_DWORD *)v137 + 134) = 0;
            }
            else
            {
              v137 = (unsigned __int8 *)operator new(0x3A0u);
              *v137 = 0;
              *((_QWORD *)v137 + 12) = v137 + 112;
              *((_QWORD *)v137 + 16) = v137 + 144;
              *((_QWORD *)v137 + 20) = v137 + 176;
              *((_QWORD *)v137 + 24) = v137 + 208;
              *((_QWORD *)v137 + 28) = v137 + 240;
              *((_QWORD *)v137 + 32) = v137 + 272;
              *((_QWORD *)v137 + 36) = v137 + 304;
              *((_QWORD *)v137 + 40) = v137 + 336;
              *((_QWORD *)v137 + 44) = v137 + 368;
              *((_QWORD *)v137 + 48) = v137 + 400;
              *((_QWORD *)v137 + 52) = v137 + 432;
              *((_QWORD *)v137 + 13) = 0;
              v137[112] = 0;
              *((_QWORD *)v137 + 17) = 0;
              v137[144] = 0;
              *((_QWORD *)v137 + 21) = 0;
              v137[176] = 0;
              *((_QWORD *)v137 + 25) = 0;
              v137[208] = 0;
              *((_QWORD *)v137 + 29) = 0;
              v137[240] = 0;
              *((_QWORD *)v137 + 33) = 0;
              v137[272] = 0;
              *((_QWORD *)v137 + 37) = 0;
              v137[304] = 0;
              *((_QWORD *)v137 + 41) = 0;
              v137[336] = 0;
              *((_QWORD *)v137 + 45) = 0;
              v137[368] = 0;
              *((_QWORD *)v137 + 49) = 0;
              v137[400] = 0;
              *((_QWORD *)v137 + 53) = 0x800000000LL;
              *((_QWORD *)v137 + 66) = v137 + 544;
              *((_QWORD *)v137 + 67) = 0x600000000LL;
            }
            *(_QWORD *)ptr = v137;
          }
          v137[*v137 + 1] = 2;
          v138 = *(_QWORD *)ptr;
          v139 = (unsigned __int8)**(_BYTE **)ptr;
          **(_BYTE **)ptr = v139 + 1;
          *(_QWORD *)(v138 + 8 * v139 + 16) = 0;
          sub_AEA040((__int64)ptr);
          goto LABEL_147;
        }
LABEL_145:
        v76 = "+lsx";
        goto LABEL_146;
      }
LABEL_141:
      if ( v85 != 2 )
      {
        if ( v85 != 3 )
        {
          if ( v85 != 1 )
            goto LABEL_145;
          goto LABEL_144;
        }
        if ( (unsigned __int8)sub_114B040("-d", v82) )
          goto LABEL_249;
        v82 += 16;
      }
      if ( (unsigned __int8)sub_114B040("-d", v82) )
        goto LABEL_249;
      v82 += 16;
LABEL_144:
      if ( !(unsigned __int8)sub_114B040("-d", v82) )
        goto LABEL_145;
      goto LABEL_249;
    }
    if ( v63 == j__strlen("lasx") )
    {
      if ( !v64 )
        goto LABEL_257;
      goto LABEL_256;
    }
    if ( v64 != j__strlen("none") )
      goto LABEL_265;
    if ( v64 )
    {
LABEL_82:
      if ( !memcmp(v60, "none", v64) )
        goto LABEL_83;
LABEL_265:
      sub_FC70B0((__int64)ptr, *v184, 0, 406);
      sub_AEC220((unsigned __int8 **)ptr, v60, v64);
      sub_AEA040((__int64)ptr);
      goto LABEL_147;
    }
  }
  else
  {
    if ( !v61 )
      goto LABEL_129;
    if ( !j__strlen("lasx") )
      goto LABEL_257;
    if ( j__strlen("none") )
    {
      v64 = 0;
      goto LABEL_265;
    }
  }
LABEL_83:
  v65 = *v182;
  v180 = (__int64 *)v182[1];
  v66 = v65;
  v67 = ((__int64)v180 - v65) >> 6;
  v68 = ((__int64)v180 - v65) >> 4;
  if ( v67 > 0 )
  {
    v69 = v65 + (v67 << 6);
    while ( *(_QWORD *)(v66 + 8) != 4 || **(_DWORD **)v66 != 2020830251 )
    {
      if ( *(_QWORD *)(v66 + 24) == 4 && **(_DWORD **)(v66 + 16) == 2020830251 )
      {
        v66 += 16;
        goto LABEL_99;
      }
      if ( *(_QWORD *)(v66 + 40) == 4 && **(_DWORD **)(v66 + 32) == 2020830251 )
      {
        v66 += 32;
        goto LABEL_99;
      }
      if ( *(_QWORD *)(v66 + 56) == 4 && **(_DWORD **)(v66 + 48) == 2020830251 )
      {
        v66 += 48;
        goto LABEL_99;
      }
      v66 += 64;
      if ( v66 == v69 )
      {
        v68 = ((__int64)v180 - v66) >> 4;
        goto LABEL_95;
      }
    }
    goto LABEL_99;
  }
LABEL_95:
  if ( v68 == 2 )
  {
LABEL_371:
    if ( !(unsigned __int8)sub_114B040("+lsx", v66) )
    {
      v66 += 16;
      goto LABEL_98;
    }
    goto LABEL_99;
  }
  if ( v68 != 3 )
  {
    if ( v68 != 1 )
      goto LABEL_101;
LABEL_98:
    if ( !(unsigned __int8)sub_114B040("+lsx", v66) )
      goto LABEL_101;
    goto LABEL_99;
  }
  if ( !(unsigned __int8)sub_114B040("+lsx", v66) )
  {
    v66 += 16;
    goto LABEL_371;
  }
LABEL_99:
  if ( v180 != (__int64 *)v66 )
  {
    *(_QWORD *)ptr = "-lsx";
    v70 = j__strlen("-lsx");
    v71 = v182;
    *(_QWORD *)&ptr[8] = v70;
    sub_11394A0((__int64)v182, (__int64 *)ptr);
    v65 = *v71;
    v180 = (__int64 *)v71[1];
  }
LABEL_101:
  v72 = ((__int64)v180 - v65) >> 6;
  v73 = ((__int64)v180 - v65) >> 4;
  if ( v72 > 0 )
  {
    v74 = v65 + (v72 << 6);
    while ( !(unsigned __int8)sub_114B040("+lasx", v65) )
    {
      v75 = v65;
      v65 += 16;
      if ( (unsigned __int8)sub_114B040("+lasx", v65) )
        break;
      v65 = v75 + 32;
      if ( (unsigned __int8)sub_114B040("+lasx", v75 + 32) )
        break;
      v65 = v75 + 48;
      if ( (unsigned __int8)sub_114B040("+lasx", v75 + 48) )
        break;
      v65 = v75 + 64;
      if ( v74 == v75 + 64 )
      {
        v73 = ((__int64)v180 - v65) >> 4;
        goto LABEL_325;
      }
    }
    goto LABEL_108;
  }
LABEL_325:
  if ( v73 == 2 )
    goto LABEL_365;
  if ( v73 == 3 )
  {
    if ( (unsigned __int8)sub_114B040("+lasx", v65) )
      goto LABEL_108;
    v65 += 16;
LABEL_365:
    if ( (unsigned __int8)sub_114B040("+lasx", v65) )
      goto LABEL_108;
    v65 += 16;
    goto LABEL_328;
  }
  if ( v73 != 1 )
    goto LABEL_147;
LABEL_328:
  if ( !(unsigned __int8)sub_114B040("+lasx", v65) )
    goto LABEL_147;
LABEL_108:
  if ( v180 != (__int64 *)v65 )
  {
    v76 = "-lasx";
LABEL_146:
    *(_QWORD *)ptr = v76;
    *(_QWORD *)&ptr[8] = j__strlen(v76);
    sub_11394A0((__int64)v182, (__int64 *)ptr);
  }
LABEL_147:
  *(_QWORD *)ptr = 0xA4B000009A9LL;
  v87 = sub_21B6DA0(a3, ptr, 2);
  v88 = a3[1];
  *(_QWORD *)&ptr[16] = 0xA4B000009A9LL;
  v89 = (__int64 *)(v88 + 8LL * (unsigned int)v87);
  v90 = (__int64 *)(v88 + 8 * HIDWORD(v87));
  v180 = v90;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v180);
  if ( v89 != v90 )
  {
    while ( 1 )
    {
      v91 = *v89;
      if ( *v89 )
      {
        if ( (unsigned __int8)sub_21B9810(*v89, 2473) || (unsigned __int8)sub_21B9810(v91, 2635) )
          break;
      }
      *(_QWORD *)ptr = ++v89;
      if ( v90 == v89 )
        goto LABEL_152;
    }
    v180 = v90;
    *(_QWORD *)&ptr[16] = 0xA4B000009A9LL;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)&v180);
    if ( v90 != v89 )
    {
      do
      {
        v111 = *v89;
        v112 = *(_QWORD *)(*v89 + 16);
        if ( !v112 )
          v112 = *v89;
        v113 = v89 + 1;
        *(_BYTE *)(v112 + 44) |= 1u;
        *(_QWORD *)ptr = v113;
        if ( v113 == v90 )
          break;
        while ( 1 )
        {
          v114 = *v113;
          if ( *v113 )
          {
            if ( (unsigned __int8)sub_21B9810(*v113, 2473) || (unsigned __int8)sub_21B9810(v114, 2635) )
              break;
          }
          *(_QWORD *)ptr = ++v113;
          if ( v90 == v113 )
            goto LABEL_195;
        }
        v89 = *(__int64 **)ptr;
      }
      while ( v90 != *(__int64 **)ptr );
LABEL_195:
      if ( !(unsigned __int8)sub_21B9810(v111, 2473) )
      {
        *(_QWORD *)ptr = "-lsx";
        v129 = j__strlen("-lsx");
        v130 = v182;
        *(_QWORD *)&ptr[8] = v129;
        sub_11394A0((__int64)v182, (__int64 *)ptr);
        *(_QWORD *)ptr = "-lasx";
        *(_QWORD *)&ptr[8] = j__strlen("-lasx");
        sub_11394A0((__int64)v130, (__int64 *)ptr);
        goto LABEL_152;
      }
      v115 = v182[1];
      v116 = *v182;
      v117 = v115 - *v182;
      v118 = v117 >> 6;
      v119 = v117 >> 4;
      if ( v118 > 0 )
      {
        v120 = v116 + (v118 << 6);
        while ( *(_QWORD *)(v116 + 8) != 2 || **(_WORD **)v116 != 25645 )
        {
          if ( *(_QWORD *)(v116 + 24) == 2 && **(_WORD **)(v116 + 16) == 25645 )
          {
            v116 += 16;
            break;
          }
          if ( *(_QWORD *)(v116 + 40) == 2 && **(_WORD **)(v116 + 32) == 25645 )
          {
            v116 += 32;
            break;
          }
          if ( *(_QWORD *)(v116 + 56) == 2 && **(_WORD **)(v116 + 48) == 25645 )
          {
            v116 += 48;
            break;
          }
          v116 += 64;
          if ( v116 == v120 )
          {
            v119 = (v115 - v116) >> 4;
            goto LABEL_208;
          }
        }
LABEL_245:
        if ( v115 != v116 )
        {
          sub_FC70B0((__int64)ptr, *v184, 0, 409);
          v134 = *(unsigned __int8 **)ptr;
          if ( !*(_QWORD *)ptr )
          {
            v154 = *(_QWORD *)&ptr[8];
            v155 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
            if ( v155 )
            {
              v165 = (unsigned int)(v155 - 1);
              *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v165;
              v134 = *(unsigned __int8 **)(v154 + 8 * v165 + 14848);
              v166 = *((unsigned int *)v134 + 134);
              *v134 = 0;
              v167 = *((_QWORD *)v134 + 66);
              *((_DWORD *)v134 + 106) = 0;
              v168 = v167 + (v166 << 6);
              while ( v167 != v168 )
              {
                while ( 1 )
                {
                  v168 -= 64;
                  v169 = *(void **)(v168 + 24);
                  if ( v169 == (void *)(v168 + 40) )
                    break;
                  operator delete(v169);
                  if ( v167 == v168 )
                    goto LABEL_346;
                }
              }
LABEL_346:
              *((_DWORD *)v134 + 134) = 0;
            }
            else
            {
              v134 = (unsigned __int8 *)operator new(0x3A0u);
              *v134 = 0;
              *((_QWORD *)v134 + 12) = v134 + 112;
              *((_QWORD *)v134 + 16) = v134 + 144;
              *((_QWORD *)v134 + 20) = v134 + 176;
              *((_QWORD *)v134 + 24) = v134 + 208;
              *((_QWORD *)v134 + 28) = v134 + 240;
              *((_QWORD *)v134 + 32) = v134 + 272;
              *((_QWORD *)v134 + 36) = v134 + 304;
              *((_QWORD *)v134 + 40) = v134 + 336;
              *((_QWORD *)v134 + 44) = v134 + 368;
              *((_QWORD *)v134 + 48) = v134 + 400;
              *((_QWORD *)v134 + 52) = v134 + 432;
              *((_QWORD *)v134 + 13) = 0;
              v134[112] = 0;
              *((_QWORD *)v134 + 17) = 0;
              v134[144] = 0;
              *((_QWORD *)v134 + 21) = 0;
              v134[176] = 0;
              *((_QWORD *)v134 + 25) = 0;
              v134[208] = 0;
              *((_QWORD *)v134 + 29) = 0;
              v134[240] = 0;
              *((_QWORD *)v134 + 33) = 0;
              v134[272] = 0;
              *((_QWORD *)v134 + 37) = 0;
              v134[304] = 0;
              *((_QWORD *)v134 + 41) = 0;
              v134[336] = 0;
              *((_QWORD *)v134 + 45) = 0;
              v134[368] = 0;
              *((_QWORD *)v134 + 49) = 0;
              v134[400] = 0;
              *((_QWORD *)v134 + 53) = 0x800000000LL;
              *((_QWORD *)v134 + 66) = v134 + 544;
              *((_QWORD *)v134 + 67) = 0x600000000LL;
            }
            *(_QWORD *)ptr = v134;
          }
          v134[*v134 + 1] = 2;
          v135 = *(_QWORD *)ptr;
          v136 = (unsigned __int8)**(_BYTE **)ptr;
          **(_BYTE **)ptr = v136 + 1;
          *(_QWORD *)(v135 + 8 * v136 + 16) = 0;
          sub_AEA040((__int64)ptr);
          goto LABEL_152;
        }
LABEL_211:
        *(_QWORD *)ptr = "+lsx";
        *(_QWORD *)&ptr[8] = j__strlen("+lsx");
        sub_11394A0((__int64)v182, (__int64 *)ptr);
        goto LABEL_152;
      }
LABEL_208:
      if ( v119 != 2 )
      {
        if ( v119 != 3 )
        {
          if ( v119 != 1 )
            goto LABEL_211;
          goto LABEL_295;
        }
        if ( (unsigned __int8)sub_114B040("-d", v116) )
          goto LABEL_245;
        v116 += 16;
      }
      if ( (unsigned __int8)sub_114B040("-d", v116) )
        goto LABEL_245;
      v116 += 16;
LABEL_295:
      if ( !(unsigned __int8)sub_114B040("-d", v116) )
        goto LABEL_211;
      goto LABEL_245;
    }
  }
LABEL_152:
  *(_QWORD *)ptr = 0xA4400000997LL;
  v92 = sub_21B6DA0(a3, ptr, 2);
  v93 = a3[1];
  *(_QWORD *)&ptr[16] = 0xA4400000997LL;
  v94 = (__int64 *)(v93 + 8LL * (unsigned int)v92);
  v95 = (__int64 *)(v93 + 8 * HIDWORD(v92));
  v180 = v95;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v180);
  if ( v94 != v95 )
  {
    while ( 1 )
    {
      v96 = *v94;
      if ( *v94 )
      {
        if ( (unsigned __int8)sub_21B9810(*v94, 2455) || (unsigned __int8)sub_21B9810(v96, 2628) )
          break;
      }
      *(_QWORD *)ptr = ++v94;
      if ( v95 == v94 )
        goto LABEL_157;
    }
    v180 = v95;
    *(_QWORD *)&ptr[16] = 0xA4400000997LL;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)&v180);
    if ( v95 != v94 )
    {
      do
      {
        v99 = *v94;
        v100 = *(_QWORD *)(*v94 + 16);
        if ( !v100 )
          v100 = *v94;
        v101 = v94 + 1;
        *(_BYTE *)(v100 + 44) |= 1u;
        *(_QWORD *)ptr = v101;
        if ( v101 == v95 )
          break;
        while ( 1 )
        {
          v102 = *v101;
          if ( *v101 )
          {
            if ( (unsigned __int8)sub_21B9810(*v101, 2455) || (unsigned __int8)sub_21B9810(v102, 2628) )
              break;
          }
          *(_QWORD *)ptr = ++v101;
          if ( v95 == v101 )
            goto LABEL_168;
        }
        v94 = *(__int64 **)ptr;
      }
      while ( *(__int64 **)ptr != v95 );
LABEL_168:
      if ( !(unsigned __int8)sub_21B9810(v99, 2455) )
      {
        *(_QWORD *)ptr = "-lasx";
        *(_QWORD *)&ptr[8] = j__strlen("-lasx");
        sub_11394A0((__int64)v182, (__int64 *)ptr);
        goto LABEL_157;
      }
      v103 = v182[1];
      v104 = *v182;
      v105 = v103 - *v182;
      v106 = v105 >> 6;
      v107 = v105 >> 4;
      if ( v106 > 0 )
      {
        v108 = v104 + (v106 << 6);
        while ( *(_QWORD *)(v104 + 8) != 2 || **(_WORD **)v104 != 25645 )
        {
          if ( *(_QWORD *)(v104 + 24) == 2 && **(_WORD **)(v104 + 16) == 25645 )
          {
            v104 += 16;
            break;
          }
          if ( *(_QWORD *)(v104 + 40) == 2 && **(_WORD **)(v104 + 32) == 25645 )
          {
            v104 += 32;
            break;
          }
          if ( *(_QWORD *)(v104 + 56) == 2 && **(_WORD **)(v104 + 48) == 25645 )
          {
            v104 += 48;
            break;
          }
          v104 += 64;
          if ( v108 == v104 )
          {
            v107 = (v103 - v104) >> 4;
            goto LABEL_181;
          }
        }
LABEL_241:
        if ( v103 != v104 )
        {
          sub_FC70B0((__int64)ptr, *v184, 0, 409);
          v131 = *(unsigned __int8 **)ptr;
          if ( !*(_QWORD *)ptr )
          {
            v152 = *(_QWORD *)&ptr[8];
            v153 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
            if ( v153 )
            {
              v160 = (unsigned int)(v153 - 1);
              *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v160;
              v131 = *(unsigned __int8 **)(v152 + 8 * v160 + 14848);
              v161 = *((unsigned int *)v131 + 134);
              *v131 = 0;
              v162 = *((_QWORD *)v131 + 66);
              *((_DWORD *)v131 + 106) = 0;
              v163 = v162 + (v161 << 6);
              while ( v162 != v163 )
              {
                while ( 1 )
                {
                  v163 -= 64;
                  v164 = *(void **)(v163 + 24);
                  if ( v164 == (void *)(v163 + 40) )
                    break;
                  operator delete(v164);
                  if ( v162 == v163 )
                    goto LABEL_341;
                }
              }
LABEL_341:
              *((_DWORD *)v131 + 134) = 0;
            }
            else
            {
              v131 = (unsigned __int8 *)operator new(0x3A0u);
              *v131 = 0;
              *((_QWORD *)v131 + 12) = v131 + 112;
              *((_QWORD *)v131 + 16) = v131 + 144;
              *((_QWORD *)v131 + 20) = v131 + 176;
              *((_QWORD *)v131 + 24) = v131 + 208;
              *((_QWORD *)v131 + 28) = v131 + 240;
              *((_QWORD *)v131 + 32) = v131 + 272;
              *((_QWORD *)v131 + 36) = v131 + 304;
              *((_QWORD *)v131 + 40) = v131 + 336;
              *((_QWORD *)v131 + 44) = v131 + 368;
              *((_QWORD *)v131 + 48) = v131 + 400;
              *((_QWORD *)v131 + 52) = v131 + 432;
              *((_QWORD *)v131 + 13) = 0;
              v131[112] = 0;
              *((_QWORD *)v131 + 17) = 0;
              v131[144] = 0;
              *((_QWORD *)v131 + 21) = 0;
              v131[176] = 0;
              *((_QWORD *)v131 + 25) = 0;
              v131[208] = 0;
              *((_QWORD *)v131 + 29) = 0;
              v131[240] = 0;
              *((_QWORD *)v131 + 33) = 0;
              v131[272] = 0;
              *((_QWORD *)v131 + 37) = 0;
              v131[304] = 0;
              *((_QWORD *)v131 + 41) = 0;
              v131[336] = 0;
              *((_QWORD *)v131 + 45) = 0;
              v131[368] = 0;
              *((_QWORD *)v131 + 49) = 0;
              v131[400] = 0;
              *((_QWORD *)v131 + 53) = 0x800000000LL;
              *((_QWORD *)v131 + 66) = v131 + 544;
              *((_QWORD *)v131 + 67) = 0x600000000LL;
            }
            *(_QWORD *)ptr = v131;
          }
          v131[*v131 + 1] = 2;
          v132 = *(_QWORD *)ptr;
          v133 = (unsigned __int8)**(_BYTE **)ptr;
          **(_BYTE **)ptr = v133 + 1;
          *(_QWORD *)(v132 + 8 * v133 + 16) = 1;
          sub_AEA040((__int64)ptr);
          goto LABEL_157;
        }
LABEL_184:
        *(_QWORD *)ptr = "+lsx";
        v109 = j__strlen("+lsx");
        v110 = v182;
        *(_QWORD *)&ptr[8] = v109;
        sub_11394A0((__int64)v182, (__int64 *)ptr);
        *(_QWORD *)ptr = "+lasx";
        *(_QWORD *)&ptr[8] = j__strlen("+lasx");
        sub_11394A0((__int64)v110, (__int64 *)ptr);
        goto LABEL_157;
      }
LABEL_181:
      if ( v107 != 2 )
      {
        if ( v107 != 3 )
        {
          if ( v107 != 1 )
            goto LABEL_184;
          goto LABEL_289;
        }
        if ( (unsigned __int8)sub_114B040("-d", v104) )
          goto LABEL_241;
        v104 += 16;
      }
      if ( (unsigned __int8)sub_114B040("-d", v104) )
        goto LABEL_241;
      v104 += 16;
LABEL_289:
      if ( !(unsigned __int8)sub_114B040("-d", v104) )
        goto LABEL_184;
      goto LABEL_241;
    }
  }
LABEL_157:
  v97 = v182;
  sub_11C2990(a3, v182, 2735, 2895, "ual", 3);
  sub_11C2990(a3, v97, 2735, 2895, "ual", 3);
  sub_11C2990(a3, v97, 2387, 2604, "frecipe", 7);
  sub_11C2990(a3, v97, 2452, 2626, "lam-bh", 6);
  sub_11C2990(a3, v97, 2453, 2627, "lamcas", 6);
  sub_11C2990(a3, v97, 2456, 2629, "ld-seq-sa", 9);
  sub_11C2990(a3, v97, 2336, 2580, "div32", 5);
  v98 = j__strlen("scq");
  sub_11C2990(a3, v97, 2853, 2710, "scq", v98);
  if ( dest != p_dest + 2 )
    operator delete(dest);
}
