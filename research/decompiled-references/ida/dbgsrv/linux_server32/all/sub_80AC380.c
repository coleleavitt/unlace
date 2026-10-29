/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AC380
// Address: 0x080AC380

//----- (080AC380) --------------------------------------------------------
int __cdecl sub_80AC380(_DWORD *a1)
{
  _DWORD *v1; // eax
  char *v2; // esi
  char *v3; // eax
  int v4; // edi
  char *v5; // esi
  void *v6; // eax
  void *v7; // eax
  _DWORD *v9; // ebx
  int v10; // edx
  char *v11; // eax
  char *v12; // eax
  int v13; // eax
  __int64 v14; // xmm0_8
  __int32 v15; // edi
  int v16; // edx
  int v17; // edx
  int v18; // esi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  char v21; // di
  __int32 v22; // eax
  __m128i si128; // xmm0
  int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // edx
  __m128i v27; // xmm1
  int v28; // eax
  int v29; // edx
  int v30; // esi
  unsigned int v31; // edi
  void *v32; // eax
  unsigned __int64 v33; // xmm1_8
  unsigned __int64 v34; // xmm0_8
  unsigned int v35; // edi
  unsigned int v36; // eax
  unsigned int v37; // edx
  __m128i v38; // xmm1
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // edx
  int v42; // ebx
  bool v43; // zf
  char *v44; // ecx
  int v45; // edi
  int v46; // esi
  char *v47; // edx
  void *v48; // eax
  unsigned int v49; // edi
  __int32 v50; // edi
  const char *v51; // esi
  int v52; // edi
  int v53; // eax
  void *v54; // eax
  _DWORD *v55; // esi
  unsigned int v56; // ebx
  size_t v57; // edi
  const void *v58; // ecx
  int v59; // esi
  __int32 v60; // edx
  _BYTE *v61; // eax
  _DWORD *v62; // ebx
  __int32 v63; // esi
  unsigned int v64; // eax
  unsigned int v65; // edx
  const char *v66; // ecx
  int v67; // eax
  const char *v68; // edi
  __int32 v69; // ecx
  unsigned int v70; // eax
  int v71; // edx
  int v72; // edi
  char *v73; // eax
  void *v74; // ecx
  char *v75; // esi
  __int32 v76; // eax
  void *v77; // eax
  int v78; // edx
  __int32 v79; // esi
  void *v80; // eax
  int v81; // edx
  __int32 v82; // eax
  void *v83; // eax
  void *v84; // eax
  int v85; // eax
  char *v86; // ecx
  void **v87; // edx
  _DWORD *v88; // ecx
  unsigned int v89; // eax
  char *v90; // eax
  int v91; // ebx
  _DWORD *v92; // edx
  int v93; // ecx
  __int64 v94; // xmm2_8
  __m128i v96; // xmm0
  __m128i v97; // xmm0
  int v98; // esi
  const char *v99; // eax
  void *v100; // ecx
  __int32 v101; // edx
  __int32 v102; // esi
  void *v103; // eax
  _DWORD *v104; // edx
  bool *v105; // [esp+8h] [ebp-2A4h]
  int v106; // [esp+10h] [ebp-29Ch]
  _DWORD *v107; // [esp+10h] [ebp-29Ch]
  const char *v108; // [esp+18h] [ebp-294h]
  unsigned int v109; // [esp+18h] [ebp-294h]
  char *v110; // [esp+18h] [ebp-294h]
  int v111; // [esp+1Ch] [ebp-290h]
  __int32 v112; // [esp+1Ch] [ebp-290h]
  unsigned int v113; // [esp+1Ch] [ebp-290h]
  __m128i v114; // [esp+20h] [ebp-28Ch] BYREF
  int *v115; // [esp+30h] [ebp-27Ch]
  _WORD *v116; // [esp+34h] [ebp-278h]
  const char *v117; // [esp+38h] [ebp-274h]
  char v118; // [esp+3Eh] [ebp-26Eh]
  unsigned __int8 v119; // [esp+3Fh] [ebp-26Dh]
  __m128i v120; // [esp+40h] [ebp-26Ch]
  __m128i v121; // [esp+50h] [ebp-25Ch]
  unsigned int v122; // [esp+60h] [ebp-24Ch]
  unsigned int v123; // [esp+64h] [ebp-248h]
  _DWORD *v124; // [esp+68h] [ebp-244h]
  char *v125; // [esp+78h] [ebp-234h] BYREF
  int v126; // [esp+7Ch] [ebp-230h]
  unsigned int v127; // [esp+80h] [ebp-22Ch]
  _QWORD v128[3]; // [esp+88h] [ebp-224h] BYREF
  int v129; // [esp+A0h] [ebp-20Ch] BYREF
  __int64 v130; // [esp+A4h] [ebp-208h] BYREF
  _WORD v131[8]; // [esp+ACh] [ebp-200h] BYREF
  void *v132; // [esp+BCh] [ebp-1F0h]
  int v133; // [esp+C0h] [ebp-1ECh]
  _BYTE v134[16]; // [esp+D4h] [ebp-1D8h] BYREF
  void *v135; // [esp+E4h] [ebp-1C8h]
  int v136; // [esp+E8h] [ebp-1C4h]
  char *v137; // [esp+180h] [ebp-12Ch]
  __int32 v138; // [esp+184h] [ebp-128h]
  int v139; // [esp+214h] [ebp-98h]
  __m128i v140; // [esp+218h] [ebp-94h] BYREF
  char v141; // [esp+230h] [ebp-7Ch]
  char v142; // [esp+231h] [ebp-7Bh]
  unsigned int v143; // [esp+26Ch] [ebp-40h]
  void *v144; // [esp+274h] [ebp-38h]
  int v145; // [esp+278h] [ebp-34h]
  int v146; // [esp+280h] [ebp-2Ch]
  char v147; // [esp+288h] [ebp-24h]
  unsigned int v148; // [esp+28Ch] [ebp-20h]

  v124 = a1;
  v148 = __readgsdword(0x14u);
  v1 = (_DWORD *)*a1;
  if ( !*a1 || v1[1] != 1 )
    goto LABEL_27;
  v2 = (char *)&qword_811CFF4 - 258076;
  if ( v1[3] )
    v2 = (char *)v1[2];
  v115 = sub_80CD4D0((int)v2, 0);
  if ( !v115 )
  {
LABEL_27:
    sub_8058290();
    v119 = 0;
    goto LABEL_28;
  }
  v116 = v131;
  sub_806D700((int)v131, v115, 0);
  sub_8069F90((int)v131, nullptr);
  if ( !(unsigned __int8)sub_8069FC0((int)v131)
    || !(unsigned __int8)sub_806A5B0(v131)
    || (v118 = sub_806EF70((int)v131)) == 0 )
  {
    sub_8058290();
    v119 = 0;
    goto LABEL_9;
  }
  v125 = nullptr;
  v126 = 0;
  v119 = 0;
  v127 = 0;
  v123 = 1;
  if ( v143 <= 1 )
  {
    v104 = v124;
    v43 = v141 == 2;
    *((_BYTE *)v124 + 93) = v142 == 2;
    *((_BYTE *)v104 + 92) = v43;
    goto LABEL_59;
  }
  do
  {
    v9 = v124;
    v10 = v124[14];
    v11 = (char *)v124[13];
    if ( v124[15] < (unsigned int)(v10 + 1) )
    {
      v11 = (char *)sub_80CF920((int)(v124 + 13), v11, v10 + 1, 0x64u);
      v10 = v9[14];
      v9[13] = v11;
    }
    v12 = &v11[100 * v10];
    *(_DWORD *)v12 = 0;
    *((_DWORD *)v12 + 24) = 0;
    v121.m128i_i32[0] = (__int32)v12;
    memset(
      (void *)((unsigned int)(v12 + 4) & 0xFFFFFFFC),
      0,
      4 * ((unsigned int)&v12[-((unsigned int)(v12 + 4) & 0xFFFFFFFC) + 100] >> 2));
    ++v124[14];
    v122 = (unsigned int)v134;
    v13 = sub_806BD80((int)v134, v123, v105);
    v14 = *(_QWORD *)(v13 + 16);
    v15 = v121.m128i_i32[0];
    v120.m128i_i32[0] = v13;
    *(_QWORD *)v121.m128i_i32[0] = v14;
    *(_DWORD *)(v15 + 8) = *(_DWORD *)(v13 + 32);
    *(_DWORD *)(v15 + 24) = *(_DWORD *)(v13 + 40);
    *(_DWORD *)(v15 + 28) = *(_DWORD *)(v13 + 56);
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(v13 + 24);
    v16 = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v15 + 44) = 0;
    *(_DWORD *)(v15 + 40) = v16;
    v17 = *(_DWORD *)(v13 + 44);
    *(_DWORD *)(v15 + 52) = 0;
    *(_DWORD *)(v15 + 48) = v17;
    v111 = v15 + 12;
    sub_806E9F0(v122, (__m128i **)(v15 + 12), (_DWORD *)v13);
    v18 = *(_DWORD *)(v15 + 16);
    if ( !v18 )
    {
      v19 = _mm_loadl_epi64((const __m128i *)(v120.m128i_i32[0] + 8));
      v20 = _mm_and_si128(_mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257444)), v19);
      if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v20, 0x20u)) | _mm_cvtsi128_si32(v20)) )
        goto LABEL_56;
      if ( dword_811E72C )
      {
        v21 = *(_BYTE *)(dword_811E72C + 96);
        if ( !v21 )
        {
LABEL_40:
          v22 = v121.m128i_i32[0];
          si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257444));
          v24 = *(_DWORD *)(v121.m128i_i32[0] + 8);
          *(_DWORD *)(v121.m128i_i32[0] + 76) = 0;
          *(_DWORD *)(v22 + 72) = v24;
          *(_QWORD *)(v22 + 56) = _mm_or_si128(si128, v19).m128i_u64[0];
          memset(v128, 0, sizeof(v128));
          v117 = (const char *)v128;
          v25 = sub_80CD730(v139, 0, 1);
          v27 = _mm_loadl_epi64(&v140);
          v114 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(v26)), v27);
          v120 = _mm_add_epi64(v27, _mm_loadl_epi64((const __m128i *)(v120.m128i_i32[0] + 24)));
          v28 = sub_80CD730(v139, v120.m128i_i64[0], 0);
          if ( (v29 & v28) == 0xFFFFFFFF )
            goto LABEL_71;
          if ( v21 )
          {
            if ( sub_806A1B0((int)v116, &v129, 12, 0) )
              goto LABEL_71;
            if ( !v147 )
              sub_80D05E0((char *)&v130, 8);
            LODWORD(v128[0]) = 1;
            v128[2] = 1;
            v128[1] = v130;
            v30 = *(_DWORD *)(v121.m128i_i32[0] + 16);
            if ( v30 && (v31 = v30 - 1, (unsigned int)(v30 - 1) > 1) )
            {
              v120.m128i_i32[0] = 1;
              if ( v30 != 3 )
              {
                memmove(
                  (void *)(*(_DWORD *)(v121.m128i_i32[0] + 12) + 1),
                  (const void *)(*(_DWORD *)(v121.m128i_i32[0] + 12) + 2),
                  v30 - 3);
                v120.m128i_i32[0] = v30 - 2;
              }
              v32 = *(void **)(v121.m128i_i32[0] + 12);
              if ( *(_DWORD *)(v121.m128i_i32[0] + 20) < v31 )
              {
                v32 = sub_80CF920(v111, v32, v30 - 1, 1u);
                *(_DWORD *)(v121.m128i_i32[0] + 12) = v32;
              }
              *(_DWORD *)(v121.m128i_i32[0] + 16) = v31;
              *((_BYTE *)v32 + v120.m128i_i32[0]) = 0;
              v33 = _mm_cvtsi32_si128(v128[0]).m128i_u64[0];
              v34 = v128[2];
            }
            else
            {
              v120.m128i_i64[0] = 1;
              v33 = 1;
              v34 = _mm_load_si128((const __m128i *)&xmmword_80DE200).m128i_u64[0];
            }
            goto LABEL_85;
          }
          if ( sub_806AF40((int)v116, (int)v117) )
          {
            v33 = _mm_cvtsi32_si128(v128[0]).m128i_u64[0];
            v34 = v128[2];
LABEL_85:
            v63 = v121.m128i_i32[0];
            *(_QWORD *)(v121.m128i_i32[0] + 64) = v33;
            *(_QWORD *)(v63 + 80) = v34;
            v64 = sub_80CD730(v139, 0, 1);
            *(_QWORD *)(v63 + 88) = _mm_sub_epi64(
                                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), _mm_cvtsi32_si128(v65)),
                                      _mm_loadl_epi64(&v140)).m128i_u64[0];
            *(_DWORD *)(v63 + 8) = v128[1];
            v120 = _mm_add_epi64(_mm_load_si128(&v114), _mm_loadl_epi64(&v140));
            sub_80CD730(v139, v120.m128i_i64[0], 0);
            v18 = *(_DWORD *)(v63 + 16);
            v49 = v18 - 1;
            if ( !v18 )
              goto LABEL_56;
            goto LABEL_86;
          }
LABEL_71:
          sub_8058290();
          v120 = _mm_add_epi64(_mm_load_si128(&v114), _mm_loadl_epi64(&v140));
          sub_80CD730(v139, v120.m128i_i64[0], 0);
          v18 = *(_DWORD *)(v121.m128i_i32[0] + 16);
LABEL_72:
          if ( v18 )
          {
            v50 = v121.m128i_i32[0];
            v51 = *(const char **)(v121.m128i_i32[0] + 12);
            if ( !strcmp(v51, (const char *)&qword_811CFF4 - 276696) )
            {
              v35 = *(_DWORD *)(v50 + 8);
              sub_8058290();
              v36 = sub_80CD730(v139, 0, 1);
              v38 = _mm_loadl_epi64(&v140);
              v114 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v37)), v38);
              v121 = _mm_add_epi64(v38, _mm_loadl_epi64((const __m128i *)(v121.m128i_i32[0] + 32)));
              v39 = sub_80CD730(v139, v121.m128i_i64[0], 0);
              if ( (v40 & v39) == 0xFFFFFFFF )
              {
                sub_8058290();
                v121 = _mm_add_epi64(_mm_load_si128(&v114), _mm_loadl_epi64(&v140));
                sub_80CD730(v139, v121.m128i_i64[0], 0);
              }
              else
              {
                v122 = v35 / 0x14;
                v121.m128i_i32[0] = v35 % 0x14;
                if ( v35 % 0x14 )
                {
                  sub_8058290();
                }
                else if ( v35 > 0x13 )
                {
                  v120.m128i_i32[0] = 20;
                  v117 = (const char *)v128;
                  do
                  {
                    memset(v128, 0, 12);
                    LODWORD(v128[0]) = sub_80CF920((int)v117, nullptr, 0x14u, 1u);
                    memset((void *)(HIDWORD(v128[0]) + LODWORD(v128[0])), 0, v120.m128i_i32[0] - HIDWORD(v128[0]));
                    HIDWORD(v128[0]) = v120.m128i_i32[0];
                    if ( sub_806A1B0((int)v116, (void *)v128[0], 20, 1) )
                    {
                      v84 = (void *)v128[0];
                    }
                    else
                    {
                      v85 = v126;
                      if ( v127 < v126 + 1 )
                      {
                        v109 = v127;
                        v88 = sub_80CF920((int)&v125, nullptr, v126 + 1, 0xCu);
                        v89 = v127;
                        v127 = v109;
                        v113 = v89;
                        v90 = v125;
                        v91 = v126 - 1;
                        if ( v126 - 1 >= 0 )
                        {
                          v92 = v88;
                          v107 = v88;
                          do
                          {
                            v93 = *(_DWORD *)v90;
                            v94 = *(_QWORD *)(v90 + 4);
                            *(_DWORD *)v90 = 0;
                            v92 += 3;
                            *((_DWORD *)v90 + 2) = 0;
                            v90 += 12;
                            *(v92 - 3) = v93;
                            *((_QWORD *)v92 - 1) = v94;
                          }
                          while ( v91-- != 0 );
                          v88 = v107;
                          v90 = v125;
                        }
                        v110 = (char *)v88;
                        sub_80CF780(v90);
                        v86 = v110;
                        v127 = v113;
                        v85 = v126;
                        v125 = v110;
                      }
                      else
                      {
                        v86 = v125;
                      }
                      v87 = (void **)&v86[12 * v85];
                      *v87 = nullptr;
                      v87[1] = nullptr;
                      v87[2] = nullptr;
                      ++v126;
                      v84 = *v87;
                      *(_QWORD *)v87 = v128[0];
                      v87[2] = (void *)v128[1];
                      LODWORD(v128[0]) = v84;
                      LODWORD(v128[1]) = 0;
                    }
                    if ( v84 )
                    {
                      HIDWORD(v128[0]) = 0;
                      sub_80CF780(v84);
                    }
                    ++v121.m128i_i32[0];
                  }
                  while ( v121.m128i_i32[0] < v122 );
                }
                v121 = _mm_add_epi64(_mm_load_si128(&v114), _mm_loadl_epi64(&v140));
                sub_80CD730(v139, v121.m128i_i64[0], 0);
              }
            }
            else if ( !strcmp(v51, (const char *)&qword_811CFF4 - 276686) )
            {
              v52 = v122;
              v53 = sub_806BD80(v122, v123, v105);
              memset(v128, 0, 12);
              sub_806F910(v52, (int)v128, v53);
              v54 = (void *)v124[28];
              if ( v54 )
              {
                v55 = v124;
                v124[29] = 0;
                sub_80CF780(v54);
                v55[28] = 0;
                v56 = 0;
                v55[30] = 0;
              }
              else
              {
                v56 = v124[30];
              }
              v57 = HIDWORD(v128[0]);
              v58 = (const void *)v128[0];
              v59 = v124[29];
              v121.m128i_i32[0] = HIDWORD(v128[0]);
              if ( v59 )
              {
                --v59;
                v121.m128i_i32[0] = HIDWORD(v128[0]) + v59;
              }
              v60 = v121.m128i_i32[0] + 1;
              v61 = nullptr;
              if ( v56 < v121.m128i_i32[0] + 1 )
              {
                v122 = v128[0];
                v120.m128i_i32[0] = v121.m128i_i32[0] + 1;
                v61 = sub_80CF920((int)(v124 + 28), nullptr, v121.m128i_i32[0] + 1, 1u);
                v60 = v120.m128i_i32[0];
                v124[28] = v61;
                v58 = (const void *)v122;
              }
              v62 = v124;
              v124[29] = v60;
              v61[v121.m128i_i32[0]] = 0;
              memmove((void *)(v62[28] + v59), v58, v57);
              if ( LODWORD(v128[0]) )
              {
                HIDWORD(v128[0]) = 0;
                sub_80CF780((void *)v128[0]);
              }
            }
          }
          goto LABEL_56;
        }
        v21 = 0;
LABEL_39:
        sub_8058290();
        v19 = _mm_loadl_epi64((const __m128i *)(v120.m128i_i32[0] + 8));
        goto LABEL_40;
      }
      goto LABEL_135;
    }
    v49 = v18 - 1;
    if ( (unsigned int)(v18 - 1) <= 7 )
    {
      v19 = _mm_loadl_epi64((const __m128i *)(v120.m128i_i32[0] + 8));
      v97 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_80DE250), v19);
      if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v97, 0x20u)) | _mm_cvtsi128_si32(v97)) )
      {
        v67 = strncmp(*(const char **)(v121.m128i_i32[0] + 12), (const char *)&qword_811CFF4 - 276704, 7u);
LABEL_89:
        v119 |= v67 == 0;
        goto LABEL_72;
      }
LABEL_129:
      if ( dword_811E72C )
      {
        v21 = *(_BYTE *)(dword_811E72C + 96);
        if ( !v21 )
          goto LABEL_40;
        v21 = 0;
        goto LABEL_39;
      }
LABEL_135:
      v21 = 0;
      goto LABEL_40;
    }
    if ( !strncmp(*(const char **)(v121.m128i_i32[0] + 12), (const char *)&qword_811CFF4 - 276763, 8u) )
    {
      if ( !dword_811E72C || (v21 = *(_BYTE *)(dword_811E72C + 96)) == 0 )
      {
        v21 = v118;
        v19 = _mm_loadl_epi64((const __m128i *)(v120.m128i_i32[0] + 8));
        goto LABEL_40;
      }
      goto LABEL_39;
    }
    v19 = _mm_loadl_epi64((const __m128i *)(v120.m128i_i32[0] + 8));
    v96 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_80DE250), v19);
    if ( _mm_cvtsi128_si32(_mm_srli_epi64(v96, 0x20u)) | _mm_cvtsi128_si32(v96) )
      goto LABEL_129;
LABEL_86:
    v66 = *(const char **)(v121.m128i_i32[0] + 12);
    v108 = v66;
    if ( v49 <= 0xA
      || (v117 = (char *)&qword_811CFF4 - 276708, strncmp(v66, (const char *)&qword_811CFF4 - 276708, 0xBu)) )
    {
      v67 = strncmp(v108, (const char *)&qword_811CFF4 - 276704, 7u);
      goto LABEL_89;
    }
    memset(v128, 0, 12);
    v68 = v108;
    v69 = 0;
    while ( 1 )
    {
      v120.m128i_i32[0] = v69;
      v73 = strstr(v68, v117);
      v74 = (void *)v120.m128i_i32[0];
      v75 = v73;
      if ( !v73 )
        break;
      v76 = v73 - v68;
      v120.m128i_i32[0] = v76;
      if ( v76 )
      {
        v78 = HIDWORD(v128[0]);
        v114.m128i_i32[0] = v76;
        if ( HIDWORD(v128[0]) )
        {
          v78 = HIDWORD(v128[0]) - 1;
          v114.m128i_i32[0] = HIDWORD(v128[0]) - 1 + v76;
        }
        v112 = v114.m128i_i32[0] + 1;
        if ( LODWORD(v128[1]) < v114.m128i_i32[0] + 1 )
        {
          v106 = v78;
          v83 = sub_80CF920((int)v128, v74, v114.m128i_i32[0] + 1, 1u);
          v78 = v106;
          LODWORD(v128[0]) = v83;
          v74 = v83;
        }
        HIDWORD(v128[0]) = v112;
        *((_BYTE *)v74 + v114.m128i_i32[0]) = 0;
        memmove((void *)(LODWORD(v128[0]) + v78), v68, v120.m128i_u32[0]);
        v74 = (void *)v128[0];
      }
      v72 = HIDWORD(v128[0]);
      if ( HIDWORD(v128[0]) )
      {
        v70 = HIDWORD(v128[0]) + 12;
        v71 = HIDWORD(v128[0]) + 11;
        v72 = HIDWORD(v128[0]) - 1;
        v120.m128i_i32[0] = HIDWORD(v128[0]) + 12;
        if ( LODWORD(v128[1]) >= HIDWORD(v128[0]) + 12 )
          goto LABEL_92;
      }
      else
      {
        v120.m128i_i32[0] = 13;
        v71 = 12;
        v70 = 13;
        if ( LODWORD(v128[1]) >= 0xD )
          goto LABEL_92;
      }
      v114.m128i_i32[0] = v71;
      v77 = sub_80CF920((int)v128, v74, v70, 1u);
      v71 = v114.m128i_i32[0];
      LODWORD(v128[0]) = v77;
      v74 = v77;
LABEL_92:
      HIDWORD(v128[0]) = v120.m128i_i32[0];
      *((_BYTE *)v74 + v71) = 0;
      qmemcpy((void *)(LODWORD(v128[0]) + v72), ".rela.debug_", 12);
      v69 = v128[0];
      v68 = v75 + 11;
    }
    if ( v108 == v68 )
    {
      v80 = (void *)v120.m128i_i32[0];
    }
    else
    {
      if ( *v68 && v68 )
      {
        v98 = HIDWORD(v128[0]);
        v114.m128i_i32[0] = v120.m128i_i32[0];
        v120.m128i_i32[0] = HIDWORD(v128[0]);
        v99 = (const char *)strlen(v68);
        v100 = (void *)v114.m128i_i32[0];
        v117 = v99;
        v101 = (__int32)v99;
        if ( v98 )
        {
          v120.m128i_i32[0] = v98 - 1;
          v101 = (__int32)&v99[v98 - 1];
        }
        v102 = v101 + 1;
        if ( LODWORD(v128[1]) < v101 + 1 )
        {
          v114.m128i_i32[0] = v101;
          v103 = sub_80CF920((int)v128, v100, v101 + 1, 1u);
          v101 = v114.m128i_i32[0];
          LODWORD(v128[0]) = v103;
          v100 = v103;
        }
        HIDWORD(v128[0]) = v102;
        *((_BYTE *)v100 + v101) = 0;
        memmove((void *)(LODWORD(v128[0]) + v120.m128i_i32[0]), v68, (size_t)v117);
        v74 = (void *)v128[0];
      }
      v79 = v121.m128i_i32[0];
      v80 = *(void **)(v121.m128i_i32[0] + 12);
      v81 = *(_DWORD *)(v121.m128i_i32[0] + 20);
      *(_DWORD *)(v121.m128i_i32[0] + 12) = v74;
      *(_QWORD *)(v79 + 16) = *(_QWORD *)((char *)v128 + 4);
      LODWORD(v128[0]) = v80;
      LODWORD(v128[1]) = v81;
    }
    if ( v80 )
    {
      HIDWORD(v128[0]) = 0;
      sub_80CF780(v80);
    }
    v120.m128i_i32[0] = *(_DWORD *)(v121.m128i_i32[0] + 40);
    if ( !(*(_DWORD *)(v121.m128i_i32[0] + 44) | v120.m128i_i32[0] ^ 9) )
    {
      v82 = v121.m128i_i32[0];
      *(_DWORD *)(v121.m128i_i32[0] + 40) = 4;
      *(_DWORD *)(v82 + 44) = 0;
    }
    if ( *(_DWORD *)(v121.m128i_i32[0] + 16) )
    {
      v18 = *(_DWORD *)(v121.m128i_i32[0] + 16);
      v67 = strncmp(*(const char **)(v121.m128i_i32[0] + 12), (const char *)&qword_811CFF4 - 276704, 7u);
      goto LABEL_89;
    }
LABEL_56:
    ++v123;
  }
  while ( v123 < v143 );
  v41 = v124;
  v42 = v126;
  v43 = v141 == 2;
  *((_BYTE *)v124 + 93) = v142 == 2;
  *((_BYTE *)v41 + 92) = v43;
  if ( v42 )
    sub_80A6A40(v41, &v125);
LABEL_59:
  v44 = v125;
  *((_QWORD *)v124 + 13) = _mm_sub_epi64(_mm_loadl_epi64((const __m128i *)&v140.m128i_u64[1]), _mm_loadl_epi64(&v140)).m128i_u64[0];
  if ( v44 )
  {
    v45 = v126;
    if ( v126 )
    {
      v46 = 0;
      do
      {
        v47 = &v44[12 * v46];
        v48 = *(void **)v47;
        if ( *(_DWORD *)v47 )
        {
          *((_DWORD *)v47 + 1) = 0;
          sub_80CF780(v48);
          v44 = v125;
        }
        ++v46;
      }
      while ( v45 != v46 );
    }
    v126 = 0;
    sub_80CF780(v44);
  }
LABEL_9:
  if ( v146 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v146 + 4))(v146);
  if ( v144 )
  {
    v145 = 0;
    sub_80CF780(v144);
  }
  v3 = v137;
  if ( v137 )
  {
    if ( v138 )
    {
      v121.m128i_i32[0] = v138;
      v4 = 0;
      do
      {
        v5 = &v3[68 * v4];
        v6 = *((void **)v5 + 3);
        if ( v6 )
        {
          *((_DWORD *)v5 + 4) = 0;
          sub_80CF780(v6);
        }
        v7 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_80CF780(v7);
        }
        v3 = v137;
        ++v4;
      }
      while ( v121.m128i_i32[0] != v4 );
    }
    v138 = 0;
    sub_80CF780(v3);
  }
  if ( v135 )
  {
    v136 = 0;
    sub_80CF780(v135);
  }
  if ( v132 )
  {
    v133 = 0;
    sub_80CF780(v132);
  }
  sub_80CD620(v115);
LABEL_28:
  if ( v148 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v119;
}
// 80AC6C0: variable 'v105' is possibly undefined
// 80AC81A: variable 'v26' is possibly undefined
// 80AC86F: variable 'v29' is possibly undefined
// 80AC992: variable 'v37' is possibly undefined
// 80AC9E7: variable 'v40' is possibly undefined
// 80ACE2C: variable 'v65' is possibly undefined
// 80DE200: using guessed type __int128 xmmword_80DE200;
// 80DE250: using guessed type __int128 xmmword_80DE250;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E72C: using guessed type int dword_811E72C;
