__int64 __fastcall sub_7F77E0(__int64 *a1)
{
  int v2; // edx
  unsigned __int64 v3; // rdx
  _BYTE **v4; // r10
  unsigned __int64 v5; // rcx
  char *v6; // rdi
  unsigned __int64 v7; // rax
  char *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rsi
  _BYTE *v11; // rcx
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  _BYTE *v14; // rax
  bool v15; // zf
  _BYTE *v16; // rdx
  _BYTE *v17; // rax
  char *v18; // rdx
  _BYTE *v19; // rcx
  _BYTE *v20; // rax
  _BYTE *v21; // rax
  bool v22; // cf
  _BYTE *v23; // rax
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  _BYTE *v26; // rax
  unsigned __int64 v27; // rax
  _BYTE *v28; // rax
  char v29; // cl
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  _BYTE *v32; // rdx
  __int64 result; // rax
  const char *v34; // rax
  char v35; // cl
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  _BYTE *v39; // rdx
  char v40; // cl
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _BYTE *v43; // rax
  _BYTE *v44; // rdi
  unsigned __int64 v45; // rax
  int v46; // esi
  unsigned __int64 v47; // rax
  int v48; // edx
  unsigned __int64 v49; // r10
  int v50; // r9d
  unsigned __int64 v51; // rcx
  int v52; // edx
  int v53; // esi
  _BYTE *v54; // rax
  _BYTE *v55; // rcx
  __int64 v56; // rdx
  char v57; // cl
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  _BYTE *v60; // rdx
  char v61; // cl
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  _BYTE *v64; // rdx
  char v65; // cl
  __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  _BYTE *v68; // rdx
  _BYTE *v69; // rdx
  char v70; // si
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  _BYTE *v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  _BYTE *v76; // r8
  unsigned __int64 v77; // rax
  char *v78; // rdx
  unsigned int v79; // ecx
  __int64 v80; // rdi
  _BYTE *v81; // rcx
  unsigned __int64 v82; // rax
  int v83; // edx
  unsigned __int8 *v84; // rax
  int v85; // ecx
  _BYTE *v86; // rdx
  char v87; // si
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  _BYTE *v90; // rsi
  __int64 v91; // rax
  _BYTE *v92; // r13
  _BYTE *v93; // rdi
  __int64 v94; // r12
  size_t v95; // rbp
  _BYTE *v96; // rdx
  _BYTE *v97; // rax
  _BYTE *v98; // rdi
  int v99; // edi
  _BYTE *v100; // rax
  _BYTE *v101; // rax
  _BYTE *v102; // rcx
  _BYTE *v103; // rsi
  _BYTE *v104; // rax
  _BYTE *v105; // rcx
  __int64 v106; // rdx
  const char *v107; // rax
  __int64 v108; // rax
  __m128i v109; // xmm0
  _BYTE *v110; // rcx
  __int64 v111; // rdx
  _BYTE *v112; // rax
  _BYTE *v113; // rdx
  _BYTE *v114; // rax
  _BYTE *v115; // rdx
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  _BYTE *v118; // rax
  _QWORD *v119; // rax
  unsigned __int64 v120; // rdi
  unsigned __int64 v121; // rdx
  unsigned __int64 v122; // rdi
  unsigned __int8 *v123; // rdx
  char v124; // al
  __int64 v125; // rbp
  _BYTE *v126; // rdx
  _BYTE *v127; // rcx
  __int64 v128; // rax
  _BYTE *v129; // rax
  char v130; // cl
  __int64 v131; // rax
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rax
  __m128i v134; // xmm0
  __int16 *v135; // rsi
  __int64 v136; // rcx
  _BOOL4 v137; // r12d
  _BYTE *v138; // rax
  _BYTE *v139; // rdx
  _BYTE *v140; // rcx
  _BYTE *v141; // r12
  const char *v142; // rax
  unsigned __int64 v143; // rsi
  __int64 v144; // rcx
  __int64 v145; // rax

  if ( *((_DWORD *)a1 + 124) )
  {
    v34 = "encoder/decoder transition";
LABEL_44:
    a1[8] = (__int64)v34;
    return 4294949584LL;
  }
  else
  {
    v2 = *((_DWORD *)a1 + 204);
    switch ( v2 )
    {
      case 0:
        v3 = a1[107];
        v4 = (_BYTE **)(a1 + 106);
        if ( v3 > 3 )
          goto LABEL_12;
        v5 = a1[1];
        while ( v5 )
        {
          v6 = (char *)*a1;
          v7 = 4 - v3;
          if ( 4 - v3 > v5 )
            v7 = v5;
          v8 = (char *)v4 + v3;
          if ( (_DWORD)v7 )
          {
            v9 = 0;
            do
            {
              v10 = v9++;
              v8[v10] = v6[v10];
            }
            while ( v9 < (unsigned int)v7 );
          }
          v11 = (_BYTE *)a1[1];
          a1[2] += v7;
          *a1 += v7;
          v5 = (unsigned __int64)&v11[-v7];
          v12 = a1[107] + v7;
          a1[1] = v5;
          v3 = v12;
          a1[107] = v12;
          if ( v12 > 3 )
          {
LABEL_12:
            if ( (a1[106] & 0xFFFFFF) != 0xC4C3D6 )
            {
              v34 = "not a VCDIFF input";
              goto LABEL_44;
            }
            if ( *((_BYTE *)a1 + 851) )
            {
              v34 = "VCDIFF input version > 0 is not supported";
              goto LABEL_44;
            }
            *((_DWORD *)a1 + 204) = 1;
LABEL_15:
            if ( a1[1] )
            {
              v13 = _mm_add_epi64((__m128i)_mm_loadh_ps((const double *)a1 + 2), (__m128i)xmmword_2384760);
              v14 = (_BYTE *)*(unsigned __int8 *)(*a1)++;
              a1[103] = (__int64)v14;
              *(__m128i *)(a1 + 1) = v13;
              if ( ((unsigned __int8)v14 & 0xF8) != 0 )
              {
                v34 = "unrecognized header indicator bits set";
                goto LABEL_44;
              }
              *((_DWORD *)a1 + 204) = 2;
LABEL_18:
              if ( ((unsigned __int8)v14 & 1) != 0 )
              {
                if ( !a1[1] )
                  goto LABEL_41;
                v134 = _mm_add_epi64((__m128i)_mm_loadh_ps((const double *)a1 + 2), (__m128i)xmmword_2384760);
                v135 = (__int16 *)*(unsigned __int8 *)*a1;
                v136 = *a1 + 1;
                *((_DWORD *)a1 + 204) = 3;
                *a1 = v136;
                a1[108] = (__int64)v135;
                *(__m128i *)(a1 + 1) = v134;
                if ( v135 == (_WORD *)&dword_0 + 1 )
                {
                  v142 = "unavailable secondary compressor: LZMA";
                  goto LABEL_257;
                }
                if ( v135 == &word_10 )
                {
                  a1[169] = (__int64)&unk_2B129E0;
                }
                else
                {
                  if ( v135 != (__int16 *)((char *)&dword_0 + 1) )
                  {
                    v34 = "unknown secondary compressor ID";
                    goto LABEL_44;
                  }
                  a1[169] = (__int64)&unk_2B129A0;
                }
              }
LABEL_19:
              if ( ((unsigned __int8)v14 & 2) != 0 )
              {
                v126 = (_BYTE *)a1[1];
                while ( v126 )
                {
                  --v126;
                  v130 = *(_BYTE *)*a1;
                  v131 = *a1 + 1;
                  ++a1[2];
                  *a1 = v131;
                  v132 = a1[121];
                  a1[1] = (__int64)v126;
                  if ( v132 > 0x1FFFFFFFFFFFFFFLL )
                  {
LABEL_43:
                    v34 = "overflow in decode_integer";
                    goto LABEL_44;
                  }
                  v133 = v130 & 0x7F | (v132 << 7);
                  a1[121] = v133;
                  if ( v130 >= 0 )
                  {
                    a1[109] = v133;
                    a1[121] = 0;
                    *((_DWORD *)a1 + 204) = 4;
                    if ( v133 <= 2 )
                    {
                      a1[8] = (__int64)"invalid code table size";
                      return 12;
                    }
                    a1[109] = v133 - 2;
LABEL_210:
                    if ( !v126 )
                      goto LABEL_41;
                    v127 = (_BYTE *)*(unsigned __int8 *)*a1;
                    v128 = *a1 + 1;
                    ++a1[2];
                    *a1 = v128;
                    v129 = (_BYTE *)a1[103];
                    a1[57] = (__int64)v127;
                    a1[1] = (__int64)(v126 - 1);
                    v108 = (unsigned __int8)v129 & 2;
                    *((_DWORD *)a1 + 204) = 5;
LABEL_175:
                    if ( !v108 )
                      goto LABEL_20;
                    if ( !a1[1] )
                      goto LABEL_41;
                    v109 = _mm_add_epi64((__m128i)_mm_loadh_ps((const double *)a1 + 2), (__m128i)xmmword_2384760);
                    v110 = (_BYTE *)*(unsigned __int8 *)*a1;
                    v111 = *a1 + 1;
                    *((_DWORD *)a1 + 204) = 6;
                    *a1 = v111;
                    a1[58] = (__int64)v110;
                    *(__m128i *)(a1 + 1) = v109;
LABEL_172:
                    v107 = "VCD_CODETABLE support was removed";
                    goto LABEL_173;
                  }
                }
              }
              else
              {
LABEL_20:
                *((_DWORD *)a1 + 204) = 6;
LABEL_21:
                v15 = byte_2CAAB20 == 2;
                *(__m128i *)(a1 + 57) = _mm_load_si128((const __m128i *)&xmmword_2384770);
                if ( !v15 )
                  sub_7F4DE0();
                a1[166] = (__int64)&byte_2CAAB20;
                if ( (unsigned int)sub_7F3B70((__int64)a1) )
                  return 12;
                *((_DWORD *)a1 + 204) = 7;
LABEL_25:
                if ( (a1[103] & 4) != 0 )
                {
                  v39 = (_BYTE *)a1[1];
                  while ( v39 )
                  {
                    --v39;
                    v40 = *(_BYTE *)*a1;
                    v41 = *a1 + 1;
                    ++a1[2];
                    *a1 = v41;
                    v42 = a1[121];
                    a1[1] = (__int64)v39;
                    if ( v42 > 0x1FFFFFFFFFFFFFFLL )
                      goto LABEL_43;
                    v43 = (_BYTE *)(v40 & 0x7F | (v42 << 7));
                    a1[121] = (__int64)v43;
                    if ( v40 >= 0 )
                    {
                      a1[112] = (__int64)v43;
                      a1[121] = 0;
                      *((_DWORD *)a1 + 204) = 8;
LABEL_149:
                      v90 = (_BYTE *)a1[112];
                      if ( v90 == (_BYTE *)-1LL )
                      {
                        v34 = "exceptional appheader size";
                        goto LABEL_44;
                      }
                      v91 = a1[113];
                      if ( !v91 )
                      {
                        v91 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64))a1[16])(a1[18], v90 + 1, 1);
                        if ( !v91 )
                        {
                          a1[113] = 0;
                          a1[8] = (__int64)"out of memory";
                          return 12;
                        }
                        a1[113] = v91;
                        v90 = (_BYTE *)a1[112];
                      }
                      v90[v91] = 0;
                      v92 = (_BYTE *)a1[112];
                      v93 = (_BYTE *)a1[114];
                      v94 = a1[113];
                      v17 = (_BYTE *)a1[1];
                      if ( v93 >= v92 )
                      {
                        v16 = (_BYTE *)a1[2];
                        goto LABEL_27;
                      }
                      while ( v17 )
                      {
                        v95 = v92 - v93;
                        if ( v92 - v93 > (unsigned __int64)v17 )
                          v95 = (size_t)v17;
                        memcpy(&v93[v94], (const void *)*a1, v95);
                        v96 = (_BYTE *)a1[2];
                        v97 = (_BYTE *)a1[1];
                        v98 = (_BYTE *)a1[114];
                        *a1 += v95;
                        v16 = &v96[v95];
                        v17 = &v97[-v95];
                        v93 = &v98[v95];
                        a1[2] = (__int64)v16;
                        a1[1] = (__int64)v17;
                        a1[114] = (__int64)v93;
                        if ( v93 >= v92 )
                          goto LABEL_27;
                      }
                      goto LABEL_41;
                    }
                  }
                }
                else
                {
LABEL_26:
                  v16 = (_BYTE *)a1[2];
                  v17 = (_BYTE *)a1[1];
LABEL_27:
                  a1[125] = (__int64)v16;
                  *((_DWORD *)a1 + 204) = 9;
LABEL_28:
                  if ( v17 )
                  {
                    v18 = (char *)*a1;
                    v19 = (_BYTE *)*(unsigned __int8 *)*a1;
                    a1[1] = (__int64)(v17 - 1);
                    v20 = (_BYTE *)a1[123];
                    ++a1[2];
                    a1[104] = (__int64)v19;
                    a1[6] = (__int64)v20;
                    v21 = (_BYTE *)a1[120];
                    *a1 = (__int64)(v18 + 1);
                    v22 = __CFADD__(a1[122], v21);
                    v23 = &v21[a1[122]];
                    if ( v22 )
                    {
                      v34 = "decoder file offset overflow";
                      goto LABEL_44;
                    }
                    a1[122] = (__int64)v23;
                    if ( ((unsigned __int8)v19 & 0xF8) != 0 )
                    {
                      v34 = "unrecognized window indicator bits set";
                      goto LABEL_44;
                    }
                    a1[115] = 0;
                    *(_OWORD *)(a1 + 117) = 0;
                    sub_7F7780((__int64)(a1 + 57));
                    *((_DWORD *)a1 + 204) = 10;
LABEL_32:
                    v24 = (_BYTE *)a1[104];
                    if ( (unsigned __int64)((unsigned __int8)v24 & 3) - 1 <= 1 )
                    {
                      v69 = (_BYTE *)a1[1];
                      while ( v69 )
                      {
                        --v69;
                        v70 = *(_BYTE *)*a1;
                        v71 = *a1 + 1;
                        ++a1[2];
                        *a1 = v71;
                        v72 = a1[121];
                        a1[1] = (__int64)v69;
                        if ( v72 > 0x1FFFFFFFFFFFFFFLL )
                          goto LABEL_43;
                        v73 = (_BYTE *)(v70 & 0x7F | (v72 << 7));
                        a1[121] = (__int64)v73;
                        if ( v70 >= 0 )
                        {
                          a1[117] = (__int64)v73;
                          a1[121] = 0;
                          *((_DWORD *)a1 + 204) = 11;
                          a1[128] = (__int64)v73;
LABEL_143:
                          v86 = (_BYTE *)a1[1];
                          while ( v86 )
                          {
                            --v86;
                            v87 = *(_BYTE *)*a1;
                            v88 = *a1 + 1;
                            ++a1[2];
                            *a1 = v88;
                            v89 = a1[121];
                            a1[1] = (__int64)v86;
                            if ( v89 > 0x1FFFFFFFFFFFFFFLL )
                              goto LABEL_43;
                            v26 = (_BYTE *)(v87 & 0x7F | (v89 << 7));
                            a1[121] = (__int64)v26;
                            if ( v87 >= 0 )
                            {
                              a1[118] = (__int64)v26;
                              v25 = a1[117];
                              a1[121] = 0;
                              goto LABEL_35;
                            }
                          }
                          goto LABEL_41;
                        }
                      }
                    }
                    else
                    {
                      v25 = a1[117];
                      a1[128] = v25;
LABEL_34:
                      v26 = (_BYTE *)a1[118];
LABEL_35:
                      *((_DWORD *)a1 + 204) = 12;
                      v22 = __CFADD__(v25, v26);
                      v27 = (unsigned __int64)&v26[v25];
                      if ( v22 )
                      {
                        v34 = "decoder copy window overflows a file offset";
                        goto LABEL_44;
                      }
                      if ( ((unsigned __int8)v24 & 2) != 0 && a1[122] < v27 )
                      {
                        v34 = "VCD_TARGET window out of bounds";
                        goto LABEL_44;
                      }
LABEL_37:
                      v28 = (_BYTE *)a1[1];
                      while ( v28 )
                      {
                        --v28;
                        v29 = *(_BYTE *)*a1;
                        v30 = *a1 + 1;
                        ++a1[2];
                        *a1 = v30;
                        v31 = a1[121];
                        a1[1] = (__int64)v28;
                        if ( v31 > 0x1FFFFFFFFFFFFFFLL )
                          goto LABEL_43;
                        v32 = (_BYTE *)(v29 & 0x7F | (v31 << 7));
                        a1[121] = (__int64)v32;
                        if ( v29 >= 0 )
                        {
                          a1[119] = (__int64)v32;
                          a1[121] = 0;
                          *((_DWORD *)a1 + 204) = 13;
LABEL_50:
                          while ( v28 )
                          {
                            --v28;
                            v35 = *(_BYTE *)*a1;
                            v36 = *a1 + 1;
                            ++a1[2];
                            *a1 = v36;
                            v37 = a1[121];
                            a1[1] = (__int64)v28;
                            if ( v37 > 0x1FFFFFFFFFFFFFFLL )
                              goto LABEL_43;
                            v38 = v35 & 0x7F | (v37 << 7);
                            a1[121] = v38;
                            if ( v35 >= 0 )
                            {
                              a1[120] = v38;
                              a1[121] = 0;
                              *((_DWORD *)a1 + 204) = 14;
                              if ( __CFADD__(a1[117], v38) )
                              {
                                v34 = "decoder target window overflows a usize_t";
                                goto LABEL_44;
                              }
                              if ( v38 > 0x4000000 )
                              {
                                v34 = "hard window size exceeded";
                                goto LABEL_44;
                              }
                              a1[129] = a1[117] + v38;
LABEL_103:
                              if ( v28 )
                              {
                                v54 = v28 - 1;
                                v55 = (_BYTE *)*(unsigned __int8 *)*a1;
                                v56 = *a1 + 1;
                                ++a1[2];
                                a1[1] = (__int64)v54;
                                a1[105] = (__int64)v55;
                                *a1 = v56;
                                *((_DWORD *)a1 + 204) = 15;
                                if ( ((unsigned __int8)v55 & 0xF8) != 0 )
                                {
                                  v34 = "unrecognized delta indicator bits set";
                                  goto LABEL_44;
                                }
                                if ( v55 && !a1[169] )
                                {
                                  v34 = "invalid delta indicator bits set";
                                  goto LABEL_44;
                                }
LABEL_110:
                                while ( v54 )
                                {
                                  --v54;
                                  v57 = *(_BYTE *)*a1;
                                  v58 = *a1 + 1;
                                  ++a1[2];
                                  *a1 = v58;
                                  v59 = a1[121];
                                  a1[1] = (__int64)v54;
                                  if ( v59 > 0x1FFFFFFFFFFFFFFLL )
                                    goto LABEL_43;
                                  v60 = (_BYTE *)(v57 & 0x7F | (v59 << 7));
                                  a1[121] = (__int64)v60;
                                  if ( v57 >= 0 )
                                  {
                                    a1[159] = (__int64)v60;
                                    a1[121] = 0;
                                    *((_DWORD *)a1 + 204) = 16;
LABEL_116:
                                    while ( v54 )
                                    {
                                      --v54;
                                      v61 = *(_BYTE *)*a1;
                                      v62 = *a1 + 1;
                                      ++a1[2];
                                      *a1 = v62;
                                      v63 = a1[121];
                                      a1[1] = (__int64)v54;
                                      if ( v63 > 0x1FFFFFFFFFFFFFFLL )
                                        goto LABEL_43;
                                      v64 = (_BYTE *)(v61 & 0x7F | (v63 << 7));
                                      a1[121] = (__int64)v64;
                                      if ( v61 >= 0 )
                                      {
                                        a1[143] = (__int64)v64;
                                        a1[121] = 0;
                                        *((_DWORD *)a1 + 204) = 17;
LABEL_122:
                                        while ( v54 )
                                        {
                                          --v54;
                                          v65 = *(_BYTE *)*a1;
                                          v66 = *a1 + 1;
                                          ++a1[2];
                                          *a1 = v66;
                                          v67 = a1[121];
                                          a1[1] = (__int64)v54;
                                          if ( v67 > 0x1FFFFFFFFFFFFFFLL )
                                            goto LABEL_43;
                                          v68 = (_BYTE *)(v65 & 0x7F | (v67 << 7));
                                          a1[121] = (__int64)v68;
                                          if ( v65 >= 0 )
                                          {
                                            a1[151] = (__int64)v68;
                                            a1[121] = 0;
                                            *((_DWORD *)a1 + 204) = 18;
LABEL_60:
                                            v44 = (_BYTE *)a1[104];
                                            if ( ((unsigned __int8)v44 & 4) != 0 )
                                            {
                                              v74 = a1[115];
                                              if ( v74 <= 3 )
                                              {
                                                v75 = a1[1];
                                                while ( v75 )
                                                {
                                                  v76 = (_BYTE *)*a1;
                                                  v77 = 4 - v74;
                                                  if ( 4 - v74 > v75 )
                                                    v77 = v75;
                                                  v78 = (char *)a1 + v74 + 928;
                                                  if ( (_DWORD)v77 )
                                                  {
                                                    v79 = 0;
                                                    do
                                                    {
                                                      v80 = v79++;
                                                      v78[v80] = v76[v80];
                                                    }
                                                    while ( v79 < (unsigned int)v77 );
                                                  }
                                                  v81 = (_BYTE *)a1[1];
                                                  a1[2] += v77;
                                                  *a1 += v77;
                                                  v75 = (unsigned __int64)&v81[-v77];
                                                  v82 = a1[115] + v77;
                                                  a1[1] = v75;
                                                  v74 = v82;
                                                  a1[115] = v82;
                                                  if ( v82 > 3 )
                                                  {
                                                    v44 = (_BYTE *)a1[104];
                                                    goto LABEL_139;
                                                  }
                                                }
                                                goto LABEL_41;
                                              }
LABEL_139:
                                              v83 = *((_DWORD *)a1 + 233);
                                              v84 = (unsigned __int8 *)(a1 + 116);
                                              do
                                              {
                                                v85 = *v84++;
                                                v83 = v85 | (v83 << 8);
                                              }
                                              while ( (unsigned __int8 *)((char *)a1 + 932) != v84 );
                                              *((_DWORD *)a1 + 233) = v83;
                                            }
                                            v45 = a1[120];
                                            v46 = 2;
                                            *((_DWORD *)a1 + 204) = 19;
                                            if ( v45 > 0x7F )
                                            {
                                              v46 = 3;
                                              if ( v45 > 0x3FFF )
                                              {
                                                v46 = 4;
                                                if ( v45 > 0x1FFFFF )
                                                {
                                                  v46 = 5;
                                                  if ( v45 > 0xFFFFFFF )
                                                  {
                                                    v46 = 6;
                                                    if ( v45 >> 35 )
                                                    {
                                                      v46 = 7;
                                                      if ( v45 >> 42 )
                                                      {
                                                        v46 = 8;
                                                        if ( v45 >> 49 )
                                                        {
                                                          v46 = 9;
                                                          if ( HIBYTE(v45) )
                                                            v46 = (v45 >> 63) + 10;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            v47 = a1[159];
                                            v48 = 1;
                                            if ( v47 > 0x7F )
                                            {
                                              v48 = 2;
                                              if ( v47 > 0x3FFF )
                                              {
                                                v48 = 3;
                                                if ( v47 > 0x1FFFFF )
                                                {
                                                  v48 = 4;
                                                  if ( v47 > 0xFFFFFFF )
                                                  {
                                                    v48 = 5;
                                                    if ( v47 >> 35 )
                                                    {
                                                      v48 = 6;
                                                      if ( v47 >> 42 )
                                                      {
                                                        v48 = 7;
                                                        if ( v47 >> 49 )
                                                        {
                                                          v48 = 8;
                                                          if ( HIBYTE(v47) )
                                                            v48 = (v47 >> 63) + 9;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            v49 = a1[143];
                                            v50 = 1;
                                            if ( v49 > 0x7F )
                                            {
                                              v50 = 2;
                                              if ( v49 > 0x3FFF )
                                              {
                                                v50 = 3;
                                                if ( v49 > 0x1FFFFF )
                                                {
                                                  v50 = 4;
                                                  if ( v49 > 0xFFFFFFF )
                                                  {
                                                    v50 = 5;
                                                    if ( v49 >> 35 )
                                                    {
                                                      v50 = 6;
                                                      if ( v49 >> 42 )
                                                      {
                                                        v50 = 7;
                                                        if ( v49 >> 49 )
                                                        {
                                                          v50 = 8;
                                                          if ( HIBYTE(v49) )
                                                            v50 = (v49 >> 63) + 9;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            v51 = a1[151];
                                            v52 = v46 + v48;
                                            v53 = 1;
                                            if ( v51 > 0x7F )
                                            {
                                              v53 = 2;
                                              if ( v51 > 0x3FFF )
                                              {
                                                v53 = 3;
                                                if ( v51 > 0x1FFFFF )
                                                {
                                                  v53 = 4;
                                                  if ( v51 > 0xFFFFFFF )
                                                  {
                                                    v53 = 5;
                                                    if ( v51 >> 35 )
                                                    {
                                                      v53 = 6;
                                                      if ( v51 >> 42 )
                                                      {
                                                        v53 = 7;
                                                        if ( v51 >> 49 )
                                                        {
                                                          v53 = 8;
                                                          if ( HIBYTE(v51) )
                                                            v53 = (v51 >> 63) + 9;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            if ( a1[119] != (unsigned int)(v53 + v50 + v52)
                                                          + ((unsigned __int8)v44 & 4)
                                                          + v51
                                                          + v49
                                                          + v47 )
                                            {
                                              v34 = "incorrect encoding length (redundent)";
                                              goto LABEL_44;
                                            }
                                            result = 4294949589LL;
                                            if ( !a1[6] )
                                              return 4294949590LL;
                                            return result;
                                          }
                                        }
                                        goto LABEL_41;
                                      }
                                    }
                                    goto LABEL_41;
                                  }
                                }
                              }
                              goto LABEL_41;
                            }
                          }
                          goto LABEL_41;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_41;
          }
        }
        goto LABEL_41;
      case 1:
        goto LABEL_15;
      case 2:
        v14 = (_BYTE *)a1[103];
        goto LABEL_18;
      case 3:
        v14 = (_BYTE *)a1[103];
        goto LABEL_19;
      case 4:
        if ( (a1[103] & 2) == 0 )
          goto LABEL_20;
        v126 = (_BYTE *)a1[1];
        goto LABEL_210;
      case 5:
        v108 = a1[103] & 2;
        goto LABEL_175;
      case 6:
        if ( (a1[103] & 2) != 0 )
          goto LABEL_172;
        goto LABEL_21;
      case 7:
        goto LABEL_25;
      case 8:
        if ( (a1[103] & 4) == 0 )
          goto LABEL_26;
        goto LABEL_149;
      case 9:
        v17 = (_BYTE *)a1[1];
        goto LABEL_28;
      case 10:
        goto LABEL_32;
      case 11:
        v24 = (_BYTE *)a1[104];
        if ( (unsigned __int64)((unsigned __int8)v24 & 3) - 1 <= 1 )
          goto LABEL_143;
        v25 = a1[117];
        goto LABEL_34;
      case 12:
        goto LABEL_37;
      case 13:
        v28 = (_BYTE *)a1[1];
        goto LABEL_50;
      case 14:
        v28 = (_BYTE *)a1[1];
        goto LABEL_103;
      case 15:
        v54 = (_BYTE *)a1[1];
        goto LABEL_110;
      case 16:
        v54 = (_BYTE *)a1[1];
        goto LABEL_116;
      case 17:
        v54 = (_BYTE *)a1[1];
        goto LABEL_122;
      case 18:
        goto LABEL_60;
      case 19:
      case 20:
      case 21:
        v99 = *((_DWORD *)a1 + 38);
        if ( (v99 & 2) != 0 )
          goto LABEL_167;
        v100 = (_BYTE *)a1[151];
        v22 = __CFADD__(a1[143], v100);
        v101 = &v100[a1[143]];
        if ( v22 || (v102 = (_BYTE *)a1[159], __CFADD__(v102, v101)) )
        {
          v142 = "decoder section size overflow";
LABEL_257:
          a1[8] = (__int64)v142;
          return 4294949586LL;
        }
        v103 = (_BYTE *)a1[124];
        v104 = &v102[v101 - v103];
        v105 = (_BYTE *)a1[1];
        if ( (v99 & 4) != 0 )
        {
          v106 = a1[1];
          if ( v104 <= v105 )
            v106 = (__int64)v104;
          a1[2] += v106;
          *a1 += v106;
          a1[1] = (__int64)&v105[-v106];
          a1[124] = (__int64)&v103[v106];
          if ( v105 >= v104 )
            goto LABEL_167;
LABEL_41:
          a1[8] = (__int64)"further input required";
          return 4294949593LL;
        }
        v137 = v105 < v104;
        if ( v2 == 20 )
          goto LABEL_239;
        if ( v2 != 21 )
        {
          result = sub_7F4700((__int64)a1, a1 + 157, 20, v105 < v104);
          if ( (_DWORD)result )
            return result;
LABEL_239:
          result = sub_7F4700((__int64)a1, a1 + 141, 21, v137);
          if ( (_DWORD)result )
            return result;
        }
        result = sub_7F4700((__int64)a1, a1 + 149, 22, v137);
        if ( (_DWORD)result )
          return result;
        v138 = (_BYTE *)a1[105];
        if ( ((unsigned __int8)v138 & 1) != 0 )
        {
          result = sub_7F5C50((__int64)a1, (__int64)(a1 + 157), a1 + 170);
          if ( (_DWORD)result )
            return result;
          v138 = (_BYTE *)a1[105];
        }
        if ( ((unsigned __int8)v138 & 2) != 0 )
        {
          result = sub_7F5C50((__int64)a1, (__int64)(a1 + 141), a1 + 171);
          if ( (_DWORD)result )
            return result;
          v138 = (_BYTE *)a1[105];
        }
        if ( ((unsigned __int8)v138 & 4) == 0
          || (result = sub_7F5C50((__int64)a1, (__int64)(a1 + 149), a1 + 172), !(_DWORD)result) )
        {
          if ( (a1[19] & 8) != 0 )
          {
LABEL_167:
            a1[124] = 0;
            *((_DWORD *)a1 + 204) = 23;
            a1[160] = 0;
            a1[144] = 0;
            a1[152] = 0;
            return 4294949592LL;
          }
          v118 = (_BYTE *)a1[104];
          if ( ((unsigned __int8)v118 & 2) != 0 )
          {
            v107 = "VCD_TARGET not implemented";
LABEL_173:
            a1[8] = (__int64)v107;
            return 4294949582LL;
          }
          if ( a1[5] < (unsigned __int64)a1[120] )
          {
            if ( a1[136] )
              ((void (__fastcall *)(__int64))a1[17])(a1[18]);
            v143 = a1[120];
            if ( (v143 & 0x3FFF) != 0 )
            {
              v144 = 0x8000000000000000LL;
              if ( v143 <= 0x8000000000000000LL )
                v144 = v143 + 0x4000 - (a1[120] & 0x3FFF);
              v143 = v144;
            }
            a1[5] = v143;
            v145 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64))a1[16])(a1[18], v143, 1);
            v139 = (_BYTE *)v145;
            if ( !v145 )
            {
              a1[8] = (__int64)"out of memory";
              a1[136] = 0;
              return 12;
            }
            a1[136] = v145;
            a1[3] = v145;
            v118 = (_BYTE *)a1[104];
          }
          else
          {
            v139 = (_BYTE *)a1[3];
          }
          a1[126] = (__int64)&v139[-a1[117]];
LABEL_189:
          if ( ((unsigned __int8)v118 & 1) != 0 )
          {
            v119 = (_QWORD *)a1[9];
            if ( v119 )
            {
              v120 = a1[118];
              v121 = v119[10] & v120;
              v122 = v120 >> v119[9];
              v119[12] = v121;
              v119[11] = v122;
              goto LABEL_192;
            }
            v34 = "source input required";
            goto LABEL_44;
          }
LABEL_192:
          v123 = (unsigned __int8 *)a1[141];
          v124 = *((_BYTE *)a1 + 1040);
          if ( v123 != (unsigned __int8 *)a1[142] )
          {
            if ( v124 )
              goto LABEL_196;
            if ( *((_BYTE *)a1 + 1064) )
              goto LABEL_198;
            v140 = (_BYTE *)a1[166];
            a1[141] = (__int64)(v123 + 1);
            v141 = &v140[4 * *v123];
            *((_BYTE *)a1 + 1040) = *v141;
            *((_BYTE *)a1 + 1064) = v141[2];
            a1[131] = (unsigned __int8)v141[1];
            a1[134] = (unsigned __int8)v141[3];
            if ( (!*v141 || !(unsigned int)sub_7F5DE0(a1, (unsigned __int8 *)a1 + 1040))
              && (!v141[2] || !(unsigned int)sub_7F5DE0(a1, (unsigned __int8 *)a1 + 1064)) )
            {
              goto LABEL_197;
            }
            return 4294949584LL;
          }
          if ( !v124 )
          {
            if ( *((_BYTE *)a1 + 1064) )
              goto LABEL_198;
            v125 = a1[4];
            if ( v125 == a1[120] )
            {
              if ( a1[157] == a1[158] )
              {
                if ( a1[149] == a1[150] )
                {
                  if ( (a1[104] & 4) == 0
                    || (*((_BYTE *)a1 + 153) & 8) != 0
                    || (unsigned int)sub_7F4BC0(a1[3], a1[4]) == *((_DWORD *)a1 + 233) )
                  {
                    *((_DWORD *)a1 + 204) = 23;
                    a1[124] = 0;
                    a1[160] = 0;
                    a1[144] = 0;
                    a1[152] = 0;
LABEL_203:
                    a1[7] += v125;
                    return 4294949592LL;
                  }
                  v34 = "target window checksum mismatch";
                }
                else
                {
                  v34 = "extra address section";
                }
              }
              else
              {
                v34 = "extra data section";
              }
            }
            else
            {
              v34 = "wrong window length";
            }
            goto LABEL_44;
          }
LABEL_196:
          while ( 1 )
          {
            result = sub_7F4840((__int64)a1, (__int64)(a1 + 130));
            if ( (_DWORD)result )
              break;
LABEL_197:
            v124 = *((_BYTE *)a1 + 1040);
LABEL_198:
            if ( !v124 )
            {
              while ( *((_BYTE *)a1 + 1064) )
              {
                result = sub_7F4840((__int64)a1, (__int64)(a1 + 133));
                if ( (_DWORD)result )
                  goto LABEL_201;
              }
              goto LABEL_192;
            }
          }
LABEL_201:
          if ( (_DWORD)result == -17704 )
          {
            v125 = a1[4];
            goto LABEL_203;
          }
        }
        break;
      case 22:
        v118 = (_BYTE *)a1[104];
        goto LABEL_189;
      case 23:
        if ( (a1[104] & 2) != 0 )
        {
          v112 = (_BYTE *)a1[137];
          if ( v112 )
          {
            v113 = (_BYTE *)a1[3];
            a1[3] = (__int64)v112;
            v114 = (_BYTE *)a1[140];
            a1[137] = (__int64)v113;
            v115 = (_BYTE *)a1[5];
            a1[5] = (__int64)v114;
            a1[140] = (__int64)v115;
          }
          else
          {
            a1[137] = a1[3];
            a1[140] = a1[5];
          }
        }
        v116 = _mm_loadu_si128((const __m128i *)a1 + 61);
        v117 = _mm_loadu_si128((const __m128i *)a1 + 60);
        *((_DWORD *)a1 + 204) = 9;
        ++a1[123];
        *((__m128i *)a1 + 69) = _mm_unpacklo_epi64(v117, v116);
        return 4294949588LL;
      default:
        v34 = "invalid state";
        goto LABEL_44;
    }
  }
  return result;
}

