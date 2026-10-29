__int64 __fastcall ClpDynamicMatrix::addColumn(
        int *a1,
        int a2,
        const __m128i *a3,
        __int64 *a4,
        int a5,
        char a6,
        double a7,
        double a8,
        double a9)
{
  int *v9; // r10
  char v14; // r14
  double v15; // xmm7_8
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  _DWORD *v22; // r8
  double *v23; // rcx
  __int64 v24; // rdx
  double v25; // xmm0_8
  __int64 v26; // rcx
  double v27; // xmm3_8
  __int64 v28; // rdx
  double v29; // xmm4_8
  double v30; // xmm5_8
  unsigned __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rax
  int *v36; // r10
  char *v37; // r11
  __int64 v38; // rdi
  __int64 v39; // rbx
  int v40; // r15d
  int v41; // r14d
  _BYTE *v42; // r11
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rsi
  unsigned int v48; // r8d
  int v49; // r14d
  __int64 v50; // rsi
  int v51; // r9d
  __int64 v52; // xmm0_8
  __int64 v53; // rsi
  int v54; // r9d
  __int64 v55; // xmm0_8
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r12
  unsigned int v59; // r9d
  __int64 v60; // r8
  __int64 v61; // r12
  unsigned int v62; // ebp
  __int64 v63; // r9
  unsigned int v64; // ebp
  __int64 v65; // r13
  __int64 v66; // rcx
  unsigned int v67; // esi
  __int64 v68; // r13
  __int128 v69; // xmm0
  int v70; // r14d
  int v71; // r8d
  __int64 v72; // xmm0_8
  int v73; // ecx
  int v74; // r8d
  int v75; // esi
  __int64 v76; // xmm0_8
  int v77; // ecx
  int v78; // esi
  int v79; // r8d
  __int64 v80; // xmm0_8
  int v81; // ecx
  int v82; // r8d
  int v83; // esi
  __int64 v84; // xmm0_8
  int v85; // ecx
  int v86; // esi
  int v87; // r15d
  int v88; // r14d
  __int64 v89; // xmm0_8
  __int64 v90; // xmm0_8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  int v95; // eax
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  int *v98; // r10
  __int64 v99; // rbx
  void *v100; // r11
  __int64 v101; // r9
  int *v102; // rdi
  __int64 v103; // rax
  __int64 i; // rdx
  int *v105; // rsi
  __int64 v106; // r8
  int *v107; // rsi
  int v108; // ecx
  int v109; // edx
  __int64 v110; // rax
  __m128i *v111; // r9
  unsigned int v112; // r15d
  const __m128i *v113; // rax
  __m128i *v114; // rdx
  __int64 v115; // r15
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __int64 v118; // rax
  __int64 *v119; // rdx
  __int64 v120; // rcx
  __int64 *v121; // rax
  __int64 v122; // xmm0_8
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rdx
  int *v127; // r13
  int v128; // ecx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // xmm0_8
  __m128i *v133; // rax
  const __m128i *v134; // rdx
  __int32 v135; // r13d
  int *v136; // [rsp+8h] [rbp-90h]
  int v137; // [rsp+8h] [rbp-90h]
  int *v138; // [rsp+8h] [rbp-90h]
  void *v139; // [rsp+8h] [rbp-90h]
  int v140; // [rsp+10h] [rbp-88h]
  char *v141; // [rsp+10h] [rbp-88h]
  int *v142; // [rsp+10h] [rbp-88h]
  int v143; // [rsp+18h] [rbp-80h]
  __int64 v145; // [rsp+20h] [rbp-78h]
  __int64 v146; // [rsp+28h] [rbp-70h]
  __int64 v147; // [rsp+28h] [rbp-70h]
  __int64 v148; // [rsp+30h] [rbp-68h]
  __int64 v149; // [rsp+38h] [rbp-60h]
  unsigned int v150; // [rsp+38h] [rbp-60h]
  __int64 v151; // [rsp+40h] [rbp-58h]
  unsigned __int64 v152; // [rsp+48h] [rbp-50h]
  int v153; // [rsp+50h] [rbp-48h]
  int v154; // [rsp+54h] [rbp-44h]
  __int64 v155; // [rsp+58h] [rbp-40h]

  v9 = a1;
  v146 = 4LL * a5;
  v14 = a6;
  v15 = a8;
  result = *(unsigned int *)(*((_QWORD *)a1 + 39) + v146);
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      v17 = *((_QWORD *)a1 + 41);
      v18 = 4 * ((int)result + 1LL);
      v19 = *(int *)(v17 + v18 - 4);
      if ( *(_DWORD *)(v17 + v18) - (_DWORD)v19 != a2 )
        goto LABEL_3;
      v20 = 4 * v19;
      v21 = 8 * v19;
      if ( a2 <= 0 )
        goto LABEL_12;
      v22 = (_DWORD *)(*((_QWORD *)a1 + 42) + v20);
      if ( *v22 == a3->m128i_i32[0] && (v23 = (double *)(*((_QWORD *)a1 + 43) + v21), *(double *)a4 == *v23) )
      {
        v24 = 1;
        while ( v24 != (unsigned int)(a2 - 1) + 1LL )
        {
          if ( a3->m128i_i32[v24] == v22[v24] )
          {
            v25 = *(double *)&a4[v24++];
            if ( v25 == v23[v24 - 1] )
              continue;
          }
          goto LABEL_3;
        }
LABEL_12:
        v26 = *((_QWORD *)a1 + 48);
        v27 = *(double *)(*((_QWORD *)a1 + 44) + 8LL * (int)result);
        v28 = *((_QWORD *)a1 + 47);
        if ( !v28 || (v29 = *(double *)(v28 + 8LL * (int)result), v29 == a8) )
        {
          if ( v26 )
          {
            v30 = *(double *)(v26 + 8LL * (int)result);
            if ( v27 == a7 && v30 == a9 )
            {
LABEL_72:
              *(_BYTE *)(*((_QWORD *)a1 + 46) + (int)result) = *(_BYTE *)(*((_QWORD *)a1 + 46) + (int)result) & 0xF8
                                                             | a6;
              return result;
            }
            v29 = 0.0;
            if ( !v28 )
              goto LABEL_17;
          }
          else
          {
            if ( v27 == a7 )
              goto LABEL_72;
            v30 = 1.0e100;
            v29 = 0.0;
            if ( !v28 )
              goto LABEL_17;
          }
          goto LABEL_16;
        }
        v30 = 1.0e100;
        if ( v26 )
        {
          v30 = *(double *)(v26 + 8LL * (int)result);
LABEL_16:
          v29 = *(double *)(v28 + 8LL * (int)result);
        }
LABEL_17:
        printf("seems odd - same els but cost,lo,up are %g,%g,%g and %g,%g,%g\n", a7, a8, a9, v27, v29, v30);
        v15 = a8;
        result = *(unsigned int *)(*((_QWORD *)a1 + 40) + v18 - 4);
        if ( (int)result < 0 )
        {
LABEL_18:
          v14 = a6;
          v9 = a1;
          break;
        }
      }
      else
      {
LABEL_3:
        result = *(unsigned int *)(*((_QWORD *)a1 + 40) + v18 - 4);
        if ( (int)result < 0 )
          goto LABEL_18;
      }
    }
  }
  v31 = v9[74];
  if ( (_DWORD)v31 == v9[75]
    || (v32 = *((_QWORD *)v9 + 41), v33 = *(int *)(v32 + 4 * v31), v34 = v33 + a2, (int)v33 + a2 > v9[76]) )
  {
    v136 = v9;
    if ( v31 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v35 = operator new[](4 * v31);
      v36 = v136;
      v37 = (char *)v35;
      if ( v136[74] > 0 )
      {
        v38 = 0;
        v39 = 1;
        v40 = 0;
        v140 = 0;
        v143 = 0;
        v148 = v35;
        while ( 1 )
        {
          v41 = *(_DWORD *)(*((_QWORD *)v36 + 41) + 4 * v39);
          v145 = *((_QWORD *)v36 + 41);
          v137 = v41;
          v42 = (_BYTE *)(*((_QWORD *)v36 + 46) + v39 - 1);
          v147 = *((_QWORD *)v36 + 46);
          if ( (*v42 & 7) != 3 )
            break;
          v40 = *(_DWORD *)(*((_QWORD *)v36 + 41) + 4 * v39);
          *(_DWORD *)(v148 + v38) = -1;
LABEL_49:
          v95 = v39;
          v38 += 4;
          ++v39;
          if ( v36[74] <= v95 )
          {
            v37 = (char *)v148;
            goto LABEL_51;
          }
        }
        if ( v41 <= v40 )
        {
LABEL_44:
          v91 = v143 + 1LL;
          *(_DWORD *)(v145 + 4 * v91) = v140;
          v92 = 4 * v91;
          *(_QWORD *)(*((_QWORD *)v36 + 44) + 8LL * v143) = *(_QWORD *)(*((_QWORD *)v36 + 44) + 2 * v38);
          v93 = *((_QWORD *)v36 + 47);
          if ( v93 )
            *(_QWORD *)(v93 + 8LL * v143) = *(_QWORD *)(v93 + 2 * v38);
          v94 = *((_QWORD *)v36 + 48);
          if ( v94 )
            *(_QWORD *)(v94 + 8LL * v143) = *(_QWORD *)(v94 + 2 * v38);
          v40 = v137;
          *(_BYTE *)(v147 + v143) = *v42;
          *(_DWORD *)(*((_QWORD *)v36 + 45) + v92 - 4) = *(_DWORD *)(*((_QWORD *)v36 + 45) + v38);
          *(_DWORD *)(v148 + v38) = v143++;
          goto LABEL_49;
        }
        v43 = v40;
        v44 = *((_QWORD *)v36 + 42);
        v45 = *((_QWORD *)v36 + 43);
        v154 = v41 - v40;
        v153 = v40;
        v46 = 4LL * v140;
        v149 = 8LL * v40;
        v151 = 8LL * v140;
        v155 = v44 + v46;
        v152 = v45 + v151;
        v47 = 4LL * v40;
        if ( (v47 >= v46 + 16 || v46 >= v47 + 16)
          && (unsigned int)(v41 - v40) > 0xE
          && (v151 >= v149 + 32 || v149 >= v151 + 32)
          && (v44 + v46 >= v45 + 8 * (v140 + (unsigned __int64)(unsigned int)(v41 - v40))
           || v152 >= v44 + 4 * (v140 + (unsigned __int64)(unsigned int)(v41 - v40))) )
        {
          v48 = -(int)((unsigned __int64)(v44 + v47) >> 2) & 3;
          if ( v48 + 3 > v41 + ~v40 )
          {
            v70 = v140;
          }
          else
          {
            if ( v48 )
            {
              *(_DWORD *)(v44 + 4LL * v140) = *(_DWORD *)(v44 + 4LL * v40);
              v49 = v140 + 1;
              ++v40;
              *(_QWORD *)(v45 + 8LL * v140) = *(_QWORD *)(v45 + v149);
              if ( v48 != 1 )
              {
                v50 = v49;
                v51 = *(_DWORD *)(v44 + 4LL * v40);
                v52 = *(_QWORD *)(v45 + 8LL * v40);
                v40 = v153 + 2;
                v49 = v140 + 2;
                *(_DWORD *)(v44 + 4 * v50) = v51;
                *(_QWORD *)(v45 + 8 * v50) = v52;
                if ( v48 != 2 )
                {
                  v53 = v49;
                  v49 = v140 + 3;
                  v54 = *(_DWORD *)(v44 + 4LL * v40);
                  v55 = *(_QWORD *)(v45 + 8LL * v40);
                  v40 = v153 + 3;
                  *(_DWORD *)(v44 + 4 * v53) = v54;
                  *(_QWORD *)(v45 + 8 * v53) = v55;
                }
              }
            }
            else
            {
              v49 = v140;
            }
            v56 = v48;
            v57 = v48 + v43;
            v58 = v46 + 4LL * v48;
            v59 = v154 - v48;
            v60 = v45 + 8 * v57;
            v61 = v44 + v58;
            v62 = v59;
            v150 = v59;
            v63 = v44 + 4 * v57;
            v64 = v62 >> 2;
            v65 = v151 + 8 * v56;
            v66 = 0;
            v67 = 0;
            v68 = v45 + v65;
            do
            {
              ++v67;
              *(__m128i *)(v61 + v66) = _mm_load_si128((const __m128i *)(v63 + v66));
              v69 = *(_OWORD *)(v60 + 2 * v66 + 16);
              *(_OWORD *)(v68 + 2 * v66) = *(_OWORD *)(v60 + 2 * v66);
              *(_OWORD *)(v68 + 2 * v66 + 16) = v69;
              v66 += 16;
            }
            while ( v64 > v67 );
            v40 += v150 & 0xFFFFFFFC;
            v70 = (v150 & 0xFFFFFFFC) + v49;
            if ( (v150 & 0xFFFFFFFC) == v150 )
              goto LABEL_43;
            v43 = v40;
          }
          v71 = *(_DWORD *)(v44 + 4 * v43);
          v72 = *(_QWORD *)(v45 + 8 * v43);
          v73 = v40 + 1;
          *(_DWORD *)(v44 + 4LL * v70) = v71;
          v74 = v70 + 1;
          *(_QWORD *)(v45 + 8LL * v70) = v72;
          if ( v40 + 1 < v137 )
          {
            v75 = *(_DWORD *)(v44 + 4LL * v73);
            v76 = *(_QWORD *)(v45 + 8LL * v73);
            v77 = v40 + 2;
            *(_DWORD *)(v44 + 4LL * v74) = v75;
            v78 = v70 + 2;
            *(_QWORD *)(v45 + 8LL * v74) = v76;
            if ( v137 > v40 + 2 )
            {
              v79 = *(_DWORD *)(v44 + 4LL * v77);
              v80 = *(_QWORD *)(v45 + 8LL * v77);
              v81 = v40 + 3;
              *(_DWORD *)(v44 + 4LL * v78) = v79;
              v82 = v70 + 3;
              *(_QWORD *)(v45 + 8LL * v78) = v80;
              if ( v40 + 3 < v137 )
              {
                v83 = *(_DWORD *)(v44 + 4LL * v81);
                v84 = *(_QWORD *)(v45 + 8LL * v81);
                v85 = v40 + 4;
                *(_DWORD *)(v44 + 4LL * v82) = v83;
                v86 = v70 + 4;
                *(_QWORD *)(v45 + 8LL * v82) = v84;
                if ( v40 + 4 < v137 )
                {
                  v87 = v40 + 5;
                  v88 = v70 + 5;
                  v89 = *(_QWORD *)(v45 + 8LL * v85);
                  *(_DWORD *)(v44 + 4LL * v86) = *(_DWORD *)(v44 + 4LL * v85);
                  *(_QWORD *)(v45 + 8LL * v86) = v89;
                  if ( v137 > v87 )
                  {
                    v90 = *(_QWORD *)(v45 + 8LL * v87);
                    *(_DWORD *)(v44 + 4LL * v88) = *(_DWORD *)(v44 + 4LL * v87);
                    *(_QWORD *)(v45 + 8LL * v88) = v90;
                  }
                }
              }
            }
          }
        }
        else
        {
          v129 = v149 + v45;
          v130 = v47 + v44;
          v131 = 0;
          do
          {
            v132 = *(_QWORD *)(v129 + 2 * v131);
            *(_DWORD *)(v155 + v131) = *(_DWORD *)(v130 + v131);
            *(_QWORD *)(v152 + 2 * v131) = v132;
            v131 += 4;
          }
          while ( v131 != 4LL * (unsigned int)(~v40 + v41) + 4 );
        }
LABEL_43:
        v140 = v137 + v140 - v153;
        goto LABEL_44;
      }
LABEL_51:
      v96 = v36[75];
      v141 = v37;
      v138 = v36;
      if ( v96 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v97 = operator new[](4 * v96);
        v98 = v138;
        v99 = v97;
        v100 = v141;
        if ( v138[50] <= 0 )
        {
          v102 = *((int **)v138 + 40);
        }
        else
        {
          v101 = *((_QWORD *)v138 + 39);
          v102 = *((int **)v138 + 40);
          v103 = 1;
          do
          {
            for ( i = *(int *)(v101 + 4 * v103 - 4); ; i = v102[i] )
            {
              v105 = (int *)&v141[4 * i];
              if ( *v105 >= 0 )
                break;
            }
            *(_DWORD *)(v101 + 4 * v103 - 4) = *v105;
            v106 = *v105;
            while ( 1 )
            {
              i = v102[i];
              v107 = (int *)(v99 + 4 * v106);
              if ( (int)i < 0 )
                break;
              while ( 1 )
              {
                v108 = *(_DWORD *)&v141[4 * i];
                if ( v108 < 0 )
                  break;
                *v107 = v108;
                i = v102[i];
                v106 = v108;
                v107 = (int *)(v99 + 4LL * v108);
                if ( (int)i < 0 )
                  goto LABEL_61;
              }
            }
LABEL_61:
            *v107 = -(int)v103;
            v109 = v103++;
          }
          while ( v138[50] > v109 );
        }
        if ( v102 )
        {
          v142 = v138;
          v139 = v100;
          operator delete[](v102);
          v98 = v142;
          v100 = v139;
        }
        *((_QWORD *)v98 + 40) = v99;
        operator delete[](v100);
        abort();
      }
    }
    __cxa_throw_bad_array_new_length();
  }
  v110 = *((_QWORD *)v9 + 42);
  v111 = (__m128i *)(v110 + 4 * v33);
  if ( v111 != a3 && a2 )
  {
    v112 = a2 >> 3;
    if ( a2 >> 3 > 0 )
    {
      if ( (v111 >= &a3[2] || (unsigned __int64)a3 >= v110 + 4 * v33 + 32) && v112 > 1 )
      {
        v113 = a3;
        v114 = v111;
        v115 = v112 - 1;
        do
        {
          v116 = _mm_loadu_si128(v113);
          v113 += 2;
          v114 += 2;
          v117 = _mm_loadu_si128(v113 - 1);
          v114[-2] = v116;
          v114[-1] = v117;
        }
        while ( v113 != &a3[2 * v115 + 2] );
      }
      else
      {
        v133 = (__m128i *)(v110 + 4 * v33);
        v134 = a3;
        v115 = v112 - 1;
        do
        {
          v135 = v134->m128i_i32[0];
          v133 += 2;
          v134 += 2;
          v133[-2].m128i_i32[0] = v135;
          v133[-2].m128i_i32[1] = v134[-2].m128i_i32[1];
          v133[-2].m128i_i32[2] = v134[-2].m128i_i32[2];
          v133[-2].m128i_i32[3] = v134[-2].m128i_i32[3];
          v133[-1].m128i_i32[0] = v134[-1].m128i_i32[0];
          v133[-1].m128i_i32[1] = v134[-1].m128i_i32[1];
          v133[-1].m128i_i32[2] = v134[-1].m128i_i32[2];
          v133[-1].m128i_i32[3] = v134[-1].m128i_i32[3];
        }
        while ( v133 != &v111[2 * v115 + 2] );
      }
      v118 = 32 * ((int)v115 + 1LL);
      a3 = (const __m128i *)((char *)a3 + v118);
      v111 = (__m128i *)((char *)v111 + v118);
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_88;
      case 2:
        goto LABEL_87;
      case 3:
        goto LABEL_86;
      case 4:
        goto LABEL_85;
      case 5:
        goto LABEL_84;
      case 6:
        goto LABEL_83;
      case 7:
        v111[1].m128i_i32[2] = a3[1].m128i_i32[2];
LABEL_83:
        v111[1].m128i_i32[1] = a3[1].m128i_i32[1];
LABEL_84:
        v111[1].m128i_i32[0] = a3[1].m128i_i32[0];
LABEL_85:
        v111->m128i_i32[3] = a3->m128i_i32[3];
LABEL_86:
        v111->m128i_i32[2] = a3->m128i_i32[2];
LABEL_87:
        v111->m128i_i32[1] = a3->m128i_i32[1];
LABEL_88:
        v111->m128i_i32[0] = a3->m128i_i32[0];
        break;
      default:
        break;
    }
    v31 = v9[74];
  }
  v119 = (__int64 *)(*((_QWORD *)v9 + 43) + 8 * v33);
  if ( v119 != a4 && a2 )
  {
    if ( a2 >> 3 > 0 )
    {
      v120 = *((_QWORD *)v9 + 43) + 8 * v33;
      v121 = a4;
      do
      {
        v122 = *v121;
        v121 += 8;
        v120 += 64;
        *(_QWORD *)(v120 - 64) = v122;
        *(_QWORD *)(v120 - 56) = *(v121 - 7);
        *(_QWORD *)(v120 - 48) = *(v121 - 6);
        *(_QWORD *)(v120 - 40) = *(v121 - 5);
        *(_QWORD *)(v120 - 32) = *(v121 - 4);
        *(_QWORD *)(v120 - 24) = *(v121 - 3);
        *(_QWORD *)(v120 - 16) = *(v121 - 2);
        *(_QWORD *)(v120 - 8) = *(v121 - 1);
      }
      while ( v121 != &a4[8 * (unsigned int)((a2 >> 3) - 1) + 8] );
      v123 = ((a2 >> 3) - 1 + 1LL) << 6;
      a4 = (__int64 *)((char *)a4 + v123);
      v119 = (__int64 *)((char *)v119 + v123);
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_103;
      case 2:
        goto LABEL_102;
      case 3:
        goto LABEL_101;
      case 4:
        goto LABEL_100;
      case 5:
        goto LABEL_99;
      case 6:
        goto LABEL_98;
      case 7:
        v119[6] = a4[6];
LABEL_98:
        v119[5] = a4[5];
LABEL_99:
        v119[4] = a4[4];
LABEL_100:
        v119[3] = a4[3];
LABEL_101:
        v119[2] = a4[2];
LABEL_102:
        v119[1] = a4[1];
LABEL_103:
        *v119 = *a4;
        break;
      default:
        break;
    }
  }
  *(_DWORD *)(v32 + 4 * v31 + 4) = v34;
  v124 = v9[74];
  *(double *)(*((_QWORD *)v9 + 44) + 8 * v124) = a7;
  v125 = *((_QWORD *)v9 + 47);
  if ( v125 )
    *(double *)(v125 + 8 * v124) = v15;
  v126 = *((_QWORD *)v9 + 48);
  if ( v126 )
    *(double *)(v126 + 8 * v124) = a9;
  *(_BYTE *)(*((_QWORD *)v9 + 46) + v124) = *(_BYTE *)(*((_QWORD *)v9 + 46) + v124) & 0xF8 | v14;
  v127 = (int *)(*((_QWORD *)v9 + 39) + v146);
  v128 = *v127;
  *v127 = v9[74];
  *(_DWORD *)(*((_QWORD *)v9 + 40) + 4LL * v9[74]) = v128;
  result = (unsigned int)v9[74];
  v9[74] = result + 1;
  return result;
}

