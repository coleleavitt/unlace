__int64 __fastcall sub_1D9A030(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7,
        __m128i a8)
{
  __int64 v8; // r13
  __int64 *v9; // r12
  __int64 v11; // rbx
  __int64 *v12; // rbx
  unsigned __int64 v13; // r9
  __int64 *v14; // r12
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // edi
  int *v27; // rsi
  unsigned __int64 v28; // r14
  int *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 *v35; // r14
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  _QWORD *v53; // r12
  int v54; // eax
  __m128i *v55; // rax
  int v56; // r14d
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r13
  int v60; // esi
  __int64 v61; // rdi
  __int64 v62; // rdx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // esi
  __int64 v70; // rax
  __int64 v71; // rbp
  unsigned int v72; // esi
  __int64 v73; // r8
  unsigned int v74; // ecx
  int *v75; // rax
  int v76; // edi
  int i; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rbp
  unsigned int v82; // esi
  __int64 v83; // r8
  __int64 v84; // rcx
  unsigned __int64 v85; // rax
  int v86; // edi
  char *v87; // rdx
  __int64 v88; // rcx
  __int64 *v89; // r14
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // r14
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  _QWORD *v95; // rcx
  __int64 v96; // r8
  unsigned __int64 v97; // rdx
  __int64 v98; // rsi
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rax
  _DWORD *v101; // rax
  __int64 v102; // rdi
  int v103; // edx
  __int64 v104; // rdx
  int v105; // r12d
  char *v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  char *v109; // rsi
  __m128i v110; // xmm1
  void **v111; // rdi
  void **v112; // rsi
  __int64 v113; // rdx
  char *v114; // rcx
  char *v115; // rsi
  __m128i v116; // xmm2
  int v117; // r13d
  int *v118; // r11
  int v119; // edi
  int v120; // r11d
  unsigned __int64 v121; // r10
  int v122; // edi
  __int64 *v123; // [rsp+10h] [rbp-298h]
  __int64 *v126; // [rsp+28h] [rbp-280h] BYREF
  void **v127; // [rsp+30h] [rbp-278h]
  void **v128; // [rsp+38h] [rbp-270h]
  unsigned __int64 v129; // [rsp+40h] [rbp-268h]
  _QWORD *v130; // [rsp+48h] [rbp-260h]
  unsigned int v131; // [rsp+54h] [rbp-254h] BYREF
  int *v132; // [rsp+58h] [rbp-250h] BYREF
  void *v133; // [rsp+60h] [rbp-248h] BYREF
  __int64 v134; // [rsp+68h] [rbp-240h]
  __int64 v135; // [rsp+70h] [rbp-238h] BYREF
  void *v136; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v137; // [rsp+A8h] [rbp-200h]
  char v138; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v139; // [rsp+B8h] [rbp-1F0h]
  int v140; // [rsp+110h] [rbp-198h]
  char v141; // [rsp+114h] [rbp-194h]
  void *ptr; // [rsp+120h] [rbp-188h] BYREF
  __int64 v143; // [rsp+128h] [rbp-180h]
  _QWORD v144[16]; // [rsp+130h] [rbp-178h] BYREF
  __m128 v145; // [rsp+1B0h] [rbp-F8h] BYREF
  _QWORD *v146; // [rsp+1C0h] [rbp-E8h]
  unsigned __int64 v147; // [rsp+1C8h] [rbp-E0h]
  void **v148; // [rsp+1D0h] [rbp-D8h]
  __int64 v149; // [rsp+1D8h] [rbp-D0h]
  unsigned __int64 v150; // [rsp+1E0h] [rbp-C8h]
  int v151; // [rsp+1E8h] [rbp-C0h]
  void *v152; // [rsp+1F0h] [rbp-B8h] BYREF
  __int64 v153; // [rsp+1F8h] [rbp-B0h]
  _BYTE v154[40]; // [rsp+200h] [rbp-A8h] BYREF
  void *v155; // [rsp+228h] [rbp-80h]
  __int64 v156; // [rsp+238h] [rbp-70h] BYREF
  void *v157; // [rsp+248h] [rbp-60h]
  __int64 v158; // [rsp+258h] [rbp-50h] BYREF
  int v159; // [rsp+260h] [rbp-48h]
  char v160; // [rsp+264h] [rbp-44h]
  char v161; // [rsp+268h] [rbp-40h]

  v8 = a2;
  v9 = &a3[a4];
  v11 = a1;
  ptr = v144;
  v144[0] = a2;
  v143 = 0x2000000002LL;
  if ( v9 == a3 )
  {
    v21 = 8;
    v20 = v144;
  }
  else
  {
    v12 = &a3[a4];
    v13 = 32;
    v14 = a3;
    v15 = 2;
    while ( 1 )
    {
      v16 = v15;
      v17 = v15 + 1LL;
      v18 = *(_QWORD *)&byte_8[*v14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[*v14 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v14) & 7;
      if ( v17 > v13 )
      {
        sub_2237220(&ptr, v144, v17, 4);
        v16 = (unsigned int)v143;
      }
      *((_DWORD *)ptr + v16) = v18;
      v19 = HIDWORD(v18);
      LODWORD(v143) = v143 + 1;
      if ( (unsigned __int64)(unsigned int)v143 + 1 > HIDWORD(v143) )
        sub_2237220(&ptr, v144, (unsigned int)v143 + 1LL, 4);
      *((_DWORD *)ptr + (unsigned int)v143) = v19;
      ++v14;
      v15 = v143 + 1;
      LODWORD(v143) = v143 + 1;
      if ( v12 == v14 )
        break;
      v13 = HIDWORD(v143);
    }
    v9 = v12;
    v11 = a1;
    v20 = ptr;
    v21 = 4LL * v15;
  }
  v22 = sub_985B10(v20, (__int64)v20 + v21);
  v23 = *(unsigned int *)(v11 + 10016);
  v24 = *(_QWORD *)(v11 + 10000);
  v25 = v22;
  v131 = v22;
  v123 = (__int64 *)(v11 + 10000);
  if ( !(_DWORD)v23 )
    goto LABEL_63;
  v26 = (v23 - 1) & (37 * v22);
  v27 = (int *)(v24 + 16LL * v26);
  if ( v22 != *v27 )
  {
    for ( i = 1; *v27 != -1; ++i )
    {
      v26 = (v23 - 1) & (i + v26);
      v27 = (int *)(v24 + 16LL * v26);
      if ( v25 == *v27 )
        goto LABEL_12;
    }
LABEL_63:
    sub_1D862C0(
      &v145,
      (int *)(v24 + 16LL * (unsigned int)v23),
      (int *)(v24 + 16LL * (unsigned int)v23),
      (__int64)v123,
      1);
    v28 = v145.m128_u64[0];
    goto LABEL_13;
  }
LABEL_12:
  sub_1D862C0(&v145, v27, (int *)(16 * v23 + v24), (__int64)v123, 1);
  v28 = v145.m128_u64[0];
LABEL_13:
  v29 = (int *)(*(_QWORD *)(v11 + 10000) + 16LL * *(unsigned int *)(v11 + 10016));
  sub_1D862C0(&v145, v29, v29, (__int64)v123, 1);
  if ( v145.m128_u64[0] != v28 )
  {
    v33 = sub_B77A30(*(_QWORD *)(v28 + 8));
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x46 )
  {
    sub_1D81F50(&v145, *(_QWORD *)(v11 + 248), v8, v30, v31);
    v129 = v145.m128_u64[0];
    if ( v145.m128_u64[0] )
    {
      v145 = (__m128)(unsigned __int64)v11;
      v133 = &v135;
      v127 = &v136;
      v128 = &v133;
      v134 = 0x600000000LL;
      v136 = &v138;
      v137 = 0x600000000LL;
      v146 = nullptr;
      LODWORD(v147) = 0;
      v148 = &v133;
      v149 = 0;
      v150 = 0;
      v161 = 0;
      if ( v9 == a3 )
      {
        v88 = 0;
        v87 = &v138;
      }
      else
      {
        v35 = a3;
        v126 = (__int64 *)&v138;
        do
        {
          v37 = (unsigned __int64)sub_1D99B80((__int64 *)&v145, *v35, a6, a7);
          if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            v33 = 0;
            goto LABEL_67;
          }
          v38 = (unsigned int)v137;
          v39 = (unsigned int)v137 + 1LL;
          if ( v39 > HIDWORD(v137) )
          {
            v130 = (_QWORD *)v37;
            sub_2237220(v127, v126, v39, 8);
            v38 = (unsigned int)v137;
            v37 = (unsigned __int64)v130;
          }
          *((_QWORD *)v136 + v38) = v37;
          ++v35;
          v36 = v137 + 1;
          LODWORD(v137) = v137 + 1;
        }
        while ( v9 != v35 );
        v87 = (char *)v136;
        v88 = v36;
      }
      v33 = sub_1D9A030(v11, v129, v87, v88, a5);
      if ( v33 )
      {
        v89 = (__int64 *)v133;
        v126 = (__int64 *)((char *)v133 + 8 * (unsigned int)v134);
        if ( v133 != v126 )
        {
          do
          {
            while ( 1 )
            {
              v90 = *(_QWORD *)(v33 + 48);
              v91 = *v89;
              if ( !v90 )
                break;
              ++v89;
              sub_B8C080(v91, v90 + 72);
              if ( v126 == v89 )
                goto LABEL_81;
            }
            ++v89;
            sub_B8C080(v91, 0);
          }
          while ( v126 != v89 );
        }
LABEL_81:
        v33 = sub_1D83AB0(v11, v8, v33, a5, *(double *)a6.m128_u64, a7, a8);
      }
LABEL_67:
      if ( v161 )
      {
        if ( v157 != &v158 )
          free(v157);
        if ( v155 != &v156 )
          free(v155);
        *((_DWORD *)v152 + 3158) = v153;
      }
      operator delete(v145.m128_u64[1], 16LL * (unsigned int)v147, 8);
      if ( v136 != v127 + 2 )
        free(v136);
      if ( v133 != v128 + 2 )
        free(v133);
      if ( v33 )
      {
        v81 = *(_QWORD *)(v33 + 48);
        *(_BYTE *)(v81 + 85) = *(_BYTE *)(v81 + 85) & 0xFC | 2;
        v82 = *(_DWORD *)(v11 + 10016);
        if ( v82 )
        {
          v78 = v131;
          v32 = v82 - 1;
          v83 = *(_QWORD *)(v11 + 10000);
          LODWORD(v84) = v32 & (37 * v131);
          v85 = v83 + 16LL * (unsigned int)v84;
          v86 = *(_DWORD *)v85;
          if ( v131 == *(_DWORD *)v85 )
          {
LABEL_75:
            *(_QWORD *)(v85 + 8) = v81;
            goto LABEL_15;
          }
          v120 = 1;
          v121 = 0;
          if ( v86 != -1 )
          {
            while ( 1 )
            {
              if ( !v121 && v86 == -2 )
                v121 = v85;
              v84 = (unsigned int)v32 & ((_DWORD)v84 + v120);
              v85 = v83 + 16 * v84;
              v86 = *(_DWORD *)v85;
              if ( v131 == *(_DWORD *)v85 )
                goto LABEL_75;
              if ( v86 == -1 )
              {
                if ( v121 )
                  v85 = v121;
                break;
              }
              ++v120;
            }
          }
          v122 = *(_DWORD *)(v11 + 10008);
          v145.m128_u64[0] = v85;
          v79 = (unsigned int)(v122 + 1);
          v80 = (unsigned int)(4 * v79);
          if ( (unsigned int)v80 < 3 * v82 )
          {
            v80 = v82 >> 3;
            if ( v82 - *(_DWORD *)(v11 + 10012) - (unsigned int)v79 > (unsigned int)v80 )
            {
LABEL_136:
              *(_DWORD *)(v11 + 10008) = v79;
              if ( *(_DWORD *)v85 != -1 )
                --*(_DWORD *)(v11 + 10012);
              *(_DWORD *)v85 = v78;
              *(_QWORD *)(v85 + 8) = 0;
              goto LABEL_75;
            }
LABEL_141:
            sub_1D86390(v123, v82, v78, v79, v80, v32);
            sub_1D86220(v123, (int *)&v131, &v145);
            LODWORD(v78) = v131;
            LODWORD(v79) = *(_DWORD *)(v11 + 10008) + 1;
            v85 = v145.m128_u64[0];
            goto LABEL_136;
          }
        }
        else
        {
          v145.m128_u64[0] = 0;
        }
        v82 *= 2;
        goto LABEL_141;
      }
    }
  }
  v40 = *(_QWORD *)(v8 + 48);
  v41 = *(_QWORD *)(v40 + 128);
  if ( v41 )
    goto LABEL_27;
  v92 = *(_QWORD *)(v40 + 104);
  v93 = *(_QWORD *)(v92 + 96);
  v94 = v93 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v93 & 1) == 0 )
  {
    v95 = (_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v93 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v93 & 2) == 0 )
        goto LABEL_30;
      v96 = v95[2295];
      v97 = v92 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v96 )
      {
        v98 = v95[294];
        v95[304] += 24LL;
        v99 = (v98 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v95[295] >= v99 + 24 && v98 )
        {
          v95[294] = v99 + 24;
          v100 = (v98 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v126 = (__int64 *)v96;
          v100 = sub_986170((__int64)(v95 + 294), 24, 24, 3, v96, v32);
          v96 = (__int64)v126;
          v99 = v100 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v100 = v96;
        v97 = v99 | 4;
        *(_DWORD *)(v100 + 8) = 0;
        *(_QWORD *)(v100 + 16) = v92;
      }
      v94 = v97 & 0xFFFFFFFFFFFFFFFELL;
      v93 = v94 | 1;
      *(_QWORD *)(v92 + 96) = v94 | 1;
    }
  }
  if ( v94 )
  {
    if ( (v94 & 4) != 0 )
    {
      v101 = (_DWORD *)(v93 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v101 )
      {
        v102 = *(_QWORD *)v101;
        v103 = *(_DWORD *)(*(_QWORD *)v101 + 12LL);
        if ( v101[2] != v103 )
        {
          v101[2] = v103;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v102 + 152LL))(v102, v92);
        }
      }
    }
  }
  v41 = *(_QWORD *)(v40 + 128);
  if ( v41 )
  {
LABEL_27:
    v42 = *(_QWORD *)(v41 + 88);
    if ( v42 )
    {
      v43 = sub_B97230(v42);
      if ( v43 )
        v8 = v43;
    }
  }
LABEL_30:
  v44 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v44 = (_QWORD *)*v44;
  v33 = 0;
  if ( !(unsigned __int8)sub_B8E180((unsigned __int64)v44) )
  {
    v126 = (__int64 *)v8;
    v146 = nullptr;
    v145 = _mm_loadh_ps((const double *)&v126);
    v45 = *(_QWORD *)(v8 + 16);
    if ( (v45 & 4) != 0 )
      v46 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v46 = v45 & 0xFFFFFFFFFFFFFFF8LL;
    v147 = v46;
    v148 = *(void ***)(v8 + 48);
    v149 = sub_B87960(*(_QWORD *)(v11 + 248) + 17536LL, v8);
    v51 = (unsigned __int64)v148[6];
    if ( v51 )
      v52 = v51 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v52 = sub_A7AA70(*(_QWORD *)(v145.m128_u64[0] + 248), (__int64)v148, v47, v48, v49, v50);
    v150 = v52;
    v53 = (_QWORD *)v8;
    v54 = *(_DWORD *)(*(_QWORD *)(v145.m128_u64[1] + 56) + 20LL);
    v160 = 0;
    v159 = 0;
    v151 = v54 & 0x1FFFFFFF;
    v152 = v154;
    v153 = 0x400000000LL;
    while ( (*(_QWORD *)sub_BC3640(v53) & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)sub_BC3640(v53) & 4) == 0 )
    {
      v53 = (_QWORD *)(*(_QWORD *)sub_BC3640(v53) & 0xFFFFFFFFFFFFFFF8LL);
      v146 = v53;
    }
    if ( !v146 )
      goto LABEL_46;
    LOBYTE(v135) = 0;
    v127 = &v136;
    sub_1DBA4B0((unsigned int)&v136, v145.m128_i32[0], v8, 0, 0, 0);
    v55 = (__m128i *)v136;
    if ( v136 != &v138 )
    {
      if ( v152 != v154 )
      {
        free(v152);
        v55 = (__m128i *)v136;
      }
      v152 = v55;
      v153 = v137;
      v159 = v140;
      v160 = v141;
      goto LABEL_46;
    }
    v104 = (unsigned int)v137;
    v105 = v137;
    if ( (unsigned int)v137 <= (unsigned __int64)(unsigned int)v153 )
    {
      v111 = (void **)v136;
      if ( (_DWORD)v137 )
      {
        v114 = (char *)v152;
        v115 = (char *)v152 + 24 * (unsigned int)v137;
        do
        {
          v116 = _mm_loadu_si128(v55);
          v114 += 24;
          v55 = (__m128i *)((char *)v55 + 24);
          *(__m128i *)(v114 - 24) = v116;
          *((_QWORD *)v114 - 1) = v55[-1].m128i_i64[1];
        }
        while ( v114 != v115 );
        goto LABEL_114;
      }
    }
    else
    {
      if ( (unsigned int)v137 > (unsigned __int64)HIDWORD(v153) )
      {
        LODWORD(v153) = 0;
        sub_2237220(&v152, v154, (unsigned int)v137, 24);
        v111 = (void **)v136;
        v104 = (unsigned int)v137;
        v108 = 0;
        v106 = (char *)v152;
        v112 = (void **)v136;
      }
      else
      {
        v106 = (char *)v152;
        if ( (_DWORD)v153 )
        {
          v107 = 24LL * (unsigned int)v153;
          v108 = v107;
          v109 = (char *)v152 + v107;
          do
          {
            v110 = _mm_loadu_si128(v55);
            v106 += 24;
            v55 = (__m128i *)((char *)v55 + 24);
            *(__m128i *)(v106 - 24) = v110;
            *((_QWORD *)v106 - 1) = v55[-1].m128i_i64[1];
          }
          while ( v106 != v109 );
          v111 = (void **)v136;
          v104 = (unsigned int)v137;
          v112 = (void **)((char *)v136 + v107);
          v106 = (char *)v152 + v107;
        }
        else
        {
          v108 = 0;
          v112 = (void **)v136;
          v111 = (void **)v136;
        }
      }
      v113 = 3 * v104;
      if ( v112 != &v111[v113] )
      {
        memcpy(v106, v112, v113 * 8 - v108);
LABEL_114:
        v111 = (void **)v136;
      }
    }
    LODWORD(v153) = v105;
    LODWORD(v137) = 0;
    v159 = v140;
    v160 = v141;
    if ( v111 != v127 + 2 )
      free(v111);
LABEL_46:
    v33 = 0;
    if ( (unsigned __int8)sub_1E63330(v11, a5, v150, 1, 0) )
      goto LABEL_58;
    v56 = *(_DWORD *)(v11 + 12632);
    *(_DWORD *)(v11 + 12632) = 0;
    v128 = &v133;
    sub_1DC37C0(&v133, v11, a5, v8, 0);
    if ( (_BYTE)v134 )
    {
LABEL_57:
      sub_1DBADA0(v128);
      *(_DWORD *)(v11 + 12632) = v56;
LABEL_58:
      if ( v152 != v154 )
        free(v152);
      goto LABEL_15;
    }
    v57 = (unsigned __int64)v146;
    if ( !v146 )
      v57 = v145.m128_u64[1];
    v58 = *(_QWORD *)(v57 + 48);
    v59 = *(_QWORD *)(v11 + 544);
    v60 = *(_DWORD *)(v11 + 80);
    v61 = *(_QWORD *)(v11 + 512);
    *(_QWORD *)(v11 + 512) = 0;
    if ( v58 )
      v58 += 64;
    v62 = *(_QWORD *)(v11 + 9944);
    *(_QWORD *)(v11 + 9944) = 0;
    *(_QWORD *)(v11 + 544) = v58;
    v63 = *(_DWORD *)(v11 + 40);
    v139 = v62;
    LODWORD(v62) = *(_DWORD *)(v11 + 2632);
    *(_DWORD *)(v11 + 80) = v63;
    v64 = *(_DWORD *)(v11 + 3688);
    LODWORD(v127) = v62;
    *(_DWORD *)(v11 + 2632) = v64;
    LODWORD(v126) = v60;
    v33 = (__int64)sub_1D821F0((__int64 *)&v145, a3, a4);
    if ( v59 )
    {
      v69 = (int)v126;
      *(_QWORD *)(v11 + 544) = v59;
      v70 = v139;
      v65 = (unsigned int)v127;
      *(_QWORD *)(v11 + 512) = v61;
      *(_QWORD *)(v11 + 9944) = v70;
      *(_DWORD *)(v11 + 80) = v69;
      *(_DWORD *)(v11 + 2632) = v65;
    }
    v71 = *(_QWORD *)(v33 + 48);
    *(_BYTE *)(v71 + 85) = *(_BYTE *)(v71 + 85) & 0xFC | 2;
    v72 = *(_DWORD *)(v11 + 10016);
    if ( v72 )
    {
      v65 = v131;
      v68 = v72 - 1;
      v73 = *(_QWORD *)(v11 + 10000);
      v74 = v68 & (37 * v131);
      v75 = (int *)(v73 + 16LL * v74);
      v76 = *v75;
      if ( *v75 == v131 )
      {
LABEL_56:
        *((_QWORD *)v75 + 1) = v71;
        goto LABEL_57;
      }
      v117 = 1;
      v118 = nullptr;
      if ( v76 != -1 )
      {
        while ( 1 )
        {
          if ( v76 == -2 && !v118 )
            v118 = v75;
          v74 = v68 & (v117 + v74);
          v75 = (int *)(v73 + 16LL * v74);
          v76 = *v75;
          if ( v131 == *v75 )
            goto LABEL_56;
          if ( v76 == -1 )
          {
            if ( v118 )
              v75 = v118;
            break;
          }
          ++v117;
        }
      }
      v119 = *(_DWORD *)(v11 + 10008);
      v132 = v75;
      v66 = (unsigned int)(v119 + 1);
      v67 = (unsigned int)(4 * v66);
      if ( (unsigned int)v67 < 3 * v72 )
      {
        v67 = v72 >> 3;
        if ( v72 - *(_DWORD *)(v11 + 10012) - (unsigned int)v66 > (unsigned int)v67 )
        {
LABEL_124:
          *(_DWORD *)(v11 + 10008) = v66;
          if ( *v75 != -1 )
            --*(_DWORD *)(v11 + 10012);
          *v75 = v65;
          *((_QWORD *)v75 + 1) = 0;
          goto LABEL_56;
        }
LABEL_132:
        sub_1D86390(v123, v72, v65, v66, v67, v68);
        sub_1D86220(v123, (int *)&v131, &v132);
        LODWORD(v65) = v131;
        LODWORD(v66) = *(_DWORD *)(v11 + 10008) + 1;
        v75 = v132;
        goto LABEL_124;
      }
    }
    else
    {
      v132 = nullptr;
    }
    v72 *= 2;
    goto LABEL_132;
  }
LABEL_15:
  if ( ptr != v144 )
    free(ptr);
  return v33;
}
