__int64 __fastcall sub_14EC7A0(__int64 a1, __m128i a2)
{
  unsigned int v2; // r13d
  unsigned int v4; // eax
  unsigned int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  _QWORD *v9; // rax
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rax
  void **v13; // r13
  __int64 v14; // rax
  void **v15; // rcx
  void **v16; // rax
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rax
  void **v20; // r15
  __m128i v21; // xmm6
  __int64 v22; // rdi
  __m128i v23; // xmm3
  __int64 *v24; // rax
  __int32 v25; // r14d
  unsigned __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rsi
  __m128i *v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  __m128i v35; // xmm5
  __int64 *v36; // rax
  int v37; // r14d
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __m128i si128; // xmm1
  int v45; // edx
  __m128i v46; // xmm2
  __int64 v47; // r14
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rcx
  __int64 v52; // rsi
  __m128i v53; // xmm1
  int v54; // edx
  __m128i v55; // xmm2
  __int64 v56; // rax
  __int32 v57; // edx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rsi
  __m128i v61; // xmm2
  __int64 v62; // rdx
  __m128i v63; // xmm1
  int v64; // eax
  int v65; // r15d
  __m128i v66; // xmm2
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r9
  unsigned __int64 v69; // rcx
  __m128i v70; // xmm1
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // rdi
  __m128i v74; // xmm6
  _QWORD *v75; // rax
  __int64 v76; // r13
  int v77; // eax
  unsigned __int8 *v78; // r14
  __int64 v79; // rdx
  __int64 v80; // rax
  void **v81; // r13
  __int64 v82; // rax
  void **v83; // rdx
  void **v84; // r14
  void **v85; // rdi
  void **v86; // rdi
  void **v87; // r14
  void **v88; // r15
  unsigned __int64 v89; // rdx
  const __m128i *v90; // rax
  unsigned __int64 v91; // rdx
  __m128i v92; // xmm1
  __m128i v93; // xmm2
  const __m128i *v94; // rsi
  unsigned __int64 v95; // rdx
  const __m128i *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  int v100; // eax
  __m128i v101; // xmm1
  __m128i v102; // xmm2
  __int64 v103; // rsi
  __m128i v104; // xmm1
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // r15
  __int64 v108; // r13
  void *v109; // rdi
  __int64 v110; // rsi
  __int64 v111; // rsi
  int v112; // [rsp+0h] [rbp-188h]
  void **v113; // [rsp+0h] [rbp-188h]
  void **v114; // [rsp+0h] [rbp-188h]
  int v115; // [rsp+0h] [rbp-188h]
  void **v116; // [rsp+0h] [rbp-188h]
  unsigned __int64 v117; // [rsp+0h] [rbp-188h]
  __int64 v118; // [rsp+0h] [rbp-188h]
  unsigned __int64 v119; // [rsp+0h] [rbp-188h]
  __int64 v120; // [rsp+0h] [rbp-188h]
  void **v121; // [rsp+8h] [rbp-180h]
  unsigned __int64 v122; // [rsp+8h] [rbp-180h]
  __m128i v123; // [rsp+10h] [rbp-178h] BYREF
  __int64 v124; // [rsp+20h] [rbp-168h]
  __int64 v125; // [rsp+34h] [rbp-154h]
  __int32 v126; // [rsp+3Ch] [rbp-14Ch]
  __m128i v127; // [rsp+40h] [rbp-148h] BYREF
  __m128i v128; // [rsp+50h] [rbp-138h] BYREF
  __m128i v129; // [rsp+60h] [rbp-128h] BYREF
  __int64 v130; // [rsp+70h] [rbp-118h]
  char v131; // [rsp+78h] [rbp-110h]
  __m128i v132; // [rsp+80h] [rbp-108h]
  __m128i v133; // [rsp+90h] [rbp-F8h]
  __m128i v134; // [rsp+A0h] [rbp-E8h]
  __int64 v135; // [rsp+B0h] [rbp-D8h]
  int v136; // [rsp+B8h] [rbp-D0h]
  __m128i v137; // [rsp+C0h] [rbp-C8h]
  __m128i v138; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v139; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v140; // [rsp+F0h] [rbp-98h]
  int v141; // [rsp+F8h] [rbp-90h]
  _BYTE v142[60]; // [rsp+100h] [rbp-88h] BYREF
  int v143; // [rsp+13Ch] [rbp-4Ch]
  __int16 v144; // [rsp+140h] [rbp-48h]

  v2 = 0;
  while ( 1 )
  {
    *(_DWORD *)v142 = 1;
    if ( sub_14E3360(a1, v142, 1) )
      break;
    *(_DWORD *)v142 = 16;
    LOBYTE(v4) = sub_14E3360(a1, v142, 1);
    v5 = v4;
    if ( (_BYTE)v4 )
    {
      sub_13DF9D0(&v123, a1 + 24);
      v22 = *(_QWORD *)(a1 + 16);
      v23 = _mm_loadu_si128(&v123);
      *(_QWORD *)(a1 + 104) = v124;
      v24 = *(__int64 **)(a1 + 80);
      *(__m128i *)(a1 + 88) = v23;
      v25 = sub_C07A10(v22, *(_DWORD *)(a1 + 92), v24[11], v24[7], v24[8], nullptr, nullptr);
      v26 = sub_14E6860(a1);
      if ( !BYTE4(v26) )
        goto LABEL_40;
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(unsigned int *)(v27 + 8);
      v29 = *(_QWORD *)v27;
      v30 = *(unsigned int *)(v27 + 12);
      v31 = (__m128i *)(*(_QWORD *)v27 + (v28 << 6));
      if ( v28 >= v30 )
      {
        v89 = v28 + 1;
        *(_DWORD *)&v142[4] = v26;
        v90 = (const __m128i *)v142;
        *(_DWORD *)v142 = v25;
        LOBYTE(v143) = 0;
        if ( v30 < v89 )
        {
          v103 = v27 + 16;
          v117 = v29;
          if ( v29 > (unsigned __int64)v142 || v31 <= (__m128i *)v142 )
          {
            sub_2237220(v27, v103, v89, 64);
            v90 = (const __m128i *)v142;
            v31 = (__m128i *)(*(_QWORD *)v27 + ((unsigned __int64)*(unsigned int *)(v27 + 8) << 6));
          }
          else
          {
            sub_2237220(v27, v103, v89, 64);
            v90 = (const __m128i *)&v142[*(_QWORD *)v27 - v117];
            v31 = (__m128i *)(((unsigned __int64)*(unsigned int *)(v27 + 8) << 6) + *(_QWORD *)v27);
          }
        }
        *v31 = _mm_loadu_si128(v90);
        v31[1] = _mm_loadu_si128(v90 + 1);
        v31[2] = _mm_loadu_si128(v90 + 2);
        v31[3] = _mm_loadu_si128(v90 + 3);
        ++*(_DWORD *)(v27 + 8);
      }
      else
      {
        v31->m128i_i32[0] = v25;
        v31->m128i_i32[1] = v26;
        v31[3].m128i_i8[12] = 0;
        ++*(_DWORD *)(v27 + 8);
      }
LABEL_32:
      *(_DWORD *)v142 = 10;
      if ( !sub_14E3360(a1, v142, 1) )
        break;
      sub_13DF9D0(&v123, a1 + 24);
      v33 = v124;
      *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v123);
      *(_QWORD *)(a1 + 104) = v33;
    }
    else
    {
      *(_DWORD *)v142 = 18;
      LOBYTE(v6) = sub_14E3360(a1, v142, 1);
      v5 = v6;
      if ( (_BYTE)v6 )
      {
        sub_13DF9D0(&v123, a1 + 24);
        v34 = *(_QWORD *)(a1 + 16);
        v35 = _mm_loadu_si128(&v123);
        *(_QWORD *)(a1 + 104) = v124;
        v36 = *(__int64 **)(a1 + 80);
        *(__m128i *)(a1 + 88) = v35;
        v37 = sub_C07A10(v34, *(_DWORD *)(a1 + 92), v36[11], v36[7], v36[8], nullptr, nullptr);
        sub_14EAB10((__int64)&v127, a1);
        if ( v128.m128i_i8[4] )
        {
          v38 = *(_QWORD *)(a1 + 8);
          a2 = _mm_load_si128(&v127);
          v39 = *(unsigned int *)(v38 + 8);
          v40 = *(_QWORD *)v38;
          v41 = *(unsigned int *)(v38 + 12);
          v42 = *(_QWORD *)v38 + (v39 << 6);
          if ( v39 < v41 )
          {
            v142[56] = 1;
            v43 = *(_QWORD *)&v142[48];
            *(__m128i *)v142 = a2;
            si128 = _mm_load_si128((const __m128i *)&v142[32]);
            *(_DWORD *)&v142[16] = v128.m128i_i32[0];
            v45 = *(_DWORD *)&v142[56];
            v46 = _mm_load_si128((const __m128i *)&v142[16]);
            v137 = a2;
            v139 = si128;
            v138 = v46;
            v140 = *(_QWORD *)&v142[48];
            v141 = *(_DWORD *)&v142[56];
            *(_DWORD *)v42 = v37;
            *(__m128i *)(v42 + 4) = a2;
            *(__m128i *)(v42 + 20) = v46;
            *(__m128i *)(v42 + 36) = si128;
            *(_QWORD *)(v42 + 52) = v43;
            *(_DWORD *)(v42 + 60) = v45;
            ++*(_DWORD *)(v38 + 8);
            goto LABEL_32;
          }
          LOBYTE(v141) = 1;
          v91 = v39 + 1;
          v92 = _mm_load_si128(&v139);
          v137 = a2;
          v138.m128i_i32[0] = v128.m128i_i32[0];
          v93 = _mm_load_si128(&v138);
          v132 = a2;
          v136 = v141;
          v143 = v141;
          v94 = (const __m128i *)v142;
          v133 = v93;
          v134 = v92;
          v135 = v140;
          *(_DWORD *)v142 = v37;
          *(__m128i *)&v142[4] = a2;
          *(__m128i *)&v142[20] = v93;
          *(__m128i *)&v142[36] = v92;
          *(_QWORD *)&v142[52] = v140;
          if ( v41 >= v91 )
            goto LABEL_84;
          v110 = v38 + 16;
          v122 = v40;
          if ( v40 > (unsigned __int64)v142 || v42 <= (unsigned __int64)v142 )
            goto LABEL_119;
          goto LABEL_108;
        }
LABEL_40:
        v2 = v5;
        sub_14EBAA0(a1, dword_26188B0, 6);
      }
      else
      {
        *(_DWORD *)v142 = 17;
        v7 = sub_14E53D0(a1, v142, 1);
        if ( (_BYTE)v7 )
        {
          v112 = sub_C07A10(
                   *(_QWORD *)(a1 + 16),
                   *(_DWORD *)(a1 + 92),
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 88LL),
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 56LL),
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL),
                   nullptr,
                   nullptr);
          v8 = *(_DWORD *)(a1 + 88);
          *(_DWORD *)v142 = 8;
          if ( !(unsigned __int8)sub_14E53D0(a1, v142, 1) )
          {
            v9 = *(_QWORD **)(a1 + 80);
            v10 = v9[6];
            v11 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v9[11], v9[7], v9[8], nullptr, nullptr);
            sub_FC70B0((__int64)v142, v10, v11, 15);
            v12 = sub_14DC730(v142, v8);
            sub_14DC730(v12, 8);
            if ( (_BYTE)v144 )
            {
              sub_FC7790(*(__int64 *)&v142[16], (__int64 *)v142, SHIBYTE(v144));
              *(_QWORD *)&v142[16] = 0;
              v144 = 0;
            }
            if ( *(_BYTE **)&v142[32] != &v142[48] )
              operator delete(*(void **)&v142[32]);
            v13 = *(void ***)v142;
            if ( *(_QWORD *)v142 )
            {
              v14 = *(_QWORD *)&v142[8];
              if ( *(_QWORD *)&v142[8] )
              {
                if ( *(_QWORD *)v142 >= *(_QWORD *)&v142[8]
                  && *(_QWORD *)v142 <= (unsigned __int64)(*(_QWORD *)&v142[8] + 14848LL) )
                {
                  v97 = *(unsigned int *)(*(_QWORD *)&v142[8] + 14976LL);
                  *(_DWORD *)(*(_QWORD *)&v142[8] + 14976LL) = v97 + 1;
                  *(_QWORD *)(v14 + 8 * v97 + 14848) = v13;
                }
                else
                {
                  v15 = *(void ***)(*(_QWORD *)v142 + 528LL);
                  v16 = &v15[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v142 + 536LL)];
                  if ( v15 != v16 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v16 -= 8;
                        v17 = (void **)v16[3];
                        if ( v17 == v16 + 5 )
                          break;
                        v121 = v15;
                        v113 = v16;
                        operator delete(v17);
                        v16 = v113;
                        v15 = v121;
                        if ( v121 == v113 )
                          goto LABEL_18;
                      }
                    }
                    while ( v15 != v16 );
LABEL_18:
                    v16 = (void **)v13[66];
                  }
                  if ( v16 != v13 + 68 )
                    free(v16);
                  v18 = (void **)v13[52];
                  if ( v18 != v13 + 54 )
                    free(v18);
                  v19 = v13 + 48;
                  v20 = v13 + 8;
                  do
                  {
                    while ( *v19 != v19 + 2 )
                    {
                      v114 = v19;
                      operator delete(*v19);
                      v19 = v114 - 4;
                      if ( v114 - 4 == v20 )
                        goto LABEL_26;
                    }
                    v19 -= 4;
                  }
                  while ( v19 != v20 );
LABEL_26:
                  operator delete(v13, 0x3A0u);
                }
              }
            }
LABEL_27:
            sub_14EC6D0(a1, 1);
            sub_13DF9D0(&v123, a1 + 24);
            v21 = _mm_loadu_si128(&v123);
            *(_QWORD *)(a1 + 104) = v124;
            *(__m128i *)(a1 + 88) = v21;
            goto LABEL_28;
          }
          v56 = sub_14EBC90(a1);
          v125 = v56;
          v126 = v57;
          *(_QWORD *)v142 = v56;
          *(_DWORD *)&v142[8] = v57;
          v132.m128i_i64[0] = v56;
          v132.m128i_i32[2] = v57;
          if ( !(_BYTE)v57 )
            goto LABEL_27;
          v47 = *(_QWORD *)(a1 + 8);
          v58 = *(unsigned int *)(v47 + 8);
          v59 = *(_QWORD *)v47;
          v60 = *(unsigned int *)(v47 + 12);
          v51 = *(_QWORD *)v47 + (v58 << 6);
          if ( v58 < v60 )
          {
            v142[56] = 3;
            v61 = _mm_load_si128((const __m128i *)v142);
            v62 = *(_QWORD *)&v142[48];
            v63 = _mm_load_si128((const __m128i *)&v142[16]);
            v64 = *(_DWORD *)&v142[56];
            a2 = _mm_load_si128((const __m128i *)&v142[32]);
            v137 = v61;
            v138 = v63;
            v139 = a2;
            v140 = *(_QWORD *)&v142[48];
            v141 = *(_DWORD *)&v142[56];
            *(_DWORD *)v51 = v112;
            *(__m128i *)(v51 + 4) = v61;
            *(__m128i *)(v51 + 20) = v63;
            *(__m128i *)(v51 + 36) = a2;
            *(_QWORD *)(v51 + 52) = v62;
            *(_DWORD *)(v51 + 60) = v64;
            ++*(_DWORD *)(v47 + 8);
            goto LABEL_32;
          }
          v95 = v58 + 1;
          *(_QWORD *)&v142[4] = v56;
          v96 = (const __m128i *)v142;
          LOBYTE(v143) = 3;
          *(_DWORD *)v142 = v112;
          if ( v60 >= v95 )
            goto LABEL_86;
          v111 = v47 + 16;
          v119 = v59;
          if ( v59 > (unsigned __int64)v142 || v51 <= (unsigned __int64)v142 )
            goto LABEL_116;
          goto LABEL_112;
        }
        *(_QWORD *)v142 = 0x1600000015LL;
        *(_DWORD *)&v142[8] = 23;
        v7 = sub_14E53D0(a1, v142, 3);
        if ( (_BYTE)v7 )
        {
          v115 = sub_C07A10(
                   *(_QWORD *)(a1 + 16),
                   *(_DWORD *)(a1 + 92),
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 88LL),
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 56LL),
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL),
                   nullptr,
                   nullptr);
          sub_14EB0E0((__int64)&v127, a1);
          if ( v128.m128i_i8[8] )
          {
            v47 = *(_QWORD *)(a1 + 8);
            a2 = _mm_load_si128(&v127);
            v48 = *(unsigned int *)(v47 + 8);
            v49 = *(_QWORD *)v47;
            v50 = *(unsigned int *)(v47 + 12);
            v51 = *(_QWORD *)v47 + (v48 << 6);
            if ( v48 < v50 )
            {
              v142[56] = 2;
              v52 = *(_QWORD *)&v142[48];
              *(__m128i *)v142 = a2;
              v53 = _mm_load_si128((const __m128i *)&v142[32]);
              *(_QWORD *)&v142[16] = v128.m128i_i64[0];
              v54 = *(_DWORD *)&v142[56];
              v55 = _mm_load_si128((const __m128i *)&v142[16]);
              v137 = a2;
              v139 = v53;
              v138 = v55;
              v140 = *(_QWORD *)&v142[48];
              v141 = *(_DWORD *)&v142[56];
              *(_DWORD *)v51 = v115;
              *(__m128i *)(v51 + 4) = a2;
              *(__m128i *)(v51 + 20) = v55;
              *(__m128i *)(v51 + 36) = v53;
              *(_QWORD *)(v51 + 52) = v52;
              *(_DWORD *)(v51 + 60) = v54;
              ++*(_DWORD *)(v47 + 8);
              goto LABEL_32;
            }
            LOBYTE(v141) = 2;
            v95 = v48 + 1;
            v101 = _mm_load_si128(&v139);
            *(_DWORD *)v142 = v115;
            v96 = (const __m128i *)v142;
            v138.m128i_i64[0] = v128.m128i_i64[0];
            v102 = _mm_load_si128(&v138);
            v137 = a2;
            v132 = a2;
            v133 = v102;
            v134 = v101;
            v135 = v140;
            v136 = v141;
            *(__m128i *)&v142[4] = a2;
            *(__m128i *)&v142[20] = v102;
            *(__m128i *)&v142[36] = v101;
            *(_QWORD *)&v142[52] = v140;
            v143 = v141;
            if ( v50 >= v95 )
              goto LABEL_86;
            v111 = v47 + 16;
            v119 = v49;
            if ( v49 > (unsigned __int64)v142 || v51 <= (unsigned __int64)v142 )
            {
LABEL_116:
              sub_2237220(v47, v111, v95, 64);
              v96 = (const __m128i *)v142;
              v51 = *(_QWORD *)v47 + ((unsigned __int64)*(unsigned int *)(v47 + 8) << 6);
              goto LABEL_86;
            }
LABEL_112:
            sub_2237220(v47, v111, v95, 64);
            v96 = (const __m128i *)&v142[*(_QWORD *)v47 - v119];
            v51 = ((unsigned __int64)*(unsigned int *)(v47 + 8) << 6) + *(_QWORD *)v47;
LABEL_86:
            *(__m128i *)v51 = _mm_loadu_si128(v96);
            *(__m128i *)(v51 + 16) = _mm_loadu_si128(v96 + 1);
            *(__m128i *)(v51 + 32) = _mm_loadu_si128(v96 + 2);
            *(__m128i *)(v51 + 48) = _mm_loadu_si128(v96 + 3);
            ++*(_DWORD *)(v47 + 8);
            goto LABEL_32;
          }
LABEL_28:
          v2 = v7;
          sub_14EBAA0(a1, dword_26188B0, 6);
        }
        else
        {
          *(_DWORD *)v142 = 19;
          v7 = sub_14E53D0(a1, v142, 1);
          if ( (_BYTE)v7 )
          {
            v65 = sub_C07A10(
                    *(_QWORD *)(a1 + 16),
                    *(_DWORD *)(a1 + 92),
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 88LL),
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 56LL),
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL),
                    nullptr,
                    nullptr);
            sub_14E7FA0((__int64)&v127, a1, a2);
            if ( v131 )
            {
              v38 = *(_QWORD *)(a1 + 8);
              v66 = _mm_load_si128(&v127);
              v67 = *(unsigned int *)(v38 + 8);
              v68 = *(_QWORD *)v38;
              v69 = *(unsigned int *)(v38 + 12);
              v42 = *(_QWORD *)v38 + (v67 << 6);
              if ( v67 < v69 )
              {
                v142[56] = 5;
                v70 = _mm_load_si128(&v128);
                v71 = *(_DWORD *)&v142[56];
                a2 = _mm_load_si128(&v129);
                *(__m128i *)v142 = v66;
                v72 = v130;
                *(__m128i *)&v142[16] = v70;
                *(__m128i *)&v142[32] = a2;
                *(_QWORD *)&v142[48] = v130;
                v137 = v66;
                v138 = v70;
                v139 = a2;
                v140 = v130;
                v141 = *(_DWORD *)&v142[56];
                *(_DWORD *)v42 = v65;
                *(__m128i *)(v42 + 4) = v66;
                *(__m128i *)(v42 + 20) = v70;
                *(__m128i *)(v42 + 36) = a2;
                *(_QWORD *)(v42 + 52) = v72;
                *(_DWORD *)(v42 + 60) = v71;
                ++*(_DWORD *)(v38 + 8);
                goto LABEL_32;
              }
              v104 = _mm_load_si128(&v128);
              v91 = v67 + 1;
              LOBYTE(v141) = 5;
              a2 = _mm_load_si128(&v129);
              v137 = v66;
              v140 = v130;
              v135 = v130;
              *(_QWORD *)&v142[52] = v130;
              v94 = (const __m128i *)v142;
              v138 = v104;
              v139 = a2;
              v132 = v66;
              v133 = v104;
              v134 = a2;
              v136 = v141;
              *(_DWORD *)v142 = v65;
              *(__m128i *)&v142[4] = v66;
              *(__m128i *)&v142[20] = v104;
              *(__m128i *)&v142[36] = a2;
              v143 = v141;
              if ( v69 >= v91 )
                goto LABEL_84;
              v110 = v38 + 16;
              v122 = v68;
              if ( v68 > (unsigned __int64)v142 || v42 <= (unsigned __int64)v142 )
              {
LABEL_119:
                v120 = v38;
                sub_2237220(v38, v110, v91, 64);
                v38 = v120;
                v94 = (const __m128i *)v142;
                v42 = *(_QWORD *)v120 + ((unsigned __int64)*(unsigned int *)(v120 + 8) << 6);
                goto LABEL_84;
              }
LABEL_108:
              v118 = v38;
              sub_2237220(v38, v110, v91, 64);
              v38 = v118;
              v94 = (const __m128i *)&v142[*(_QWORD *)v118 - v122];
              v42 = *(_QWORD *)v118 + ((unsigned __int64)*(unsigned int *)(v118 + 8) << 6);
LABEL_84:
              *(__m128i *)v42 = _mm_loadu_si128(v94);
              *(__m128i *)(v42 + 16) = _mm_loadu_si128(v94 + 1);
              *(__m128i *)(v42 + 32) = _mm_loadu_si128(v94 + 2);
              *(__m128i *)(v42 + 48) = _mm_loadu_si128(v94 + 3);
              ++*(_DWORD *)(v38 + 8);
              goto LABEL_32;
            }
            goto LABEL_28;
          }
          sub_13DF9D0(&v123, a1 + 24);
          v73 = *(_QWORD *)(a1 + 16);
          v74 = _mm_loadu_si128(&v123);
          *(_QWORD *)(a1 + 104) = v124;
          v75 = *(_QWORD **)(a1 + 80);
          *(__m128i *)(a1 + 88) = v74;
          v76 = v75[6];
          v77 = sub_C07A10(v73, *(_DWORD *)(a1 + 92), v75[11], v75[7], v75[8], nullptr, nullptr);
          sub_FC70B0((__int64)v142, v76, v77, 1688);
          v78 = *(unsigned __int8 **)v142;
          if ( !*(_QWORD *)v142 )
          {
            v99 = *(_QWORD *)&v142[8];
            v100 = *(_DWORD *)(*(_QWORD *)&v142[8] + 14976LL);
            if ( v100 )
            {
              v105 = (unsigned int)(v100 - 1);
              *(_DWORD *)(*(_QWORD *)&v142[8] + 14976LL) = v105;
              v78 = *(unsigned __int8 **)(v99 + 8 * v105 + 14848);
              v106 = *((unsigned int *)v78 + 134);
              *v78 = 0;
              v107 = *((_QWORD *)v78 + 66);
              *((_DWORD *)v78 + 106) = 0;
              v108 = v107 + (v106 << 6);
              while ( v107 != v108 )
              {
                while ( 1 )
                {
                  v108 -= 64;
                  v109 = *(void **)(v108 + 24);
                  if ( v109 == (void *)(v108 + 40) )
                    break;
                  operator delete(v109);
                  if ( v107 == v108 )
                    goto LABEL_105;
                }
              }
LABEL_105:
              *((_DWORD *)v78 + 134) = 0;
            }
            else
            {
              v78 = (unsigned __int8 *)operator new(0x3A0u);
              *v78 = 0;
              *((_QWORD *)v78 + 12) = v78 + 112;
              *((_QWORD *)v78 + 16) = v78 + 144;
              *((_QWORD *)v78 + 20) = v78 + 176;
              *((_QWORD *)v78 + 24) = v78 + 208;
              *((_QWORD *)v78 + 28) = v78 + 240;
              *((_QWORD *)v78 + 32) = v78 + 272;
              *((_QWORD *)v78 + 36) = v78 + 304;
              *((_QWORD *)v78 + 40) = v78 + 336;
              *((_QWORD *)v78 + 44) = v78 + 368;
              *((_QWORD *)v78 + 48) = v78 + 400;
              *((_QWORD *)v78 + 52) = v78 + 432;
              *((_QWORD *)v78 + 13) = 0;
              v78[112] = 0;
              *((_QWORD *)v78 + 17) = 0;
              v78[144] = 0;
              *((_QWORD *)v78 + 21) = 0;
              v78[176] = 0;
              *((_QWORD *)v78 + 25) = 0;
              v78[208] = 0;
              *((_QWORD *)v78 + 29) = 0;
              v78[240] = 0;
              *((_QWORD *)v78 + 33) = 0;
              v78[272] = 0;
              *((_QWORD *)v78 + 37) = 0;
              v78[304] = 0;
              *((_QWORD *)v78 + 41) = 0;
              v78[336] = 0;
              *((_QWORD *)v78 + 45) = 0;
              v78[368] = 0;
              *((_QWORD *)v78 + 49) = 0;
              v78[400] = 0;
              *((_QWORD *)v78 + 53) = 0x800000000LL;
              *((_QWORD *)v78 + 66) = v78 + 544;
              *((_QWORD *)v78 + 67) = 0x600000000LL;
            }
            *(_QWORD *)v142 = v78;
          }
          v78[*v78 + 1] = 2;
          v79 = *(_QWORD *)v142;
          v80 = (unsigned __int8)**(_BYTE **)v142;
          **(_BYTE **)v142 = v80 + 1;
          *(_QWORD *)(v79 + 8 * v80 + 16) = 0;
          sub_14DC730(v142, 15);
          if ( (_BYTE)v144 )
          {
            sub_FC7790(*(__int64 *)&v142[16], (__int64 *)v142, SHIBYTE(v144));
            *(_QWORD *)&v142[16] = 0;
            v144 = 0;
          }
          if ( *(_BYTE **)&v142[32] != &v142[48] )
            operator delete(*(void **)&v142[32]);
          v81 = *(void ***)v142;
          if ( *(_QWORD *)v142 )
          {
            v82 = *(_QWORD *)&v142[8];
            if ( *(_QWORD *)&v142[8] )
            {
              if ( *(_QWORD *)v142 < *(_QWORD *)&v142[8]
                || *(_QWORD *)v142 > (unsigned __int64)(*(_QWORD *)&v142[8] + 14848LL) )
              {
                v83 = *(void ***)(*(_QWORD *)v142 + 528LL);
                v84 = &v83[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v142 + 536LL)];
                if ( v83 != v84 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v84 -= 8;
                      v85 = (void **)v84[3];
                      if ( v85 == v84 + 5 )
                        break;
                      v116 = v83;
                      operator delete(v85);
                      v83 = v116;
                      if ( v116 == v84 )
                        goto LABEL_63;
                    }
                  }
                  while ( v83 != v84 );
LABEL_63:
                  v84 = (void **)v81[66];
                }
                if ( v84 != v81 + 68 )
                  free(v84);
                v86 = (void **)v81[52];
                v87 = v81 + 52;
                if ( v86 != v81 + 54 )
                  free(v86);
                v88 = v81 + 12;
                do
                {
                  while ( 1 )
                  {
                    v87 -= 4;
                    if ( *v87 == v87 + 2 )
                      break;
                    operator delete(*v87);
                    if ( v87 == v88 )
                      goto LABEL_71;
                  }
                }
                while ( v87 != v88 );
LABEL_71:
                operator delete(v81, 0x3A0u);
              }
              else
              {
                v98 = *(unsigned int *)(*(_QWORD *)&v142[8] + 14976LL);
                *(_DWORD *)(*(_QWORD *)&v142[8] + 14976LL) = v98 + 1;
                *(_QWORD *)(v82 + 8 * v98 + 14848) = v81;
              }
            }
          }
          v2 = 1;
          sub_14EBAA0(a1, dword_26188B0, 6);
        }
      }
    }
  }
  if ( !(_BYTE)v2 )
    return (unsigned int)sub_14E5150(a1, 1u, 17, 0xAu);
  return v2;
}
