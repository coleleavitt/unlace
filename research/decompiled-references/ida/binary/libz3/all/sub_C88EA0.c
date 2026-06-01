__int64 __fastcall sub_C88EA0(_QWORD *a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // rax
  int v10; // edx
  void **v11; // rax
  void *v12; // rdx
  char i; // al
  unsigned int v14; // eax
  char *v15; // rcx
  __int64 v16; // rdx
  char j; // al
  unsigned int v18; // eax
  int v19; // eax
  void **v20; // rcx
  char v21; // di
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rdx
  void **v27; // rcx
  void **v28; // r13
  void **v29; // r14
  void *v30; // rbx
  _DWORD *v31; // rsi
  bool v32; // zf
  unsigned int v33; // ebx
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  char *v38; // rdx
  int v39; // r8d
  unsigned int v40; // edi
  __int64 v41; // r10
  char *v42; // rdi
  __int64 v43; // r10
  char *v44; // r9
  char *k; // r15
  _DWORD *v46; // rax
  void *v47; // rbx
  void *v48; // rbx
  _DWORD *v49; // rax
  unsigned int v50; // edx
  unsigned int v51; // ebx
  __int64 v52; // r15
  void *v54; // rdi
  int v55; // eax
  int v56; // eax
  void *v57; // rdi
  __int64 v58; // r15
  __int64 v59; // r15
  _QWORD *v60; // r15
  __int64 *v61; // rax
  __int64 *v62; // r15
  __int64 v63; // r13
  _DWORD *v64; // rax
  __int64 *v65; // r15
  _QWORD *v66; // r13
  __int64 v67; // rax
  __int64 *v68; // r15
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rcx
  char m; // dl
  unsigned int v76; // edx
  int v77; // edx
  __int64 *v78; // rax
  __int64 v79; // rsi
  __int64 *v80; // r15
  __int64 *v81; // r15
  __int64 v82; // rsi
  __int64 v83; // rdx
  char n; // al
  unsigned int v85; // eax
  int v86; // eax
  __int64 *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // rdi
  _DWORD *v92; // rax
  char *v93; // rdx
  __int64 v94; // rax
  int v95; // esi
  unsigned int v96; // ecx
  __int64 v97; // r8
  char *v98; // rcx
  char *v99; // rdi
  char *v100; // r14
  __int64 v101; // rax
  __int64 v102; // r13
  __int64 v103; // r13
  __int64 *v104; // r12
  unsigned int v105; // edx
  unsigned int v106; // ebx
  __int64 v107; // r15
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 *v112; // rdi
  __m128i *v113; // r15
  __m128i v114; // xmm0
  __int64 v115; // rax
  __m128i si128; // xmm0
  __int64 *v117; // r14
  __int64 v118; // rax
  __int64 v119; // r13
  void (__fastcall ***v120)(void *); // r15
  __int64 v121; // rbx
  _QWORD *v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rbx
  _QWORD *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rdi
  int v128; // eax
  int v129; // eax
  __int64 v130; // r14
  __int64 v131; // r14
  __int64 v132; // r14
  int v133; // eax
  int v134; // r8d
  int v135; // r9d
  int v136; // ecx
  int v137; // r8d
  int v138; // r9d
  _DWORD *v139; // rax
  bool v140; // r14
  __int64 v141; // rdi
  __int64 v142; // rax
  int v143; // r14d
  int v144; // r8d
  int *v145; // r9
  __int64 v146; // rax
  _QWORD *v147; // rsi
  unsigned int v148; // eax
  __int64 v149; // rdx
  int v150; // eax
  __m128 *v151; // rdx
  unsigned __int64 v152; // rcx
  __m128 v153; // xmm0
  unsigned int v154; // r8d
  unsigned int v155; // edx
  _QWORD *v156; // rcx
  __int64 v157; // r10
  _DWORD *v158; // rdx
  _QWORD *v159; // rdi
  _QWORD *v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rcx
  _QWORD *v164; // rbx
  __int64 v165; // rsi
  __int64 v166; // rdi
  __int64 v167; // rsi
  __int64 v168; // rdi
  _QWORD *v169; // rax
  __int64 ii; // rax
  __int64 jj; // rax
  char **exception; // rbx
  __int64 v173; // rdx
  void *v174; // r15
  _QWORD *v175; // rsi
  int v176; // [rsp-8h] [rbp-1A8h]
  _QWORD *v177; // [rsp+0h] [rbp-1A0h]
  int v178; // [rsp+0h] [rbp-1A0h]
  int *v179; // [rsp+8h] [rbp-198h]
  int v180; // [rsp+8h] [rbp-198h]
  int *v181; // [rsp+10h] [rbp-190h]
  int v182; // [rsp+10h] [rbp-190h]
  int v183; // [rsp+10h] [rbp-190h]
  int v184; // [rsp+18h] [rbp-188h]
  int v185; // [rsp+18h] [rbp-188h]
  _DWORD *v186; // [rsp+18h] [rbp-188h]
  unsigned int v187; // [rsp+20h] [rbp-180h]
  int v188; // [rsp+20h] [rbp-180h]
  _QWORD *v189; // [rsp+20h] [rbp-180h]
  unsigned int v190; // [rsp+20h] [rbp-180h]
  __int64 *v191; // [rsp+28h] [rbp-178h]
  char v192; // [rsp+28h] [rbp-178h]
  char v193; // [rsp+30h] [rbp-170h]
  int v194; // [rsp+30h] [rbp-170h]
  void **v195; // [rsp+38h] [rbp-168h]
  int v196; // [rsp+38h] [rbp-168h]
  int v197; // [rsp+40h] [rbp-160h]
  int v198; // [rsp+40h] [rbp-160h]
  int v199; // [rsp+40h] [rbp-160h]
  char v200; // [rsp+46h] [rbp-15Ah]
  char v201; // [rsp+47h] [rbp-159h]
  __int64 *v202; // [rsp+48h] [rbp-158h]
  void *v203; // [rsp+48h] [rbp-158h]
  __int64 v204; // [rsp+50h] [rbp-150h]
  __int64 *v205; // [rsp+58h] [rbp-148h]
  void **v206; // [rsp+60h] [rbp-140h]
  __int64 v207; // [rsp+68h] [rbp-138h]
  int v208[2]; // [rsp+70h] [rbp-130h] BYREF
  __m128i v209; // [rsp+78h] [rbp-128h] BYREF
  void *v210; // [rsp+88h] [rbp-118h]
  void *v211; // [rsp+90h] [rbp-110h]
  _QWORD *v212; // [rsp+98h] [rbp-108h]
  int v213; // [rsp+A0h] [rbp-100h]
  void *v214; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v215; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 v216; // [rsp+B8h] [rbp-E8h]
  _QWORD v217[2]; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v218; // [rsp+D0h] [rbp-D0h] BYREF
  __int64 v219; // [rsp+D8h] [rbp-C8h]
  __int64 v220; // [rsp+E0h] [rbp-C0h] BYREF
  __int64 v221; // [rsp+E8h] [rbp-B8h]
  char v222; // [rsp+F0h] [rbp-B0h]
  __int64 v223; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v224; // [rsp+108h] [rbp-98h] BYREF
  __int64 v225; // [rsp+110h] [rbp-90h] BYREF
  __int64 v226; // [rsp+118h] [rbp-88h] BYREF
  __int64 v227; // [rsp+120h] [rbp-80h]
  char v228; // [rsp+128h] [rbp-78h]
  void *v229; // [rsp+130h] [rbp-70h] BYREF
  _QWORD v230[2]; // [rsp+138h] [rbp-68h] BYREF
  _QWORD v231[2]; // [rsp+148h] [rbp-58h] BYREF
  char v232; // [rsp+158h] [rbp-48h]

  v207 = a3;
  v4 = *a2;
  v212 = a1;
  v195 = &v214;
  v200 = *((_BYTE *)v4 + 123);
  sub_EE4940(&v214, "normalize-bounds", v4);
  v5 = *a2;
  v6 = (*a2)[9];
  if ( !v6 )
    goto LABEL_42;
  v7 = *v5;
  v8 = 0;
  while ( 2 )
  {
    for ( i = *(_BYTE *)(v6 + 3) >> 6; !i; i = *(_BYTE *)(v6 + 3) >> 6 )
      v6 = *(_QWORD *)(v6 + 16);
    if ( i == 1 )
    {
      v14 = *(_DWORD *)(v6 + 4) + 1;
LABEL_14:
      if ( v8 >= v14 )
        break;
      goto LABEL_15;
    }
    if ( i != 2 )
    {
      v14 = *(_DWORD *)(v6 + 4);
      goto LABEL_14;
    }
    if ( v8 >= *(_DWORD *)(v6 + 4) - 1 )
      break;
LABEL_15:
    v15 = (char *)v5[11];
    if ( !v15 )
      goto LABEL_26;
    v16 = v5[11];
    for ( j = (unsigned __int8)v15[3] >> 6; !j; j = *(_BYTE *)(v16 + 3) >> 6 )
      v16 = *(_QWORD *)(v16 + 16);
    if ( j == 1 )
    {
      v18 = *(_DWORD *)(v16 + 4) + 1;
    }
    else
    {
      if ( j == 2 )
      {
        if ( v8 >= *(_DWORD *)(v16 + 4) - 1 )
        {
LABEL_67:
          v15 = nullptr;
          goto LABEL_26;
        }
        goto LABEL_21;
      }
      v18 = *(_DWORD *)(v16 + 4);
    }
    if ( v8 >= v18 )
      goto LABEL_67;
LABEL_21:
    v19 = 17;
    while ( 1 )
    {
      if ( v15[3] < 0 )
      {
        if ( (unsigned __int8)v15[3] >> 6 != 2 )
        {
          v20 = (void **)(*((_QWORD *)v15 + 2) + 8LL * v8);
          goto LABEL_25;
        }
        goto LABEL_36;
      }
      if ( *((_DWORD *)v15 + 1) == v8 )
        break;
LABEL_36:
      v15 = *((char **)v15 + 2);
      if ( !--v19 )
      {
        sub_233F80((__int64 *)(v7 + 616), (_DWORD *)v5 + 22);
        v26 = v5[11];
        v5 = *a2;
        v20 = (void **)(*(_QWORD *)(v26 + 16) + 8LL * v8);
        goto LABEL_25;
      }
    }
    v20 = (void **)(v15 + 8);
LABEL_25:
    v15 = (char *)*v20;
LABEL_26:
    v21 = *((_BYTE *)v5 + 123);
    v22 = *v5;
    if ( (v21 & 0x10) == 0 )
    {
      v12 = nullptr;
      if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
        goto LABEL_8;
      goto LABEL_28;
    }
    v9 = v5[13];
    v10 = 17;
    while ( 2 )
    {
      if ( *(char *)(v9 + 3) < 0 )
      {
        if ( *(_BYTE *)(v9 + 3) >> 6 != 2 )
        {
          v11 = (void **)(*(_QWORD *)(v9 + 16) + 8LL * v8);
          goto LABEL_7;
        }
LABEL_33:
        v9 = *(_QWORD *)(v9 + 16);
        if ( !--v10 )
        {
          v211 = v15;
          sub_236900((_QWORD *)(v22 + 672), v5 + 13);
          v25 = v5[13];
          v5 = *a2;
          v15 = (char *)v211;
          v21 = *((_BYTE *)*a2 + 123);
          v22 = **a2;
          v11 = (void **)(*(_QWORD *)(v25 + 16) + 8LL * v8);
          goto LABEL_7;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v9 + 4) != v8 )
      goto LABEL_33;
    v11 = (void **)(v9 + 8);
LABEL_7:
    v12 = *v11;
    if ( (v21 & 0x20) == 0 )
    {
LABEL_28:
      v23 = v5[9];
      v24 = 17;
      do
      {
        if ( *(char *)(v23 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v23 + 4) == v8 )
            goto LABEL_8;
        }
        else if ( *(_BYTE *)(v23 + 3) >> 6 != 2 )
        {
          goto LABEL_8;
        }
        v23 = *(_QWORD *)(v23 + 16);
        --v24;
      }
      while ( v24 );
      v210 = v12;
      v211 = v15;
      sub_233F80((__int64 *)(v22 + 616), (_DWORD *)v5 + 18);
    }
LABEL_8:
    sub_F79EF0((_DWORD)v212 + 8);
    v5 = *a2;
    ++v8;
    v6 = (*a2)[9];
    if ( v6 )
    {
      v7 = *v5;
      continue;
    }
    break;
  }
LABEL_42:
  v27 = (void **)v212[16];
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v28 != v27 )
    {
      v29 = (void **)v212[16];
      v211 = &v218;
      v209.m128i_i64[0] = (__int64)&v220;
      while ( 1 )
      {
        v31 = *v29;
        v218 = 0;
        v220 = 1;
        v219 = 0;
        v32 = *((_WORD *)v31 + 2) == 0;
        v221 = 0;
        if ( !v32
          || (v33 = v31[6]) != 0
          || (v34 = *(_DWORD **)(*((_QWORD *)v31 + 2) + 24LL)) != nullptr && *v34 != -1
          || *((_BYTE *)v212 + 168)
          && ((v210 = v31, (v35 = *(_DWORD **)(sub_15D1F10(v31) + 24)) == nullptr)
           || (v31 = v210, *v35 != 5)
           || v35[1] != 1) )
        {
          v30 = qword_1C7F2C0;
LABEL_46:
          sub_182CBA0(v30, v211);
          sub_182CBA0(v30, v209.m128i_i64[0]);
          goto LABEL_47;
        }
        v36 = v212;
        v230[0] = 0;
        v223 = 0;
        v37 = *((unsigned int *)v212 + 8);
        v38 = (char *)v212[3];
        v231[0] = 1;
        v225 = 1;
        v39 = v31[3];
        v40 = v37 - 1;
        LOBYTE(v227) = 0;
        v37 *= 48;
        v224 = 0;
        v41 = 3LL * (v39 & v40);
        v229 = v31;
        v42 = &v38[v37];
        v43 = 16 * v41;
        v230[1] = 0;
        v226 = 0;
        v44 = &v38[v43];
        v231[1] = 0;
        v232 = 0;
        if ( v43 != v37 )
        {
          for ( k = &v38[v43]; v42 != k; k += 48 )
          {
            v46 = *(_DWORD **)k;
            if ( *(_QWORD *)k > 1u )
            {
              if ( v46[3] == v39 && v31 == v46 )
                goto LABEL_89;
            }
            else if ( !v46 )
            {
LABEL_63:
              v212 = v36;
              goto LABEL_64;
            }
          }
        }
        if ( v38 == v44 )
        {
LABEL_64:
          v47 = qword_1C7F2C0;
          v209.m128i_i64[1] = (__int64)&qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v230);
          sub_182CBA0(v47, v231);
          v48 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v223);
          sub_182CBA0(v48, &v225);
          v30 = qword_1C7F2C0;
          goto LABEL_46;
        }
        v36 = v212;
        while ( 1 )
        {
          v49 = *(_DWORD **)v38;
          if ( *(_QWORD *)v38 > 1u )
            break;
          if ( !v49 )
            goto LABEL_63;
LABEL_77:
          v38 += 48;
          if ( v44 == v38 )
            goto LABEL_63;
        }
        if ( v49[3] != v39 || v31 != v49 )
          goto LABEL_77;
        k = v38;
LABEL_89:
        v209.m128i_i64[1] = (__int64)&qword_1C7F2C0;
        v210 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v230);
        sub_182CBA0(v210, v231);
        v54 = qword_1C7F2C0;
        if ( (k[12] & 1) != 0 )
        {
          *(_QWORD *)v208 = *(_QWORD *)v209.m128i_i64[1];
          v210 = &v223;
          sub_182C690(qword_1C7F2C0, &v223, k + 8);
          v54 = *(void **)v208;
        }
        else
        {
          v55 = *((_DWORD *)k + 2);
          BYTE4(v223) &= ~1u;
          LODWORD(v223) = v55;
          v210 = &v223;
        }
        if ( (k[28] & 1) != 0 )
        {
          sub_182C690(v54, &v225, k + 24);
        }
        else
        {
          v56 = *((_DWORD *)k + 6);
          BYTE4(v225) &= ~1u;
          LODWORD(v225) = v56;
        }
        LOBYTE(v227) = k[40];
        v57 = *(void **)v209.m128i_i64[1];
        if ( (v223 & 0x100000000LL) != 0 )
        {
          *(_QWORD *)v208 = *(_QWORD *)v209.m128i_i64[1];
          sub_182C690(v57, v211, v210);
          v57 = *(void **)v208;
        }
        else
        {
          BYTE4(v218) &= ~1u;
          LODWORD(v218) = v223;
        }
        if ( (v225 & 0x100000000LL) != 0 )
        {
          v202 = &v220;
          sub_182C690(v57, &v220, &v225);
          *(_QWORD *)v208 = *(_QWORD *)v209.m128i_i64[1];
          sub_182CBA0(*(_QWORD *)v208, v210);
          sub_182CBA0(*(_QWORD *)v208, &v225);
        }
        else
        {
          BYTE4(v220) &= ~1u;
          LODWORD(v220) = v225;
          v58 = *(_QWORD *)v209.m128i_i64[1];
          sub_182CBA0(*(_QWORD *)v209.m128i_i64[1], v210);
          sub_182CBA0(v58, &v225);
          v202 = &v220;
        }
        v59 = *(_QWORD *)v209.m128i_i64[1];
        if ( (_DWORD)v218 )
        {
          sub_182CBA0(*(_QWORD *)v209.m128i_i64[1], v211);
          sub_182CBA0(v59, &v220);
          if ( (v200 & 4) != 0 )
          {
            v112 = v212;
            v113 = (__m128i *)sub_186B270(0x50u);
            v113[1].m128i_i8[8] = 1;
            v113->m128i_i32[2] = 0;
            v113[1].m128i_i64[0] = 0;
            LODWORD(v204) = (_DWORD)v113;
            v209.m128i_i64[0] = *v112;
            v114 = _mm_loadl_epi64(&v209);
            v113->m128i_i64[0] = (__int64)&off_1C60CE8;
            v113[2] = _mm_unpacklo_epi64(v114, (__m128i)(unsigned __int64)&v113[3].m128i_u64[1]);
            v115 = operator new(0x11u);
            si128 = _mm_load_si128((const __m128i *)&xmmword_18B6830);
            v117 = *a2;
            *(_BYTE *)(v115 + 16) = 0;
            v113[3].m128i_i64[1] = 16;
            v113[2].m128i_i64[1] = v115;
            v113[3].m128i_i64[0] = 16;
            v113[4].m128i_i64[1] = 0;
            *(__m128i *)v115 = si128;
            v118 = sub_1336AB0(v117[1], v113);
            v119 = v118;
            if ( v118 )
              ++*(_DWORD *)(v118 + 8);
            v120 = (void (__fastcall ***)(void *))v117[1];
            if ( v120 )
            {
              v32 = (*((_DWORD *)v120 + 2))-- == 1;
              if ( v32 )
              {
                (**v120)(v120);
                sub_186B220(v120);
              }
            }
            v117[1] = v119;
          }
          else
          {
            LODWORD(v204) = 0;
          }
          v60 = v212;
          v206 = &v229;
          sub_1694970(&v229, *v212);
          v61 = (__int64 *)v60[16];
          v215 = 0;
          v216 = 0;
          v217[0] = 1;
          v217[1] = 0;
          if ( !v61
            || (v209.m128i_i64[0] = (__int64)&v61[*((unsigned int *)v61 - 1)], (__int64 *)v209.m128i_i64[0] == v61) )
          {
            v205 = &v215;
          }
          else
          {
            v197 = 0;
            v62 = v61;
            v205 = &v215;
            v191 = &v224;
            do
            {
              v63 = *v62;
              if ( *(_WORD *)(*v62 + 4) )
                goto LABEL_108;
              if ( *(_DWORD *)(v63 + 24) )
                goto LABEL_108;
              v64 = *(_DWORD **)(*(_QWORD *)(v63 + 16) + 24LL);
              if ( v64 )
              {
                if ( *v64 != -1 )
                  goto LABEL_108;
              }
              if ( *((_BYTE *)v212 + 168) )
              {
                v92 = *(_DWORD **)(sub_15D1F10(*v62) + 24);
                if ( !v92 || *v92 != 5 || v92[1] != 1 )
                  goto LABEL_108;
              }
              v228 = 0;
              v218 = 0;
              v93 = (char *)v212[3];
              v94 = *((unsigned int *)v212 + 8);
              v220 = 1;
              v224 = 0;
              v226 = 1;
              v95 = *(_DWORD *)(v63 + 12);
              v96 = v94 - 1;
              v94 *= 48;
              v222 = 0;
              v223 = v63;
              v97 = 3LL * (v95 & v96);
              v98 = &v93[v94];
              v219 = 0;
              v97 *= 16;
              v227 = 0;
              v221 = 0;
              v99 = &v93[v97];
              v225 = 0;
              v100 = &v93[v97];
              if ( v97 != v94 )
              {
                do
                {
                  v101 = *(_QWORD *)v100;
                  if ( *(_QWORD *)v100 > 1u )
                  {
                    if ( *(_DWORD *)(v101 + 12) == v95 && v63 == v101 )
                    {
LABEL_231:
                      *(_QWORD *)v208 = *(_QWORD *)v209.m128i_i64[1];
                      sub_182CBA0(*(_QWORD *)v208, v191);
                      sub_182CBA0(*(_QWORD *)v208, &v226);
                      v127 = *(_QWORD *)v209.m128i_i64[1];
                      if ( (v100[12] & 1) != 0 )
                      {
                        *(_QWORD *)v208 = *(_QWORD *)v209.m128i_i64[1];
                        sub_182C690(v127, v211, v100 + 8);
                        v127 = *(_QWORD *)v208;
                      }
                      else
                      {
                        v128 = *((_DWORD *)v100 + 2);
                        BYTE4(v218) &= ~1u;
                        LODWORD(v218) = v128;
                      }
                      if ( (v100[28] & 1) != 0 )
                      {
                        sub_182C690(v127, v202, v100 + 24);
                      }
                      else
                      {
                        v129 = *((_DWORD *)v100 + 6);
                        BYTE4(v220) &= ~1u;
                        LODWORD(v220) = v129;
                      }
                      v222 = v100[40];
                      v130 = *(_QWORD *)v209.m128i_i64[1];
                      if ( (v218 & 0x100000000LL) != 0 )
                      {
                        sub_182C690(*(_QWORD *)v209.m128i_i64[1], v205, v211);
                      }
                      else
                      {
                        BYTE4(v215) &= ~1u;
                        LODWORD(v215) = v218;
                      }
                      if ( (v220 & 0x100000000LL) != 0 )
                      {
                        sub_182C690(v130, v217, v202);
                      }
                      else
                      {
                        BYTE4(v217[0]) &= ~1u;
                        LODWORD(v217[0]) = v220;
                      }
                      v131 = *(_QWORD *)v209.m128i_i64[1];
                      sub_182CBA0(*(_QWORD *)v209.m128i_i64[1], v211);
                      sub_182CBA0(v131, v202);
                      if ( (_DWORD)v215 )
                      {
                        v132 = sub_15D1F10(v63);
                        *(_QWORD *)v208 = *v212;
                        sub_180C5A0(v210, 0);
                        v133 = sub_15E3D10(
                                 v208[0],
                                 (int)v210,
                                 (int)&qword_18D6CD0,
                                 0,
                                 0,
                                 v132,
                                 1,
                                 v176,
                                 (int)v177,
                                 (int)v179,
                                 (int)v181,
                                 v184,
                                 v187,
                                 (int)v191,
                                 v193,
                                 (int)v195,
                                 v197,
                                 (int)v202,
                                 v204,
                                 (int)v205,
                                 (int)v206,
                                 v207,
                                 v208[0],
                                 v209.m128i_i32[0],
                                 v209.m128i_i32[2],
                                 (int)v210,
                                 (int)v211,
                                 (int)v212,
                                 v213,
                                 v214,
                                 v215,
                                 v216);
                        *(_QWORD *)v208 = sub_15DC610(
                                            v208[0],
                                            v133,
                                            0,
                                            0,
                                            v134,
                                            v135,
                                            v178,
                                            v180,
                                            v182,
                                            v185,
                                            v188,
                                            v192,
                                            v194,
                                            v196,
                                            v198,
                                            v203);
                        v139 = *(_DWORD **)(v132 + 24);
                        v140 = 0;
                        if ( v139 && *v139 == 5 )
                          v140 = v139[1] == 1;
                        v141 = v212[18];
                        if ( !v141 )
                        {
                          sub_16669E0(v212 + 17);
                          v141 = v212[18];
                        }
                        sub_166A700(v141, (_DWORD)v205, v140, v136, v137, v138);
                        v142 = sub_15E1B70(v212[17]);
                        v143 = v142;
                        sub_1692DB0(v206, v63, v142, 0, 0);
                        if ( v201 )
                        {
                          v146 = *(_QWORD *)(*(_QWORD *)v208 + 16LL);
                          v193 = v146;
                          *(_QWORD *)v208 = *(_QWORD *)(v204 + 32);
                          if ( v146 )
                            ++*(_DWORD *)(v146 + 8);
                          v147 = *(_QWORD **)(v204 + 72);
                          if ( v147 )
                          {
                            v148 = *((_DWORD *)v147 - 1);
                            if ( v148 == *((_DWORD *)v147 - 2) )
                            {
                              v154 = (3 * v148 + 1) >> 1;
                              v155 = 40 * v154 + 8;
                              if ( 40 * v148 + 8 >= v155 || v148 >= v154 )
                              {
                                exception = (char **)__cxa_allocate_exception(0x28u);
                                sub_161AE6((__int64 *)v210, "Overflow encountered when expanding vector", v173);
                                v174 = v210;
                                v175 = v210;
                                *exception = (char *)off_1C63128;
                                sub_2333C0(exception + 1, v175);
                                sub_233E40((__int64)v174);
                                __cxa_throw(
                                  exception,
                                  (struct type_info *)&`typeinfo for'default_exception,
                                  (void (*)(void *))sub_230E50);
                              }
                              v187 = (3 * v148 + 1) >> 1;
                              v145 = (int *)sub_186B270(v155);
                              v144 = v187;
                              v147 = v145 + 2;
                              v156 = *(_QWORD **)(v204 + 72);
                              if ( v156 )
                              {
                                v157 = *((unsigned int *)v156 - 1);
                                v158 = v145 + 2;
                                v145[1] = v157;
                                v159 = &v156[5 * v157];
                                v160 = v156;
                                if ( v156 != v159 )
                                {
                                  v189 = v156;
                                  do
                                  {
                                    v161 = v160[1];
                                    v160 += 5;
                                    v158 += 10;
                                    *((_QWORD *)v158 - 4) = v161;
                                    v162 = *(v160 - 5);
                                    *(v160 - 5) = 0;
                                    *((_QWORD *)v158 - 5) = v162;
                                    *((_QWORD *)v158 - 2) = *(v160 - 2);
                                    v163 = *(v160 - 3);
                                    *(v160 - 3) = 0;
                                    *((_QWORD *)v158 - 3) = v163;
                                    *(v158 - 2) = *((_DWORD *)v160 - 2);
                                  }
                                  while ( v159 != v160 );
                                  v156 = v189;
                                }
                                if ( (_DWORD)v157 )
                                {
                                  v190 = v33;
                                  v186 = v145 + 2;
                                  v183 = v144;
                                  v164 = &v156[5 * v157];
                                  v179 = v145;
                                  v177 = v212;
                                  v212 = v156;
                                  do
                                  {
                                    v167 = v212[2];
                                    if ( v167 )
                                    {
                                      v168 = v212[3];
                                      v32 = (*(_DWORD *)(v167 + 8))-- == 1;
                                      if ( v32 )
                                        sub_15D7BC0(v168, v167);
                                    }
                                    v165 = *v212;
                                    if ( *v212 )
                                    {
                                      v166 = v212[1];
                                      v32 = (*(_DWORD *)(v165 + 8))-- == 1;
                                      if ( v32 )
                                        sub_15D7BC0(v166, v165);
                                    }
                                    v212 += 5;
                                  }
                                  while ( v164 != v212 );
                                  v33 = v190;
                                  v147 = v186;
                                  v144 = v183;
                                  v212 = v177;
                                  v145 = v179;
                                  v156 = *(_QWORD **)(v204 + 72);
                                }
                                v181 = v145;
                                v184 = v144;
                                v187 = (unsigned int)v147;
                                sub_186B220(v156 - 1);
                                v145 = v181;
                                v144 = v184;
                                v151 = (__m128 *)&v147[5 * (unsigned int)v181[1]];
                                v150 = v181[1] + 1;
                              }
                              else
                              {
                                v145[1] = 0;
                                v151 = (__m128 *)(v145 + 2);
                                v150 = 1;
                              }
                              *v145 = v144;
                              *(_QWORD *)(v204 + 72) = v147;
                            }
                            else
                            {
                              v149 = v148;
                              v150 = v148 + 1;
                              v151 = (__m128 *)&v147[5 * v149];
                            }
                          }
                          else
                          {
                            v169 = (_QWORD *)sub_186B270(0x58u);
                            *v169 = 2;
                            v147 = v169 + 1;
                            *(_QWORD *)(v204 + 72) = v169 + 1;
                            v151 = (__m128 *)(v169 + 1);
                            v150 = 1;
                          }
                          v152 = *(_QWORD *)v208;
                          v151[1].m128_u64[0] = 0;
                          v151[2].m128_i32[0] = 0;
                          v153 = _mm_loadh_ps((const double *)v208);
                          v151[1].m128_u64[1] = v152;
                          *v151 = v153;
                          *((_DWORD *)v147 - 1) = v150;
                          sub_13333D0(v204, *(_QWORD *)(v63 + 16), v143, v152, v144, (_DWORD)v145);
                        }
                        v197 = v199 + 1;
                      }
                      goto LABEL_108;
                    }
                  }
                  else if ( !v101 )
                  {
                    goto LABEL_171;
                  }
                  v100 += 48;
                }
                while ( v98 != v100 );
              }
              for ( ; v99 != v93; v93 += 48 )
              {
                v111 = *(_QWORD *)v93;
                if ( *(_QWORD *)v93 > 1u )
                {
                  if ( *(_DWORD *)(v111 + 12) == v95 && v63 == v111 )
                  {
                    v100 = v93;
                    goto LABEL_231;
                  }
                }
                else if ( !v111 )
                {
                  break;
                }
              }
LABEL_171:
              v102 = *(_QWORD *)v209.m128i_i64[1];
              sub_182CBA0(*(_QWORD *)v209.m128i_i64[1], &v224);
              sub_182CBA0(v102, &v226);
              v103 = *(_QWORD *)v209.m128i_i64[1];
              sub_182CBA0(*(_QWORD *)v209.m128i_i64[1], v211);
              sub_182CBA0(v103, v202);
LABEL_108:
              ++v62;
            }
            while ( (__int64 *)v209.m128i_i64[0] != v62 );
          }
          sub_EE4A20(":normalized-bounds");
          v65 = v212;
          v66 = v212 + 19;
          sub_14B64E0(v212 + 19, v206);
          v218 = 0;
          v67 = *v65;
          v68 = *a2;
          v219 = v67;
          if ( (*((_BYTE *)v68 + 123) & 0x20) == 0 )
          {
LABEL_117:
            v73 = v68[9];
            if ( !v73 )
              goto LABEL_173;
            v74 = v68[9];
            for ( m = *(_BYTE *)(v73 + 3) >> 6; !m; m = *(_BYTE *)(v74 + 3) >> 6 )
              v74 = *(_QWORD *)(v74 + 16);
            if ( m == 1 )
              v76 = *(_DWORD *)(v74 + 4) + 1;
            else
              v76 = m == 2 ? *(_DWORD *)(v74 + 4) - 1 : *(_DWORD *)(v74 + 4);
            if ( v33 >= v76 )
              goto LABEL_173;
            v77 = 17;
            while ( 1 )
            {
              if ( *(char *)(v73 + 3) >= 0 )
              {
                if ( v33 == *(_DWORD *)(v73 + 4) )
                {
                  v78 = (__int64 *)(v73 + 8);
LABEL_127:
                  v79 = *v78;
                  v223 = 0;
                  v224 = *v212;
                  sub_14BB8A0(v66, v79, v211, v210);
                  if ( (v200 & 8) == 0 )
                    goto LABEL_128;
                  v81 = *a2;
                  v82 = (*a2)[11];
                  if ( !v82 )
                    goto LABEL_149;
                  v83 = (*a2)[11];
                  for ( n = *(_BYTE *)(v82 + 3) >> 6; !n; n = *(_BYTE *)(v83 + 3) >> 6 )
                    v83 = *(_QWORD *)(v83 + 16);
                  if ( n == 1 )
                  {
                    v85 = *(_DWORD *)(v83 + 4) + 1;
LABEL_142:
                    if ( v33 >= v85 )
                      goto LABEL_192;
                  }
                  else
                  {
                    if ( n != 2 )
                    {
                      v85 = *(_DWORD *)(v83 + 4);
                      goto LABEL_142;
                    }
                    if ( v33 >= *(_DWORD *)(v83 + 4) - 1 )
                    {
LABEL_192:
                      v82 = 0;
                      goto LABEL_149;
                    }
                  }
                  v86 = 18;
                  while ( 2 )
                  {
                    if ( !--v86 )
                    {
                      sub_233F80((__int64 *)(*v81 + 616), (_DWORD *)v81 + 22);
                      v87 = (__int64 *)(*(_QWORD *)(v81[11] + 16) + 8LL * v33);
                      goto LABEL_148;
                    }
                    if ( *(char *)(v82 + 3) < 0 )
                    {
                      if ( *(_BYTE *)(v82 + 3) >> 6 != 2 )
                      {
                        v87 = (__int64 *)(*(_QWORD *)(v82 + 16) + 8LL * v33);
                        goto LABEL_148;
                      }
                      goto LABEL_156;
                    }
                    if ( v33 != *(_DWORD *)(v82 + 4) )
                    {
LABEL_156:
                      v82 = *(_QWORD *)(v82 + 16);
                      continue;
                    }
                    break;
                  }
                  v87 = (__int64 *)(v82 + 8);
LABEL_148:
                  v82 = *v87;
LABEL_149:
                  v88 = sub_15DE0E0(*v212, v82, v223);
                  v89 = v88;
                  if ( v88 )
                    ++*(_DWORD *)(v88 + 8);
                  v90 = v223;
                  if ( v223 )
                  {
                    v91 = v224;
                    v32 = (*(_DWORD *)(v223 + 8))-- == 1;
                    if ( v32 )
                      sub_15D7BC0(v91, v90);
                  }
                  v223 = v89;
LABEL_128:
                  v80 = *a2;
                  if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
                  {
                    v69 = v80[13];
                    v70 = 17;
                    do
                    {
                      if ( *(char *)(v69 + 3) >= 0 )
                      {
                        if ( v33 == *(_DWORD *)(v69 + 4) )
                          goto LABEL_114;
                      }
                      else if ( *(_BYTE *)(v69 + 3) >> 6 != 2 )
                      {
                        goto LABEL_114;
                      }
                      v69 = *(_QWORD *)(v69 + 16);
                      --v70;
                    }
                    while ( v70 );
                    sub_236900((_QWORD *)(*v80 + 672), v80 + 13);
                  }
LABEL_114:
                  sub_EDBFA0((int)v80);
                  v71 = v223;
                  if ( v223 && (v72 = v224, v32 = *(_DWORD *)(v223 + 8) == 1, --*(_DWORD *)(v223 + 8), v32) )
                  {
                    sub_15D7BC0(v72, v71);
                    v68 = *a2;
                    ++v33;
                    if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
                      break;
                  }
                  else
                  {
                    v68 = *a2;
                    ++v33;
                    if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
                      break;
                  }
                  goto LABEL_117;
                }
              }
              else if ( *(_BYTE *)(v73 + 3) >> 6 != 2 )
              {
                v78 = (__int64 *)(*(_QWORD *)(v73 + 16) + 8LL * v33);
                goto LABEL_127;
              }
              v73 = *(_QWORD *)(v73 + 16);
              if ( !--v77 )
              {
                sub_233F80((__int64 *)(*v68 + 616), (_DWORD *)v68 + 18);
                v78 = (__int64 *)(*(_QWORD *)(v68[9] + 16) + 8LL * v33);
                goto LABEL_127;
              }
            }
          }
LABEL_173:
          *((_DWORD *)v68 + 30) = (*((_DWORD *)v68 + 30) + 1) & 0x3FFFFFF | v68[15] & 0xFC000000;
          v104 = *a2;
          if ( v104 )
            ++*((_DWORD *)v104 + 8);
          v105 = *(_DWORD *)(v207 + 8);
          v106 = *(_DWORD *)(v207 + 12);
          if ( v105 >= v106 )
          {
            v121 = 2 * v106;
            v107 = sub_186B270(8 * v121);
            v105 = *(_DWORD *)(v207 + 8);
            v122 = *(_QWORD **)v207;
            if ( v105 )
            {
              if ( v105 - 1 <= 2 || (_QWORD *)v107 == v122 + 1 )
              {
                for ( ii = 0; ii != v105; ++ii )
                  *(_QWORD *)(v107 + ii * 8) = v122[ii];
              }
              else
              {
                v123 = 0;
                do
                {
                  *(__m128i *)(v107 + v123 * 8) = _mm_loadu_si128((const __m128i *)&v122[v123]);
                  v123 += 2;
                }
                while ( 2LL * (v105 >> 1) != v123 );
                if ( (v105 & 1) != 0 )
                  *(_QWORD *)(v107 + 8LL * (v105 & 0xFFFFFFFE)) = v122[v105 & 0xFFFFFFFE];
              }
            }
            if ( v122 != (_QWORD *)(v207 + 16) && v122 )
            {
              sub_186B220(v122);
              v105 = *(_DWORD *)(v207 + 8);
            }
            *(_QWORD *)v207 = v107;
            *(_DWORD *)(v207 + 12) = v121;
          }
          else
          {
            v107 = *(_QWORD *)v207;
          }
          v108 = v218;
          *(_QWORD *)(v107 + 8LL * v105) = v104;
          *(_DWORD *)(v207 + 8) = v105 + 1;
          if ( v108 )
          {
            v109 = v219;
            v32 = (*(_DWORD *)(v108 + 8))-- == 1;
            if ( v32 )
              sub_15D7BC0(v109, v108);
          }
          v110 = *(_QWORD *)v209.m128i_i64[1];
          sub_182CBA0(*(_QWORD *)v209.m128i_i64[1], v205);
          sub_182CBA0(v110, v217);
          sub_1695230(v206);
          return sub_EE4A00(v195);
        }
        sub_182CBA0(v59, v211);
        sub_182CBA0(v59, &v220);
LABEL_47:
        if ( v28 == ++v29 )
        {
          v5 = *a2;
          if ( *a2 )
            break;
          goto LABEL_82;
        }
      }
    }
  }
  ++*((_DWORD *)v5 + 8);
LABEL_82:
  v50 = *(_DWORD *)(v207 + 8);
  v51 = *(_DWORD *)(v207 + 12);
  if ( v50 >= v51 )
  {
    v124 = 2 * v51;
    v52 = sub_186B270(8 * v124);
    v50 = *(_DWORD *)(v207 + 8);
    v125 = *(_QWORD **)v207;
    if ( v50 )
    {
      if ( v50 - 1 <= 2 || (_QWORD *)v52 == v125 + 1 )
      {
        for ( jj = 0; jj != v50; ++jj )
          *(_QWORD *)(v52 + jj * 8) = v125[jj];
      }
      else
      {
        v126 = 0;
        do
        {
          *(__m128i *)(v52 + v126 * 8) = _mm_loadu_si128((const __m128i *)&v125[v126]);
          v126 += 2;
        }
        while ( 2LL * (v50 >> 1) != v126 );
        if ( (v50 & 1) != 0 )
          *(_QWORD *)(v52 + 8LL * (v50 & 0xFFFFFFFE)) = v125[v50 & 0xFFFFFFFE];
      }
    }
    if ( v125 != (_QWORD *)(v207 + 16) )
    {
      if ( v125 )
      {
        sub_186B220(v125);
        v50 = *(_DWORD *)(v207 + 8);
      }
    }
    *(_QWORD *)v207 = v52;
    *(_DWORD *)(v207 + 12) = v124;
  }
  else
  {
    v52 = *(_QWORD *)v207;
  }
  *(_QWORD *)(v52 + 8LL * v50) = v5;
  *(_DWORD *)(v207 + 8) = v50 + 1;
  return sub_EE4A00(&v214);
}

