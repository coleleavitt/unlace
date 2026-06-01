double *__fastcall ClpQuadraticObjective::gradient(
        ClpQuadraticObjective *this,
        double **a2,
        const double *a3,
        double *a4,
        char a5,
        int a6)
{
  const ClpSimplex *v6; // r14
  double *v10; // rdx
  double *result; // rax
  double v12; // xmm1_8
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  double *v15; // r13
  __m128d v16; // xmm4
  __int64 v17; // rsi
  __int64 v18; // rdx
  double *v19; // r9
  __int64 v20; // r10
  double v21; // xmm5_8
  __int64 v22; // rdx
  int v23; // ecx
  double v24; // xmm6_8
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  double v30; // xmm0_8
  double v31; // xmm3_8
  double v32; // xmm2_8
  int v33; // r11d
  double *v34; // rdi
  int v35; // r15d
  __int64 v36; // rdx
  unsigned int v37; // ecx
  __m128d v38; // xmm1
  __int64 v39; // rsi
  double *v40; // r9
  double *v41; // r8
  unsigned int v42; // r10d
  double *v43; // rsi
  __int64 v44; // rdx
  signed int v45; // r15d
  __int64 v46; // rdx
  int v47; // r15d
  unsigned __int64 v48; // rdi
  __int64 v49; // r13
  __int64 v50; // r15
  int v51; // esi
  __int64 v52; // rdi
  int v53; // edi
  double *v54; // rsi
  __int64 v55; // r8
  __int64 v56; // rdx
  int v57; // ecx
  double v58; // xmm5_8
  __int64 v59; // r11
  __int64 v60; // r10
  __int64 v61; // rdx
  __int64 v62; // rdi
  double v63; // xmm2_8
  __int64 v64; // rcx
  double v65; // xmm0_8
  double v66; // xmm1_8
  double v67; // xmm4_8
  double *v68; // rsi
  __int64 v69; // r8
  __int64 v70; // rdx
  int v71; // ecx
  double v72; // xmm6_8
  __int64 v73; // r10
  __int64 v74; // rdi
  __int64 v75; // r11
  __int64 v76; // rdx
  __int64 v77; // rcx
  double v78; // xmm2_8
  double v79; // xmm5_8
  double v80; // xmm3_8
  double *v81; // r8
  double *v82; // rcx
  double *v83; // rsi
  __int64 v84; // r9
  double v85; // xmm0_8
  __int64 v86; // rcx
  double *v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  int v90; // r9d
  double *v91; // rdi
  __int64 v92; // rdx
  int v93; // r11d
  unsigned int v94; // ecx
  __int64 v95; // rsi
  __m128d v96; // xmm1
  unsigned int v97; // r10d
  __int64 v98; // rdx
  double *v99; // r8
  unsigned int v100; // r10d
  double *v101; // rsi
  signed int v102; // r13d
  __int64 v103; // rdx
  int v104; // r13d
  double *v105; // r9
  double *v106; // rdx
  double *v107; // rcx
  __int64 v108; // rdi
  double v109; // xmm0_8
  __int64 v110; // rdx
  double *v111; // rdx
  double v112; // xmm3_8
  __int64 v113; // rdx
  unsigned __int64 v114; // rdi
  __int64 v115; // r10
  __int64 v116; // rdx
  int v117; // ecx
  double v118; // xmm2_8
  double v119; // xmm1_8
  __int64 v120; // r9
  __int64 v121; // r8
  __int64 v122; // rdx
  double v123; // xmm0_8
  double *v124; // rcx
  double *v125; // rdi
  __int64 v126; // r8
  double v127; // xmm0_8
  __int64 v128; // rcx
  double *v129; // rcx
  unsigned __int64 v130; // rdx
  __int64 v131; // [rsp+8h] [rbp-60h]
  int v132; // [rsp+8h] [rbp-60h]
  int v133; // [rsp+8h] [rbp-60h]
  double *v134; // [rsp+8h] [rbp-60h]
  __int64 v135; // [rsp+10h] [rbp-58h]
  __int64 v136; // [rsp+10h] [rbp-58h]
  int v137; // [rsp+10h] [rbp-58h]
  __int64 v138; // [rsp+18h] [rbp-50h]
  __int64 v139; // [rsp+18h] [rbp-50h]
  __int64 v140; // [rsp+20h] [rbp-48h]
  double v141; // [rsp+28h] [rbp-40h]
  const ClpSimplex *v142; // [rsp+28h] [rbp-40h]
  int v143; // [rsp+28h] [rbp-40h]

  v6 = (const ClpSimplex *)a2;
  *a4 = 0.0;
  if ( !a2 )
    goto LABEL_11;
  v10 = a2[129];
  if ( a2[28] || *((double *)a2 + 11) != 1.0 || *(double *)a2 != 1.0 )
  {
    if ( !v10 )
    {
LABEL_11:
      v10 = *((double **)this + 4);
      goto LABEL_12;
    }
    result = *((double **)this + 5);
    if ( a5 )
    {
      if ( result )
        goto LABEL_21;
    }
    else
    {
      v12 = 0.0;
      if ( result )
      {
LABEL_6:
        *a4 = v12 * *(double *)v6;
        return result;
      }
    }
    v48 = *((int *)this + 13);
    v132 = a6;
    if ( v48 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_151;
    result = (double *)operator new[](8 * v48);
    a6 = v132;
    *((_QWORD *)this + 5) = result;
LABEL_21:
    v14 = *((_QWORD **)this + 3);
    v15 = a2[29];
    v16.m128d_f64[0] = *(double *)a2 * *((double *)a2 + 11);
    v131 = v14[5];
    v138 = v14[7];
    v135 = v14[6];
    v17 = v14[4];
    v18 = *((int *)this + 13);
    v140 = v17;
    if ( a6 == 1 )
    {
      v81 = *((double **)v6 + 129);
      if ( (_DWORD)v18 && v81 != result )
      {
        if ( (int)v18 >> 3 <= 0 )
        {
          v87 = result;
        }
        else
        {
          v82 = result;
          v83 = *((double **)v6 + 129);
          v84 = (unsigned int)(((int)v18 >> 3) - 1);
          do
          {
            v85 = *v83;
            v82 += 8;
            v83 += 8;
            *(v82 - 8) = v85;
            *(v82 - 7) = *(v83 - 7);
            *(v82 - 6) = *(v83 - 6);
            *(v82 - 5) = *(v83 - 5);
            *(v82 - 4) = *(v83 - 4);
            *(v82 - 3) = *(v83 - 3);
            *(v82 - 2) = *(v83 - 2);
            *(v82 - 1) = *(v83 - 1);
          }
          while ( v82 != &result[8 * v84 + 8] );
          v86 = ((int)v84 + 1LL) << 6;
          v81 = (double *)((char *)v81 + v86);
          v87 = (double *)((char *)result + v86);
        }
        switch ( (int)v18 % 8 )
        {
          case 1:
            goto LABEL_91;
          case 2:
            goto LABEL_90;
          case 3:
            goto LABEL_89;
          case 4:
            goto LABEL_88;
          case 5:
            goto LABEL_87;
          case 6:
            goto LABEL_86;
          case 7:
            v87[6] = v81[6];
LABEL_86:
            v87[5] = v81[5];
LABEL_87:
            v87[4] = v81[4];
LABEL_88:
            v87[3] = v81[3];
LABEL_89:
            v87[2] = v81[2];
LABEL_90:
            v87[1] = v81[1];
LABEL_91:
            *v87 = *v81;
            break;
          default:
            break;
        }
      }
    }
    else
    {
      v141 = v16.m128d_f64[0];
      if ( a6 == 2 )
      {
        memset(&result[*((int *)this + 12)], 0, 8LL * ((int)v18 - *((_DWORD *)this + 12)));
        v16 = (__m128d)*(unsigned __int64 *)&v141;
        if ( v15 )
        {
          v33 = *((_DWORD *)this + 12);
          result = *((double **)this + 5);
          if ( v33 > 0 )
          {
            v34 = *((double **)this + 4);
            if ( (unsigned int)v33 > 0xA
              && (v34 >= result + 2 || result >= v34 + 2)
              && (v15 >= result + 2 || result >= v15 + 2) )
            {
              v35 = 0;
              v36 = ((unsigned __int64)v34 >> 3) & 1;
              if ( (((unsigned __int64)v34 >> 3) & 1) != 0 )
              {
                v35 = 1;
                *result = *v34 * v141 * *v15;
              }
              v37 = 0;
              v143 = v33 - v36;
              v38 = _mm_unpacklo_pd(v16, v16);
              v39 = ((unsigned __int64)v34 >> 3) & 1;
              v40 = &v34[v39];
              v41 = &v15[v39];
              v42 = (unsigned int)(v33 - v36) >> 1;
              v43 = &result[v39];
              v44 = 0;
              do
              {
                ++v37;
                *(__m128d *)&v43[v44] = _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v40[v44], v38), *(__m128d *)&v41[v44]);
                v44 += 2;
              }
              while ( v37 < v42 );
              v45 = (v143 & 0xFFFFFFFE) + v35;
              if ( (v143 & 0xFFFFFFFE) != v143 )
              {
                v46 = v45;
                v47 = v45 + 1;
                result[v46] = v34[v46] * v16.m128d_f64[0] * v15[v46];
                if ( v47 < v33 )
                  result[v47] = v34[v47] * v16.m128d_f64[0] * v15[v47];
              }
            }
            else
            {
              v88 = 0;
              do
              {
                result[v88 / 8] = v34[v88 / 8] * v141 * v15[v88 / 8];
                v88 += 8LL;
              }
              while ( 8LL * (unsigned int)(v33 - 1) + 8 != v88 );
            }
            v12 = *a4;
            if ( !*((_DWORD *)this + 5) )
              goto LABEL_6;
            goto LABEL_27;
          }
        }
        else
        {
          v90 = *((_DWORD *)this + 12);
          result = *((double **)this + 5);
          if ( v90 > 0 )
          {
            v91 = *((double **)this + 4);
            if ( (result >= v91 + 2 || v91 >= result + 2) && (unsigned int)v90 > 0xE )
            {
              v92 = ((unsigned __int64)v91 >> 3) & 1;
              if ( (((unsigned __int64)v91 >> 3) & 1) != 0 )
              {
                LODWORD(v15) = 1;
                *result = *v91 * v141;
              }
              v93 = v90 - v92;
              v94 = 0;
              v95 = ((unsigned __int64)v91 >> 3) & 1;
              v96 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v141, (__m128d)*(unsigned __int64 *)&v141);
              v97 = v90 - v92;
              v98 = 0;
              v99 = &v91[v95];
              v100 = v97 >> 1;
              v101 = &result[v95];
              do
              {
                ++v94;
                *(__m128d *)&v101[v98] = _mm_mul_pd(*(__m128d *)&v99[v98], v96);
                v98 += 2;
              }
              while ( v94 < v100 );
              v102 = (v93 & 0xFFFFFFFE) + (_DWORD)v15;
              if ( (v93 & 0xFFFFFFFE) != v93 )
              {
                v103 = v102;
                v104 = v102 + 1;
                result[v103] = v91[v103] * v141;
                if ( v104 < v90 )
                  result[v104] = v91[v104] * v141;
              }
            }
            else
            {
              v130 = 0;
              do
              {
                result[v130 / 8] = v91[v130 / 8] * v141;
                v130 += 8LL;
              }
              while ( 8LL * (unsigned int)(v90 - 1) + 8 != v130 );
            }
            v12 = *a4;
            if ( !*((_DWORD *)this + 5) )
              goto LABEL_6;
            goto LABEL_68;
          }
        }
        v12 = *a4;
        goto LABEL_6;
      }
      memset(result, 0, 8 * v18);
      result = *((double **)this + 5);
      v16.m128d_f64[0] = v141;
    }
    v12 = *a4;
    if ( v15 )
    {
      if ( !*((_DWORD *)this + 5) || *((int *)this + 12) <= 0 )
        goto LABEL_6;
LABEL_27:
      v19 = result;
      v20 = 0;
      v142 = v6;
      do
      {
        v21 = a3[v20];
        v22 = *(int *)(v135 + 4 * v20);
        v23 = *(_DWORD *)(v138 + 4 * v20);
        v24 = v15[v20] * v16.m128d_f64[0];
        if ( (int)v22 < (int)v22 + v23 )
        {
          v25 = (unsigned int)(v23 - 1) + 1LL;
          v26 = v131 + 4 * v22;
          v27 = v140 + 8 * v22;
          v28 = 0;
          do
          {
            while ( 1 )
            {
              v29 = *(int *)(v26 + 4 * v28);
              v30 = v15[v29] * v24 * *(double *)(v27 + 8 * v28);
              v31 = v21 * v30;
              if ( (_DWORD)v29 == (_DWORD)v20 )
                break;
              v32 = a3[v29];
              ++v28;
              *a4 = v12 + v21 * v32 * v30;
              *v19 = v30 * v32 + *v19;
              result[v29] = v31 + result[v29];
              v12 = *a4;
              if ( v25 == v28 )
                goto LABEL_32;
            }
            ++v28;
            *a4 = v12 + v30 * (v21 * 0.5 * v21);
            *v19 = v31 + *v19;
            v12 = *a4;
          }
          while ( v25 != v28 );
        }
LABEL_32:
        ++v19;
        ++v20;
      }
      while ( *((_DWORD *)this + 12) > (int)v20 );
      v6 = v142;
      goto LABEL_6;
    }
    if ( !*((_DWORD *)this + 5) || *((int *)this + 12) <= 0 )
      goto LABEL_6;
LABEL_68:
    v68 = result;
    v69 = 0;
    do
    {
      v70 = *(int *)(v135 + 4 * v69);
      v71 = *(_DWORD *)(v138 + 4 * v69);
      v72 = a3[v69];
      if ( (int)v70 < (int)v70 + v71 )
      {
        v73 = v140 + 8 * v70;
        v74 = (unsigned int)(v71 - 1) + 1LL;
        v75 = v131 + 4 * v70;
        v76 = 0;
        do
        {
          while ( 1 )
          {
            v77 = *(int *)(v75 + 4 * v76);
            v78 = *(double *)(v73 + 8 * v76) * v16.m128d_f64[0];
            v79 = v72 * v78;
            if ( (_DWORD)v77 == (_DWORD)v69 )
              break;
            v80 = a3[v77];
            ++v76;
            *a4 = v12 + v72 * v80 * v78;
            *v68 = v78 * v80 + *v68;
            result[v77] = v79 + result[v77];
            v12 = *a4;
            if ( v74 == v76 )
              goto LABEL_73;
          }
          ++v76;
          *a4 = v12 + v78 * (v72 * 0.5 * v72);
          *v68 = v79 + *v68;
          v12 = *a4;
        }
        while ( v74 != v76 );
      }
LABEL_73:
      ++v68;
      ++v69;
    }
    while ( *((_DWORD *)this + 12) > (int)v69 );
    goto LABEL_6;
  }
  if ( !v10 )
    goto LABEL_11;
LABEL_12:
  v13 = *((_QWORD **)this + 3);
  if ( !a3 || !v13 || !*((_DWORD *)this + 5) )
    return *((double **)this + 4);
  result = *((double **)this + 5);
  if ( a5 )
  {
    if ( result )
      goto LABEL_52;
LABEL_94:
    v89 = *((int *)this + 13);
    v137 = a6;
    v134 = v10;
    if ( v89 <= 0xFFFFFFFFFFFFFFFLL )
    {
      result = (double *)operator new[](8 * v89);
      v13 = *((_QWORD **)this + 3);
      *((_QWORD *)this + 5) = result;
      v10 = v134;
      a6 = v137;
LABEL_52:
      v49 = v13[6];
      v50 = v13[7];
      v51 = *((_DWORD *)this + 13);
      v139 = v13[5];
      v52 = v13[4];
      *a4 = 0.0;
      v136 = v52;
      if ( a6 == 1 )
      {
        if ( v51 && v10 != result )
        {
          if ( v51 >> 3 <= 0 )
          {
            v129 = result;
          }
          else
          {
            v124 = result;
            v125 = v10;
            v126 = (unsigned int)((v51 >> 3) - 1);
            do
            {
              v127 = *v125;
              v124 += 8;
              v125 += 8;
              *(v124 - 8) = v127;
              *(v124 - 7) = *(v125 - 7);
              *(v124 - 6) = *(v125 - 6);
              *(v124 - 5) = *(v125 - 5);
              *(v124 - 4) = *(v125 - 4);
              *(v124 - 3) = *(v125 - 3);
              *(v124 - 2) = *(v125 - 2);
              *(v124 - 1) = *(v125 - 1);
            }
            while ( v124 != &result[8 * v126 + 8] );
            v128 = ((int)v126 + 1LL) << 6;
            v10 = (double *)((char *)v10 + v128);
            v129 = (double *)((char *)result + v128);
          }
          switch ( v51 % 8 )
          {
            case 1:
              goto LABEL_143;
            case 2:
              goto LABEL_142;
            case 3:
              goto LABEL_141;
            case 4:
              goto LABEL_140;
            case 5:
              goto LABEL_139;
            case 6:
              goto LABEL_138;
            case 7:
              v129[6] = v10[6];
LABEL_138:
              v129[5] = v10[5];
LABEL_139:
              v129[4] = v10[4];
LABEL_140:
              v129[3] = v10[3];
LABEL_141:
              v129[2] = v10[2];
LABEL_142:
              v129[1] = v10[1];
LABEL_143:
              *v129 = *v10;
              break;
            default:
              break;
          }
        }
      }
      else if ( a6 == 2 )
      {
        v105 = *((double **)this + 4);
        if ( v51 && v105 != result )
        {
          if ( v51 >> 3 <= 0 )
          {
            v111 = result;
          }
          else
          {
            v106 = result;
            v107 = *((double **)this + 4);
            v108 = (unsigned int)((v51 >> 3) - 1);
            do
            {
              v109 = *v107;
              v106 += 8;
              v107 += 8;
              *(v106 - 8) = v109;
              *(v106 - 7) = *(v107 - 7);
              *(v106 - 6) = *(v107 - 6);
              *(v106 - 5) = *(v107 - 5);
              *(v106 - 4) = *(v107 - 4);
              *(v106 - 3) = *(v107 - 3);
              *(v106 - 2) = *(v107 - 2);
              *(v106 - 1) = *(v107 - 1);
            }
            while ( v106 != &result[8 * v108 + 8] );
            v110 = ((int)v108 + 1LL) << 6;
            v105 = (double *)((char *)v105 + v110);
            v111 = (double *)((char *)result + v110);
          }
          switch ( v51 % 8 )
          {
            case 1:
              goto LABEL_121;
            case 2:
              goto LABEL_120;
            case 3:
              goto LABEL_119;
            case 4:
              goto LABEL_118;
            case 5:
              goto LABEL_117;
            case 6:
              goto LABEL_116;
            case 7:
              v111[6] = v105[6];
LABEL_116:
              v111[5] = v105[5];
LABEL_117:
              v111[4] = v105[4];
LABEL_118:
              v111[3] = v105[3];
LABEL_119:
              v111[2] = v105[2];
LABEL_120:
              v111[1] = v105[1];
LABEL_121:
              *v111 = *v105;
              break;
            default:
              break;
          }
        }
      }
      else
      {
        memset(result, 0, 8LL * v51);
        result = *((double **)this + 5);
      }
      if ( *((_DWORD *)this + 5) )
      {
        v53 = *((_DWORD *)this + 12);
        v133 = v53;
        if ( *((_BYTE *)this + 56) )
        {
          v112 = *a4 + *a4;
          *a4 = v112;
          if ( v53 > 0 )
          {
            v113 = (unsigned int)(v53 - 1);
            v114 = 0;
            v115 = 4 * v113 + 4;
            do
            {
              v116 = *(int *)(v49 + v114);
              v117 = *(_DWORD *)(v50 + v114);
              v118 = result[v114 / 4];
              if ( (int)v116 >= (int)v116 + v117 )
              {
                v119 = 0.0;
              }
              else
              {
                v119 = 0.0;
                v120 = v139 + 4 * v116;
                v121 = v136 + 8 * v116;
                v122 = 0;
                do
                {
                  v123 = a3[*(int *)(v120 + 4 * v122)] * *(double *)(v121 + 8 * v122);
                  ++v122;
                  v119 = v119 + v123;
                }
                while ( (unsigned int)(v117 - 1) + 1LL != v122 );
              }
              *a4 = v112 + a3[v114 / 4] * v119;
              result[v114 / 4] = v119 + v118;
              v114 += 4LL;
              v112 = *a4;
            }
            while ( v115 != v114 );
          }
          *a4 = v112 * 0.5;
        }
        else if ( v53 > 0 )
        {
          v54 = result;
          v55 = 0;
          do
          {
            v56 = *(int *)(v49 + 4 * v55);
            v57 = *(_DWORD *)(v50 + 4 * v55);
            v58 = a3[v55];
            if ( (int)v56 < (int)v56 + v57 )
            {
              v59 = v139 + 4 * v56;
              v60 = v136 + 8 * v56;
              v61 = 0;
              v62 = (unsigned int)(v57 - 1) + 1LL;
              do
              {
                while ( 1 )
                {
                  v64 = *(int *)(v59 + 4 * v61);
                  v65 = *(double *)(v60 + 8 * v61);
                  v66 = *a4;
                  v67 = v58 * v65;
                  if ( (_DWORD)v64 == (_DWORD)v55 )
                    break;
                  v63 = a3[v64];
                  ++v61;
                  *a4 = v66 + v58 * v63 * v65;
                  *v54 = v65 * v63 + *v54;
                  result[v64] = v67 + result[v64];
                  if ( v61 == v62 )
                    goto LABEL_64;
                }
                ++v61;
                *a4 = v66 + v65 * (v58 * 0.5 * v58);
                *v54 = v67 + *v54;
              }
              while ( v61 != v62 );
            }
LABEL_64:
            ++v54;
            ++v55;
          }
          while ( (int)v55 < v133 );
        }
      }
      goto LABEL_17;
    }
LABEL_151:
    __cxa_throw_bad_array_new_length();
  }
  if ( !result )
    goto LABEL_94;
LABEL_17:
  if ( v6 )
    *a4 = *(double *)v6 * *((double *)v6 + 11) * *a4;
  return result;
}

