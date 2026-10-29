__int64 __fastcall sub_160AD30(__m128 *a1, __m128 *a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __m128 *v5; // r9
  __m128 *v6; // rax
  __int64 *v9; // r10
  __int64 v10; // rbp
  __m128 *v11; // r13
  __int64 v12; // r11
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __m128 *v19; // rbp
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // xmm1_8
  __int64 v24; // xmm0_8
  __int64 v25; // rsi
  __int64 v26; // rbx
  __m128 *v27; // r8
  __m128 *v28; // rdi
  __int64 v29; // rsi
  __m128 v30; // xmm2
  __int64 *v31; // rdi
  __int64 *v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 *v36; // r15
  __int64 v37; // rax
  __m128 *v38; // rcx
  __int32 v39; // ebp
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // edx
  __m128 v43; // xmm1
  __int64 result; // rax
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // r10
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r11
  __m128 *v56; // rdi
  __int64 *v57; // r14
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r10
  __int64 v61; // rax
  __int64 *v62; // rsi
  __int64 v63; // rbx
  int v64; // r11d
  __int64 *v65; // r13
  unsigned __int64 *v66; // r11
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r15
  int v71; // r14d
  __int64 v72; // rsi
  int v73; // ecx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 *v76; // r13
  __int64 v77; // rbx
  __m128 v78; // xmm3
  __m128 v79; // xmm2
  __m128 v80; // xmm0
  __m128 v81; // xmm0
  unsigned __int64 *v82; // rax
  __m128 *v83; // r9
  __m128 **v84; // r10
  __int64 v85; // r11
  unsigned __int64 *v86; // rcx
  __m128 *v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rcx
  __int64 **v90; // r9
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rsi
  _QWORD *v94; // rdx
  __int64 v95; // r8
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rsi
  int v108; // ecx
  __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 **v111; // r15
  __int64 *v112; // r14
  __int64 v113; // rbx
  __m128 v114; // xmm1
  __m128 v115; // xmm3
  __m128 v116; // xmm0
  __m128 v117; // xmm2
  __m128 v118; // xmm0
  __m128 *v119; // r9
  __int64 *v120; // rax
  __m128 *v121; // rcx
  __int64 v122; // r9
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 *v125; // r10
  __int64 v126; // rdx
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r9
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  int v135; // edx
  __int64 v136; // rcx
  __int64 v137; // rdi
  __int64 *v139; // [rsp+8h] [rbp-100h] BYREF
  __m128 *v140; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v141; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v142; // [rsp+20h] [rbp-E8h] BYREF
  char *v143; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v144; // [rsp+30h] [rbp-D8h]
  __m128 *v145; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v146; // [rsp+40h] [rbp-C8h]
  __int64 v147; // [rsp+48h] [rbp-C0h]
  __m128 v148; // [rsp+50h] [rbp-B8h] BYREF
  __m128 v149; // [rsp+60h] [rbp-A8h]
  __m128 v150; // [rsp+70h] [rbp-98h] BYREF
  __m128 v151; // [rsp+80h] [rbp-88h]
  __m128i v152; // [rsp+90h] [rbp-78h] BYREF
  __m128 v153; // [rsp+A0h] [rbp-68h]
  __m128i v154[5]; // [rsp+B0h] [rbp-58h] BYREF

  v5 = a1;
  v6 = a2;
  v9 = (__int64 *)a1[2].m128_u64[1];
  v10 = a1[3].m128_i64[0];
  v11 = (__m128 *)a1[4].m128_u64[1];
  v12 = a1[2].m128_i64[0];
  v13 = a1[1].m128_i64[0];
  v14 = (v12 - v13) >> 4;
  v15 = 32 * (((__int64)(a2[1].m128_u64[1] - (_QWORD)v9) >> 3) - 1)
      + ((__int64)(a2->m128_u64[0] - a2->m128_u64[1]) >> 4);
  v139 = (__int64 *)v5[3].m128_u64[1];
  v16 = v15 + v14;
  v17 = (v10 - (__int64)v139) >> 4;
  v18 = v17 + 32 * ((((char *)v11 - (char *)v9) >> 3) - 1);
  if ( (unsigned __int64)(v18 + v14) >> 1 <= v15 + v14 )
  {
    v47 = v5[4].m128_i64[0];
    v48 = ((v47 - v10) >> 4) - 1;
    if ( a5 > v48 )
    {
      v141 = (__int64)v6;
      v140 = (__m128 *)(v17 + 32 * ((((char *)v11 - (char *)v9) >> 3) - 1));
      v139 = (__int64 *)v5;
      sub_160AC50(v5, a5 - v48);
      v5 = (__m128 *)v139;
      v18 = (__int64)v140;
      v10 = v139[6];
      v47 = v139[8];
      v11 = (__m128 *)v139[9];
      v139 = (__int64 *)v139[7];
      v6 = (__m128 *)v141;
      v17 = (v10 - (__int64)v139) >> 4;
      v49 = v17 + a5;
      if ( v17 + a5 >= 0 )
        goto LABEL_33;
    }
    else
    {
      v49 = v17 + a5;
      if ( v17 + a5 >= 0 )
      {
LABEL_33:
        if ( v49 <= 31 )
        {
          v141 = (__int64)v11;
          v143 = (char *)v47;
          v144 = (__int64 *)(v10 + 16 * a5);
          v142 = (__int64)v139;
LABEL_36:
          v52 = v18 - v15;
          v53 = v15 - v18;
          v54 = v17 + v53;
          if ( v17 + v53 < 0 )
          {
            v55 = ~((unsigned __int64)~v54 >> 5);
          }
          else
          {
            if ( v54 <= 31 )
            {
              v56 = v11;
              v58 = v47;
              v57 = v139;
              v59 = v10 + 16 * v53;
LABEL_40:
              v140 = (__m128 *)v57;
              *v6 = _mm_loadh_ps((const double *)&v140);
              v140 = v56;
              v6[1] = _mm_loadh_ps((const double *)&v140);
              if ( v52 <= a5 )
              {
                v60 = 2 * v52;
                v61 = v10;
                v62 = &a3[v60];
                while ( a4 != v62 )
                {
                  while ( 1 )
                  {
                    v63 = *v62;
                    v64 = *((_DWORD *)v62 + 2);
                    v61 += 16;
                    v62 += 2;
                    *(_QWORD *)(v61 - 16) = v63;
                    *(_DWORD *)(v61 - 8) = v64;
                    if ( v47 != v61 )
                      break;
                    v61 = v11->m128_i64[1];
                    v11 = (__m128 *)((char *)v11 + 8);
                    v47 = v61 + 512;
                    if ( a4 == v62 )
                      goto LABEL_45;
                  }
                }
LABEL_45:
                v65 = &v11->m128_i64[1];
                v66 = (unsigned __int64 *)v56;
                v67 = v58;
                v68 = v59;
LABEL_46:
                if ( v10 == v68 )
                {
LABEL_51:
                  result = (v60 * 8) >> 4;
                  v5[3] = _mm_loadh_ps((const double *)&v142);
                  v5[4] = _mm_loadh_ps((const double *)&v141);
                  if ( v60 <= 0 )
                    return result;
                  do
                  {
                    while ( 1 )
                    {
                      v72 = *a3;
                      v73 = *((_DWORD *)a3 + 2);
                      v59 += 16;
                      a3 += 2;
                      *(_QWORD *)(v59 - 16) = v72;
                      *(_DWORD *)(v59 - 8) = v73;
                      if ( v59 != v58 )
                        break;
                      v59 = v56->m128_i64[1];
                      v58 = v59 + 512;
                      if ( !--result )
                        return result;
                      v56 = (__m128 *)((char *)v56 + 8);
                    }
                    --result;
                  }
                  while ( result );
                  return result;
                }
                v69 = v61 + 16;
                while ( 1 )
                {
                  v70 = *(_QWORD *)v68;
                  v71 = *(_DWORD *)(v68 + 8);
                  v68 += 16;
                  *(_QWORD *)(v69 - 16) = v70;
                  *(_DWORD *)(v69 - 8) = v71;
                  if ( v68 == v67 )
                  {
                    v68 = v66[1];
                    ++v66;
                    v67 = v68 + 512;
                    if ( v69 == v47 )
                    {
LABEL_56:
                      v61 = *v65++;
                      v47 = v61 + 512;
                      goto LABEL_46;
                    }
                  }
                  else if ( v69 == v47 )
                  {
                    goto LABEL_56;
                  }
                  v69 += 16;
                  if ( v10 == v68 )
                    goto LABEL_51;
                }
              }
              v109 = v17 - a5;
              if ( v109 < 0 )
              {
                v110 = ~((unsigned __int64)~v109 >> 5);
              }
              else
              {
                if ( v109 <= 31 )
                {
                  v147 = v47;
                  v112 = v139;
                  v113 = v10 - 16 * a5;
                  v111 = (__int64 **)v11;
                  goto LABEL_106;
                }
                v110 = v109 >> 5;
              }
              v111 = (__int64 **)v11 + v110;
              v112 = *v111;
              v147 = (__int64)(*v111 + 64);
              v113 = (__int64)&v112[2 * (v109 - 32 * v110)];
LABEL_106:
              v140 = v11;
              v114 = _mm_loadh_ps((const double *)&v139);
              v146 = (unsigned __int64 *)v6;
              v145 = v5;
              v115 = _mm_loadh_ps((const double *)&v142);
              v116 = _mm_loadh_ps((const double *)&v140);
              v140 = (__m128 *)v113;
              v117 = _mm_loadh_ps((const double *)&v141);
              v153 = v116;
              v151 = v116;
              v140 = (__m128 *)v112;
              v152 = (__m128i)v114;
              v150 = v114;
              v118 = _mm_loadh_ps((const double *)&v140);
              v140 = (__m128 *)v111;
              v148 = v118;
              v149 = _mm_loadh_ps((const double *)&v140);
              sub_15F0170(v154, (__int64 **)&v148, (__int64 **)&v150, &v152);
              v119 = v145;
              v120 = (__int64 *)v146;
              v121 = (__m128 *)v146[2];
              v145[3] = v115;
              v119[4] = v117;
              v122 = *v120;
              v123 = v120[3];
              v140 = v121;
              v141 = v123;
              v124 = 32 * ((((__int64)v111 - v123) >> 3) - 1)
                   + ((v113 - (__int64)v112) >> 4)
                   + (((__int64)v121 - v122) >> 4);
              if ( v124 <= 0 )
              {
LABEL_124:
                result = ((char *)a4 - (char *)a3) >> 4;
                if ( (char *)a4 - (char *)a3 <= 0 )
                  return result;
                do
                {
                  while ( 1 )
                  {
                    v134 = *a3;
                    v135 = *((_DWORD *)a3 + 2);
                    v122 += 16;
                    a3 += 2;
                    *(_QWORD *)(v122 - 16) = v134;
                    *(_DWORD *)(v122 - 8) = v135;
                    if ( (__m128 *)v122 != v140 )
                      break;
                    v122 = *(_QWORD *)(v141 + 8);
                    v140 = (__m128 *)(v122 + 512);
                    if ( !--result )
                      return result;
                    v141 += 8;
                  }
                  --result;
                }
                while ( result );
                return result;
              }
              v142 = v122;
              v125 = v139;
              while ( 1 )
              {
                v126 = (v10 - (__int64)v125) >> 4;
                if ( v112 == (__int64 *)v113 )
                {
                  v127 = (__int64)(*(v111 - 1) + 64);
                  v128 = 32;
                  if ( (__int64 *)v10 == v125 )
                    goto LABEL_110;
                }
                else
                {
                  v128 = (v113 - (__int64)v112) >> 4;
                  v127 = v113;
                  if ( (__int64 *)v10 == v125 )
                  {
LABEL_110:
                    v129 = 32;
                    v130 = v11[-1].m128_u64[1] + 512;
                    goto LABEL_111;
                  }
                }
                v129 = (v10 - (__int64)v125) >> 4;
                v130 = v10;
LABEL_111:
                if ( v124 <= v128 )
                  v128 = v124;
                if ( v128 > v129 )
                  v128 = v129;
                v131 = (16 * v128) >> 4;
                if ( 16 * v128 > 0 )
                {
                  do
                  {
                    v127 -= 16;
                    v130 -= 16;
                    *(_QWORD *)v130 = *(_QWORD *)v127;
                    *(_DWORD *)(v130 + 8) = *(_DWORD *)(v127 + 8);
                    --v131;
                  }
                  while ( v131 );
                }
                v132 = ((v113 - (__int64)v112) >> 4) - v128;
                if ( v132 < 0 )
                {
                  v137 = ~((unsigned __int64)~v132 >> 5);
                }
                else
                {
                  if ( v132 <= 31 )
                  {
                    v113 -= 16 * v128;
                    v133 = v126 - v128;
                    if ( v133 < 0 )
                      goto LABEL_134;
                    goto LABEL_120;
                  }
                  v137 = v132 >> 5;
                }
                v111 += v137;
                v112 = *v111;
                v113 = (__int64)&(*v111)[2 * (v132 - 32 * v137)];
                v133 = v126 - v128;
                if ( v133 < 0 )
                {
LABEL_134:
                  v136 = ~((unsigned __int64)~v133 >> 5);
                  goto LABEL_131;
                }
LABEL_120:
                if ( v133 > 31 )
                {
                  v136 = v133 >> 5;
LABEL_131:
                  v11 = (__m128 *)((char *)v11 + 8 * v136);
                  v125 = (__int64 *)v11->m128_u64[0];
                  v10 = v11->m128_u64[0] + 16 * (v133 - 32 * v136);
                  goto LABEL_122;
                }
                v10 -= 16 * v128;
LABEL_122:
                v124 -= v128;
                if ( v124 <= 0 )
                {
                  v122 = v142;
                  goto LABEL_124;
                }
              }
            }
            v55 = v54 >> 5;
          }
          v56 = (__m128 *)((char *)v11 + 8 * v55);
          v57 = (__int64 *)v56->m128_u64[0];
          v58 = v56->m128_u64[0] + 512;
          v59 = v56->m128_u64[0] + 16 * (v54 - 32 * v55);
          goto LABEL_40;
        }
        v50 = v49 >> 5;
LABEL_35:
        v51 = v11->m128_i64[v50];
        v141 = (__int64)v11 + 8 * v50;
        v142 = v51;
        v143 = (char *)(v51 + 512);
        v144 = (__int64 *)(v51 + 16 * (v49 - 32 * v50));
        goto LABEL_36;
      }
    }
    v50 = ~((unsigned __int64)~v49 >> 5);
    goto LABEL_35;
  }
  v19 = (__m128 *)v5[1].m128_u64[1];
  v20 = (v13 - (__int64)v19) >> 4;
  if ( a5 <= v20 )
  {
    v21 = v20 - a5;
    if ( (__int64)(v20 - a5) >= 0 )
      goto LABEL_4;
LABEL_60:
    v22 = ~((unsigned __int64)~v21 >> 5);
LABEL_6:
    v139 = &v9[v22];
    v141 = *v139;
    v23 = v141 + 512;
    v140 = (__m128 *)(v141 + 16 * (v21 - 32 * v22));
    v24 = (__int64)v140;
    v25 = v20 + v16;
    if ( (__int64)(v20 + v16) >= 0 )
      goto LABEL_7;
LABEL_62:
    v26 = ~((unsigned __int64)~v25 >> 5);
    goto LABEL_9;
  }
  v141 = (__int64)v6;
  v140 = (__m128 *)(v15 + v14);
  v139 = (__int64 *)v5;
  sub_160AB70(v5, a5 - v20);
  v5 = (__m128 *)v139;
  v6 = (__m128 *)v141;
  v16 = v15 + v14;
  v13 = v139[2];
  v19 = (__m128 *)v139[3];
  v12 = v139[4];
  v9 = (__int64 *)v139[5];
  v20 = (v13 - (__int64)v19) >> 4;
  v21 = v20 - a5;
  if ( (__int64)(v20 - a5) < 0 )
    goto LABEL_60;
LABEL_4:
  if ( v21 > 31 )
  {
    v22 = v21 >> 5;
    goto LABEL_6;
  }
  v140 = (__m128 *)v12;
  v23 = v12;
  v141 = (__int64)v19;
  v24 = v13 - 16 * a5;
  v139 = v9;
  v25 = v20 + v16;
  if ( (__int64)(v20 + v16) < 0 )
    goto LABEL_62;
LABEL_7:
  if ( v25 > 31 )
  {
    v26 = v25 >> 5;
LABEL_9:
    v27 = (__m128 *)&v9[v26];
    v28 = (__m128 *)v27->m128_u64[0];
    v29 = v27->m128_u64[0] + 16 * (v25 - 32 * v26);
    v142 = v27->m128_u64[0] + 512;
    goto LABEL_10;
  }
  v27 = (__m128 *)v9;
  v142 = v12;
  v28 = v19;
  v29 = v13 + 16 * v16;
LABEL_10:
  v140 = v28;
  v30 = _mm_loadh_ps((const double *)&v140);
  v140 = v27;
  *v6 = v30;
  v6[1] = _mm_loadh_ps((const double *)&v140);
  if ( v16 < a5 )
  {
    v31 = v139;
    v32 = v9;
    v33 = v12;
    v34 = v13;
    v35 = v23;
    v36 = &a3[2 * (a5 - v16)];
    v37 = v24;
    while ( 1 )
    {
      if ( v29 == v34 )
      {
LABEL_18:
        if ( a3 != v36 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v41 = *a3;
              v42 = *((_DWORD *)a3 + 2);
              v37 += 16;
              a3 += 2;
              *(_QWORD *)(v37 - 16) = v41;
              *(_DWORD *)(v37 - 8) = v42;
              if ( v37 == v35 )
                break;
              if ( v36 == a3 )
                goto LABEL_21;
            }
            v37 = v31[1];
            v35 = v37 + 512;
            if ( v36 == a3 )
              break;
            ++v31;
          }
        }
LABEL_21:
        v43 = _mm_loadh_ps((const double *)&v139);
        v5[1] = _mm_loadh_ps((const double *)&v141);
        v5[2] = v43;
        result = ((char *)a4 - (char *)v36) >> 4;
        if ( (char *)a4 - (char *)v36 > 0 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v45 = *v36;
              v46 = *((_DWORD *)v36 + 2);
              v13 += 16;
              v36 += 2;
              *(_QWORD *)(v13 - 16) = v45;
              *(_DWORD *)(v13 - 8) = v46;
              if ( v13 == v12 )
                break;
              if ( !--result )
                return result;
            }
            v13 = v9[1];
            v12 = v13 + 512;
            if ( !--result )
              break;
            ++v9;
          }
        }
        return result;
      }
      v38 = (__m128 *)(v37 + 16);
      while ( 1 )
      {
        v39 = *(_DWORD *)(v34 + 8);
        v40 = *(_QWORD *)v34;
        v34 += 16;
        v140 = v38;
        v38[-1].m128_u64[0] = v40;
        v38[-1].m128_i32[2] = v39;
        if ( v34 == v33 )
          break;
        if ( v38 == (__m128 *)v35 )
          goto LABEL_26;
LABEL_16:
        ++v38;
        if ( v29 == v34 )
        {
          v37 = (__int64)v140;
          goto LABEL_18;
        }
      }
      v34 = v32[1];
      ++v32;
      v33 = v34 + 512;
      if ( v38 != (__m128 *)v35 )
        goto LABEL_16;
LABEL_26:
      v37 = *++v31;
      v35 = *v31 + 512;
    }
  }
  v74 = a5 + v20;
  if ( v74 < 0 )
  {
    v75 = ~((unsigned __int64)~v74 >> 5);
  }
  else
  {
    if ( v74 <= 31 )
    {
      v143 = (char *)v9;
      v76 = (__int64 *)v19;
      v142 = v12;
      v77 = v13 + 16 * a5;
      goto LABEL_70;
    }
    v75 = v74 >> 5;
  }
  v76 = (__int64 *)v9[v75];
  v143 = (char *)&v9[v75];
  v142 = (__int64)(v76 + 64);
  v77 = (__int64)&v76[2 * (v74 - 32 * v75)];
LABEL_70:
  v146 = (unsigned __int64 *)v6;
  v78 = _mm_loadh_ps((const double *)&v139);
  v139 = (__int64 *)v77;
  v79 = _mm_loadh_ps((const double *)&v141);
  v139 = v76;
  v140 = v5;
  v145 = (__m128 *)v12;
  v80 = _mm_loadh_ps((const double *)&v139);
  v139 = (__int64 *)v13;
  v150 = v80;
  v144 = v9;
  v81 = _mm_loadh_ps((const double *)&v143);
  v152 = (__m128i)v79;
  v151 = v81;
  v139 = (__int64 *)v19;
  v153 = v78;
  v148 = _mm_loadh_ps((const double *)&v139);
  v139 = v9;
  v149 = _mm_loadh_ps((const double *)&v139);
  sub_15F0170(v154, (__int64 **)&v148, (__int64 **)&v150, &v152);
  v82 = v146;
  v83 = v140;
  v84 = (__m128 **)v144;
  v85 = (__int64)v145;
  v86 = (unsigned __int64 *)*v146;
  v87 = (__m128 *)v146[3];
  v140[1] = v79;
  v83[2] = v78;
  v146 = v86;
  v88 = (__int64)v86 - v82[1];
  v140 = v87;
  v141 = v88 >> 4;
  v89 = 32 * ((((char *)v87 - v143) >> 3) - 1) + (v88 >> 4) + ((v142 - v77) >> 4);
  if ( v89 <= 0 )
    goto LABEL_90;
  v90 = (__int64 **)v143;
  v143 = (char *)v82;
  v144 = a3;
  v91 = v142;
  do
  {
    v92 = (v85 - v13) >> 4;
    v93 = v13;
    if ( v85 - v13 >= v91 - v77 )
      v92 = (v91 - v77) >> 4;
    v94 = (_QWORD *)v77;
    if ( v92 > v89 )
      v92 = v89;
    v95 = 16 * v92;
    v96 = (16 * v92) >> 4;
    if ( 16 * v92 > 0 )
    {
      v139 = (__int64 *)v92;
      do
      {
        v97 = *v94;
        v93 += 16;
        v94 += 2;
        *(_QWORD *)(v93 - 16) = v97;
        *(_DWORD *)(v93 - 8) = *((_DWORD *)v94 - 2);
        --v96;
      }
      while ( v96 );
      v92 = (__int64)v139;
    }
    v98 = v92 + ((v77 - (__int64)v76) >> 4);
    if ( v98 < 0 )
    {
      v99 = ~((unsigned __int64)~v98 >> 5);
    }
    else
    {
      v77 += v95;
      if ( v98 <= 31 )
        goto LABEL_84;
      v99 = v98 >> 5;
    }
    v90 += v99;
    v76 = *v90;
    v91 = (__int64)(*v90 + 64);
    v77 = (__int64)&(*v90)[2 * (v98 - 32 * v99)];
LABEL_84:
    v100 = v92 + ((v13 - (__int64)v19) >> 4);
    if ( v100 < 0 )
    {
      v101 = ~((unsigned __int64)~v100 >> 5);
    }
    else
    {
      v13 += v95;
      if ( v100 <= 31 )
        goto LABEL_88;
      v101 = v100 >> 5;
    }
    v84 += v101;
    v19 = *v84;
    v85 = (__int64)&(*v84)[32];
    v13 = (__int64)&(*v84)[v100 - 32 * v101];
LABEL_88:
    v89 -= v92;
  }
  while ( v89 > 0 );
  v82 = (unsigned __int64 *)v143;
  a3 = v144;
LABEL_90:
  v102 = v82[2];
  v103 = v141 - a5;
  if ( v141 - a5 < 0 )
  {
    v104 = ~((unsigned __int64)~v103 >> 5);
LABEL_93:
    v105 = v140->m128_u64[v104];
    v140 = (__m128 *)((char *)v140 + 8 * v104);
    v102 = v105 + 512;
    result = v105 + 16 * (v103 - 32 * v104);
  }
  else
  {
    if ( v103 > 31 )
    {
      v104 = v103 >> 5;
      goto LABEL_93;
    }
    result = (__int64)&v146[-2 * a5];
  }
  v106 = ((char *)a4 - (char *)a3) >> 4;
  if ( (char *)a4 - (char *)a3 <= 0 )
    return result;
  do
  {
    while ( 1 )
    {
      v107 = *a3;
      v108 = *((_DWORD *)a3 + 2);
      result += 16;
      a3 += 2;
      *(_QWORD *)(result - 16) = v107;
      *(_DWORD *)(result - 8) = v108;
      if ( result != v102 )
        break;
      result = v140->m128_i64[1];
      v102 = result + 512;
      if ( !--v106 )
        return result;
      v140 = (__m128 *)((char *)v140 + 8);
    }
    --v106;
  }
  while ( v106 );
  return result;
}
