CoinIndexedVector *__fastcall ClpPackedMatrix2::transposeTimes(
        ClpPackedMatrix2 *this,
        const ClpSimplex *a2,
        const CoinPackedMatrix *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  const ClpSimplex *v7; // r14
  int *v8; // rbp
  double v9; // xmm8_8
  __int64 v10; // r13
  int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // eax
  int *v15; // r11
  __int64 v16; // r10
  __int64 v17; // rbp
  _DWORD *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // r13
  int v22; // edx
  int v23; // r8d
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rsi
  __int64 v28; // rax
  int v29; // edi
  int v30; // r8d
  double v31; // xmm9_8
  double v32; // xmm7_8
  int v33; // r12d
  __int64 v34; // rsi
  const ClpSimplex *v35; // r11
  int *v36; // rcx
  __int64 v37; // r14
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  unsigned int v41; // ebp
  int v42; // eax
  __int64 v43; // rdx
  int v44; // esi
  int v45; // edi
  int v46; // r9d
  __int64 v47; // r10
  unsigned int v48; // r8d
  __int64 v49; // rdx
  unsigned int v50; // ecx
  __m128i v51; // xmm1
  unsigned int v52; // r8d
  int v53; // esi
  unsigned int v54; // edi
  int v55; // ecx
  signed int v56; // edx
  int v57; // edi
  int v58; // esi
  __int64 v59; // rsi
  double v60; // xmm4_8
  __int64 v61; // rdi
  double v62; // xmm5_8
  __int64 v63; // rax
  double v64; // xmm3_8
  __int64 v65; // rdi
  double v66; // xmm1_8
  int v67; // r8d
  __int64 v68; // r12
  int v69; // r9d
  double v70; // xmm0_8
  signed int v71; // esi
  unsigned __int8 v72; // dl
  double v73; // xmm0_8
  double v74; // xmm2_8
  bool v75; // cc
  double v76; // xmm0_8
  __int64 v77; // rdx
  int v78; // esi
  int v79; // edi
  int v80; // r9d
  __int64 v81; // r10
  unsigned int v82; // r8d
  __int64 v83; // rdx
  unsigned int v84; // ecx
  __m128i v85; // xmm1
  unsigned int v86; // r8d
  int v87; // esi
  unsigned int v88; // edi
  int v89; // ecx
  signed int v90; // edx
  double v91; // xmm2_8
  __int64 v92; // rdx
  double v93; // xmm2_8
  CoinIndexedVector *result; // rax
  double v95; // xmm2_8
  __int64 v96; // rax
  int v97; // edx
  int v98; // edi
  __int64 v99; // rsi
  _DWORD *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // r8
  int v103; // esi
  __int64 v104; // r11
  _DWORD *v105; // rbx
  int v106; // eax
  __int64 v107; // rdx
  double v108; // xmm1_8
  int v109; // eax
  double v110; // xmm0_8
  double v111; // xmm1_8
  int v112; // r9d
  __int64 v113; // r10
  double v114; // xmm3_8
  int v115; // esi
  double v116; // xmm0_8
  unsigned __int8 v117; // al
  double v118; // xmm0_8
  double v119; // xmm2_8
  double v120; // xmm13_8
  __int64 v121; // [rsp+0h] [rbp-D8h]
  int v122; // [rsp+0h] [rbp-D8h]
  __int64 v123; // [rsp+8h] [rbp-D0h]
  __int64 v124; // [rsp+8h] [rbp-D0h]
  __int64 v125; // [rsp+8h] [rbp-D0h]
  __int64 v126; // [rsp+10h] [rbp-C8h]
  __int64 v127; // [rsp+10h] [rbp-C8h]
  __int64 v128; // [rsp+18h] [rbp-C0h]
  unsigned __int64 *v129; // [rsp+20h] [rbp-B8h]
  int v130; // [rsp+2Ch] [rbp-ACh]
  const ClpSimplex *v131; // [rsp+30h] [rbp-A8h]
  int v132; // [rsp+30h] [rbp-A8h]
  __int64 v133; // [rsp+30h] [rbp-A8h]
  __int64 v134; // [rsp+38h] [rbp-A0h]
  __int64 v135; // [rsp+40h] [rbp-98h]
  int v136; // [rsp+50h] [rbp-88h]
  unsigned int v137; // [rsp+54h] [rbp-84h]
  __int64 v138; // [rsp+68h] [rbp-70h]
  __int64 v139; // [rsp+70h] [rbp-68h]
  __int64 v140; // [rsp+78h] [rbp-60h]
  int v141; // [rsp+80h] [rbp-58h]
  int v142; // [rsp+84h] [rbp-54h]

  v7 = a2;
  v8 = *(int **)a4;
  v129 = *((unsigned __int64 **)a4 + 1);
  v135 = *((_QWORD *)a3 + 4);
  v136 = *((_DWORD *)a2 + 431);
  v9 = *((double *)a2 + 218);
  v10 = *(_QWORD *)a6;
  v134 = *((_QWORD *)a6 + 1);
  v139 = *(_QWORD *)a5;
  v11 = *((_DWORD *)a4 + 4);
  v12 = *((_QWORD *)a3 + 6);
  v13 = *((_QWORD *)this + 4);
  v130 = v11;
  v140 = *((_QWORD *)a5 + 1);
  if ( v136 != 1 )
  {
    v14 = v11;
    if ( v11 <= 0 )
    {
      v24 = *((_DWORD *)this + 2);
    }
    else
    {
      v15 = v8;
      v16 = 4LL * v11;
      v17 = -(__int64)v11;
      v121 = *(_QWORD *)a6;
      v123 = *((_QWORD *)this + 4);
      v18 = (_DWORD *)(v13 + v16);
      v19 = v17;
      v20 = *((_QWORD *)this + 3);
      v21 = (__int64)&v15[v14 - 1 + 1];
      do
      {
        v22 = *(_DWORD *)(v12 + 4LL * *v15);
        v23 = *v15;
        v18[v19] = v22;
        v24 = *((_DWORD *)this + 2);
        v25 = 2LL * v24 * v23;
        if ( v24 > 0 )
        {
          v26 = v20 + v25;
          v27 = v18;
          v28 = 1;
          do
          {
            v29 = *(unsigned __int16 *)(v26 + 2 * v28 - 2);
            v30 = v28++;
            v22 += v29;
            *v27 = v22;
            v24 = *((_DWORD *)this + 2);
            v27 = (_DWORD *)((char *)v27 + v16);
          }
          while ( v24 > v30 );
        }
        ++v15;
        ++v18;
      }
      while ( v15 != (int *)v21 );
      v10 = v121;
      v13 = v123;
    }
    if ( v24 <= 0 )
    {
      *((_DWORD *)a6 + 4) = 0;
      *((_BYTE *)a6 + 28) = 1;
      return a6;
    }
    v31 = v9;
    v137 = 0;
    v142 = -1;
    v32 = 1.0e31;
LABEL_11:
    v126 = 0;
    v33 = 0;
    v34 = 0;
    v122 = 0;
    v35 = v7;
    while ( 1 )
    {
      v36 = (int *)(v126 + v13);
      v37 = v33;
      v38 = *((_QWORD *)this + 5);
      v128 = v34 + 4;
      v39 = *((_QWORD *)this + 2);
      v131 = v35;
      v124 = *((_QWORD *)this + 6) + 12 * v34;
      v40 = v10 + 4LL * v33;
      v41 = *(_DWORD *)(v39 + v34);
      if ( v136 != 1 )
      {
        v42 = sub_BBA80(v134 + 8LL * v33, v10 + 4LL * v33, v129, v36, v135, v38, v130, *(_DWORD *)(v39 + v34 + 4) - v33);
        *(_DWORD *)(v124 + 24) = v42;
        v35 = v131;
        if ( v42 <= 0 )
          goto LABEL_29;
        v43 = -(int)(v40 >> 2) & 3;
        if ( (int)v43 + 3 > (unsigned int)(v42 - 1) )
        {
          v53 = v33;
          v54 = 0;
        }
        else
        {
          if ( (_DWORD)v43 )
          {
            *(_DWORD *)v40 += v41;
            v44 = v33 + 1;
            v45 = 1;
            if ( (_DWORD)v43 != 1 )
            {
              *(_DWORD *)(v10 + 4LL * v44) = v41 + *(_DWORD *)(v40 + 4);
              if ( (_DWORD)v43 == 2 )
              {
                v44 = v33 + 2;
                v45 = 2;
              }
              else
              {
                v44 = v33 + 3;
                *(_DWORD *)(v10 + 4LL * (v33 + 2)) = v41 + *(_DWORD *)(v40 + 8);
                v45 = 3;
              }
            }
          }
          else
          {
            v44 = v33;
            v45 = 0;
          }
          v46 = v42 - v43;
          v47 = v10 + 4 * (v43 + v33);
          v48 = v42 - v43;
          v49 = 0;
          v50 = 0;
          v51 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v41), 0);
          v52 = v48 >> 2;
          do
          {
            ++v50;
            *(__m128i *)(v47 + v49) = _mm_add_epi32(_mm_load_si128((const __m128i *)(v47 + v49)), v51);
            v49 += 16;
          }
          while ( v52 > v50 );
          v53 = (v46 & 0xFFFFFFFC) + v44;
          v54 = (v46 & 0xFFFFFFFC) + v45;
          if ( (v46 & 0xFFFFFFFC) == v46 )
            goto LABEL_28;
        }
        *(_DWORD *)(v10 + 4LL * v53) = v41 + *(_DWORD *)(v40 + 4LL * (int)v54);
        if ( v42 > (int)(v54 + 1) )
        {
          *(_DWORD *)(v10 + 4LL * (v53 + 1)) = v41 + *(_DWORD *)(v40 + 4LL * (int)(v54 + 1));
          if ( v42 > (int)(v54 + 2) )
          {
            *(_DWORD *)(v10 + 4LL * (v53 + 2)) = v41 + *(_DWORD *)(v40 + 4LL * (int)(v54 + 2));
            if ( v42 > (int)(v54 + 3) )
            {
              v55 = v53 + 4;
              v56 = v54 + 4;
              *(_DWORD *)(v10 + 4LL * (v53 + 3)) = v41 + *(_DWORD *)(v40 + 4LL * (int)(v54 + 3));
              if ( v42 > (int)(v54 + 4) )
              {
                v57 = v54 + 5;
                v58 = v53 + 5;
                *(_DWORD *)(v10 + 4LL * v55) = v41 + *(_DWORD *)(v40 + 4LL * v56);
                if ( v42 > v57 )
                  goto LABEL_27;
              }
            }
          }
        }
        goto LABEL_28;
      }
      v138 = v134 + 8LL * v33;
      v42 = sub_BBA80(v138, v10 + 4LL * v33, v129, v36, v135, v38, v130, *(_DWORD *)(v39 + v34 + 4) - v33);
      v35 = v131;
      *(_DWORD *)(v124 + 24) = v42;
      v59 = *((_QWORD *)v131 + 149);
      v60 = *((double *)v131 + 3);
      if ( v42 > 0 )
        break;
      v64 = v9;
      v132 = -1;
      v67 = 0;
      v66 = 1.0e31;
LABEL_47:
      *(double *)(v124 + 8) = v66;
      *(_DWORD *)(v124 + 32) = v132;
      *(_DWORD *)(v124 + 28) = v67;
      *(double *)(v124 + 16) = v64;
      if ( v64 > v31 )
      {
        v31 = v64;
        v142 = v33 + v132;
      }
      v32 = fmin(v66, v32);
      if ( v42 > 0 )
      {
        v77 = -(int)(v40 >> 2) & 3;
        if ( (int)v77 + 3 > (unsigned int)(v42 - 1) )
        {
          v87 = v33;
          v88 = 0;
          goto LABEL_58;
        }
        if ( (_DWORD)v77 )
        {
          *(_DWORD *)v40 += v41;
          v78 = v33 + 1;
          v79 = 1;
          if ( (_DWORD)v77 != 1 )
          {
            *(_DWORD *)(v10 + 4LL * v78) = v41 + *(_DWORD *)(v40 + 4);
            if ( (_DWORD)v77 == 2 )
            {
              v78 = v33 + 2;
              v79 = 2;
            }
            else
            {
              v78 = v33 + 3;
              *(_DWORD *)(v10 + 4LL * (v33 + 2)) = v41 + *(_DWORD *)(v40 + 8);
              v79 = 3;
            }
          }
        }
        else
        {
          v78 = v33;
          v79 = 0;
        }
        v80 = v42 - v77;
        v81 = v10 + 4 * (v77 + v37);
        v82 = v42 - v77;
        v83 = 0;
        v84 = 0;
        v85 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v41), 0);
        v86 = v82 >> 2;
        do
        {
          ++v84;
          *(__m128i *)(v81 + v83) = _mm_add_epi32(_mm_load_si128((const __m128i *)(v81 + v83)), v85);
          v83 += 16;
        }
        while ( v86 > v84 );
        v87 = (v80 & 0xFFFFFFFC) + v78;
        v88 = (v80 & 0xFFFFFFFC) + v79;
        if ( (v80 & 0xFFFFFFFC) != v80 )
        {
LABEL_58:
          *(_DWORD *)(v10 + 4LL * v87) = v41 + *(_DWORD *)(v40 + 4LL * (int)v88);
          if ( (int)(v88 + 1) >= v42 )
            goto LABEL_28;
          *(_DWORD *)(v10 + 4LL * (v87 + 1)) = v41 + *(_DWORD *)(v40 + 4LL * (int)(v88 + 1));
          if ( (int)(v88 + 2) >= v42 )
            goto LABEL_28;
          *(_DWORD *)(v10 + 4LL * (v87 + 2)) = v41 + *(_DWORD *)(v40 + 4LL * (int)(v88 + 2));
          if ( (int)(v88 + 3) >= v42 )
            goto LABEL_28;
          v89 = v87 + 4;
          v90 = v88 + 4;
          *(_DWORD *)(v10 + 4LL * (v87 + 3)) = v41 + *(_DWORD *)(v40 + 4LL * (int)(v88 + 3));
          if ( (int)(v88 + 4) >= v42 )
            goto LABEL_28;
          v57 = v88 + 5;
          v58 = v87 + 5;
          *(_DWORD *)(v10 + 4LL * v89) = v41 + *(_DWORD *)(v40 + 4LL * v90);
          if ( v57 >= v42 )
            goto LABEL_28;
LABEL_27:
          *(_DWORD *)(v10 + 4LL * v58) = *(_DWORD *)(v40 + 4LL * v57) + v41;
        }
LABEL_28:
        v33 += v42;
      }
LABEL_29:
      ++v122;
      v126 += 4LL * v130;
      if ( *((_DWORD *)this + 2) <= v122 )
      {
        result = a6;
        v7 = v35;
        *((_DWORD *)a6 + 4) = v33;
        *((_BYTE *)a6 + 28) = 1;
        if ( v136 != 1 )
          return result;
        goto LABEL_92;
      }
      v13 = *((_QWORD *)this + 4);
      v34 = v128;
    }
    v61 = (unsigned int)(v42 - 1);
    v141 = v33;
    v62 = -v60;
    v63 = 0;
    v64 = v9;
    v65 = v61 + 1;
    v66 = 1.0e31;
    v132 = -1;
    v67 = 0;
    v68 = v59;
    while ( 1 )
    {
      v69 = v63;
      v70 = *(double *)(v138 + 8 * v63);
      v71 = v41 + *(_DWORD *)(v40 + 4 * v63);
      v72 = *(_BYTE *)(*((_QWORD *)v35 + 33) + v71) & 7;
      if ( v72 == 2 )
        break;
      if ( v72 <= 2u )
      {
        if ( !v72 )
        {
LABEL_37:
          v73 = fabs(v70);
          if ( v72 || v73 >= 0.001 )
          {
            v74 = *(double *)(v68 + 8LL * v71);
            if ( v74 > v60 || v62 > v74 || v73 > fmax(10.0 * v9, 0.00001) )
            {
              v75 = v73 <= v64;
              v76 = fmax(v73, v64);
              if ( v75 )
                v69 = v132;
              v64 = v76;
              v132 = v69;
            }
          }
          goto LABEL_45;
        }
        if ( v65 == ++v63 )
        {
LABEL_46:
          v137 += v67;
          v33 = v141;
          v42 = *(_DWORD *)(v124 + 24);
          goto LABEL_47;
        }
      }
      else if ( v72 == 3 )
      {
        v91 = *(double *)(v68 + 8LL * v71);
        if ( v62 <= v91 - v70 * 1.0e25 )
          goto LABEL_45;
        if ( v62 > v91 - v70 * v66 && v70 >= v9 )
          v66 = (v91 + v60) / v70;
LABEL_68:
        v92 = v67;
        ++v63;
        ++v67;
        *(double *)(v140 + 8LL * (int)v137 + 8 * v92) = v70;
        *(_DWORD *)(v139 + 4LL * (int)v137 + 4 * v92) = v71;
        if ( v65 == v63 )
          goto LABEL_46;
      }
      else
      {
        if ( v72 == 4 )
          goto LABEL_37;
LABEL_45:
        if ( v65 == ++v63 )
          goto LABEL_46;
      }
    }
    v93 = *(double *)(v68 + 8LL * v71);
    if ( v93 - v70 * 1.0e25 <= v60 )
      goto LABEL_45;
    if ( v93 - v70 * v66 > v60 && -v70 >= v9 )
      v66 = (v93 - v60) / v70;
    goto LABEL_68;
  }
  v111 = *((double *)a2 + 3);
  v112 = *((_DWORD *)a2 + 27);
  v127 = *((_QWORD *)a2 + 148);
  if ( v11 > 0 )
  {
    v113 = 4LL * v11;
    v114 = -v111;
    v125 = *((_QWORD *)this + 3);
    v105 = (_DWORD *)(v13 + v113);
    v31 = *((double *)a2 + 218);
    v32 = 1.0e31;
    v104 = 0;
    v137 = 0;
    v142 = -1;
    v133 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      v115 = v8[v104];
      v116 = *(double *)&v129[v104];
      v117 = *(_BYTE *)(*((_QWORD *)v7 + 33) + v115 + v112) & 7;
      if ( v117 == 2 )
        break;
      if ( v117 <= 2u )
      {
        if ( !v117 )
        {
LABEL_108:
          v118 = fabs(v116);
          if ( v117 || v118 >= 0.001 )
          {
            v119 = *(double *)(v127 + 8LL * v115);
            if ( (v119 > v111 || v114 > v119 || v118 > fmax(10.0 * v9, 0.00001)) && v118 > v31 )
            {
              v31 = v118;
              v142 = v112 + v104;
            }
          }
        }
      }
      else if ( v117 == 3 )
      {
        v95 = *(double *)(v127 + 8LL * v115);
        if ( v114 > v95 - v116 * 1.0e25 )
        {
          if ( v114 > v95 - v116 * v32 && v116 >= v9 )
            v32 = (v95 + v111) / v116;
LABEL_84:
          v96 = (int)v137;
          *(double *)(v140 + 8LL * (int)v137++) = v116;
          *(_DWORD *)(v139 + 4 * v96) = v115 + v112;
        }
      }
      else if ( v117 == 4 )
      {
        goto LABEL_108;
      }
LABEL_85:
      v97 = *(_DWORD *)(v12 + 4LL * v115);
      v105[-v130] = v97;
      v98 = *((_DWORD *)this + 2);
      v99 = 2LL * v98 * v115;
      if ( v98 > 0 )
      {
        v100 = v105;
        v101 = 1;
        v102 = v125 + v99;
        do
        {
          v97 += *(unsigned __int16 *)(v102 + 2 * v101 - 2);
          v103 = v101++;
          *v100 = v97;
          v98 = *((_DWORD *)this + 2);
          v100 = (_DWORD *)((char *)v100 + v113);
        }
        while ( v98 > v103 );
      }
      ++v104;
      ++v105;
      if ( v104 == (unsigned int)(v130 - 1) + 1LL )
      {
        v13 = v133;
        goto LABEL_90;
      }
    }
    v120 = *(double *)(v127 + 8LL * v115);
    if ( v120 - v116 * 1.0e25 <= v111 )
      goto LABEL_85;
    if ( v120 - v116 * v32 > v111 && -v116 >= v9 )
      v32 = (v120 - v111) / v116;
    goto LABEL_84;
  }
  v98 = *((_DWORD *)this + 2);
  v31 = *((double *)a2 + 218);
  v137 = 0;
  v142 = -1;
  v32 = 1.0e31;
LABEL_90:
  if ( v98 > 0 )
    goto LABEL_11;
  *((_DWORD *)a6 + 4) = 0;
  *((_BYTE *)a6 + 28) = 1;
LABEL_92:
  *((double *)v7 + 218) = v32;
  if ( v142 < 0 )
  {
    *((_DWORD *)v7 + 432) = -1;
  }
  else
  {
    v106 = *((_DWORD *)v7 + 27);
    if ( v142 < v106 )
    {
      v108 = *(double *)(*((_QWORD *)a6 + 1) + 8LL * v142);
      v109 = *(_DWORD *)(*(_QWORD *)a6 + 4LL * v142);
    }
    else
    {
      v107 = v142 - v106;
      v108 = *(double *)(*((_QWORD *)a4 + 1) + 8 * v107);
      v109 = *(_DWORD *)(*(_QWORD *)a4 + 4 * v107) + v106;
    }
    v110 = *(double *)(*((_QWORD *)v7 + 148) + 8LL * v109);
    *((_DWORD *)v7 + 432) = v109;
    *((double *)v7 + 221) = v108;
    *((double *)v7 + 220) = fabs(v110 / v108);
  }
  result = (CoinIndexedVector *)v137;
  *((_DWORD *)a5 + 4) = v137;
  if ( !v137 )
    *((_BYTE *)a5 + 28) = 0;
  *((_DWORD *)v7 + 431) = -1;
  return result;
}

