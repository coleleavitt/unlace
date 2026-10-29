_QWORD *__fastcall sub_C05290(_QWORD *a1, unsigned int a2, __int64 a3, char a4)
{
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int8 v9; // al
  _BYTE *v10; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // r12
  int v15; // eax
  void *v16; // rdi
  void *v17; // rdx
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  void **v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned int *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // r8
  __int64 v28; // rax
  char *v29; // r8
  int v30; // eax
  bool v31; // al
  __int64 v32; // rdx
  char v33; // cl
  bool v34; // zf
  char v35; // cl
  unsigned __int8 v36; // al
  int v37; // esi
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rax
  const __m128i *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // r13
  char *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rax
  int v59; // eax
  unsigned __int64 v60; // r13
  int v61; // eax
  void **i; // r12
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // r13
  char *v66; // rsi
  __int64 v67; // rbp
  __int64 v68; // rbx
  int v69; // r12d
  __int64 v70; // r15
  unsigned __int64 v71; // rax
  unsigned int *v72; // rsi
  size_t v73; // rcx
  void **v74; // rdi
  bool v75; // al
  __int64 v76; // rax
  unsigned __int64 v77; // r13
  unsigned __int8 v78; // al
  unsigned __int64 v79; // rsi
  _QWORD *v80; // rax
  _BYTE *v81; // rsi
  char *v82; // rdx
  size_t v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rdi
  unsigned __int8 v87; // cl
  __int64 v88; // rdi
  __int64 v89; // rax
  int v90; // edx
  _BYTE *v91; // rax
  _BYTE *v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  _BYTE *v95; // rdx
  unsigned __int64 v96; // rsi
  __int64 v97; // r12
  void **v98; // rdi
  __int64 v99; // rax
  _BYTE *v100; // rdx
  _BYTE *v101; // rax
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  size_t v104; // rcx
  __int64 v105; // r12
  __int64 v106; // rdx
  int v107; // eax
  __int64 v108; // r12
  __int64 v109; // rbx
  __int64 v110; // r13
  void **v111; // rdi
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned int *v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rax
  void *v118; // rax
  _BYTE *v119; // rsi
  _BYTE *v120; // rsi
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  _BYTE *v124; // rdi
  _BYTE *v125; // rax
  __m128 v126; // xmm0
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  size_t v136; // rdx
  unsigned __int64 *v137; // rax
  unsigned __int64 v138; // rdx
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // rax
  __int64 v141; // [rsp+8h] [rbp-360h] BYREF
  __int64 v142; // [rsp+10h] [rbp-358h]
  void **v143; // [rsp+18h] [rbp-350h]
  void **p_ptr; // [rsp+20h] [rbp-348h]
  _QWORD *v145; // [rsp+28h] [rbp-340h]
  __int64 (__fastcall ***v146)(); // [rsp+30h] [rbp-338h]
  _QWORD *v147; // [rsp+38h] [rbp-330h]
  char *v148; // [rsp+40h] [rbp-328h]
  __int64 (__fastcall ***v149)(); // [rsp+48h] [rbp-320h]
  __int64 v150; // [rsp+50h] [rbp-318h]
  void **v151; // [rsp+58h] [rbp-310h]
  __int64 v152; // [rsp+60h] [rbp-308h]
  void **v153; // [rsp+68h] [rbp-300h]
  _QWORD *v154; // [rsp+70h] [rbp-2F8h]
  __int64 v155; // [rsp+78h] [rbp-2F0h]
  _QWORD v156[2]; // [rsp+80h] [rbp-2E8h] BYREF
  _QWORD v157[2]; // [rsp+90h] [rbp-2D8h] BYREF
  void *v158; // [rsp+A0h] [rbp-2C8h] BYREF
  __m128 v159; // [rsp+A8h] [rbp-2C0h] BYREF
  void *v160; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v161; // [rsp+C8h] [rbp-2A0h]
  char v162; // [rsp+D0h] [rbp-298h] BYREF
  void *src; // [rsp+E0h] [rbp-288h] BYREF
  size_t n; // [rsp+E8h] [rbp-280h]
  _QWORD v165[2]; // [rsp+F0h] [rbp-278h] BYREF
  __int64 (__fastcall **v166)(); // [rsp+100h] [rbp-268h] BYREF
  int v167; // [rsp+108h] [rbp-260h]
  __int128 v168; // [rsp+110h] [rbp-258h]
  __int64 v169; // [rsp+120h] [rbp-248h]
  char v170; // [rsp+128h] [rbp-240h]
  int v171; // [rsp+12Ch] [rbp-23Ch]
  void **v172; // [rsp+130h] [rbp-238h]
  __int64 (__fastcall **v173)(); // [rsp+140h] [rbp-228h] BYREF
  int v174; // [rsp+148h] [rbp-220h]
  __int128 v175; // [rsp+150h] [rbp-218h]
  __int64 v176; // [rsp+160h] [rbp-208h]
  char v177; // [rsp+168h] [rbp-200h]
  int v178; // [rsp+16Ch] [rbp-1FCh]
  void **v179; // [rsp+170h] [rbp-1F8h]
  void *v180; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v181; // [rsp+188h] [rbp-1E0h]
  __int128 v182; // [rsp+190h] [rbp-1D8h] BYREF
  void *dest; // [rsp+1A0h] [rbp-1C8h]
  char v184; // [rsp+1A8h] [rbp-1C0h]
  int v185; // [rsp+1ACh] [rbp-1BCh]
  void **v186; // [rsp+1B0h] [rbp-1B8h]
  void *v187; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int64 v188; // [rsp+1C8h] [rbp-1A0h]
  __int128 v189; // [rsp+1D0h] [rbp-198h]
  _BYTE *v190; // [rsp+1E0h] [rbp-188h]
  char v191; // [rsp+1E8h] [rbp-180h]
  int v192; // [rsp+1ECh] [rbp-17Ch]
  void **v193; // [rsp+1F0h] [rbp-178h]
  void *ptr; // [rsp+210h] [rbp-158h] BYREF
  __m128i si128; // [rsp+218h] [rbp-150h]
  _BYTE v196[320]; // [rsp+228h] [rbp-140h] BYREF

  v6 = a1;
  v7 = a3;
  v8 = sub_B8C330(a3);
  v9 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( a2 == 3 )
  {
    if ( (unsigned int)v9 - 18 > 0x3F )
    {
      *a1 = a1 + 2;
      goto LABEL_115;
    }
    v21 = sub_A64930(v8, 0);
    if ( !(unsigned __int8)sub_E6F1E0(v21, v7) )
    {
      v22 = *(_QWORD *)(v7 + 40);
      if ( (v22 & 7) != 0 )
        BUG();
      v23 = *(unsigned int **)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v24 = *v23;
      *a1 = a1 + 2;
      sub_BF6A10(a1, (_BYTE *)v23 + 16, (__int64)v23 + v24 + 16);
LABEL_26:
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      return v6;
    }
    v77 = v7;
    ptr = v196;
    p_ptr = &ptr;
    v193 = &ptr;
    v187 = &off_2BEBEE0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v143 = &v187;
    LODWORD(v188) = 2;
    v191 = 0;
    v192 = 1;
    v190 = nullptr;
    v189 = 0;
    sub_227B8B0(&v187, 0, 0, 0);
    v78 = *(_BYTE *)(v7 + 28) & 0x7F;
    if ( v78 == 38 )
    {
      v79 = v7 & 0xFFFFFFFFFFFFFFF8LL | 1;
      goto LABEL_109;
    }
    if ( v78 == 36 )
    {
      v79 = v7 & 0xFFFFFFFFFFFFFFF8LL | 2;
      goto LABEL_109;
    }
    v79 = v7;
    if ( (unsigned int)v78 - 34 > 5 )
    {
LABEL_109:
      sub_E6F990(v21, v79, 0, v143);
      v80 = a1 + 2;
      v81 = ptr;
      if ( si128.m128i_i64[0] )
      {
        v82 = (char *)ptr + si128.m128i_i64[0];
        if ( *(_BYTE *)ptr == 1 )
        {
          *a1 = v80;
          sub_BF6A10(a1, v81 + 1, (__int64)v82);
LABEL_112:
          v187 = &unk_2C76288;
          sub_227B7A0(v143);
          if ( ptr != p_ptr + 3 )
            free(ptr);
          goto LABEL_26;
        }
      }
      else
      {
        v82 = (char *)ptr;
      }
      *a1 = v80;
      sub_BF6A10(a1, v81, (__int64)v82);
      goto LABEL_112;
    }
    if ( !sub_B79B80(v7) || !sub_B79B80(v7) )
    {
LABEL_203:
      v79 = v77;
      goto LABEL_109;
    }
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    {
      v137 = sub_B8C3D0(v7, v7, v131, v132, v133, v134);
      v138 = *v137;
      v139 = *v137 + 8LL * *((unsigned int *)v137 + 2);
      if ( *v137 >= v139 )
      {
        if ( v138 != v139 )
        {
          while ( *(_WORD *)(*(_QWORD *)v139 + 36LL) != 64 )
          {
            v139 += 8LL;
            if ( v138 == v139 )
              goto LABEL_237;
          }
          v135 = 0;
          goto LABEL_238;
        }
      }
      else
      {
        v140 = *v137;
        while ( *(_WORD *)(*(_QWORD *)v140 + 36LL) != 64 )
        {
          v140 += 8LL;
          if ( v139 == v140 )
            goto LABEL_237;
        }
        if ( v139 != v140 )
        {
          v135 = 0;
          goto LABEL_238;
        }
      }
    }
LABEL_237:
    v135 = ((*(_BYTE *)(sub_B8C5D0(v7) + 89) >> 2) ^ 1) & 1;
LABEL_238:
    v77 = v135 | v7 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_203;
  }
  if ( v9 == 8 )
  {
    v12 = *(_QWORD *)(v7 + 16);
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v12 & 4) != 0 )
    {
      v13 = *(_QWORD *)v13;
      v14 = a1 + 2;
      v15 = *(_BYTE *)(v13 + 8) & 0x7F;
      if ( v15 != 24 )
      {
LABEL_13:
        if ( v15 )
        {
          ptr = v196;
          p_ptr = &ptr;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
          v187 = &off_2BEBEE0;
          v193 = &ptr;
          v143 = &v187;
          LODWORD(v188) = 2;
          v191 = 0;
          v192 = 1;
          v190 = nullptr;
          v189 = 0;
          sub_227B8B0(&v187, 0, 0, 0);
          if ( (*(_BYTE *)(v13 + 8) & 0x7F) != 8 || v13 == 40 )
          {
            v84 = sub_B8C1B0(v13);
            if ( !v84 )
              goto LABEL_18;
            sub_C05290(&v180, a2, v84, 0);
            v85 = sub_227BF10(v143, v180, v181);
            sub_995540(v85, "_block_invoke");
            v16 = v180;
            if ( v180 == &v182 )
              goto LABEL_18;
          }
          else
          {
            sub_C05290(&v180, a2, v13 - 40, 0);
            sub_227BF10(v143, v180, v181);
            v16 = v180;
            if ( v180 == &v182 )
            {
LABEL_18:
              v17 = v193[1];
              v18 = *v193;
              *v6 = v14;
              v19 = (__int64)v17 + (_QWORD)v18;
              goto LABEL_19;
            }
          }
          operator delete(v16);
          goto LABEL_18;
        }
      }
    }
    else
    {
      v14 = a1 + 2;
      v15 = *(_BYTE *)(v13 + 8) & 0x7F;
      if ( v15 != 24 )
        goto LABEL_13;
    }
    *a1 = v14;
LABEL_115:
    v83 = j__strlen(&byte_22F0C30);
    sub_BF6A10(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v83));
    return v6;
  }
  if ( (unsigned int)v9 - 34 <= 5 )
  {
    v10 = *(_BYTE **)(v8 + 2320);
    LODWORD(v141) = a2 - 4;
    if ( a2 <= 1 )
    {
      if ( (*v10 & 0x20) == 0 )
        goto LABEL_7;
    }
    else if ( a2 == 2 && (*v10 & 0x20) != 0 )
    {
LABEL_7:
      if ( a4 )
      {
LABEL_9:
        sub_B86A00((__int64)a1, (__int64 *)(v7 + 40));
        return v6;
      }
LABEL_8:
      if ( (unsigned int)v141 > 3 )
        goto LABEL_9;
LABEL_30:
      ptr = v196;
      p_ptr = &ptr;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v166 = &off_2BEBEE0;
      v172 = &ptr;
      v142 = (__int64)v10;
      v149 = &v166;
      v167 = 2;
      v170 = 0;
      v171 = 1;
      v169 = 0;
      v168 = 0;
      sub_227B8B0(&v166, 0, 0, 0);
      v27 = (_BYTE *)v142;
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v7 + 32LL))(
                v7,
                0,
                v25,
                v26,
                v142);
        v29 = (char *)v142;
        if ( (*(_QWORD *)(v28 + 80) & 0x40000LL) != 0
          || ((*(_QWORD *)(v28 + 80) >> 16) & 8) != 0
          || (v30 = sub_B984E0(v28), v29 = (char *)v142, v30) )
        {
          if ( a2 != 7 )
          {
            v142 = (__int64)v29;
            sub_995540((__int64)v149, "virtual ");
            v29 = (char *)v142;
          }
        }
        v142 = (__int64)v29;
        v31 = sub_B979F0((_QWORD *)v7);
        v27 = (_BYTE *)v142;
        if ( v31 && !a4 )
        {
          sub_995540((__int64)v149, "static ");
          v27 = (_BYTE *)v142;
        }
      }
      v32 = *(_QWORD *)(v8 + 2320);
      v33 = (*(_BYTE *)(v32 + 1) >> 2) & 2;
      BYTE1(v156[0]) = v33 | BYTE1(v156[0]) & 0xFD;
      v34 = (*(_WORD *)v32 & 0x1008) == 0;
      BYTE2(v156[0]) = (*(_BYTE *)(v32 + 3) >> 2 << 7) | BYTE2(v156[0]) & 0x7F;
      v35 = (32 * (((*(_BYTE *)(v32 + 1) >> 3) ^ 1) & 1)) & 0xBF
          | (8 * *(_BYTE *)v32) & 0x10
          | (*(_BYTE *)(v32 + 1) >> 1) & 8
          | (4 * (*(_BYTE *)v32 & 1)) & 0x8F
          | v33 & 0x83
          | !v34
          | BYTE3(v156[0]) & 0x80
          | ((((*(_BYTE *)(v32 + 1) >> 4) ^ 1) & 1) << 6);
      v36 = *(_BYTE *)(v32 + 3);
      v37 = *(_DWORD *)v32 & 0x10000080;
      v157[1] = v32;
      BYTE3(v156[0]) = v35;
      v38 = (4 * (v37 == 128)) | (v36 >> 2) & 2 | BYTE4(v156[0]) & 0xF9;
      LOBYTE(v37) = *(_BYTE *)(v32 + 89);
      BYTE4(v156[0]) = v38;
      v156[0] = v156[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
      BYTE5(v156[0]) = ((_BYTE)v37 << 7) | BYTE5(v156[0]) & 0x66;
      v157[0] = &off_2B4B428;
      v156[1] = v157;
      if ( a2 == 1 && a4 )
        BYTE1(v156[0]) = BYTE1(v156[0]) & 0xFD | (2 * (((*v27 >> 5) ^ 1) & 1));
      v158 = &v159.m128_u16[4];
      v151 = &v158;
      v179 = &v158;
      v173 = &off_2BEBE68;
      v175 = 0;
      v146 = &v173;
      v159.m128_u64[0] = 0;
      v159.m128_i8[8] = 0;
      v174 = 0;
      v177 = 0;
      v178 = 1;
      v176 = 0;
      sub_227B8B0(&v173, 0, 0, 0);
      v43 = sub_B7D580(v7, 1, v39, v40);
      if ( !v43 )
        v43 = v7;
      if ( (*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL) != 0
        && (v44 = *(_QWORD *)(*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL), (v152 = v44) != 0) )
      {
        if ( (unsigned int)*(unsigned __int8 *)(v44 + 16) - 25 > 1 )
        {
          v142 = *(_QWORD *)(v44 + 8);
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
            v152 = 0;
          else
            v152 = sub_F63050(v44, 1, v41, v42);
        }
        v45 = 0;
        v150 = 0;
        if ( (*(_BYTE *)(v7 + 82) & 0x20) != 0 )
        {
          if ( *(_BYTE *)(v152 + 16) == 26 )
            v45 = v152;
          v150 = v45;
        }
        if ( (unsigned int)v141 <= 1 )
        {
          LOWORD(v142) = *(_WORD *)(v152 + 20);
          switch ( ((unsigned __int16)v142 >> 2) & 0x3F )
          {
            case 0:
              sub_995540((__int64)v146, "__cdecl ");
              break;
            case 1:
              sub_995540((__int64)v146, "__stdcall ");
              break;
            case 2:
              sub_995540((__int64)v146, "__fastcall ");
              break;
            case 3:
              sub_995540((__int64)v146, "__thiscall ");
              break;
            case 4:
              sub_995540((__int64)v146, "__vectorcall ");
              break;
            case 8:
              sub_995540((__int64)v146, "__regcall ");
              break;
            default:
              break;
          }
        }
        v147 = v156;
        sub_B76DD0((_QWORD *)v7, (const __m128i *)v146, (__int64)v156);
        if ( a2 != 1 )
        {
          v46 = (const __m128i *)"(";
          sub_995540((__int64)v146, "(");
          if ( v150 )
          {
            v49 = sub_B76070(v43, (__int64)"(", v47, v48);
            if ( v49 )
            {
              v142 = v8;
              v145 = a1;
              v148 = (char *)v7;
              v52 = 0;
              v53 = (unsigned int)(v49 - 1);
              v143 = &v187;
              while ( 1 )
              {
                v46 = (const __m128i *)v146;
                v180 = *(void **)(*(_QWORD *)(*(_QWORD *)(v43 + 120) + 8 * v52) + 48LL);
                LOWORD(v190) = 257;
                sub_F74830(&v180, v146, v147, v143, 0);
                if ( v53 == v52 )
                  break;
                if ( (_DWORD)v52 != -1 )
                  sub_995540((__int64)v146, ", ");
                ++v52;
              }
              v8 = v142;
              v6 = v145;
              v7 = (__int64)v148;
            }
            else
            {
              v143 = &v187;
            }
            if ( *(char *)(v150 + 19) < 0 )
            {
              if ( (unsigned int)sub_B76070(v7, (__int64)v46, v50, v51) )
                sub_995540((__int64)v146, ", ");
              sub_995540((__int64)v146, "...");
            }
            else if ( ((unsigned int)v141 <= 1 || (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 1LL) & 8) == 0)
                   && !(unsigned int)sub_B76070(v43, (__int64)v46, v50, v51) )
            {
              sub_995540((__int64)v146, "void");
            }
          }
          else
          {
            v143 = &v187;
          }
          v54 = ")";
          sub_995540((__int64)v146, ")");
          if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 > 3 )
          {
LABEL_78:
            v187 = v143 + 2;
            v188 = 0x800000000LL;
            v60 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
              v60 = *(_QWORD *)v60;
            if ( v60 )
            {
              v61 = *(_BYTE *)(v60 + 8) & 0x7F;
              for ( i = v143 + 2; (unsigned int)(v61 - 18) <= 0x3F; v61 = *(_BYTE *)(v60 + 8) & 0x7F )
              {
                if ( (unsigned int)(v61 - 60) <= 1 && v60 != 64 && (*(_BYTE *)(v60 + 116) & 7) != 2 )
                {
                  v63 = (unsigned int)v188;
                  v64 = (unsigned int)v188 + 1LL;
                  if ( v64 > HIDWORD(v188) )
                  {
                    sub_2237220(v143, i, v64, 8);
                    v63 = (unsigned int)v188;
                  }
                  *((_QWORD *)v187 + v63) = v60 - 64;
                  LODWORD(v188) = v188 + 1;
                }
                v65 = *(_QWORD *)(sub_B8C1B0(v60) + 16);
                if ( (v65 & 4) != 0 )
                  v60 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v60 = v65 & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v60 )
                  break;
              }
            }
            v66 = nullptr;
            v160 = &v162;
            v153 = &v160;
            v186 = &v160;
            v180 = &off_2BEBE68;
            v161 = 0;
            v162 = 0;
            LODWORD(v181) = 0;
            v184 = 0;
            v185 = 1;
            dest = nullptr;
            v182 = 0;
            sub_227B8B0(&v180, 0, 0, 0);
            v148 = (char *)v187;
            v142 = (__int64)v187 + 8 * (unsigned int)v188;
            if ( v187 != (void *)v142 )
            {
              v154 = v6;
              v155 = v7;
              do
              {
                v67 = *(_QWORD *)(v142 - 8);
                v68 = *(_QWORD *)(sub_BBF290(v67) + 56);
                v69 = *(_DWORD *)(v68 + 20) & 0x1FFFFFFF;
                if ( v69 )
                {
                  v141 = *(_QWORD *)(v67 + 168) + 8LL;
                  v70 = 0;
                  do
                  {
                    v76 = *(_QWORD *)(*(_QWORD *)(v68 + 8 * v70 + 24) + 40LL);
                    if ( (v76 & 7) != 0 || (v71 = v76 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                    {
                      v66 = (char *)&byte_22F0C30;
                      v73 = j__strlen(&byte_22F0C30);
                    }
                    else
                    {
                      v72 = *(unsigned int **)(v71 + 16);
                      v73 = *v72;
                      v66 = (char *)(v72 + 4);
                    }
                    if ( v73 )
                    {
                      if ( *((_QWORD *)&v182 + 1) - (_QWORD)dest < v73 )
                      {
                        v74 = (void **)sub_227BF10(&v180, v66, v73);
                      }
                      else
                      {
                        v145 = (_QWORD *)v73;
                        memcpy(dest, v66, v73);
                        v74 = &v180;
                        dest = (char *)dest + (_QWORD)v145;
                      }
                      sub_995540((__int64)v74, " = ");
                      v75 = sub_BBDA50((__int64)v147, v68, v70);
                      sub_F1E030(v141 + 24 * v70, v147, &v180, v75);
                      v66 = ", ";
                      sub_995540((__int64)&v180, ", ");
                    }
                    ++v70;
                  }
                  while ( v69 != (_DWORD)v70 );
                }
                v142 -= 8;
              }
              while ( v148 != (char *)v142 );
              v6 = v154;
              v7 = v155;
            }
            v103 = sub_B77B20(v7);
            if ( v103 )
            {
              v104 = (*(__int64 *)(v103 + 16) >> 1) & 3;
              if ( v104 != 1 )
              {
                v105 = *(_QWORD *)(v103 + 24);
                v106 = *(_QWORD *)((*(_QWORD *)(v103 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 56);
                v107 = *(_DWORD *)(v106 + 20) & 0x1FFFFFFF;
                if ( v107 )
                {
                  v141 = v7;
                  v108 = v105 + 8;
                  v109 = v106 + 24;
                  v110 = v106 + 8LL * (unsigned int)(v107 - 1) + 32;
                  do
                  {
                    v112 = *(_QWORD *)(*(_QWORD *)v109 + 40LL);
                    if ( (v112 & 7) == 0 )
                    {
                      v113 = v112 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v113 )
                      {
                        v114 = *(unsigned int **)(v113 + 16);
                        v104 = *v114;
                        v66 = (char *)(v114 + 4);
                        if ( v104 )
                        {
                          if ( v104 <= *((_QWORD *)&v182 + 1) - (_QWORD)dest )
                          {
                            v142 = v104;
                            memcpy(dest, v66, v104);
                            v111 = &v180;
                            dest = (char *)dest + v142;
                          }
                          else
                          {
                            v111 = (void **)sub_227BF10(&v180, v66, v104);
                          }
                          sub_995540((__int64)v111, " = ");
                          sub_F1E030(v108, v147, &v180, 1);
                          v66 = ", ";
                          sub_995540((__int64)&v180, ", ");
                        }
                      }
                    }
                    v109 += 8;
                    v108 += 24;
                  }
                  while ( v109 != v110 );
                  v7 = v141;
                }
              }
            }
            if ( v161 )
            {
              sub_C05030(v153, v161 - 2, 0);
              v128 = sub_995540((__int64)v146, " [");
              v129 = sub_227BF10(v128, v160, v161);
              v66 = "]";
              sub_995540(v129, "]");
            }
            if ( (*(_BYTE *)(v7 + 80) & 0x7Fu) - 35 <= 3 )
            {
              v122 = sub_B72690(v7 + 72);
              if ( !v122 )
                BUG();
              v123 = *(_QWORD *)(v122 + 64);
              if ( v123 )
              {
                if ( (*(_BYTE *)(v123 + 10) & 0x20) != 0 )
                {
                  sub_C05100((__int64)&src, "auto ", (__int64)v151);
                  v124 = v158;
                  v125 = v158;
                  if ( src == v165 )
                  {
                    v136 = n;
                    if ( n )
                    {
                      if ( n == 1 )
                        *(_BYTE *)v158 = v165[0];
                      else
                        memcpy(v158, src, n);
                      v124 = v158;
                      v136 = n;
                    }
                    v159.m128_u64[0] = v136;
                    v124[v136] = 0;
                    v125 = src;
                    goto LABEL_220;
                  }
                  v141 = v165[0];
                  if ( v158 == v151 + 2 )
                  {
                    v158 = src;
                    v159 = _mm_loadh_ps((const double *)&v141);
                  }
                  else
                  {
                    v126 = _mm_loadh_ps((const double *)&v141);
                    v127 = v159.m128_u64[1];
                    v158 = src;
                    v159 = v126;
                    if ( v124 )
                    {
                      src = v124;
                      v165[0] = v127;
                      goto LABEL_220;
                    }
                  }
                  v125 = v165;
                  src = v165;
LABEL_220:
                  n = 0;
                  *v125 = 0;
                  if ( src != v165 )
                    operator delete(src);
                  goto LABEL_188;
                }
              }
            }
            if ( v150 )
            {
              v115 = *(_QWORD *)(v150 + 24);
              v116 = *(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v116 + 16) == 15 )
              {
LABEL_185:
                v117 = *(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v117 + 16) != 15 )
                {
                  v130 = *(_QWORD *)(*(_QWORD *)(v117 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(v130 + 16) != 15 )
                    BUG();
                  v117 = sub_F63050(v117, v66, v130, v104);
                }
                v118 = *(void **)(v117 + 32);
                goto LABEL_187;
              }
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v116 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 15
                && sub_F63050(v116, v66, v115 & 0xFFFFFFFFFFFFFFF0LL, v104) )
              {
                v115 = *(_QWORD *)(v150 + 24);
                goto LABEL_185;
              }
            }
            if ( (*(_BYTE *)(v7 + 28) & 0x7D) == 0x24 )
              goto LABEL_188;
            v118 = *(void **)(v152 + 24);
LABEL_187:
            src = v118;
            sub_F78380(&src, v151, v147);
LABEL_188:
            sub_227BF10(v149, v158, v159.m128_u64[0]);
            v119 = ptr;
            *v6 = v6 + 2;
            sub_BF6A10(v6, v119, (__int64)&v119[si128.m128i_i64[0]]);
            v180 = &off_2BEBE68;
            sub_227B7A0(&v180);
            if ( v160 != v153 + 2 )
              operator delete(v160);
            if ( v187 != v143 + 2 )
              free(v187);
            goto LABEL_159;
          }
          v57 = v150;
          if ( *(_BYTE *)(v150 + 16) == 26 )
          {
            if ( !v150 )
              goto LABEL_73;
          }
          else
          {
            v141 = *(_QWORD *)(v150 + 8);
            if ( *(_BYTE *)(*(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
              goto LABEL_73;
            if ( !sub_F63050(v150, ")", v55, v56) )
              goto LABEL_69;
          }
          if ( (*(_BYTE *)(v150 + 18) & 0x20) != 0 )
          {
            v54 = " const";
            sub_995540((__int64)v146, " const");
          }
LABEL_69:
          if ( *(_BYTE *)(v150 + 16) == 26 )
          {
LABEL_70:
            if ( v57 && *(char *)(v150 + 18) < 0 )
            {
              v54 = " volatile";
              sub_995540((__int64)v146, " volatile");
            }
            goto LABEL_73;
          }
          v141 = *(_QWORD *)(v150 + 8);
          if ( *(_BYTE *)(*(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          {
            v57 = sub_F63050(v150, v54, v55, v56);
            goto LABEL_70;
          }
LABEL_73:
          v58 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v58 + 16) != 26 )
            v58 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL), v54, v55, v56);
          v59 = (*(_BYTE *)(v58 + 18) >> 3) & 3;
          if ( v59 == 1 )
          {
            sub_995540((__int64)v146, " &");
          }
          else if ( v59 == 2 )
          {
            sub_995540((__int64)v146, " &&");
          }
          goto LABEL_78;
        }
        sub_227BF10(v149, v158, v159.m128_u64[0]);
        v120 = ptr;
        v121 = si128.m128i_i64[0];
        *a1 = a1 + 2;
        sub_BF6A10(a1, v120, (__int64)&v120[v121]);
      }
      else
      {
        *a1 = a1 + 2;
        sub_BF6A10(a1, &byte_22F0C30, (__int64)&byte_22F0C30);
      }
LABEL_159:
      v173 = &off_2BEBE68;
      sub_227B7A0(v146);
      if ( v158 != v151 + 2 )
        operator delete(v158);
      v20 = (void **)v149;
      v166 = (__int64 (__fastcall **)())&unk_2C76288;
      goto LABEL_20;
    }
    if ( a4 )
      goto LABEL_30;
    goto LABEL_8;
  }
  if ( v9 != 7 )
  {
    if ( v9 != 18 )
    {
      if ( !v9 && a2 == 6 )
        sub_BF6BB0(a1, "top level");
      else
        sub_BF6BB0(a1, (char *)&byte_22F0C30);
      return v6;
    }
    ptr = v196;
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v187 = &off_2BEBEE0;
    v193 = &ptr;
    v143 = &v187;
    LODWORD(v188) = 2;
    v191 = 0;
    v192 = 1;
    v190 = nullptr;
    v189 = 0;
    sub_227B8B0(&v187, 0, 0, 0);
    v90 = (*(_QWORD *)(v7 + 56) & 0x20000LL) == 0 ? 43 : 45;
    v91 = v190;
    if ( (unsigned __int64)v190 >= *((_QWORD *)&v189 + 1) )
    {
      sub_227BA10(v143, (*(_QWORD *)(v7 + 56) & 0x20000LL) == 0 ? 43 : 45);
    }
    else
    {
      ++v190;
      *v91 = v90;
    }
    v92 = v190;
    if ( (unsigned __int64)v190 >= *((_QWORD *)&v189 + 1) )
    {
      sub_227BA10(v143, 91);
    }
    else
    {
      ++v190;
      *v92 = 91;
    }
    v93 = sub_BA85D0(v7);
    if ( v93 )
      sub_B72CF0(v93, (__int64)v143);
    v94 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
      v94 = *(_QWORD *)v94;
    v95 = v190;
    v96 = *((_QWORD *)&v189 + 1);
    if ( (*(_BYTE *)(v94 + 8) & 0x7F) == 0x16 )
    {
      v97 = v94 - 48;
      if ( v94 != 48 )
      {
        if ( (unsigned __int64)v190 >= *((_QWORD *)&v189 + 1) )
        {
          v98 = (void **)sub_227BA10(v143, 40);
        }
        else
        {
          v98 = v143;
          ++v190;
          *v95 = 40;
        }
        v99 = sub_BA92B0((__int64)v98, v97);
        v100 = *(_BYTE **)(v99 + 32);
        if ( (unsigned __int64)v100 >= *(_QWORD *)(v99 + 24) )
        {
          sub_227BA10(v99, 41);
        }
        else
        {
          *(_QWORD *)(v99 + 32) = v100 + 1;
          *v100 = 41;
        }
        v95 = v190;
        v96 = *((_QWORD *)&v189 + 1);
      }
    }
    if ( (unsigned __int64)v95 >= v96 )
    {
      sub_227BA10(v143, 32);
    }
    else
    {
      v190 = v95 + 1;
      *v95 = 32;
    }
    v180 = *(void **)(v7 + 40);
    sub_FDEEB0(&v180, v143);
    v101 = v190;
    if ( (unsigned __int64)v190 >= *((_QWORD *)&v189 + 1) )
    {
      sub_227BA10(v143, 93);
    }
    else
    {
      ++v190;
      *v101 = 93;
    }
    v18 = ptr;
    v102 = si128.m128i_i64[0];
    *v6 = v6 + 2;
    v19 = (__int64)&v18[v102];
LABEL_19:
    sub_BF6A10(v6, v18, v19);
    v20 = v143;
    v187 = &unk_2C76288;
LABEL_20:
    sub_227B7A0(v20);
    if ( ptr != p_ptr + 3 )
      free(ptr);
    return v6;
  }
  v86 = sub_B72690(v7 + 40);
LABEL_121:
  v87 = *(_BYTE *)(v86 + 8) & 0x7F;
  if ( v87 > 0x12u )
  {
    while ( ((v87 + 94) & 0x7Fu) > 5 )
    {
LABEL_124:
      v88 = *(_QWORD *)(sub_B8C1B0(v86) + 16);
      if ( (v88 & 4) != 0 )
      {
        v86 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_121;
      }
      v86 = v88 & 0xFFFFFFFFFFFFFFF8LL;
      v87 = *(_BYTE *)(v86 + 8) & 0x7F;
      if ( v87 <= 0x12u )
        goto LABEL_122;
    }
  }
  else
  {
LABEL_122:
    if ( ((1LL << v87) & 0x40182) == 0 || v87 == 7 )
      goto LABEL_124;
  }
  v89 = sub_B8C1B0(v86);
  sub_C05290(v6, a2, v89, 0);
  return v6;
}
