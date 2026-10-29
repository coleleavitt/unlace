void __fastcall sub_61F600(const double *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v6; // r15
  const double *v7; // r13
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  _QWORD *v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rsi
  int v19; // eax
  __m128i v20; // xmm0
  __m128 v21; // xmm1
  void ***v22; // rbp
  void ***v23; // rbx
  void ***v24; // r14
  void **v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  const __m128i *v31; // r13
  __m128i *v32; // r14
  __int64 v33; // rdx
  const __m128i *v34; // r15
  __int32 v35; // eax
  char *v36; // r14
  char *v37; // rdi
  char *v38; // r13
  char *v39; // rdi
  void ***v40; // r12
  void ***v41; // r14
  void **v42; // r13
  unsigned int *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // r9d
  unsigned __int64 v48; // r8
  __int64 v49; // r10
  __int64 v50; // rax
  int v51; // esi
  __int64 v52; // rdx
  unsigned int v53; // r14d
  __int64 v54; // r15
  unsigned int v55; // ebp
  unsigned int v56; // r12d
  char v57; // bl
  unsigned int v58; // r13d
  __int64 v59; // rdx
  __m128i *v60; // rbp
  __int64 v61; // rbp
  __m128i *v62; // rax
  __int64 v63; // rax
  unsigned int *v64; // rax
  unsigned __int64 v65; // r11
  __int64 v66; // rax
  _QWORD *v67; // r12
  __int64 v68; // rax
  __int8 v69; // dl
  int v70; // edx
  unsigned int v71; // edx
  int v72; // eax
  __m128i v73; // xmm0
  __m128i v74; // xmm2
  __m128i v75; // xmm1
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rbp
  int v79; // eax
  __int64 *v80; // rdi
  __int64 v81; // rdx
  _DWORD *v82; // rax
  _DWORD *v83; // rdx
  __m128i v84; // [rsp+0h] [rbp-4A8h]
  __int64 v85; // [rsp+18h] [rbp-490h]
  unsigned int v86; // [rsp+20h] [rbp-488h]
  __int64 v87; // [rsp+20h] [rbp-488h]
  unsigned int v88; // [rsp+28h] [rbp-480h]
  unsigned __int64 v89; // [rsp+28h] [rbp-480h]
  unsigned int v90; // [rsp+34h] [rbp-474h]
  int v91; // [rsp+38h] [rbp-470h]
  __int64 v93; // [rsp+48h] [rbp-460h]
  int v94; // [rsp+50h] [rbp-458h]
  int v95; // [rsp+50h] [rbp-458h]
  const __m128i *v96; // [rsp+58h] [rbp-450h]
  int v97; // [rsp+58h] [rbp-450h]
  int v98; // [rsp+58h] [rbp-450h]
  const __m128i *v99; // [rsp+60h] [rbp-448h]
  int v100; // [rsp+60h] [rbp-448h]
  char v101; // [rsp+60h] [rbp-448h]
  _DWORD *v102; // [rsp+68h] [rbp-440h]
  int v103; // [rsp+68h] [rbp-440h]
  int v104; // [rsp+68h] [rbp-440h]
  _QWORD *v105; // [rsp+80h] [rbp-428h]
  unsigned int v106; // [rsp+88h] [rbp-420h]
  unsigned int v107; // [rsp+8Ch] [rbp-41Ch]
  __m128i v108; // [rsp+90h] [rbp-418h] BYREF
  __m128i v109; // [rsp+A0h] [rbp-408h] BYREF
  char v110; // [rsp+BFh] [rbp-3E9h] BYREF
  __m128i v111; // [rsp+C0h] [rbp-3E8h] BYREF
  unsigned int v112; // [rsp+D0h] [rbp-3D8h]
  __m128i v113; // [rsp+E0h] [rbp-3C8h] BYREF
  unsigned int v114; // [rsp+F0h] [rbp-3B8h]
  unsigned int v115; // [rsp+100h] [rbp-3A8h] BYREF
  unsigned int v116; // [rsp+104h] [rbp-3A4h]
  _DWORD *v117; // [rsp+108h] [rbp-3A0h]
  __int16 v118; // [rsp+110h] [rbp-398h]
  char v119; // [rsp+112h] [rbp-396h]
  __m128i v120; // [rsp+120h] [rbp-388h] BYREF
  __m128i v121; // [rsp+130h] [rbp-378h] BYREF
  __m128 v122; // [rsp+140h] [rbp-368h] BYREF
  int v123; // [rsp+150h] [rbp-358h]
  _BYTE v124[36]; // [rsp+154h] [rbp-354h] BYREF
  void *v125[2]; // [rsp+178h] [rbp-330h]
  _BYTE v126[40]; // [rsp+188h] [rbp-320h] BYREF
  _BYTE v127[12]; // [rsp+1B0h] [rbp-2F8h]
  char v128; // [rsp+1BCh] [rbp-2ECh]
  void *ptr[2]; // [rsp+1C0h] [rbp-2E8h]
  _QWORD v130[2]; // [rsp+1D0h] [rbp-2D8h] BYREF
  void *v131; // [rsp+1E0h] [rbp-2C8h]
  __int64 v132; // [rsp+1E8h] [rbp-2C0h]
  char v133; // [rsp+1F0h] [rbp-2B8h] BYREF
  void ***v134; // [rsp+1F8h] [rbp-2B0h]
  __int64 v135; // [rsp+200h] [rbp-2A8h]
  _BYTE v136[16]; // [rsp+208h] [rbp-2A0h] BYREF
  void ***v137; // [rsp+218h] [rbp-290h]
  __int64 v138; // [rsp+220h] [rbp-288h]
  _BYTE v139[40]; // [rsp+228h] [rbp-280h] BYREF
  __int64 v140; // [rsp+250h] [rbp-258h]
  char v141; // [rsp+258h] [rbp-250h]
  void *v142; // [rsp+260h] [rbp-248h]
  __int64 v143; // [rsp+268h] [rbp-240h]
  _BYTE v144[568]; // [rsp+270h] [rbp-238h] BYREF

  v6 = (const __m128i *)a3;
  v7 = a1;
  v86 = a4;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 4LL) & 2) != 0 && !getenv("LIBCLANG_BGPRIO_DISABLE") )
    sub_2648970(1);
  clang_getTokenLocation(&v111, (__int64)a1, a3, a4, a5, a6, _mm_loadu_si128(v6).m128i_i64[0]);
  v9 = v112;
  v88 = v112;
  clang_getTokenLocation(
    &v113,
    (__int64)a1,
    v10,
    v11,
    v12,
    v13,
    _mm_loadu_si128((const __m128i *)((char *)v6 + 24 * v86 - 24)).m128i_i64[0]);
  v14 = *((_QWORD **)a1 + 1);
  v15 = (_QWORD *)v14[4];
  v90 = v114;
  v93 = v14[8];
  v16 = sub_600EA0((__int64)v15, v9);
  if ( (_DWORD)v16 != (unsigned int)sub_600EA0((__int64)v15, v90) )
    goto LABEL_3;
  v110 = 0;
  v44 = sub_CAC050(v15, (unsigned int)v16, &v110);
  v46 = v44;
  if ( !v45 || v110 )
    goto LABEL_3;
  v47 = v44 + v45;
  v48 = v44 + HIDWORD(v16);
  v49 = *(_QWORD *)(v14[10] + 2160LL);
  v122.m128_i8[0] = 0;
  if ( (unsigned int)(v16 + 1) <= 1 )
    goto LABEL_120;
  if ( (v16 & 0x80000000) == 0LL )
  {
    v50 = v15[23] + 24LL * (int)v16;
    goto LABEL_56;
  }
  v65 = (unsigned int)(-2 - v16);
  v66 = *(_QWORD *)(v15[32] + 8LL * ((unsigned int)v65 >> 6));
  if ( _bittest64(&v66, v65) )
  {
    v67 = (_QWORD *)(v15[26] + 8 * ((unsigned __int64)(int)v65 >> 5));
    if ( *v67 )
    {
      v50 = *v67 + 24 * (v65 & 0x1F);
      goto LABEL_56;
    }
    v80 = (__int64 *)(v15[28] & 0xFFFFFFFFFFFFFFF8LL);
    v81 = *v80;
    v80[10] += 768;
    v82 = (_DWORD *)((v81 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v80[1] >= (unsigned __int64)(v82 + 192) && v81 )
    {
      *v80 = (__int64)(v82 + 192);
    }
    else
    {
      v104 = v46;
      v101 = v65;
      v98 = v49;
      v95 = v48;
      v91 = v47;
      v82 = (_DWORD *)sub_5F8390((__int64)v80, 768, 3);
      v46 = v104;
      LOBYTE(v65) = v101;
      LODWORD(v49) = v98;
      LODWORD(v48) = v95;
      v47 = v91;
    }
    *v67 = v82;
    v83 = v82 + 192;
    do
    {
      *v82 = 0;
      v82 += 6;
      *((_OWORD *)v82 - 1) = 0;
    }
    while ( v83 != v82 );
    v69 = v122.m128_i8[0];
    v50 = *v67 + 24 * (v65 & 0x1F);
  }
  else
  {
    v103 = v46;
    v100 = v49;
    v97 = v48;
    v94 = v47;
    v50 = sub_CA9380(v15, (unsigned int)v65, &v122);
    v47 = v94;
    LODWORD(v48) = v97;
    v69 = v122.m128_i8[0];
    LODWORD(v49) = v100;
    v46 = v103;
  }
  if ( v69 || !v50 )
    goto LABEL_120;
LABEL_56:
  if ( *(char *)(v50 + 3) < 0 )
  {
LABEL_120:
    v51 = 0;
    goto LABEL_58;
  }
  v51 = *(_DWORD *)v50 & 0x7FFFFFFF;
LABEL_58:
  sub_115E190((unsigned int)&v122, v51, v49, v46, v48, v47, 1);
  BYTE2(v130[0]) = 1;
  v52 = v85;
  if ( v86 )
  {
    v99 = a2;
    v105 = v14;
    v53 = 0;
    v96 = v6;
    v54 = (__int64)v7;
    do
    {
      v55 = v53 + 1;
      sub_11681C0(&v122, &v115, v52);
      if ( v118 == 1 )
        break;
      if ( v118 == 67 )
      {
        v56 = v53++;
LABEL_63:
        v57 = v119 & 1;
        if ( (v119 & 1) != 0 )
        {
          if ( v53 >= v86 )
            break;
          v58 = v53 + 1;
          v106 = v115;
          sub_11681C0(&v122, &v115, v52);
          if ( v118 == 1 )
            break;
          v102 = nullptr;
          if ( v118 == 6 && v116 == 6 )
          {
            if ( *v117 == 1768318308 && *((_WORD *)v117 + 2) == 25966 )
            {
              if ( v58 >= v86 )
                break;
              v58 = v53 + 2;
              sub_11681C0(&v122, &v115, v59);
              if ( v118 == 1 )
                break;
              if ( v118 == 6 )
              {
                v78 = sub_600210(v93 + 552, v117, v116);
                v79 = sub_FEDF50(v105, v115);
                v102 = sub_60B5F0(v78, v79, v54);
              }
            }
            else
            {
              v102 = nullptr;
            }
          }
          v60 = (__m128i *)(a5 + 32LL * v58);
          while ( 1 )
          {
            if ( v58 >= v86 )
              goto LABEL_69;
            v53 = v58 + 1;
            sub_11681C0(&v122, &v115, v59);
            if ( v118 == 1 )
            {
              ++v58;
LABEL_69:
              v61 = v58 - 1;
              sub_639F40(&v120, ((unsigned __int64)v96->m128i_u32[6 * v61 + 1] << 32) | v106, v54);
              if ( (unsigned int)v61 < v56 )
                goto LABEL_105;
              v53 = v58;
              goto LABEL_71;
            }
            if ( v102 )
            {
              v107 = v115;
              v115 = sub_FEDF50(v105, v115);
              v68 = sub_60B6C0((__int64)v102, &v115, v54);
              v115 = v107;
              if ( v68 )
              {
                sub_63A010(&v108, v68, v107, v54);
                *v60 = _mm_loadu_si128(&v108);
                v60[1] = _mm_loadu_si128(&v109);
              }
            }
            v60 += 2;
            if ( (v119 & 1) != 0 )
              break;
            ++v58;
          }
          v61 = v58 - 1;
          v57 = 0;
          sub_639F40(&v120, ((unsigned __int64)v96->m128i_u32[6 * v61 + 1] << 32) | v106, v54);
          if ( (unsigned int)v61 < v56 )
            goto LABEL_77;
LABEL_71:
          if ( (unsigned int)(v120.m128i_i32[0] - 70) <= 3 )
          {
            v70 = v61 - v56;
            if ( (unsigned int)v61 - v56 <= 0x15 )
            {
              ++v56;
              v52 = v70 & 1;
              if ( (unsigned int)v61 >= v56 )
              {
                if ( !(_DWORD)v52 || (++v56, (unsigned int)v61 >= v56) )
                {
                  do
                    v56 += 2;
                  while ( (unsigned int)v61 >= v56 );
                }
              }
            }
            else
            {
              v71 = v70 + 1;
              v72 = 0;
              v73 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v56), 0), (__m128i)xmmword_3C7E3B0);
              v74 = _mm_shuffle_epi32(_mm_cvtsi32_si128(4u), 0);
              do
              {
                ++v72;
                v75 = v73;
                v73 = _mm_add_epi32(v73, v74);
              }
              while ( v72 != v71 >> 2 );
              v76 = v56 + (v71 & 0xFFFFFFFC);
              v52 = v71 & 3;
              if ( (_DWORD)v52 )
              {
                v56 = v76 + 1;
                if ( (unsigned int)v61 >= v76 + 1 )
                {
                  v56 = v76 + 2;
                  v77 = v76 + 3;
                  if ( (unsigned int)v61 >= v56 )
                    v56 = v77;
                }
              }
              else
              {
                v56 = _mm_cvtsi128_si32(_mm_shuffle_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0), v75), 255));
              }
            }
          }
          else
          {
            v62 = (__m128i *)(a5 + 32LL * v56);
            do
            {
              v52 = (unsigned int)(v62->m128i_i32[0] - 70);
              if ( (unsigned int)v52 <= 3 )
              {
                *v62 = _mm_load_si128(&v120);
                v62[1] = _mm_load_si128(&v121);
              }
              ++v56;
              v62 += 2;
            }
            while ( (unsigned int)v61 >= v56 );
          }
          if ( v57 )
            break;
LABEL_77:
          if ( v118 == 67 )
            goto LABEL_63;
        }
        v55 = v53;
      }
      else
      {
        ++v53;
      }
    }
    while ( v55 < v86 );
LABEL_105:
    v7 = (const double *)v54;
    a2 = v99;
    v6 = v96;
  }
  if ( v125[1] != &v126[8] )
    free(v125[1]);
LABEL_3:
  v17 = a2[2].m128i_i64[0];
  LODWORD(v18) = v88;
  v19 = sub_CB0320(v17, v88);
  if ( v19 < 0 )
  {
    LODWORD(v18) = v19;
    v88 = sub_CAAA20(v17, (unsigned int)v19);
  }
  v89 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v88), _mm_cvtsi32_si128(v90)).m128i_u64[0];
  if ( *(_QWORD *)(a2[4].m128i_i64[0] + 2880) )
  {
    v20 = _mm_loadl_epi64(a2 + 2);
    v21 = _mm_loadh_ps(v7 + 1);
    v121.m128i_i64[0] = v86;
    v125[0] = sub_5F86F0;
    *(_QWORD *)v126 = &v120;
    v120 = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)v6);
    *(_WORD *)&v126[8] = 1;
    *(_QWORD *)&v126[12] = v89;
    v125[1] = nullptr;
    v126[20] = 0;
    *(_QWORD *)v127 = 0;
    ptr[0] = v130;
    ptr[1] = (void *)0x500000000LL;
    v134 = (void ***)v136;
    v135 = 0x500000000LL;
    v123 = 71;
    v122 = v21;
    *(_OWORD *)&v126[24] = 0;
    memset(&v124[4], 0, 32);
    sub_61A680((__int64)&v122);
    v22 = &v134[(unsigned int)v135];
    if ( v134 != v22 )
    {
      v23 = v134;
      v24 = &v134[(unsigned int)v135];
      do
      {
        v25 = *v23;
        if ( *v23 )
        {
          if ( *v25 != v25 + 2 )
            free(*v25);
          LODWORD(v18) = 656;
          operator delete(v25, 0x290u);
        }
        ++v23;
      }
      while ( v24 != v23 );
      v22 = v134;
    }
    if ( v22 != (void ***)v136 )
      free(v22);
    if ( ptr[0] != v130 )
      free(ptr[0]);
  }
  v132 = 0x500000000LL;
  v122.m128_u64[1] = a5;
  *(_QWORD *)&v126[32] = &v122;
  v123 = v86;
  v26 = *((_QWORD *)v7 + 1);
  *(_WORD *)v127 = 1;
  v138 = 0x500000000LL;
  v122.m128_u64[0] = (unsigned __int64)v6;
  *(__m128i *)&v124[12] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)v26);
  *(_QWORD *)v124 = 0;
  *(_QWORD *)&v127[4] = v89;
  *(__m128i *)&v126[16] = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_47CFEF0),
                            (__m128i)(unsigned __int64)sub_607F00);
  v128 = 0;
  v130[0] = 0;
  v131 = &v133;
  v137 = (void ***)v139;
  *(_DWORD *)&v124[28] = 71;
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v125 = 0;
  *(_OWORD *)v126 = 0;
  v27 = *(_QWORD *)(v26 + 32);
  v141 = 0;
  v140 = v27;
  v142 = v144;
  v143 = 0x800000000LL;
  sub_61ED80((__int64)&v124[12]);
  if ( v141 && v86 )
  {
    v31 = (const __m128i *)a5;
    v32 = (__m128i *)v6;
    v33 = 32LL * v86;
    v34 = (const __m128i *)(a5 + v33);
    do
    {
      if ( v32->m128i_i32[0] == 2 )
      {
        v35 = v31->m128i_i32[0];
        if ( v31->m128i_i32[0] == 14 )
        {
          v87 = v32[1].m128i_i64[0];
          v84 = _mm_loadu_si128(v31);
          v63 = sub_63A250((unsigned int)&v124[12], v18, v33, v28, v29, v30, v84.m128i_i32[0], v84.m128i_i64[1]);
          if ( !v63 )
            goto LABEL_25;
          LODWORD(v33) = *(_BYTE *)(v63 + 28) & 0x7F;
          if ( (_BYTE)v33 != 73 || !*(_WORD *)(v63 + 74) )
            goto LABEL_25;
          v64 = *(unsigned int **)(v87 + 16);
          v33 = *v64;
          v28 = (_DWORD)v64 + 16;
          switch ( v33 )
          {
            case 8LL:
              LODWORD(v33) = 1684104562;
              if ( *((_QWORD *)v64 + 2) != 0x796C6E6F64616572LL )
                goto LABEL_25;
              break;
            case 6LL:
              if ( (v64[4] != 1769173857 || *((_WORD *)v64 + 10) != 28263)
                && (v64[4] != 1635018098 || *((_WORD *)v64 + 10) != 28265)
                && (v64[4] != 1836020833 || *((_WORD *)v64 + 10) != 25449)
                && (v64[4] != 1953785191 || *((_WORD *)v64 + 10) != 29285)
                && (v64[4] != 1953785203 || *((_WORD *)v64 + 10) != 29285)
                && (v64[4] != 1869771891 || *((_WORD *)v64 + 10) != 26478) )
              {
                goto LABEL_25;
              }
              break;
            case 17LL:
              v18 = *((_QWORD *)v64 + 3) ^ 0x656E69617465726ELL;
              v33 = v18 | *((_QWORD *)v64 + 2) ^ 0x755F656661736E75LL;
              if ( v33 || *((_BYTE *)v64 + 32) != 100 )
                goto LABEL_25;
              break;
            case 9LL:
              LODWORD(v33) = 1684104562;
              if ( *((_QWORD *)v64 + 2) != 0x7469727764616572LL || *((_BYTE *)v64 + 24) != 101 )
              {
                LODWORD(v33) = 1634627438;
                if ( *((_QWORD *)v64 + 2) != 0x696D6F74616E6F6ELL || *((_BYTE *)v64 + 24) != 99 )
                  goto LABEL_25;
              }
              break;
            case 4LL:
              if ( v64[4] != 2037411683 && v64[4] != 1801545079 )
                goto LABEL_25;
              break;
            default:
              if ( v33 != 5 || v64[4] != 1935764579 || *((_BYTE *)v64 + 20) != 115 )
                goto LABEL_25;
              break;
          }
          goto LABEL_47;
        }
        LODWORD(v33) = v35 - 16;
        if ( (unsigned int)(v35 - 16) <= 1 )
        {
          v43 = *(unsigned int **)(v32[1].m128i_i64[0] + 16);
          v33 = *v43;
          v28 = (_DWORD)v43 + 16;
          if ( v33 != 2 )
          {
            if ( v33 == 3 )
            {
              if ( *((_WORD *)v43 + 8) != 30063 || *((_BYTE *)v43 + 18) != 116 )
                goto LABEL_25;
            }
            else if ( v33 == 5 )
            {
              if ( (v43[4] != 1970237033 || *((_BYTE *)v43 + 20) != 116)
                && (v43[4] != 1702000994 || *((_BYTE *)v43 + 20) != 102) )
              {
                goto LABEL_25;
              }
            }
            else if ( v33 != 6
                   || (v43[4] != 2003136111 || *((_WORD *)v43 + 10) != 31073)
                   && (v43[4] != 1868790114 || *((_WORD *)v43 + 10) != 31088) )
            {
              goto LABEL_25;
            }
LABEL_47:
            v32->m128i_i32[0] = 1;
            goto LABEL_25;
          }
          if ( *((_WORD *)v43 + 8) == 28265 )
            goto LABEL_47;
        }
        else if ( (unsigned int)(v35 - 404) <= 1 )
        {
          goto LABEL_47;
        }
      }
LABEL_25:
      v31 += 2;
      v32 = (__m128i *)((char *)v32 + 24);
    }
    while ( v31 != v34 );
  }
  v36 = (char *)v142;
  v37 = (char *)v142 + 64 * (unsigned __int64)(unsigned int)v143;
  v38 = v37;
  if ( v142 != v37 )
  {
    do
    {
      v39 = *((char **)v38 - 2);
      if ( v38 != v39 )
        free(v39);
      v38 -= 64;
    }
    while ( v36 != v38 );
    v37 = (char *)v142;
  }
  if ( v37 != v144 )
    free(v37);
  v40 = v137;
  v41 = &v137[(unsigned int)v138];
  if ( v137 != v41 )
  {
    do
    {
      v42 = *v40;
      if ( *v40 )
      {
        if ( *v42 != v42 + 2 )
          free(*v42);
        operator delete(v42, 0x290u);
      }
      ++v40;
    }
    while ( v41 != v40 );
    v41 = v137;
  }
  if ( v41 != (void ***)v139 )
    free(v41);
  if ( v131 != &v133 )
    free(v131);
}

