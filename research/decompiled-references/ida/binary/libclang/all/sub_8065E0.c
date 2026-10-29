_QWORD *__fastcall sub_8065E0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  unsigned __int8 v13; // al
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 *v20; // r13
  __int64 v21; // rdx
  size_t v22; // rbp
  unsigned __int64 v23; // rax
  _BYTE *v24; // r14
  __int64 v25; // r9
  __int64 v26; // rax
  _BYTE *v27; // rdx
  unsigned __int64 v28; // r8
  char v29; // si
  unsigned __int64 v30; // rax
  int v31; // ecx
  _QWORD *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  _BYTE *v37; // r12
  __int64 v38; // rdi
  char *v39; // rbp
  void *v40; // rdi
  char v41; // al
  unsigned __int64 v42; // r8
  size_t v43; // rbp
  _BYTE *v44; // r15
  void *v45; // rdi
  __int64 v46; // rax
  _BYTE *v47; // rax
  char v48; // dl
  __int64 v49; // rsi
  char *v50; // rax
  char *v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  char *v54; // rdx
  __int64 v55; // r13
  __int64 **v56; // rdi
  __int64 v57; // rdi
  _BYTE *v58; // rax
  char *v59; // rax
  char *v60; // rax
  _BYTE *v61; // r15
  __int64 v62; // rdi
  char *v63; // rbp
  __int64 v64; // rax
  unsigned __int64 v65; // rbp
  void *v66; // rdi
  __int64 v67; // rdi
  _BYTE *v68; // r12
  char *v69; // rbp
  __int64 v70; // rax
  unsigned __int64 v71; // rdi
  __int64 v72; // rbp
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  void *v80; // rdx
  __int64 v81; // rax
  size_t v82; // rbp
  _BYTE *v83; // rdi
  const char *v84; // rsi
  int v85; // eax
  _BYTE *v86; // rdx
  _QWORD *v87; // rbp
  unsigned int v88; // r13d
  __int64 v89; // rdx
  _BYTE *v90; // rax
  unsigned __int8 v91; // al
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  int v94; // eax
  unsigned __int64 v95; // r12
  int v96; // eax
  __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 *v100; // rdx
  char *v101; // rdx
  __int64 v102; // rbx
  __int64 v103; // r15
  unsigned __int64 v104; // rax
  char *v105; // rdx
  __int64 v106; // rbp
  __int64 v107; // rbx
  int v108; // r12d
  __int64 (__fastcall ***v109)(); // rdi
  char *v110; // rdx
  unsigned __int8 v111; // al
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned int *v114; // rsi
  size_t v115; // rdx
  const void *v116; // rsi
  __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r12
  __int64 v121; // rbx
  __int64 v122; // r15
  __int64 (__fastcall ***v123)(); // rdi
  char *v124; // rdx
  __int64 v125; // rax
  unsigned __int64 v126; // rax
  unsigned int *v127; // rsi
  size_t v128; // rbp
  const void *v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rdx
  _QWORD *v132; // rax
  __int64 v133; // rax
  size_t v134; // r12
  size_t *v135; // rdx
  _BYTE *v136; // r8
  size_t v137; // rax
  size_t v138; // rax
  _BYTE *v139; // r12
  __int64 v140; // rdi
  char *v141; // rbp
  _QWORD *v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rdi
  unsigned __int64 v145; // rax
  __int64 v146; // rdi
  void *v147; // rax
  unsigned __int64 *v148; // rax
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // rax
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 (__fastcall ***v154)(); // rdi
  __int64 v155; // rdi
  _BYTE *v156; // rax
  _QWORD *v157; // rax
  _BYTE *v158; // rax
  unsigned __int64 *v159; // rdx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rdx
  _WORD *v162; // rax
  __int64 v163; // rax
  _BYTE *v164; // rax
  __m128i v165; // xmm0
  unsigned __int8 v166; // [rsp+0h] [rbp-608h]
  char *v167; // [rsp+0h] [rbp-608h]
  size_t v168; // [rsp+0h] [rbp-608h]
  _QWORD *v169; // [rsp+0h] [rbp-608h]
  char *v170; // [rsp+10h] [rbp-5F8h]
  __int64 v171; // [rsp+10h] [rbp-5F8h]
  char *v172; // [rsp+20h] [rbp-5E8h]
  __int64 v173; // [rsp+40h] [rbp-5C8h]
  __int64 v174; // [rsp+48h] [rbp-5C0h]
  int v175; // [rsp+58h] [rbp-5B0h]
  __int64 v176; // [rsp+68h] [rbp-5A0h]
  _QWORD *v177; // [rsp+68h] [rbp-5A0h]
  __int64 v178; // [rsp+70h] [rbp-598h]
  _QWORD v179[2]; // [rsp+80h] [rbp-588h] BYREF
  _QWORD v180[2]; // [rsp+90h] [rbp-578h] BYREF
  void *v181; // [rsp+A0h] [rbp-568h] BYREF
  __m128 v182; // [rsp+A8h] [rbp-560h] BYREF
  void *v183; // [rsp+C0h] [rbp-548h] BYREF
  __int64 v184; // [rsp+C8h] [rbp-540h]
  _QWORD v185[2]; // [rsp+D0h] [rbp-538h] BYREF
  __int64 *v186; // [rsp+E0h] [rbp-528h] BYREF
  int v187; // [rsp+E8h] [rbp-520h]
  __int128 v188; // [rsp+F0h] [rbp-518h]
  __int64 v189; // [rsp+100h] [rbp-508h]
  char v190; // [rsp+108h] [rbp-500h]
  int v191; // [rsp+10Ch] [rbp-4FCh]
  _BYTE **v192; // [rsp+110h] [rbp-4F8h]
  __int64 *v193; // [rsp+120h] [rbp-4E8h] BYREF
  int v194; // [rsp+128h] [rbp-4E0h]
  __int128 v195; // [rsp+130h] [rbp-4D8h]
  _QWORD *v196; // [rsp+140h] [rbp-4C8h]
  char v197; // [rsp+148h] [rbp-4C0h]
  int v198; // [rsp+14Ch] [rbp-4BCh]
  void **v199; // [rsp+150h] [rbp-4B8h]
  __int64 (__fastcall **v200)(); // [rsp+160h] [rbp-4A8h] BYREF
  int v201; // [rsp+168h] [rbp-4A0h]
  __int128 v202; // [rsp+170h] [rbp-498h]
  _BYTE *v203; // [rsp+180h] [rbp-488h]
  char v204; // [rsp+188h] [rbp-480h]
  int v205; // [rsp+18Ch] [rbp-47Ch]
  void **v206; // [rsp+190h] [rbp-478h]
  __int64 (__fastcall **v207)(); // [rsp+1A0h] [rbp-468h] BYREF
  int v208; // [rsp+1A8h] [rbp-460h]
  __int128 v209; // [rsp+1B0h] [rbp-458h]
  void *dest; // [rsp+1C0h] [rbp-448h]
  char v211; // [rsp+1C8h] [rbp-440h]
  int v212; // [rsp+1CCh] [rbp-43Ch]
  void **v213; // [rsp+1D0h] [rbp-438h]
  __int64 *v214; // [rsp+1E0h] [rbp-428h] BYREF
  int v215; // [rsp+1E8h] [rbp-420h]
  __int128 v216; // [rsp+1F0h] [rbp-418h]
  char *v217; // [rsp+200h] [rbp-408h]
  char v218; // [rsp+208h] [rbp-400h]
  int v219; // [rsp+20Ch] [rbp-3FCh]
  void **v220; // [rsp+210h] [rbp-3F8h]
  void *ptr; // [rsp+220h] [rbp-3E8h] BYREF
  __int64 v222; // [rsp+228h] [rbp-3E0h]
  _BYTE v223[64]; // [rsp+230h] [rbp-3D8h] BYREF
  _BYTE *v224; // [rsp+270h] [rbp-398h] BYREF
  __m128i si128; // [rsp+278h] [rbp-390h]
  _BYTE v226[264]; // [rsp+288h] [rbp-380h] BYREF
  void *v227; // [rsp+390h] [rbp-278h] BYREF
  _BYTE v228[24]; // [rsp+398h] [rbp-270h] BYREF
  __int64 v229; // [rsp+3B0h] [rbp-258h]
  char v230; // [rsp+3B8h] [rbp-250h]
  int v231; // [rsp+3BCh] [rbp-24Ch]
  void **p_src; // [rsp+3C0h] [rbp-248h]
  void *src; // [rsp+4B0h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+4B8h] [rbp-150h] BYREF
  char v235; // [rsp+4C8h] [rbp-140h] BYREF
  __int16 v236; // [rsp+4D0h] [rbp-138h]

  v6 = a3;
  v7 = (_QWORD *)a1;
  v12 = sub_798D40(a3);
  v13 = *(_BYTE *)(v6 + 28) & 0x7F;
  if ( a2 == 3 )
  {
    if ( (unsigned int)v13 - 16 > 0x3E )
    {
LABEL_4:
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a1 + 16;
      *(_BYTE *)(a1 + 16) = 0;
      return v7;
    }
    v15 = sub_6CE680(v12, 0);
    if ( !(unsigned __int8)sub_A54240(v15, v6) )
    {
      v18 = (_BYTE *)(a1 + 16);
      v19 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v6 + 40) & 7) != 0 )
        v19 = 0;
      v20 = *(__int64 **)(v19 + 16);
      v21 = *v20;
      *v7 = v18;
      v22 = (unsigned int)v21;
      src = (void *)(unsigned int)v21;
      v23 = (unsigned int)v21;
      if ( (v21 & 0xFFFFFFF0) != 0 )
      {
        v76 = std::string::_M_create();
        *v7 = v76;
        v18 = (_BYTE *)v76;
        v23 = (unsigned __int64)src;
        v7[2] = src;
      }
      if ( v22 == 1 )
      {
        *v18 = *((_BYTE *)v20 + 16);
        v23 = (unsigned __int64)src;
        v18 = (_BYTE *)*v7;
      }
      else if ( v22 )
      {
        memcpy(v18, v20 + 2, v22);
        v23 = (unsigned __int64)src;
        v18 = (_BYTE *)*v7;
      }
      v7[1] = v23;
      v18[v23] = 0;
LABEL_16:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v7;
    }
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
    v227 = &off_49DA340;
    p_src = &src;
    src = &v235;
    *(_DWORD *)v228 = 2;
    v230 = 0;
    v231 = 1;
    v229 = 0;
    *(_OWORD *)&v228[8] = 0;
    sub_2623850(&v227, 0, 0, 0, v16, v17);
    v41 = *(_BYTE *)(v6 + 28) & 0x7F;
    if ( v41 == 36 )
    {
      v42 = v6 & 0xFFFFFFFFFFFFFFF8LL | 1;
      goto LABEL_53;
    }
    if ( v41 == 34 )
    {
      v42 = v6 & 0xFFFFFFFFFFFFFFF8LL | 2;
      goto LABEL_53;
    }
    if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
      goto LABEL_140;
    v148 = sub_79A2B0(v6);
    v149 = *v148;
    v150 = *v148 + 8LL * *((unsigned int *)v148 + 2);
    if ( v149 < v150 )
    {
      while ( *(_WORD *)(*(_QWORD *)v149 + 32LL) != 157 )
      {
        v149 += 8LL;
        if ( v150 == v149 )
          goto LABEL_140;
      }
    }
    else
    {
      if ( v149 == v150 )
        goto LABEL_140;
      while ( *(_WORD *)(*(_QWORD *)v150 + 32LL) != 157 )
      {
        v150 += 8LL;
        if ( v149 == v150 )
          goto LABEL_140;
      }
    }
    if ( v149 == v150 )
    {
LABEL_140:
      v42 = v6;
      goto LABEL_53;
    }
    if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
      goto LABEL_275;
    v159 = sub_79A2B0(v6);
    v160 = *v159;
    v161 = *v159 + 8LL * *((unsigned int *)v159 + 2);
    if ( v160 < v161 )
    {
      while ( *(_WORD *)(*(_QWORD *)v160 + 32LL) != 157 )
      {
        v160 += 8LL;
        if ( v161 == v160 )
          goto LABEL_275;
      }
    }
    else
    {
      if ( v160 == v161 )
        goto LABEL_275;
      while ( *(_WORD *)(*(_QWORD *)v161 + 32LL) != 157 )
      {
        v161 += 8LL;
        if ( v160 == v161 )
          goto LABEL_275;
      }
    }
    if ( v160 != v161 )
    {
      v151 = v6 & 0xFFFFFFFFFFFFFFF8LL | ((*(_BYTE *)(sub_798D60(v6) + 89) & 4) == 0);
      goto LABEL_276;
    }
LABEL_275:
    v151 = v6;
LABEL_276:
    v42 = v151;
LABEL_53:
    sub_A54C00(v15, v42, 0, &v227);
    v43 = n[0];
    if ( !n[0] )
    {
      v47 = (_BYTE *)(a1 + 16);
      *(_QWORD *)a1 = a1 + 16;
      goto LABEL_58;
    }
    v44 = src;
    if ( *(_BYTE *)src != 1 )
    {
      v45 = (void *)(a1 + 16);
      v224 = (_BYTE *)n[0];
      *v7 = v7 + 2;
      if ( v43 <= 0xF )
      {
        if ( v43 == 1 )
        {
          *((_BYTE *)v7 + 16) = *v44;
          v47 = (char *)v7 + 17;
          goto LABEL_58;
        }
      }
      else
      {
        v46 = std::string::_M_create();
        *v7 = v46;
        v45 = (void *)v46;
        v7[2] = v224;
      }
      memcpy(v45, v44, v43);
      v43 = (size_t)v224;
      v47 = &v224[*v7];
LABEL_58:
      v7[1] = v43;
      *v47 = 0;
      goto LABEL_59;
    }
    v82 = n[0] - 1;
    v83 = (_BYTE *)(a1 + 16);
    *v7 = v7 + 2;
    v224 = (_BYTE *)v82;
    if ( v82 > 0xF )
    {
      v152 = std::string::_M_create();
      *v7 = v152;
      v83 = (_BYTE *)v152;
      v7[2] = v224;
    }
    else
    {
      if ( v82 == 1 )
      {
        *((_BYTE *)v7 + 16) = v44[1];
        goto LABEL_148;
      }
      if ( !v82 )
      {
LABEL_148:
        v7[1] = v82;
        v83[v82] = 0;
LABEL_59:
        v227 = &qword_4A6EA70[2];
        sub_2623770(&v227);
        if ( src != &v235 )
          free(src);
        goto LABEL_16;
      }
    }
    memcpy(v83, v44 + 1, v82);
    v82 = (size_t)v224;
    v83 = (_BYTE *)*v7;
    goto LABEL_148;
  }
  switch ( v13 )
  {
    case 0u:
      if ( a2 != 6 )
        goto LABEL_4;
      *(_QWORD *)a1 = a1 + 16;
      strcpy((char *)(a1 + 16), "top level");
      *(_QWORD *)(a1 + 8) = 9;
      return v7;
    case 7u:
      v70 = *(_QWORD *)(sub_79A2E0(v6 + 40) + 16);
      v71 = v70 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v70 & 4) != 0 )
        v71 = *(_QWORD *)v71;
      v72 = 65922;
LABEL_104:
      v73 = *(_BYTE *)(v71 + 8) & 0x7F;
      if ( (unsigned __int8)v73 <= 0x10u )
        goto LABEL_105;
      while ( (((_BYTE)v73 + 96) & 0x7Fu) > 5 )
      {
        while ( 2 )
        {
          v74 = *(_QWORD *)(sub_79A2E0(v71) + 16);
          v71 = v74 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v74 & 4) == 0 )
            goto LABEL_104;
          v71 = *(_QWORD *)v71;
          v73 = *(_BYTE *)(v71 + 8) & 0x7F;
          if ( (unsigned __int8)v73 <= 0x10u )
          {
LABEL_105:
            if ( !_bittest64(&v72, v73) || (_BYTE)v73 == 7 )
              continue;
            goto LABEL_110;
          }
          break;
        }
      }
LABEL_110:
      v75 = sub_79A2E0(v71);
      sub_8065E0(v7, a2, v75, 0);
      return v7;
    case 8u:
      v64 = *(_QWORD *)(v6 + 16);
      v65 = v64 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v64 & 4) != 0 )
        v65 = *(_QWORD *)v65;
      if ( (*(_BYTE *)(v65 + 8) & 0x7F) == 0 || (*(_BYTE *)(v65 + 8) & 0x7F) == 0x16 )
        goto LABEL_4;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
      v186 = (__int64 *)&off_49DA340;
      v192 = &v224;
      v224 = v226;
      v187 = 2;
      v190 = 0;
      v191 = 1;
      v189 = 0;
      v188 = 0;
      sub_2623850(&v186, 0, 0, 0, v10, v11);
      if ( (*(_BYTE *)(v65 + 8) & 0x7F) == 8 )
      {
        sub_8065E0(&src, a2, v65 - 40, 0);
        sub_26240F0(&v186, src, n[0]);
        v66 = src;
        if ( src == &n[1] )
          goto LABEL_94;
        goto LABEL_93;
      }
      v78 = sub_79A2E0(v65);
      if ( v78 )
      {
        sub_8065E0(&src, a2, v78, 0);
        v79 = sub_26240F0(&v186, src, n[0]);
        v80 = *(void **)(v79 + 32);
        if ( *(_QWORD *)(v79 + 24) - (_QWORD)v80 <= 0xCu )
        {
          sub_26240F0(v79, "_block_invoke", 13);
        }
        else
        {
          qmemcpy(v80, "_block_invoke", 13);
          *(_QWORD *)(v79 + 32) += 13LL;
        }
        v66 = src;
        if ( src != &n[1] )
LABEL_93:
          operator delete(v66, n[1] + 1);
      }
LABEL_94:
      v67 = (__int64)(v7 + 2);
      v68 = *v192;
      v69 = v192[1];
      *v7 = v7 + 2;
      if ( !v68 && v69 )
        goto LABEL_359;
      src = v69;
      if ( (unsigned __int64)v69 > 0xF )
      {
        v81 = std::string::_M_create();
        *v7 = v81;
        v67 = v81;
        v7[2] = src;
      }
      else
      {
        if ( v69 == (_BYTE *)&dword_0 + 1 )
        {
          *((_BYTE *)v7 + 16) = *v68;
          goto LABEL_99;
        }
        if ( !v69 )
          goto LABEL_99;
      }
      memcpy((void *)v67, v68, (size_t)v69);
      v69 = (char *)src;
      v67 = *v7;
LABEL_99:
      v7[1] = v69;
      v69[v67] = 0;
      v186 = &qword_4A6EA70[2];
      sub_2623770(&v186);
      v40 = v224;
      if ( v224 == v226 )
        return v7;
      goto LABEL_86;
    case 0x10u:
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
      v214 = (__int64 *)&off_49DA340;
      src = &v235;
      v215 = 2;
      v218 = 0;
      v219 = 1;
      v217 = nullptr;
      v220 = &src;
      v216 = 0;
      sub_2623850(&v214, 0, 0, 0, v10, v11);
      if ( (*(_BYTE *)(v6 + 58) & 2) != 0 )
      {
        v48 = 45;
        v49 = 45;
      }
      else
      {
        v48 = 43;
        v49 = 43;
      }
      v50 = v217;
      if ( (unsigned __int64)v217 >= *((_QWORD *)&v216 + 1) )
      {
        sub_26239D0(&v214, v49);
      }
      else
      {
        ++v217;
        *v50 = v48;
      }
      v51 = v217;
      if ( (unsigned __int64)v217 >= *((_QWORD *)&v216 + 1) )
      {
        sub_26239D0(&v214, 91);
      }
      else
      {
        ++v217;
        *v51 = 91;
      }
      v52 = sub_7B7710(v6);
      if ( v52 )
        sub_77A870(v52, (__int64)&v214);
      v53 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
        v53 = *(_QWORD *)v53;
      if ( (*(_BYTE *)(v53 + 8) & 0x7F) == 0x14 )
      {
        v54 = v217;
        v55 = v53 - 48;
        if ( (unsigned __int64)v217 >= *((_QWORD *)&v216 + 1) )
        {
          v56 = (__int64 **)sub_26239D0(&v214, 40);
        }
        else
        {
          v56 = &v214;
          ++v217;
          *v54 = 40;
        }
        v57 = sub_7B8FB0((__int64)v56, v55);
        v58 = *(_BYTE **)(v57 + 32);
        if ( (unsigned __int64)v58 >= *(_QWORD *)(v57 + 24) )
        {
          sub_26239D0(v57, 41);
        }
        else
        {
          *(_QWORD *)(v57 + 32) = v58 + 1;
          *v58 = 41;
        }
      }
      v59 = v217;
      if ( (unsigned __int64)v217 >= *((_QWORD *)&v216 + 1) )
      {
        sub_26239D0(&v214, 32);
      }
      else
      {
        ++v217;
        *v59 = 32;
      }
      v227 = *(void **)(v6 + 40);
      sub_C878B0(&v227, &v214);
      v60 = v217;
      if ( (unsigned __int64)v217 >= *((_QWORD *)&v216 + 1) )
      {
        sub_26239D0(&v214, 93);
      }
      else
      {
        ++v217;
        *v60 = 93;
      }
      v61 = src;
      v62 = (__int64)(v7 + 2);
      v63 = (char *)n[0];
      *v7 = v7 + 2;
      if ( !v61 && v63 )
        goto LABEL_359;
      v227 = v63;
      if ( (unsigned __int64)v63 > 0xF )
      {
        v77 = std::string::_M_create();
        *v7 = v77;
        v62 = v77;
        v7[2] = v227;
      }
      else
      {
        if ( v63 == (_BYTE *)&dword_0 + 1 )
        {
          *((_BYTE *)v7 + 16) = *v61;
          goto LABEL_85;
        }
        if ( !v63 )
          goto LABEL_85;
      }
      memcpy((void *)v62, v61, (size_t)v63);
      v63 = (char *)v227;
      v62 = *v7;
LABEL_85:
      v7[1] = v63;
      v63[v62] = 0;
      v214 = &qword_4A6EA70[2];
      sub_2623770(&v214);
      v40 = src;
      if ( src != &v235 )
        goto LABEL_86;
      return v7;
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
      v24 = *(_BYTE **)(v12 + 2160);
      if ( a2 <= 1 )
      {
        if ( (*v24 & 0x20) == 0 )
        {
LABEL_117:
          sub_791DD0(a1, (unsigned __int64 *)(v6 + 40), v8, v9, v10, v11);
          return v7;
        }
      }
      else
      {
        if ( a2 == 2 )
        {
          if ( !a4 || (*v24 & 0x20) != 0 )
            goto LABEL_117;
          goto LABEL_21;
        }
        if ( a2 - 6 <= 1 || a2 == 4 || a2 == 5 )
          goto LABEL_21;
      }
      if ( !a4 )
        goto LABEL_117;
LABEL_21:
      v199 = &v227;
      v227 = &v228[16];
      v193 = (__int64 *)&off_49DA340;
      *(__m128i *)v228 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
      v194 = 2;
      v197 = 0;
      v198 = 1;
      v196 = nullptr;
      v195 = 0;
      sub_2623850(&v193, 0, 0, 0, v10, v11);
      if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
        if ( ((*(_BYTE *)(v26 + 82) & 0xC) != 0 || (unsigned int)sub_7A5910(v26)) && a2 != 7 )
        {
          if ( *((_QWORD *)&v195 + 1) - (_QWORD)v196 <= 7u )
            sub_26240F0(&v193, "virtual ", 8);
          else
            *v196++ = 0x206C617574726976LL;
        }
        if ( (unsigned __int8)sub_7A4F00((_QWORD *)v6) )
        {
          v142 = v196;
          if ( *((_QWORD *)&v195 + 1) - (_QWORD)v196 <= 6u )
          {
            sub_26240F0(&v193, "static ", 7);
          }
          else
          {
            *(_DWORD *)v196 = 1952543859;
            *(_DWORD *)((char *)v142 + 3) = 543385972;
            v196 = (_QWORD *)((char *)v196 + 7);
          }
        }
      }
      v27 = *(_BYTE **)(v12 + 2160);
      v28 = (unsigned __int64)((*v27 & 2) != 0) << 28;
      v29 = v27[1];
      v30 = ((unsigned __int64)((v27[3] & 8) != 0) << 33)
          | ((unsigned __int64)((v29 & 0x10) == 0) << 30)
          | ((unsigned __int64)((v29 & 8) == 0) << 29)
          | v28
          | ((unsigned __int64)((v29 & 0x10) != 0) << 27)
          | ((unsigned __int64)(*v27 & 1) << 26)
          | ((unsigned __int64)((v29 & 8) != 0) << 25)
          | ((unsigned __int64)((*(_WORD *)v27 & 0x1008) != 0) << 24)
          | ((unsigned __int64)((v29 & 8) != 0) << 9)
          | 0x660800442002LL
          | ((unsigned __int64)((v27[3] & 4) != 0) << 23);
      v31 = *(_DWORD *)v27;
      v180[1] = v27;
      v179[0] = v179[0] & 0xFFFF000000000000LL
              | ((unsigned __int64)(v27[89] & 1) << 47)
              | ((unsigned __int64)((v31 & 0x10000080) == 128) << 34)
              | v30;
      v180[0] = &off_47DA938;
      v179[1] = v180;
      if ( a2 == 1 && a4 )
        BYTE1(v179[0]) = BYTE1(v179[0]) & 0xFD | (2 * ((*v24 & 0x20) == 0));
      v181 = &v182.m128_u16[4];
      v206 = &v181;
      v200 = &off_49DA2C8;
      v202 = 0;
      v182.m128_u64[0] = 0;
      v182.m128_i8[8] = 0;
      v201 = 0;
      v204 = 0;
      v205 = 1;
      v203 = nullptr;
      sub_2623850(&v200, 0, 0, 0, v28, v25);
      v32 = sub_789AD0(v6, 1);
      if ( !v32 )
        v32 = (_QWORD *)v6;
      if ( (v32[6] & 0xFFFFFFFFFFFFFFF8LL) <= 0xF
        || (v33 = *(_QWORD *)(v32[6] & 0xFFFFFFFFFFFFFFF0LL), (v174 = v33) == 0) )
      {
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = a1 + 16;
        *(_BYTE *)(a1 + 16) = 0;
        goto LABEL_47;
      }
      if ( (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25 > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
          v174 = 0;
        else
          v174 = sub_B0D320(v33);
      }
      v34 = 0;
      v173 = 0;
      if ( (*(_BYTE *)(v6 + 82) & 0x20) != 0 )
      {
        if ( *(_BYTE *)(v174 + 16) == 26 )
          v34 = v174;
        v173 = v34;
      }
      if ( a2 - 4 <= 1 )
      {
        switch ( (*(_WORD *)(v174 + 18) >> 3) & 0x1F )
        {
          case 0:
            v84 = "__cdecl ";
            goto LABEL_150;
          case 1:
            v84 = "__stdcall ";
            goto LABEL_150;
          case 2:
            v84 = "__fastcall ";
            goto LABEL_150;
          case 3:
            v84 = "__thiscall ";
            goto LABEL_150;
          case 4:
            v84 = "__vectorcall ";
            goto LABEL_150;
          case 8:
            v84 = "__regcall ";
LABEL_150:
            sub_5FF0F0((__int64)&v200, v84);
            sub_77FFB0((_QWORD *)v6, (__int64)&v200, (__int64)v179);
            break;
          default:
            sub_77FFB0((_QWORD *)v6, (__int64)&v200, (__int64)v179);
            break;
        }
      }
      else
      {
        sub_77FFB0((_QWORD *)v6, (__int64)&v200, (__int64)v179);
        if ( a2 == 1 )
        {
          sub_26240F0(&v193, v181, v182.m128_u64[0]);
          v37 = v227;
          v38 = a1 + 16;
          v39 = *(char **)v228;
          *v7 = v7 + 2;
          if ( v37 || !v39 )
          {
            src = v39;
            if ( (unsigned __int64)v39 > 0xF )
            {
              v163 = std::string::_M_create();
              *v7 = v163;
              v38 = v163;
              v7[2] = src;
            }
            else
            {
              if ( v39 == (_BYTE *)&dword_0 + 1 )
              {
                *((_BYTE *)v7 + 16) = *v37;
                goto LABEL_46;
              }
              if ( !v39 )
              {
LABEL_46:
                v7[1] = v39;
                v39[v38] = 0;
                goto LABEL_47;
              }
            }
            memcpy((void *)v38, v37, (size_t)v39);
            v39 = (char *)src;
            v38 = *v7;
            goto LABEL_46;
          }
LABEL_359:
          std::__throw_logic_error("basic_string: construction from null is not valid");
        }
      }
      if ( *((_BYTE **)&v202 + 1) == v203 )
        sub_26240F0(&v200, "(", 1);
      else
        *v203++ = 40;
      if ( !v173 )
        goto LABEL_166;
      v85 = sub_77F620((__int64)v32);
      if ( v85 )
      {
        v175 = v85;
        v86 = *(_BYTE **)(*(_QWORD *)v32[15] + 48LL);
        v236 = 257;
        v224 = v86;
        sub_B2AEC0(&v224, &v200, v179, &src, 0);
        if ( v175 != 1 )
        {
          v176 = v6;
          v87 = v32;
          v88 = 1;
          do
          {
            if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 1u )
            {
              sub_26240F0(&v200, ", ", 2);
            }
            else
            {
              *(_WORD *)v203 = 8236;
              v203 += 2;
            }
            v89 = v88++;
            v224 = *(_BYTE **)(*(_QWORD *)(v87[15] + 8 * v89) + 48LL);
            v236 = 257;
            sub_B2AEC0(&v224, &v200, v179, &src, 0);
          }
          while ( v175 != v88 );
          v32 = v87;
          v6 = v176;
        }
      }
      if ( (*(_BYTE *)(v173 + 23) & 0x10) != 0 )
      {
        if ( (unsigned int)sub_77F620(v6) )
          sub_5FF0F0((__int64)&v200, ", ");
        v162 = v203;
        if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 2u )
        {
          sub_26240F0(&v200, "...", 3);
          v90 = v203;
        }
        else
        {
          v203[2] = 46;
          *v162 = 11822;
          v90 = v203 + 3;
          v203 += 3;
        }
      }
      else
      {
        if ( (a2 - 4 <= 1 || (*(_BYTE *)(*(_QWORD *)(v12 + 2160) + 1LL) & 8) == 0)
          && !(unsigned int)sub_77F620((__int64)v32) )
        {
          sub_5FF0F0((__int64)&v200, "void");
        }
LABEL_166:
        v90 = v203;
      }
      if ( *((_BYTE **)&v202 + 1) == v90 )
      {
        sub_26240F0(&v200, ")", 1);
      }
      else
      {
        *v90 = 41;
        ++v203;
      }
      if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 33 > 3 )
        goto LABEL_177;
      if ( *(_BYTE *)(v173 + 16) == 26 )
      {
        v166 = *(_BYTE *)(v173 + 20);
        v91 = (v166 >> 2) & 7;
        if ( (v166 & 4) == 0 )
          goto LABEL_172;
        goto LABEL_310;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v173 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
        goto LABEL_173;
      if ( sub_B0D320(v173) && (*(_BYTE *)(v173 + 20) & 4) != 0 )
      {
LABEL_310:
        v158 = v203;
        if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 5u )
        {
          sub_26240F0(&v200, " const", 6);
        }
        else
        {
          v36 = 29811;
          *(_DWORD *)v203 = 1852793632;
          *((_WORD *)v158 + 2) = 29811;
          v203 += 6;
        }
      }
      if ( *(_BYTE *)(v173 + 16) == 26 )
      {
        v91 = (*(_BYTE *)(v173 + 20) >> 2) & 7;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v173 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_B0D320(v173) )
          goto LABEL_173;
        v91 = (*(_BYTE *)(v173 + 20) >> 2) & 7;
      }
LABEL_172:
      if ( v91 > 3u )
      {
        v157 = v203;
        if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 8u )
        {
          sub_26240F0(&v200, " volatile", 9);
        }
        else
        {
          v203[8] = 101;
          *v157 = 0x6C6974616C6F7620LL;
          v203 += 9;
        }
      }
LABEL_173:
      v92 = *(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v93 = *(_QWORD *)v92;
      if ( *(_BYTE *)(*(_QWORD *)v92 + 16LL) != 26 )
        v93 = sub_B0D320(v93);
      v94 = *(_BYTE *)(v93 + 20) & 3;
      if ( v94 == 1 )
      {
        if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 1u )
        {
          sub_26240F0(&v200, " &", 2);
        }
        else
        {
          *(_WORD *)v203 = 9760;
          v203 += 2;
        }
      }
      else if ( v94 == 2 )
      {
        v164 = v203;
        if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 2u )
        {
          sub_26240F0(&v200, " &&", 3);
        }
        else
        {
          *(_WORD *)v203 = 9760;
          v164[2] = 38;
          v203 += 3;
        }
      }
LABEL_177:
      ptr = v223;
      v222 = 0x800000000LL;
      v95 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
        v95 = *(_QWORD *)v95;
LABEL_179:
      if ( v95 )
      {
        do
        {
          v96 = *(_BYTE *)(v95 + 8) & 0x7F;
          if ( (unsigned int)(v96 - 16) > 0x3E )
            break;
          if ( (unsigned int)(v96 - 58) <= 1 && (*(_BYTE *)(v95 + 116) & 7) != 2 )
          {
            v97 = (unsigned int)v222;
            v98 = (unsigned int)v222 + 1LL;
            if ( HIDWORD(v222) < v98 )
            {
              sub_25D6060(&ptr, v223, v98, 8);
              v97 = (unsigned int)v222;
            }
            *((_QWORD *)ptr + v97) = v95 - 64;
            LODWORD(v222) = v222 + 1;
          }
          v99 = *(_QWORD *)(sub_79A2E0(v95) + 16);
          v100 = (unsigned __int64 *)(v99 & 0xFFFFFFFFFFFFFFF8LL);
          v95 = v99 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v99 & 4) == 0 )
            goto LABEL_179;
          v95 = *v100;
        }
        while ( *v100 );
      }
      v183 = v185;
      v213 = &v183;
      v207 = &off_49DA2C8;
      v184 = 0;
      LOBYTE(v185[0]) = 0;
      v208 = 0;
      v211 = 0;
      v212 = 1;
      dest = nullptr;
      v209 = 0;
      sub_2623850(&v207, 0, 0, 0, v35, v36);
      v101 = (char *)ptr + 8 * (unsigned int)v222;
      if ( ptr != v101 )
      {
        v172 = (char *)ptr;
        v177 = v7;
        v178 = v6;
        do
        {
          v102 = *((_QWORD *)v101 - 1);
          v167 = v101;
          v103 = 0;
          v104 = sub_7D65F0(v102);
          v105 = v167;
          v106 = *(_QWORD *)(v104 + 56);
          v107 = *(_QWORD *)(v102 + 168) + 8LL;
          v108 = *(_DWORD *)(v106 + 20) & 0x1FFFFFFF;
          if ( v108 )
          {
            v170 = v167;
            do
            {
              v112 = *(_QWORD *)(*(_QWORD *)(v106 + 8 * v103 + 24) + 40LL);
              if ( (v112 & 7) == 0 )
              {
                v113 = v112 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v113 )
                {
                  v114 = *(unsigned int **)(v113 + 16);
                  v115 = *v114;
                  v116 = v114 + 4;
                  if ( v115 )
                  {
                    if ( *((_QWORD *)&v209 + 1) - (_QWORD)dest >= v115 )
                    {
                      v168 = v115;
                      memcpy(dest, v116, v115);
                      v109 = &v207;
                      v110 = (char *)dest + v168;
                      dest = (char *)dest + v168;
                    }
                    else
                    {
                      v117 = sub_26240F0(&v207, v116, v115);
                      v110 = *(char **)(v117 + 32);
                      v109 = (__int64 (__fastcall ***)())v117;
                    }
                    if ( (unsigned __int64)((char *)v109[3] - v110) <= 2 )
                    {
                      sub_26240F0(v109, " = ", 3);
                    }
                    else
                    {
                      v110[2] = 32;
                      *(_WORD *)v110 = 15648;
                      v109[4] = (__int64 (__fastcall **)())((char *)v109[4] + 3);
                    }
                    v111 = sub_7D2C40((__int64)v179, v106, v103);
                    sub_AFE2C0(v107, v179, &v207, v111);
                    if ( *((_QWORD *)&v209 + 1) - (_QWORD)dest <= 1u )
                    {
                      sub_26240F0(&v207, ", ", 2);
                    }
                    else
                    {
                      *(_WORD *)dest = 8236;
                      dest = (char *)dest + 2;
                    }
                  }
                }
              }
              ++v103;
              v107 += 24;
            }
            while ( v108 != (_DWORD)v103 );
            v105 = v170;
          }
          v101 = v105 - 8;
        }
        while ( v172 != v101 );
        v7 = v177;
        v6 = v178;
      }
      v118 = sub_780F50(v6);
      if ( v118 )
      {
        if ( (*(_QWORD *)(v118 + 16) & 6LL) != 2 )
        {
          v119 = *(_QWORD *)((*(_QWORD *)(v118 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 56);
          if ( (*(_DWORD *)(v119 + 20) & 0x1FFFFFFF) != 0 )
          {
            v169 = v7;
            v120 = *(_QWORD *)(v118 + 24) + 8LL;
            v121 = v119 + 24;
            v171 = v6;
            v122 = v119 + 8LL * ((*(_DWORD *)(v119 + 20) & 0x1FFFFFFFu) - 1) + 32;
            do
            {
              v125 = *(_QWORD *)(*(_QWORD *)v121 + 40LL);
              if ( (v125 & 7) == 0 )
              {
                v126 = v125 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v126 )
                {
                  v127 = *(unsigned int **)(v126 + 16);
                  v128 = *v127;
                  v129 = v127 + 4;
                  if ( v128 )
                  {
                    if ( *((_QWORD *)&v209 + 1) - (_QWORD)dest >= v128 )
                    {
                      memcpy(dest, v129, v128);
                      v123 = &v207;
                      v124 = (char *)dest + v128;
                      dest = (char *)dest + v128;
                    }
                    else
                    {
                      v130 = sub_26240F0(&v207, v129, v128);
                      v124 = *(char **)(v130 + 32);
                      v123 = (__int64 (__fastcall ***)())v130;
                    }
                    if ( (unsigned __int64)((char *)v123[3] - v124) <= 2 )
                    {
                      sub_26240F0(v123, " = ", 3);
                    }
                    else
                    {
                      v124[2] = 32;
                      *(_WORD *)v124 = 15648;
                      v123[4] = (__int64 (__fastcall **)())((char *)v123[4] + 3);
                    }
                    sub_AFE2C0(v120, v179, &v207, 1);
                    if ( *((_QWORD *)&v209 + 1) - (_QWORD)dest <= 1u )
                    {
                      sub_26240F0(&v207, ", ", 2);
                    }
                    else
                    {
                      *(_WORD *)dest = 8236;
                      dest = (char *)dest + 2;
                    }
                  }
                }
              }
              v121 += 8;
              v120 += 24;
            }
            while ( v122 != v121 );
            v7 = v169;
            v6 = v171;
          }
        }
      }
      if ( v184 )
      {
        std::string::resize();
        if ( *((_QWORD *)&v202 + 1) - (_QWORD)v203 <= 1u )
        {
          v154 = (__int64 (__fastcall ***)())sub_26240F0(&v200, " [", 2);
        }
        else
        {
          v154 = &v200;
          *(_WORD *)v203 = 23328;
          v203 += 2;
        }
        v155 = sub_26240F0(v154, v183, v184);
        v156 = *(_BYTE **)(v155 + 32);
        if ( *(_BYTE **)(v155 + 24) == v156 )
        {
          sub_26240F0(v155, "]", 1);
        }
        else
        {
          *v156 = 93;
          ++*(_QWORD *)(v155 + 32);
        }
      }
      if ( (*(_BYTE *)(v6 + 80) & 0x7Fu) - 33 > 3 )
        goto LABEL_252;
      v131 = *(_QWORD *)(sub_79A2E0(v6 + 72) + 16);
      v132 = (_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v131 & 4) != 0 )
        v132 = (_QWORD *)*v132;
      if ( !v132 )
        BUG();
      v133 = v132[8];
      if ( !v133 || (*(_BYTE *)(v133 + 10) & 0x20) == 0 )
      {
LABEL_252:
        if ( v173 )
        {
          v143 = *(_QWORD *)(v173 + 24);
          v144 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v144 + 16) == 15 )
          {
LABEL_254:
            v145 = v143 & 0xFFFFFFFFFFFFFFF0LL;
            v146 = *(_QWORD *)v145;
            if ( *(_BYTE *)(*(_QWORD *)v145 + 16LL) != 15 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v146 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 15 )
                BUG();
              v146 = sub_B0D320(v146);
            }
            v147 = *(void **)(v146 + 32);
            goto LABEL_256;
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v144 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 15 && sub_B0D320(v144) )
          {
            v143 = *(_QWORD *)(v173 + 24);
            goto LABEL_254;
          }
        }
        if ( (((*(_BYTE *)(v6 + 28) & 0x7F) - 34) & 0xFD) == 0 )
          goto LABEL_239;
        v147 = *(void **)(v174 + 24);
LABEL_256:
        src = v147;
        sub_B2AC80(&src, &v181, v179);
        goto LABEL_239;
      }
      v134 = v182.m128_u64[0];
      n[0] = 0;
      src = &n[1];
      LOBYTE(n[1]) = 0;
      std::string::reserve();
      if ( 0x3FFFFFFFFFFFFFFFLL - n[0] <= 4 || (std::string::_M_append(), 0x3FFFFFFFFFFFFFFFLL - n[0] < v134) )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append();
      v135 = (size_t *)v181;
      v136 = v181;
      if ( v181 == &v182.m128_u16[4] )
      {
        if ( src != &n[1] )
        {
          v165 = _mm_loadu_si128((const __m128i *)n);
          v181 = src;
          v182 = (__m128)v165;
          goto LABEL_341;
        }
        v137 = n[0];
LABEL_346:
        if ( v137 )
        {
          if ( v137 == 1 )
            *(_BYTE *)v181 = n[1];
          else
            qmemcpy(v181, &n[1], (unsigned int)v137);
          v137 = n[0];
          v136 = v181;
        }
        v182.m128_u64[0] = v137;
        v136[v137] = 0;
        v135 = (size_t *)src;
        goto LABEL_237;
      }
      v137 = n[0];
      if ( src == &n[1] )
        goto LABEL_346;
      v181 = src;
      v138 = v182.m128_u64[1];
      v182 = _mm_loadh_ps((const double *)&n[1]);
      if ( v135 )
      {
        src = v135;
        n[1] = v138;
        goto LABEL_237;
      }
LABEL_341:
      src = &n[1];
      v135 = &n[1];
LABEL_237:
      n[0] = 0;
      *(_BYTE *)v135 = 0;
      if ( src != &n[1] )
        operator delete(src, n[1] + 1);
LABEL_239:
      sub_26240F0(&v193, v181, v182.m128_u64[0]);
      v139 = v227;
      v140 = (__int64)(v7 + 2);
      v141 = *(char **)v228;
      *v7 = v7 + 2;
      if ( !v139 && v141 )
        goto LABEL_359;
      src = v141;
      if ( (unsigned __int64)v141 > 0xF )
      {
        v153 = std::string::_M_create();
        *v7 = v153;
        v140 = v153;
        v7[2] = src;
        goto LABEL_286;
      }
      if ( v141 == (_BYTE *)&dword_0 + 1 )
      {
        *((_BYTE *)v7 + 16) = *v139;
        goto LABEL_244;
      }
      if ( v141 )
      {
LABEL_286:
        memcpy((void *)v140, v139, (size_t)v141);
        v141 = (char *)src;
        v140 = *v7;
      }
LABEL_244:
      v7[1] = v141;
      v141[v140] = 0;
      v207 = &off_49DA2C8;
      sub_2623770(&v207);
      if ( v183 != v185 )
        operator delete(v183, v185[0] + 1LL);
      if ( ptr != v223 )
        free(ptr);
LABEL_47:
      v200 = &off_49DA2C8;
      sub_2623770(&v200);
      if ( v181 != &v182.m128_u16[4] )
        operator delete(v181, v182.m128_u64[1] + 1);
      v193 = &qword_4A6EA70[2];
      sub_2623770(&v193);
      v40 = v227;
      if ( v227 != &v228[16] )
LABEL_86:
        free(v40);
      return v7;
    default:
      goto LABEL_4;
  }
}

