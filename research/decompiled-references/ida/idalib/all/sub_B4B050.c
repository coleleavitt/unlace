__int64 __fastcall sub_B4B050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 *a5, _BYTE *a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  char ***v11; // r12
  void *v12; // rcx
  __int64 v13; // rbx
  __int64 *v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rsi
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  const __m128i *v30; // rcx
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  const __m128i *v35; // rcx
  __m128i v36; // xmm0
  unsigned int v37; // eax
  unsigned int v38; // r15d
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  __m128i v41; // xmm0
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  const __m128i *v46; // r15
  __m128i *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // rdx
  char **v52; // rdi
  void *v53; // r14
  char *v54; // rax
  char *v55; // rcx
  char *v56; // rdx
  unsigned int v57; // eax
  __m128i v58; // xmm0
  __int64 v59; // rsi
  unsigned __int8 *v60; // rsi
  unsigned int v61; // eax
  int v62; // r10d
  __int64 v63; // r11
  __int64 v64; // rdx
  __int64 v65; // rax
  const __m128i *v66; // rdx
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __int64 v69; // rdx
  unsigned __int8 *v70; // rax
  _BOOL8 v71; // rcx
  _QWORD *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int8 *v75; // r15
  _QWORD *v76; // rdx
  __int64 v77; // rax
  unsigned int v78; // eax
  unsigned int v79; // esi
  _QWORD *v80; // r15
  __int64 v81; // rax
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  void **v85; // r15
  unsigned __int64 v86; // rax
  void **v87; // rcx
  void **v88; // rax
  void **v89; // rdi
  void **v90; // rdi
  void **v91; // rax
  unsigned __int64 v92; // rdx
  int v93; // eax
  _BYTE *v94; // rax
  unsigned __int64 v95; // rdx
  int v96; // eax
  unsigned __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // rdx
  void *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  void *v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rax
  void *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int8 *v118; // r15
  __int64 v119; // rax
  __int64 v120; // [rsp+0h] [rbp-118h]
  unsigned int v121; // [rsp+10h] [rbp-108h]
  __int64 v122; // [rsp+10h] [rbp-108h]
  __int64 v123; // [rsp+10h] [rbp-108h]
  void **v124; // [rsp+10h] [rbp-108h]
  void **v125; // [rsp+10h] [rbp-108h]
  unsigned int v126; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v127; // [rsp+10h] [rbp-108h]
  __int64 v128; // [rsp+10h] [rbp-108h]
  _BOOL8 v129; // [rsp+10h] [rbp-108h]
  _BOOL8 v130; // [rsp+10h] [rbp-108h]
  __int64 v131; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v132; // [rsp+10h] [rbp-108h]
  __int64 v133; // [rsp+18h] [rbp-100h]
  void **v134; // [rsp+18h] [rbp-100h]
  void **v135; // [rsp+18h] [rbp-100h]
  __int64 v136; // [rsp+18h] [rbp-100h]
  int v137; // [rsp+18h] [rbp-100h]
  unsigned int v138; // [rsp+18h] [rbp-100h]
  unsigned __int8 *v139; // [rsp+18h] [rbp-100h]
  unsigned int v140; // [rsp+18h] [rbp-100h]
  int v141; // [rsp+18h] [rbp-100h]
  unsigned int v142; // [rsp+20h] [rbp-F8h]
  __int64 v143; // [rsp+20h] [rbp-F8h]
  __int64 v144; // [rsp+20h] [rbp-F8h]
  __int64 v145; // [rsp+20h] [rbp-F8h]
  __int64 v146; // [rsp+20h] [rbp-F8h]
  __int64 v147; // [rsp+28h] [rbp-F0h]
  __int64 v148; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v149; // [rsp+34h] [rbp-E4h]
  int v150; // [rsp+3Ch] [rbp-DCh]
  void *v151; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v152; // [rsp+48h] [rbp-D0h]
  __int64 v153; // [rsp+50h] [rbp-C8h]
  void *v154; // [rsp+60h] [rbp-B8h]
  __int64 v155; // [rsp+70h] [rbp-A8h] BYREF
  __int16 v156; // [rsp+80h] [rbp-98h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v158; // [rsp+98h] [rbp-80h]
  _BYTE v159[120]; // [rsp+A0h] [rbp-78h] BYREF

  v158 = 0x800000000LL;
  ptr = v159;
  v7 = *(unsigned int *)(a1 + 52);
  while ( 2 )
  {
    switch ( v7 )
    {
      case 1LL:
        v32 = *(unsigned int *)(a1 + 80);
        if ( (_DWORD)v32 )
        {
          v33 = (unsigned int)v32;
          v34 = (unsigned int)(v32 - 1);
          v35 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24 * v33 - 24);
          v7 = v35->m128i_u32[1];
          v36 = _mm_loadu_si128(v35);
          a4 = v35[1].m128i_i64[0];
          *(_DWORD *)(a1 + 80) = v34;
          *(__m128i *)(a1 + 48) = v36;
          *(_QWORD *)(a1 + 64) = a4;
        }
        else
        {
          sub_B433F0(*(_QWORD *)a1, a1 + 48, v32, a4, a5, a6, v120);
          v7 = *(unsigned int *)(a1 + 52);
        }
        if ( (unsigned int)v7 <= 1 )
        {
          LODWORD(v65) = *(_DWORD *)(a1 + 80);
          if ( !(_DWORD)v65 )
          {
LABEL_98:
            sub_B433F0(*(_QWORD *)a1, a1 + 48, v34, a4, a5, a6, v120);
            v10 = (unsigned int)v158;
            goto LABEL_8;
          }
LABEL_61:
          v10 = (unsigned int)v158;
          v68 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v65 - 24));
          v69 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v65 - 24 + 16);
          *(_DWORD *)(a1 + 80) = v65 - 1;
          *(__m128i *)(a1 + 48) = v68;
          *(_QWORD *)(a1 + 64) = v69;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 != 2 )
        {
LABEL_31:
          a3 = (unsigned int)v158;
          if ( (_DWORD)v158 )
          {
            a4 = (__int64)ptr;
            a3 = *((_QWORD *)ptr + (unsigned int)v158 - 1);
            *(_BYTE *)(a3 + 13) |= 1u;
          }
          continue;
        }
        a5 = *(unsigned __int8 **)(a1 + 64);
        v60 = &a5[*(unsigned int *)(a1 + 56)];
        if ( a5 == v60 )
          goto LABEL_57;
        if ( (byte_2411740[2 * *a5] & 7) != 0 )
        {
          v34 = *(_QWORD *)(a1 + 64);
          while ( v60 != (unsigned __int8 *)++v34 )
          {
            a4 = *(unsigned __int8 *)v34;
            if ( (byte_2411740[2 * a4] & 7) == 0 )
              goto LABEL_31;
          }
LABEL_57:
          v61 = *(_DWORD *)(a1 + 80);
          v62 = *(_DWORD *)(a1 + 48);
          v63 = *(_QWORD *)(a1 + 56);
          if ( v61 )
          {
            v64 = v61;
            v65 = v61 - 1;
            v66 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24 * v64 - 24);
            a4 = v66->m128i_u32[1];
            v67 = _mm_loadu_si128(v66);
            v34 = v66[1].m128i_i64[0];
            *(_DWORD *)(a1 + 80) = v65;
            *(__m128i *)(a1 + 48) = v67;
            *(_QWORD *)(a1 + 64) = v34;
          }
          else
          {
            v143 = *(_QWORD *)(a1 + 56);
            v137 = *(_DWORD *)(a1 + 48);
            v127 = *(unsigned __int8 **)(a1 + 64);
            sub_B433F0(*(_QWORD *)a1, a1 + 48, v34, a4, a5, a6, v120);
            a4 = *(unsigned int *)(a1 + 52);
            v65 = *(unsigned int *)(a1 + 80);
            a5 = v127;
            v62 = v137;
            v63 = v143;
          }
          if ( (unsigned int)a4 <= 1 )
          {
            if ( !(_DWORD)v65 )
              goto LABEL_98;
            goto LABEL_61;
          }
          v44 = *(_QWORD *)(a1 + 72);
          v45 = v65 + 1;
          v46 = (const __m128i *)(a1 + 48);
          v47 = (__m128i *)(v44 + 24 * v65);
          if ( v45 > *(unsigned int *)(a1 + 84) )
          {
            v116 = a1 + 72;
            v117 = a1 + 88;
            v146 = v63;
            v141 = v62;
            v132 = a5;
            if ( v44 <= (unsigned __int64)v46 && v47 > v46 )
            {
              v118 = &v46->m128i_i8[-v44];
              sub_2237220(v116, v117, v45, 24);
              v119 = *(_QWORD *)(a1 + 72);
              v63 = v146;
              v62 = v141;
              v46 = (const __m128i *)&v118[v119];
              a5 = v132;
              v47 = (__m128i *)(v119 + 24LL * *(unsigned int *)(a1 + 80));
            }
            else
            {
              sub_2237220(v116, v117, v45, 24);
              a5 = v132;
              v62 = v141;
              v63 = v146;
              v47 = (__m128i *)(*(_QWORD *)(a1 + 72) + 24LL * *(unsigned int *)(a1 + 80));
            }
          }
          *v47 = _mm_loadu_si128(v46);
          v47[1].m128i_i64[0] = v46[1].m128i_i64[0];
          v48 = (unsigned int)v158;
          ++*(_DWORD *)(a1 + 80);
          *(_DWORD *)(a1 + 48) = v62;
          *(_DWORD *)(a1 + 52) = 2;
          *(_QWORD *)(a1 + 56) = v63;
          *(_QWORD *)(a1 + 64) = a5;
          if ( v48 )
            *(_BYTE *)(*((_QWORD *)ptr + v48 - 1) + 13LL) |= 1u;
        }
        else
        {
          a3 = (unsigned int)v158;
          if ( !(_DWORD)v158 )
            continue;
          v115 = *((_QWORD *)ptr + (unsigned int)v158 - 1);
          *(_BYTE *)(v115 + 13) |= 1u;
        }
LABEL_39:
        v49 = *(_DWORD *)(a1 + 60);
        v50 = *(unsigned int *)(a1 + 48);
        v51 = v49 + (unsigned int)v50 - 1;
        if ( v49 <= 1 )
          v51 = (unsigned int)v50;
        v22 = sub_B53BA0(*(_QWORD *)(a1 + 8), v50, v51, *(_QWORD *)(a1 + 64), *(unsigned int *)(a1 + 56));
        goto LABEL_22;
      case 2LL:
        goto LABEL_39;
      case 3LL:
        v23 = *(_DWORD *)(a1 + 60);
        v24 = *(unsigned int *)(a1 + 48);
        v25 = v23 + (unsigned int)v24 - 1;
        if ( v23 <= 1 )
          v25 = (unsigned int)v24;
        v22 = sub_B539E0(*(_QWORD *)(a1 + 8), v24, v25, *(_QWORD *)(a1 + 64), *(unsigned int *)(a1 + 56));
        goto LABEL_22;
      case 4LL:
      case 5LL:
        v15 = (__int64 *)sub_B3E290(*(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 56));
        v16 = v15;
        if ( (*((_BYTE *)v15 + 19) & 2) == 0 )
        {
          if ( (*((_BYTE *)v15 + 20) & 0x10) != 0 )
          {
            sub_FC70B0(&v151, *(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 48), 2655);
            v70 = (unsigned __int8 *)v151;
            v71 = *(_DWORD *)(a1 + 52) == 5;
            if ( !v151 )
            {
              v97 = v152;
              v98 = *(_DWORD *)(v152 + 14976);
              if ( v98 )
              {
                v100 = (unsigned int)(v98 - 1);
                *(_DWORD *)(v152 + 14976) = v100;
                v70 = *(unsigned __int8 **)(v97 + 8 * v100 + 14848);
                v101 = *((unsigned int *)v70 + 134);
                *v70 = 0;
                v102 = *((_QWORD *)v70 + 66);
                *((_DWORD *)v70 + 106) = 0;
                v103 = v102 + (v101 << 6);
                while ( v102 != v103 )
                {
                  while ( 1 )
                  {
                    v103 -= 64;
                    v104 = *(void **)(v103 + 24);
                    a5 = (unsigned __int8 *)(v103 + 40);
                    if ( v104 == (void *)(v103 + 40) )
                      break;
                    v147 = v103;
                    v139 = v70;
                    v130 = v71;
                    operator delete(v104);
                    v103 = v147;
                    v71 = v130;
                    v70 = v139;
                    if ( v102 == v147 )
                      goto LABEL_116;
                  }
                }
LABEL_116:
                *((_DWORD *)v70 + 134) = 0;
              }
              else
              {
                v129 = *(_DWORD *)(a1 + 52) == 5;
                v70 = (unsigned __int8 *)operator new(0x3A0u);
                *v70 = 0;
                *((_QWORD *)v70 + 12) = v70 + 112;
                *((_QWORD *)v70 + 16) = v70 + 144;
                *((_QWORD *)v70 + 20) = v70 + 176;
                *((_QWORD *)v70 + 24) = v70 + 208;
                *((_QWORD *)v70 + 28) = v70 + 240;
                *((_QWORD *)v70 + 32) = v70 + 272;
                *((_QWORD *)v70 + 36) = v70 + 304;
                *((_QWORD *)v70 + 40) = v70 + 336;
                *((_QWORD *)v70 + 44) = v70 + 368;
                *((_QWORD *)v70 + 48) = v70 + 400;
                *((_QWORD *)v70 + 52) = v70 + 432;
                *((_QWORD *)v70 + 13) = 0;
                v70[112] = 0;
                *((_QWORD *)v70 + 17) = 0;
                v70[144] = 0;
                *((_QWORD *)v70 + 21) = 0;
                v70[176] = 0;
                *((_QWORD *)v70 + 25) = 0;
                v70[208] = 0;
                *((_QWORD *)v70 + 29) = 0;
                v70[240] = 0;
                *((_QWORD *)v70 + 33) = 0;
                v70[272] = 0;
                *((_QWORD *)v70 + 37) = 0;
                v70[304] = 0;
                *((_QWORD *)v70 + 41) = 0;
                v70[336] = 0;
                *((_QWORD *)v70 + 45) = 0;
                v70[368] = 0;
                *((_QWORD *)v70 + 49) = 0;
                v70[400] = 0;
                *((_QWORD *)v70 + 53) = 0x800000000LL;
                v71 = v129;
                *((_QWORD *)v70 + 66) = v70 + 544;
                *((_QWORD *)v70 + 67) = 0x600000000LL;
              }
              v151 = v70;
            }
            v70[*v70 + 1] = 2;
            v72 = v151;
            v73 = *(unsigned __int8 *)v151;
            *(_BYTE *)v151 = v73 + 1;
            v72[v73 + 2] = v71;
            v74 = *v16;
            v75 = (unsigned __int8 *)v151;
            if ( !v151 )
            {
              v95 = v152;
              v96 = *(_DWORD *)(v152 + 14976);
              if ( v96 )
              {
                v110 = (unsigned int)(v96 - 1);
                *(_DWORD *)(v152 + 14976) = v110;
                v75 = *(unsigned __int8 **)(v95 + 8 * v110 + 14848);
                v111 = *((unsigned int *)v75 + 134);
                *v75 = 0;
                v112 = *((_QWORD *)v75 + 66);
                *((_DWORD *)v75 + 106) = 0;
                v113 = v112 + (v111 << 6);
                while ( v112 != v113 )
                {
                  while ( 1 )
                  {
                    v113 -= 64;
                    v114 = *(void **)(v113 + 24);
                    if ( v114 == (void *)(v113 + 40) )
                      break;
                    v145 = v113;
                    v131 = v74;
                    operator delete(v114);
                    v113 = v145;
                    v74 = v131;
                    if ( v112 == v145 )
                      goto LABEL_128;
                  }
                }
LABEL_128:
                *((_DWORD *)v75 + 134) = 0;
              }
              else
              {
                v128 = v74;
                v75 = (unsigned __int8 *)operator new(0x3A0u);
                *v75 = 0;
                *((_QWORD *)v75 + 12) = v75 + 112;
                *((_QWORD *)v75 + 16) = v75 + 144;
                *((_QWORD *)v75 + 20) = v75 + 176;
                *((_QWORD *)v75 + 24) = v75 + 208;
                *((_QWORD *)v75 + 28) = v75 + 240;
                *((_QWORD *)v75 + 32) = v75 + 272;
                *((_QWORD *)v75 + 36) = v75 + 304;
                *((_QWORD *)v75 + 40) = v75 + 336;
                *((_QWORD *)v75 + 44) = v75 + 368;
                *((_QWORD *)v75 + 48) = v75 + 400;
                *((_QWORD *)v75 + 52) = v75 + 432;
                *((_QWORD *)v75 + 13) = 0;
                v75[112] = 0;
                *((_QWORD *)v75 + 17) = 0;
                v75[144] = 0;
                *((_QWORD *)v75 + 21) = 0;
                v75[176] = 0;
                *((_QWORD *)v75 + 25) = 0;
                v75[208] = 0;
                *((_QWORD *)v75 + 29) = 0;
                v75[240] = 0;
                *((_QWORD *)v75 + 33) = 0;
                v75[272] = 0;
                *((_QWORD *)v75 + 37) = 0;
                v75[304] = 0;
                *((_QWORD *)v75 + 41) = 0;
                v75[336] = 0;
                *((_QWORD *)v75 + 45) = 0;
                v75[368] = 0;
                *((_QWORD *)v75 + 49) = 0;
                v75[400] = 0;
                *((_QWORD *)v75 + 53) = 0x800000000LL;
                v74 = v128;
                *((_QWORD *)v75 + 66) = v75 + 544;
                *((_QWORD *)v75 + 67) = 0x600000000LL;
              }
              v151 = v75;
            }
            v75[*v75 + 1] = 1;
            v76 = v151;
            v77 = *(unsigned __int8 *)v151;
            *(_BYTE *)v151 = v77 + 1;
            v76[v77 + 2] = v74;
            v78 = *(_DWORD *)(a1 + 60);
            if ( v78 <= 1 )
            {
              v79 = *(_DWORD *)(a1 + 48);
              v26 = v79;
            }
            else
            {
              v26 = *(unsigned int *)(a1 + 48);
              v79 = v78 + v26 - 1;
            }
            v80 = v151;
            if ( v151 )
            {
              v81 = *((unsigned int *)v151 + 106);
              v82 = *((unsigned int *)v151 + 107);
              v83 = v81 + 1;
            }
            else
            {
              v92 = v152;
              v93 = *(_DWORD *)(v152 + 14976);
              if ( v93 )
              {
                v105 = (unsigned int)(v93 - 1);
                *(_DWORD *)(v152 + 14976) = v105;
                v80 = *(_QWORD **)(v92 + 8 * v105 + 14848);
                v106 = *((unsigned int *)v80 + 134);
                *(_BYTE *)v80 = 0;
                v107 = v80[66];
                *((_DWORD *)v80 + 106) = 0;
                v108 = v107 + (v106 << 6);
                if ( v107 == v108 )
                {
                  v83 = 1;
                  v81 = 0;
                }
                else
                {
                  do
                  {
                    while ( 1 )
                    {
                      v108 -= 64;
                      v109 = *(void **)(v108 + 24);
                      a5 = (unsigned __int8 *)(v108 + 40);
                      if ( v109 == (void *)(v108 + 40) )
                        break;
                      v148 = v108;
                      v144 = v107;
                      v140 = v26;
                      operator delete(v109);
                      v107 = v144;
                      v108 = v148;
                      v26 = v140;
                      if ( v144 == v148 )
                        goto LABEL_120;
                    }
                  }
                  while ( v107 != v108 );
LABEL_120:
                  v81 = *((unsigned int *)v80 + 106);
                  v83 = v81 + 1;
                }
                *((_DWORD *)v80 + 134) = 0;
                v82 = *((unsigned int *)v80 + 107);
              }
              else
              {
                v138 = v26;
                v94 = (_BYTE *)operator new(0x3A0u);
                v82 = 8;
                v83 = 1;
                v80 = v94;
                *v94 = 0;
                *((_QWORD *)v94 + 12) = v94 + 112;
                *((_QWORD *)v94 + 16) = v94 + 144;
                *((_QWORD *)v94 + 20) = v94 + 176;
                *((_QWORD *)v94 + 24) = v94 + 208;
                *((_QWORD *)v94 + 28) = v94 + 240;
                *((_QWORD *)v94 + 32) = v94 + 272;
                *((_QWORD *)v94 + 36) = v94 + 304;
                *((_QWORD *)v94 + 40) = v94 + 336;
                *((_QWORD *)v94 + 44) = v94 + 368;
                *((_QWORD *)v94 + 48) = v94 + 400;
                *((_QWORD *)v94 + 52) = v94 + 432;
                *((_QWORD *)v94 + 13) = 0;
                v94[112] = 0;
                *((_QWORD *)v94 + 17) = 0;
                v94[144] = 0;
                *((_QWORD *)v94 + 21) = 0;
                v94[176] = 0;
                *((_QWORD *)v94 + 25) = 0;
                v94[208] = 0;
                *((_QWORD *)v94 + 29) = 0;
                v94[240] = 0;
                *((_QWORD *)v94 + 33) = 0;
                v94[272] = 0;
                *((_QWORD *)v94 + 37) = 0;
                v94[304] = 0;
                *((_QWORD *)v94 + 41) = 0;
                v94[336] = 0;
                *((_QWORD *)v94 + 45) = 0;
                v94[368] = 0;
                *((_QWORD *)v94 + 49) = 0;
                v94[400] = 0;
                *((_QWORD *)v94 + 53) = 0x800000000LL;
                *((_QWORD *)v94 + 66) = v94 + 544;
                v26 = v138;
                *((_QWORD *)v94 + 67) = 0x600000000LL;
                v81 = 0;
              }
              v151 = v80;
            }
            v149 = __PAIR64__(v79, v26);
            LOBYTE(v150) = 1;
            if ( v83 > v82 )
            {
              sub_2237220(v80 + 52, v80 + 54, v83, 12);
              v81 = *((unsigned int *)v80 + 106);
            }
            v84 = v80[52] + 12 * v81;
            *(_QWORD *)v84 = v149;
            *(_DWORD *)(v84 + 8) = v150;
            ++*((_DWORD *)v80 + 106);
            if ( (_BYTE)v156 )
            {
              sub_FC7790(v153, &v151, HIBYTE(v156));
              v153 = 0;
              v156 = 0;
            }
            if ( v154 != &v155 )
              operator delete(v154);
            v85 = (void **)v151;
            if ( v151 )
            {
              v86 = v152;
              if ( v152 )
              {
                if ( (unsigned __int64)v151 >= v152 && (unsigned __int64)v151 <= v152 + 14848 )
                {
                  v99 = *(unsigned int *)(v152 + 14976);
                  v26 = (unsigned int)(v99 + 1);
                  *(_DWORD *)(v152 + 14976) = v26;
                  *(_QWORD *)(v86 + 8 * v99 + 14848) = v85;
                }
                else
                {
                  v87 = *((void ***)v151 + 66);
                  v88 = &v87[8 * (unsigned __int64)*((unsigned int *)v151 + 134)];
                  if ( v87 != v88 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v88 -= 8;
                        v89 = (void **)v88[3];
                        if ( v89 == v88 + 5 )
                          break;
                        v134 = v88;
                        v124 = v87;
                        operator delete(v89);
                        v87 = v124;
                        v88 = v134;
                        if ( v124 == v134 )
                          goto LABEL_81;
                      }
                    }
                    while ( v87 != v88 );
LABEL_81:
                    v88 = (void **)v85[66];
                  }
                  if ( v88 != v85 + 68 )
                    free(v88);
                  v90 = (void **)v85[52];
                  if ( v90 != v85 + 54 )
                    free(v90);
                  v91 = v85 + 48;
                  v125 = v85 + 8;
                  do
                  {
                    while ( *v91 != v91 + 2 )
                    {
                      v135 = v91;
                      operator delete(*v91);
                      v91 = v135 - 4;
                      if ( v135 - 4 == v125 )
                        goto LABEL_89;
                    }
                    v91 -= 4;
                  }
                  while ( v125 != v91 );
LABEL_89:
                  operator delete(v85, 0x3A0u);
                }
              }
            }
            goto LABEL_25;
          }
          if ( (*((_BYTE *)v15 + 21) & 4) != 0 )
          {
            v17 = *(unsigned int *)(a1 + 48);
            v18 = *((_DWORD *)v15 + 4);
            v19 = *(_DWORD *)(a1 + 60);
            v20 = v18 & 0xFFFFF;
            v21 = v19 + (unsigned int)v17 - 1;
            if ( v19 <= 1 )
              v21 = (unsigned int)v17;
            v22 = sub_B53B10(*(_QWORD *)(a1 + 8), v17, v21, v20);
LABEL_22:
            v26 = (unsigned int)v158;
            v27 = (unsigned int)v158 + 1LL;
            if ( v27 > HIDWORD(v158) )
            {
              v122 = v22;
              sub_2237220(&ptr, v159, v27, 8);
              v26 = (unsigned int)v158;
              v22 = v122;
            }
            *((_QWORD *)ptr + v26) = v22;
            LODWORD(v158) = v158 + 1;
LABEL_25:
            v28 = *(unsigned int *)(a1 + 80);
            if ( (_DWORD)v28 )
            {
              v29 = (unsigned int)v28;
              a3 = (unsigned int)(v28 - 1);
              v30 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24 * v29 - 24);
              v7 = v30->m128i_u32[1];
              v31 = _mm_loadu_si128(v30);
              a4 = v30[1].m128i_i64[0];
              *(_DWORD *)(a1 + 80) = a3;
              *(__m128i *)(a1 + 48) = v31;
              *(_QWORD *)(a1 + 64) = a4;
            }
            else
            {
              sub_B433F0(*(_QWORD *)a1, a1 + 48, v28, v26, a5, a6, v120);
              v7 = *(unsigned int *)(a1 + 52);
            }
          }
          else
          {
            v8 = sub_B494D0(a1);
LABEL_4:
            a4 = (unsigned int)v158;
            v9 = (unsigned int)v158 + 1LL;
            if ( v9 > HIDWORD(v158) )
            {
              v123 = v8;
              sub_2237220(&ptr, v159, v9, 8);
              a4 = (unsigned int)v158;
              v8 = v123;
            }
            a3 = (__int64)ptr;
            *((_QWORD *)ptr + a4) = v8;
            v7 = *(unsigned int *)(a1 + 52);
            LODWORD(v158) = v158 + 1;
            if ( (unsigned int)v7 > 0x11 )
            {
LABEL_7:
              v10 = (unsigned int)v158;
              goto LABEL_8;
            }
          }
          continue;
        }
        v10 = (unsigned int)v158;
        if ( (_DWORD)v158 )
        {
LABEL_8:
          v11 = *(char ****)(a1 + 8);
          v12 = nullptr;
          if ( v10 )
          {
            v52 = *v11;
            v53 = ptr;
            v54 = **v11;
            v52[10] += 8 * v10;
            v55 = (char *)((unsigned __int64)(v54 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            v56 = &v55[8 * v10];
            if ( v52[1] >= v56 && v54 )
              *v52 = v56;
            else
              v55 = (char *)sub_986170((__int64)v52, 8 * v10, 8 * v10, 3, (__int64)a5, (__int64)a6);
            v12 = memmove(v55, v53, 8 * v10);
          }
          v13 = sub_B54800(v11, v12, v10);
        }
        else
        {
          v13 = sub_B4C0C0(a1);
        }
        if ( ptr != v159 )
          free(ptr);
        return v13;
      case 11LL:
        v8 = (__int64)sub_B46D80((__m128i *)a1);
        goto LABEL_4;
      case 17LL:
        v37 = *(_DWORD *)(a1 + 80);
        v38 = *(_DWORD *)(a1 + 48);
        v39 = *(unsigned int *)(a1 + 56);
        v40 = *(_QWORD *)(a1 + 64);
        if ( v37 )
        {
          v41 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v37 - 24));
          v42 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * v37 - 24 + 16);
          *(_DWORD *)(a1 + 80) = v37 - 1;
          *(__m128i *)(a1 + 48) = v41;
          *(_QWORD *)(a1 + 64) = v42;
          v43 = 0;
          if ( *(_DWORD *)(a1 + 52) != 15 )
            goto LABEL_35;
        }
        else
        {
          v133 = *(_QWORD *)(a1 + 64);
          v121 = *(_DWORD *)(a1 + 56);
          sub_B433F0(*(_QWORD *)a1, a1 + 48, a3, v40, (unsigned __int8 *)v39, a6, v120);
          v43 = 0;
          v39 = v121;
          v40 = v133;
          if ( *(_DWORD *)(a1 + 52) != 15 )
            goto LABEL_35;
        }
        v57 = *(_DWORD *)(a1 + 80);
        v43 = *(unsigned int *)(a1 + 48);
        if ( v57 )
        {
          v58 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v57 - 24));
          v59 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * v57 - 24 + 16);
          *(_DWORD *)(a1 + 80) = v57 - 1;
          *(__m128i *)(a1 + 48) = v58;
          *(_QWORD *)(a1 + 64) = v59;
        }
        else
        {
          v142 = *(_DWORD *)(a1 + 48);
          v136 = v40;
          v126 = v39;
          sub_B433F0(*(_QWORD *)a1, a1 + 48, v43, v40, (unsigned __int8 *)v39, a6, v120);
          v39 = v126;
          v40 = v136;
          v43 = v142;
        }
LABEL_35:
        v8 = sub_B55CF0(*(_QWORD *)(a1 + 8), v38, v43, v40, v39);
        goto LABEL_4;
      default:
        goto LABEL_7;
    }
  }
}
