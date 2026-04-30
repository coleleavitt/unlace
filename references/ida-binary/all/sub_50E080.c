__int64 __fastcall sub_50E080(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        int **a4,
        volatile signed __int32 **a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        unsigned int a15)
{
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rsi
  int v26; // r13d
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v30; // xmm0
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rax
  double v35; // xmm4_8
  double v36; // xmm5_8
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r13d
  void **v40; // rbx
  void **v41; // r15
  __int64 v42; // r15
  __int64 v43; // rbx
  volatile signed __int32 *v44; // rax
  int v46; // edx
  __int64 v47; // rax
  int v48; // r15d
  int v49; // ebx
  __m128i *v50; // r12
  __int64 v51; // rax
  int v52; // r15d
  __m128i *v53; // r12
  __int64 v54; // rax
  int v55; // ebx
  unsigned __int64 v56; // rbx
  int v57; // r13d
  __int64 v58; // rdx
  volatile signed __int32 *v59; // rdi
  int v60; // r13d
  __m128i *v61; // r15
  __int64 v62; // rdx
  int *v63; // rax
  int v64; // r14d
  _QWORD *v65; // r12
  int *v66; // rbx
  __int64 v67; // rax
  __int64 *v68; // rsi
  int v69; // r13d
  __int64 v70; // r13
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  size_t v73; // rdx
  void *v74; // rax
  __int64 *v75; // rax
  int v76; // edx
  int v77; // r14d
  __int64 v78; // r13
  __int64 v79; // rdx
  __m128i *v80; // r13
  _DWORD *v81; // rax
  __int64 v82; // rdx
  _DWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r15
  __int64 v86; // rbx
  __int64 v87; // r13
  __int64 v88; // rdi
  __int64 v89; // r14
  __int64 v90; // rax
  __int64 *v91; // rsi
  size_t v92; // rdx
  unsigned __int64 v93; // rax
  __int64 v94; // rsi
  size_t v95; // rdx
  void *v96; // rax
  __int64 *v97; // rax
  int i; // r13d
  __int64 v99; // rax
  __int64 v100; // r12
  void *v101; // r13
  __int64 v102; // rdx
  __int64 *v103; // rax
  __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 j; // r14
  volatile signed __int32 *v107; // rax
  __int64 v108; // r14
  __int64 v109; // rbx
  signed int v110; // r15d
  int v111; // r13d
  __int64 v112; // r10
  int v113; // r11d
  int *v114; // rdx
  int v115; // esi
  __int64 v116; // rax
  _DWORD *v117; // rdx
  int v118; // eax
  int v119; // edi
  int v120; // r13d
  int v121; // ebx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  int v125; // r14d
  int v126; // eax
  __int64 v127; // rax
  int v128; // ebx
  int v129; // r15d
  int v130; // ebx
  __int64 v131; // rdx
  __m128i *v132; // r14
  int v133; // ebx
  __int64 v134; // rax
  __int64 v135; // rdx
  int *v136; // rdi
  __int64 k; // rbx
  volatile signed __int32 *v138; // rax
  __int64 v139; // rbx
  __int64 v140; // r12
  int v141; // r13d
  __m128i *v142; // r15
  __int64 v143; // rax
  int v144; // [rsp+8h] [rbp-1B8h]
  int *v145; // [rsp+10h] [rbp-1B0h]
  __int64 v146; // [rsp+10h] [rbp-1B0h]
  int v147; // [rsp+18h] [rbp-1A8h]
  int v148; // [rsp+1Ch] [rbp-1A4h]
  __m128i v149; // [rsp+20h] [rbp-1A0h]
  __int64 v150; // [rsp+30h] [rbp-190h]
  __int64 v151; // [rsp+38h] [rbp-188h]
  __int64 v152; // [rsp+38h] [rbp-188h]
  __int64 v153; // [rsp+38h] [rbp-188h]
  __int64 v154; // [rsp+38h] [rbp-188h]
  __m128i *v155; // [rsp+40h] [rbp-180h]
  __int64 v156; // [rsp+40h] [rbp-180h]
  unsigned int v157; // [rsp+40h] [rbp-180h]
  __int64 v158; // [rsp+40h] [rbp-180h]
  __int64 v160; // [rsp+50h] [rbp-170h]
  int v161; // [rsp+50h] [rbp-170h]
  int *v162; // [rsp+58h] [rbp-168h]
  __m128i *v163; // [rsp+58h] [rbp-168h]
  int v164; // [rsp+58h] [rbp-168h]
  __int64 v165; // [rsp+60h] [rbp-160h]
  int *v167; // [rsp+70h] [rbp-150h]
  int v168; // [rsp+70h] [rbp-150h]
  int v170; // [rsp+78h] [rbp-148h]
  void *v171; // [rsp+80h] [rbp-140h]
  int v172; // [rsp+80h] [rbp-140h]
  void *v173; // [rsp+80h] [rbp-140h]
  void *v174; // [rsp+80h] [rbp-140h]
  __int64 v175; // [rsp+88h] [rbp-138h]
  __int64 v176; // [rsp+88h] [rbp-138h]
  __int64 v177; // [rsp+88h] [rbp-138h]
  signed int v178; // [rsp+88h] [rbp-138h]
  __int64 v180; // [rsp+98h] [rbp-128h]
  unsigned int v181; // [rsp+98h] [rbp-128h]
  __int64 v182; // [rsp+98h] [rbp-128h]
  __int64 *v183; // [rsp+98h] [rbp-128h]
  __int64 *v184; // [rsp+98h] [rbp-128h]
  __int64 v185; // [rsp+98h] [rbp-128h]
  unsigned int v186; // [rsp+ACh] [rbp-114h] BYREF
  signed int v187; // [rsp+B0h] [rbp-110h] BYREF
  signed int v188; // [rsp+B4h] [rbp-10Ch] BYREF
  unsigned int v189; // [rsp+B8h] [rbp-108h] BYREF
  unsigned int v190; // [rsp+BCh] [rbp-104h] BYREF
  signed int v191; // [rsp+C0h] [rbp-100h] BYREF
  signed int v192; // [rsp+C4h] [rbp-FCh] BYREF
  unsigned int v193; // [rsp+C8h] [rbp-F8h] BYREF
  unsigned int v194; // [rsp+CCh] [rbp-F4h] BYREF
  __int64 v195; // [rsp+D8h] [rbp-E8h]
  __int64 v196; // [rsp+E0h] [rbp-E0h]
  __m128i v197; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 v198; // [rsp+100h] [rbp-C0h]
  void *v199; // [rsp+110h] [rbp-B0h] BYREF
  void **v200; // [rsp+118h] [rbp-A8h]
  __int64 v201; // [rsp+120h] [rbp-A0h]
  void *ptr[2]; // [rsp+130h] [rbp-90h] BYREF
  void *v203; // [rsp+140h] [rbp-80h]
  void *v204; // [rsp+150h] [rbp-70h] BYREF
  void *src; // [rsp+158h] [rbp-68h]
  __int64 v206; // [rsp+160h] [rbp-60h]
  __int128 v207; // [rsp+170h] [rbp-50h] BYREF
  unsigned __int64 v208; // [rsp+188h] [rbp-38h]

  v16 = *(_QWORD *)(a2 + 16);
  v17 = *(_QWORD *)(a2 + 8);
  v18 = -v16;
  v208 = __readfsqword(0x28u);
  v195 = 0;
  v196 = 0;
  if ( -v16 < 0 || v16 == 0 )
  {
    v19 = 0;
LABEL_3:
    v180 = v18;
    while ( v19 < v16 )
    {
      v20 = QT::QtPrivate::qustrchr((2 * (v16 - v19)) >> 1, v17 + 2 * v19, 60);
      if ( v17 + 2 * v16 == v20 )
        break;
      v21 = (v20 - v17) >> 1;
      if ( (int)v21 <= 0 )
        break;
      v22 = (int)v21 + 1;
      if ( v22 < v180 )
        break;
      if ( (int)v21 + 1 < 0 )
      {
        v22 = v16 - 0x80000000LL;
        if ( v16 - 0x80000000LL < 0 )
          v22 = 0;
      }
      if ( v22 >= v16 )
        break;
      v23 = QT::QtPrivate::qustrchr((2 * (v16 - v22)) >> 1, v17 + 2 * v22, 62);
      if ( v23 == v17 + 2 * v16 )
        break;
      v175 = (v23 - v17) >> 1;
      if ( (int)v175 < 0 )
        break;
      v18 = -v16;
      if ( v16 > (int)v21 && (int)v21 >= v18 )
      {
        while ( 1 )
        {
          v24 = QT::QtPrivate::qustrchr((2 * (v16 - (int)v21)) >> 1, v17 + 2LL * (int)v21, 10);
          if ( v17 + 2 * v16 == v24 )
            break;
          v25 = (v24 - v17) >> 1;
          if ( (int)v175 <= (int)v25 || (int)v25 <= 0 )
            break;
          QT::QString::replace(a2, (int)v25, 1, 1);
          v16 = *(_QWORD *)(a2 + 16);
          v17 = *(_QWORD *)(a2 + 8);
          v18 = -v16;
          if ( -v16 > (int)v21 || v16 <= (int)v21 )
            goto LABEL_22;
        }
        v18 = -v16;
      }
LABEL_22:
      v26 = v175 + 1;
      v19 = (int)v175 + 1;
      if ( v19 < v18 )
        break;
      if ( v26 >= 0 )
        goto LABEL_3;
      v19 = v16 + v26;
      v180 = v18;
      if ( v19 < 0 )
        v19 = 0;
    }
  }
  QT::QString::split(&v199, a2, 10, 0, 1);
  v30.m128i_i64[0] = -1;
  v186 = 0;
  v207 = -1;
  v144 = v201;
  if ( (int)v201 <= 0 )
  {
    v150 = 0;
    v181 = -1;
    v149 = 0u;
    goto LABEL_71;
  }
  v31 = 0;
  v176 = (unsigned int)(v201 - 1);
  v150 = 0;
  v149 = 0u;
  v181 = -1;
  while ( 1 )
  {
    v30 = _mm_loadu_si128((const __m128i *)&v200[3 * v31]);
    v203 = v200[3 * v31 + 2];
    *(__m128i *)ptr = v30;
    if ( v30.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v30.m128i_i64[0], 1u);
    QT::QString::replace(ptr, 1, 10, 1);
    QT::QString::toUtf8_helper((QT::QString *)&v204, (const QT::QString *)ptr);
    if ( !v204 || *(int *)v204 > 1 )
      QT::QByteArray::reallocData(&v204, v206, 1);
    v197 = v149;
    v198 = v150;
    v39 = sub_50B880(
            a1,
            (__int64)src,
            &v197,
            (__int64)&v207,
            (__int64)a4,
            (unsigned int)v31,
            *(double *)v30.m128i_i64,
            a8,
            a9,
            a10,
            v35,
            v36,
            a13,
            a14,
            a6,
            a15,
            &v186);
    v149 = v197;
    v150 = v198;
    if ( v204 && !_InterlockedSub((volatile signed __int32 *)v204, 1u) )
      free(v204);
    if ( !(_BYTE)v39 )
      break;
    if ( v150 > 0 )
    {
      v32 = *(_DWORD *)v149.m128i_i64[1];
      if ( v181 <= *(_DWORD *)v149.m128i_i64[1] )
        v32 = v181;
      v181 = v32;
    }
    v197 = v149;
    v33 = a3[1].m128i_i64[0];
    v198 = v150;
    sub_50D7E0(a3, v33, &v197, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9, v150, v37, v38);
    if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
      sub_503800(a3, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v34 = v31 + 1;
    if ( v31 == v176 )
    {
      if ( v181 )
      {
        v139 = 0;
        v140 = 24 * v34;
        do
        {
          if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
            sub_503800(a3, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
          v141 = 0;
          v142 = (__m128i *)(v139 + a3->m128i_i64[1]);
          if ( v142[1].m128i_i64[0] > 0 )
          {
            do
            {
              if ( !v142->m128i_i64[0] || *(int *)v142->m128i_i64[0] > 1 )
                sub_503260(v142, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
              v143 = v141++;
              *(_DWORD *)(v142->m128i_i64[1] + 96 * v143) -= v181;
            }
            while ( v141 < v142[1].m128i_i64[0] );
          }
          v139 += 24;
        }
        while ( v139 != v140 );
      }
LABEL_71:
      v46 = 0;
      v47 = 0;
      if ( (__int64)a4[2] > 0 )
      {
        v27 = (__int64)a4;
        do
        {
          ++v46;
          *(_DWORD *)(*(_QWORD *)&a4[1][2 * v47] + 24LL) -= v181;
          v47 = v46;
        }
        while ( v46 < (__int64)a4[2] );
      }
      v48 = 0;
      if ( a3[1].m128i_i64[0] > 0 )
      {
        do
        {
          if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
            sub_503800(a3, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
          v49 = 0;
          v50 = (__m128i *)(a3->m128i_i64[1] + 24LL * v48);
          if ( v50[1].m128i_i64[0] > 0 )
          {
            do
            {
              if ( !v50->m128i_i64[0] || *(int *)v50->m128i_i64[0] > 1 )
                sub_503260(v50, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
              sub_509AC0(v50->m128i_i64[1] + 96LL * v49++);
            }
            while ( v49 < v50[1].m128i_i64[0] );
          }
          v51 = a3[1].m128i_i64[0];
          ++v48;
        }
        while ( v48 < v51 );
        if ( (__int64)a4[2] > 0 )
          goto LABEL_85;
LABEL_111:
        v148 = 0;
        if ( v51 > 0 )
        {
          while ( 1 )
          {
            if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
              sub_503800(a3, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
            v170 = 0;
            v61 = (__m128i *)(a3->m128i_i64[1] + 24LL * v148);
            if ( v61[1].m128i_i64[0] - 1 > 0 )
              break;
LABEL_216:
            if ( ++v148 >= a3[1].m128i_i64[0] )
              goto LABEL_217;
          }
          while ( 2 )
          {
            if ( !v61->m128i_i64[0] || *(int *)v61->m128i_i64[0] > 1 )
              sub_503260(v61, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
            v62 = v61->m128i_i64[1];
            v27 = (unsigned int)(v170 + 1);
            v63 = (int *)(v62 + 96LL * v170++);
            v167 = v63;
            if ( v63[21] <= 0 )
            {
              v165 = (int)v27;
              goto LABEL_118;
            }
            if ( !v61->m128i_i64[0] || *(int *)v61->m128i_i64[0] > 1 )
            {
              sub_503260(v61, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
              v62 = v61->m128i_i64[1];
            }
            v165 = v170;
            v64 = v170;
            v27 = 96LL * v170;
            v162 = (int *)(v62 + v27);
            if ( *(int *)(v62 + v27 + 28) > 0 )
            {
              if ( v170 < v61[1].m128i_i64[0] )
              {
                v182 = 0;
                v65 = nullptr;
                v66 = nullptr;
                while ( 1 )
                {
                  v69 = v64++;
                  if ( !v61->m128i_i64[0] || *(int *)v61->m128i_i64[0] > 1 )
                    sub_503260(v61, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
                  v70 = v61->m128i_i64[1] + 96LL * v69;
                  if ( v66 )
                  {
                    if ( *v66 <= 1 )
                    {
                      v71 = ((unsigned __int64)v66 + 31) & 0xFFFFFFFFFFFFFFF0LL;
                      v27 = v182;
                      if ( v182 != *((_QWORD *)v66 + 1) - ((__int64)((__int64)v65 - v71) >> 3) )
                      {
                        v65[v182] = v70;
                        v27 = ++v182;
                        goto LABEL_144;
                      }
                      if ( !v182 && (_QWORD *)v71 != v65 )
                      {
                        v182 = 1;
                        *--v65 = v70;
                        goto LABEL_144;
                      }
                    }
                    if ( *v66 <= 1 )
                    {
                      v27 = *((_QWORD *)v66 + 1);
                      v72 = (__int64)((__int64)v65 - (((unsigned __int64)v66 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
                      if ( v27 - v182 - v72 > 0 )
                      {
                        v75 = &v65[v182];
                        goto LABEL_161;
                      }
                      if ( (__int64)((__int64)v65 - (((unsigned __int64)v66 + 31) & 0xFFFFFFFFFFFFFFF0LL)) > 0
                        && 3 * v182 < 2 * v27 )
                      {
                        v27 = (__int64)&v65[-v72];
                        v73 = 8 * v182;
                        if ( v182 && (_QWORD *)v27 != v65 && v65 && v27 )
                        {
                          v74 = memmove((void *)v27, v65, v73);
                          v73 = 8 * v182;
                          v27 = (__int64)v74;
                        }
                        v75 = (__int64 *)(v27 + v73);
                        v65 = (_QWORD *)v27;
LABEL_161:
                        ++v182;
                        *v75 = v70;
LABEL_144:
                        if ( *v66 <= 1 )
                          goto LABEL_134;
                        goto LABEL_133;
                      }
                    }
                  }
                  v204 = v66;
                  src = v65;
                  v206 = v182;
                  sub_50A600((__int64)&v204, 0, 1, 0, v28, v29);
                  v65 = src;
                  v67 = v182;
                  v27 = v206;
                  v66 = (int *)v204;
                  v68 = (__int64 *)((char *)src + 8 * v182);
                  if ( v182 < v206 )
                  {
                    v160 = v206;
                    v183 = (__int64 *)((char *)src + 8 * v182);
                    memmove(v68 + 1, v68, 8 * (v206 - v67));
                    v27 = v160;
                    v68 = v183;
                  }
                  *v68 = v70;
                  v182 = v27 + 1;
                  if ( v66 )
                    goto LABEL_144;
LABEL_133:
                  v204 = v66;
                  src = v65;
                  v206 = v182;
                  sub_50A600((__int64)&v204, 0, 0, 0, v28, v29);
                  v66 = (int *)v204;
                  v65 = src;
                  v182 = v206;
LABEL_134:
                  if ( v64 >= v61[1].m128i_i64[0] )
                  {
                    v147 = *v162;
                    v76 = *v167;
                    v168 = v167[21];
                    v161 = v76;
                    v77 = v148 + 1;
                    v78 = v148 + 1;
                    if ( a3[1].m128i_i64[0] <= v78 )
                    {
LABEL_208:
                      for ( i = 0; i < v182; v27 = v182 )
                      {
                        if ( !v66 || *v66 > 1 )
                        {
                          v204 = v66;
                          src = v65;
                          v206 = v182;
                          sub_50A600((__int64)&v204, 0, 0, 0, v28, v29);
                          v66 = (int *)v204;
                          v65 = src;
                          v182 = v206;
                        }
                        v99 = i++;
                        *(_DWORD *)v65[v99] -= v168;
                      }
                      if ( v66 && !_InterlockedSub(v66, 1u) )
                        free(v66);
                      goto LABEL_118;
                    }
LABEL_166:
                    while ( 2 )
                    {
                      if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
                        sub_503800(a3, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
                      v79 = 3 * v78;
                      v80 = (__m128i *)(a3->m128i_i64[1] + 24 * v78);
                      if ( !v80[1].m128i_i64[0] )
                        goto LABEL_165;
                      v81 = sub_5035B0(
                              v80,
                              v161,
                              *(double *)v30.m128i_i64,
                              *(double *)a8.m128_u64,
                              a9,
                              v79,
                              v27,
                              v28,
                              v29);
                      if ( !v81 )
                        goto LABEL_208;
                      v171 = v81;
                      if ( (int)v81[21] < 0
                        || (v83 = sub_5035B0(
                                    v80,
                                    v147,
                                    *(double *)v30.m128i_i64,
                                    *(double *)a8.m128_u64,
                                    a9,
                                    v82,
                                    v27,
                                    v28,
                                    v29)) == nullptr
                        || (v29 = (__int64)v171, (int)v83[7] <= 0) )
                      {
LABEL_165:
                        v78 = ++v77;
                        if ( v77 >= a3[1].m128i_i64[0] )
                          goto LABEL_208;
                        continue;
                      }
                      break;
                    }
                    v84 = v80[1].m128i_i64[0];
                    if ( v84 <= 0 )
                    {
                      v164 = -1;
                      v90 = -1;
                    }
                    else
                    {
                      v27 = v80->m128i_i64[1];
                      v163 = v61;
                      v85 = (__int64)v83;
                      v155 = v80;
                      v145 = v66;
                      v86 = v27;
                      v172 = v77;
                      v87 = v27 + 96 * v84;
                      v151 = v29;
                      do
                      {
                        v89 = v86;
                        if ( v87 == v86 )
                        {
                          v80 = v155;
                          v61 = v163;
                          v164 = -1;
                          v90 = -1;
                          v77 = v172;
                          v29 = v151;
                          v66 = v145;
                          v84 = v155[1].m128i_i64[0];
                          goto LABEL_179;
                        }
                        v88 = v86;
                        v86 += 96;
                      }
                      while ( !sub_4F9D70(v88, v85) );
                      v80 = v155;
                      v27 = 0xAAAAAAAAAAAAAAABLL;
                      v61 = v163;
                      v29 = v151;
                      v66 = v145;
                      v127 = v89 - v155->m128i_i64[1];
                      v77 = v172;
                      v84 = v155[1].m128i_i64[0];
                      v164 = -1431655765 * (v127 >> 5);
                      v90 = v164;
                    }
LABEL_179:
                    if ( v90 >= v84 )
                    {
LABEL_257:
                      v126 = *(_DWORD *)(v29 + 84);
                      *(_DWORD *)(v29 + 84) = -1;
                      if ( v168 <= v126 )
                        v126 = v168;
                      v168 = v126;
                      goto LABEL_165;
                    }
                    while ( 2 )
                    {
                      v28 = (unsigned int)v164++;
                      if ( !v80->m128i_i64[0] || *(int *)v80->m128i_i64[0] > 1 )
                      {
                        v157 = v28;
                        v173 = (void *)v29;
                        sub_503260(v80, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
                        v29 = (__int64)v173;
                        v28 = v157;
                      }
                      v158 = v80->m128i_i64[1] + 96LL * (int)v28;
                      if ( !v66 )
                        goto LABEL_182;
                      if ( *v66 > 1 )
                        goto LABEL_181;
                      v93 = ((unsigned __int64)v66 + 31) & 0xFFFFFFFFFFFFFFF0LL;
                      v27 = v182;
                      if ( v182 == *((_QWORD *)v66 + 1) - ((__int64)((__int64)v65 - v93) >> 3) )
                      {
                        if ( !v182 && v65 != (_QWORD *)v93 )
                        {
                          --v65;
                          v182 = 1;
                          *v65 = v158;
                          goto LABEL_196;
                        }
LABEL_181:
                        if ( *v66 <= 1 )
                        {
                          v27 = (__int64)v65 - (((unsigned __int64)v66 + 31) & 0xFFFFFFFFFFFFFFF0LL);
                          v94 = v27 >> 3;
                          if ( *((_QWORD *)v66 + 1) - v182 - (v27 >> 3) > 0 )
                          {
                            v97 = &v65[v182];
                          }
                          else
                          {
                            if ( v27 <= 0 || 3 * v182 >= 2LL * *((_QWORD *)v66 + 1) )
                              goto LABEL_182;
                            v95 = 8 * v182;
                            v27 = (__int64)&v65[-v94];
                            if ( v182 && v65 != (_QWORD *)v27 && v65 && v27 )
                            {
                              v154 = v29;
                              v96 = memmove(&v65[-v94], v65, v95);
                              v29 = v154;
                              v95 = 8 * v182;
                              v27 = (__int64)v96;
                            }
                            v97 = (__int64 *)(v27 + v95);
                            v65 = (_QWORD *)v27;
                          }
                          ++v182;
                          *v97 = v158;
                        }
                        else
                        {
LABEL_182:
                          v152 = v29;
                          v204 = v66;
                          src = v65;
                          v206 = v182;
                          sub_50A600((__int64)&v204, 0, 1, 0, v28, v29);
                          v65 = src;
                          v27 = v206;
                          v29 = v152;
                          v66 = (int *)v204;
                          v91 = (__int64 *)((char *)src + 8 * v182);
                          if ( v182 < v206 )
                          {
                            v146 = v152;
                            v153 = v206;
                            v92 = 8 * (v206 - v182);
                            v184 = (__int64 *)((char *)src + 8 * v182);
                            memmove(v91 + 1, v91, v92);
                            v29 = v146;
                            v27 = v153;
                            v91 = v184;
                          }
                          v182 = v27 + 1;
                          *v91 = v158;
                          if ( !v66 )
                          {
LABEL_185:
                            v156 = v29;
                            v204 = v66;
                            src = v65;
                            v206 = v182;
                            sub_50A600((__int64)&v204, 0, 0, 0, v28, v29);
                            v29 = v156;
                            v66 = (int *)v204;
                            v65 = src;
                            v182 = v206;
                            goto LABEL_186;
                          }
                        }
                      }
                      else
                      {
                        v65[v182++] = v80->m128i_i64[1] + 96LL * (int)v28;
                      }
LABEL_196:
                      if ( *v66 > 1 )
                        goto LABEL_185;
LABEL_186:
                      if ( v164 >= v80[1].m128i_i64[0] )
                        goto LABEL_257;
                      continue;
                    }
                  }
                }
              }
              v65 = nullptr;
              v182 = 0;
              v147 = *v162;
              v128 = *v167;
              v168 = v167[21];
              v161 = v128;
              v66 = nullptr;
              v77 = v148 + 1;
              v78 = v148 + 1;
              if ( v78 < a3[1].m128i_i64[0] )
                goto LABEL_166;
            }
LABEL_118:
            if ( v61[1].m128i_i64[0] - 1 <= v165 )
              goto LABEL_216;
            continue;
          }
        }
LABEL_217:
        if ( v144 > 0 )
        {
LABEL_218:
          v100 = 0;
          v177 = 0;
          v185 = 0;
          v174 = nullptr;
          do
          {
            v101 = v174;
            v102 = v185;
            v103 = (__int64 *)(a3->m128i_i64[1] + v177);
            v104 = v100;
            v27 = *v103;
            v100 = v103[1];
            v174 = (void *)*v103;
            v185 = v103[2];
            if ( *v103 )
              _InterlockedAdd((volatile signed __int32 *)v27, 1u);
            if ( v101 && !_InterlockedSub((volatile signed __int32 *)v101, 1u) )
            {
              v105 = 96 * v102;
              for ( j = v104 + v105; j != v104; v104 += 96 )
              {
                v107 = *(volatile signed __int32 **)(v104 + 56);
                if ( v107 && !_InterlockedSub(v107, 1u) )
                  free(*(void **)(v104 + 56));
              }
              free(v101);
            }
            if ( (int)v185 > 0 )
            {
              v108 = v100;
              v109 = v100 + 96LL * (unsigned int)(v185 - 1) + 96;
              do
              {
                while ( 1 )
                {
                  if ( (unsigned __int8)(*(_BYTE *)(v108 + 16) - 67) > 0x2Fu
                    || (v27 = 0x800100008001LL, !_bittest64(&v27, (unsigned int)*(unsigned __int8 *)(v108 + 16) - 67)) )
                  {
                    v110 = *(_DWORD *)v108;
                    v190 = 0;
                    v111 = *(_DWORD *)(v108 + 8);
                    v187 = v110;
                    sub_509D00(a5, &v187, &v190);
                    if ( v111 > 0 )
                      break;
                  }
                  v108 += 96;
                  if ( v108 == v109 )
                    goto LABEL_236;
                }
                v189 = 0;
                v188 = v111 + v110;
                sub_509D00(a5, &v188, &v189);
                v108 += 96;
              }
              while ( v108 != v109 );
            }
LABEL_236:
            v177 += 24;
          }
          while ( v177 != 8 * (3LL * (unsigned int)(v144 - 1) + 3) );
          v112 = (__int64)a4[2];
          if ( v112 > 0 )
          {
LABEL_238:
            v113 = 0;
            v29 = 0;
            do
            {
              v114 = a4[1];
              ++v113;
              v27 = *(_QWORD *)&v114[2 * v29];
              v29 = v113;
              if ( v112 <= v113 )
                break;
              v115 = v113;
              v116 = v113;
              while ( 1 )
              {
                v117 = *(_DWORD **)&v114[2 * v116];
                v118 = *(_DWORD *)(v27 + 24) + *(_DWORD *)(v27 + 32);
                if ( v118 > v117[6] )
                {
                  v119 = *(_DWORD *)(v27 + 44);
                  v28 = (unsigned int)(v117[30] + v117[11]);
                  v120 = v119 + *(_DWORD *)(v27 + 120);
                  if ( (int)v28 > v120 )
                    v28 = (unsigned int)v120;
                  if ( v119 < v117[11] )
                    v119 = v117[11];
                  if ( (int)v28 > v119 )
                  {
                    v117[6] = v118 + 1;
                    v112 = (__int64)a4[2];
                  }
                }
                v116 = ++v115;
                if ( v115 >= v112 )
                  break;
                v114 = a4[1];
              }
            }
            while ( v112 > v113 );
            if ( v112 > 0 )
            {
              v121 = 0;
              v122 = 0;
              do
              {
                v194 = 0;
                v124 = *(_QWORD *)&a4[1][2 * v122];
                v125 = *(_DWORD *)(v124 + 32);
                v178 = *(_DWORD *)(v124 + 24);
                v191 = v178;
                sub_509D00(a5, &v191, &v194);
                if ( v125 > 0 )
                {
                  v193 = 0;
                  v192 = v125 + v178;
                  sub_509D00(a5, &v192, &v193);
                }
                ++v121;
                v123 = (__int64)a4[2];
                v122 = v121;
              }
              while ( v121 < v123 );
              if ( a3[1].m128i_i64[0] > 0 )
              {
LABEL_266:
                v129 = 0;
                do
                {
                  if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
                    sub_503800(a3, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
                  v130 = 0;
                  v131 = 3LL * v129;
                  v132 = (__m128i *)(a3->m128i_i64[1] + 24LL * v129);
                  if ( v132[1].m128i_i64[0] > 0 )
                  {
                    do
                    {
                      if ( !v132->m128i_i64[0] || *(int *)v132->m128i_i64[0] > 1 )
                        sub_503260(v132, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
                      sub_50A1A0((int *)(v132->m128i_i64[1] + 96LL * v130++), (__int64 *)a5, v131, v27, v28, v29);
                    }
                    while ( v130 < v132[1].m128i_i64[0] );
                  }
                  ++v129;
                }
                while ( v129 < a3[1].m128i_i64[0] );
                v123 = (__int64)a4[2];
              }
              v133 = 0;
              v134 = 0;
              if ( v123 > 0 )
              {
                do
                {
                  v135 = (__int64)a4[1];
                  v136 = *(int **)(v135 + 8 * v134);
                  if ( v136 )
                    v136 += 6;
                  sub_50A1A0(v136, (__int64 *)a5, v135, v27, v28, v29);
                  v134 = ++v133;
                }
                while ( v133 < (__int64)a4[2] );
              }
LABEL_281:
              if ( v174 && !_InterlockedSub((volatile signed __int32 *)v174, 1u) )
              {
                for ( k = v100 + 96 * v185; k != v100; v100 += 96 )
                {
                  v138 = *(volatile signed __int32 **)(v100 + 56);
                  if ( v138 && !_InterlockedSub(v138, 1u) )
                    free(*(void **)(v100 + 56));
                }
                free(v174);
              }
LABEL_289:
              v39 = 1;
              goto LABEL_53;
            }
          }
          if ( a3[1].m128i_i64[0] > 0 )
            goto LABEL_266;
          goto LABEL_281;
        }
        v100 = 0;
        v174 = nullptr;
        v185 = 0;
        v112 = (__int64)a4[2];
        if ( v112 > 0 )
          goto LABEL_238;
LABEL_307:
        v100 = 0;
        v174 = nullptr;
        v185 = 0;
        if ( a3[1].m128i_i64[0] > 0 )
          goto LABEL_266;
        goto LABEL_289;
      }
      if ( (__int64)a4[2] <= 0 )
      {
        if ( v144 > 0 )
          goto LABEL_218;
        goto LABEL_307;
      }
LABEL_85:
      v52 = 0;
      while ( 1 )
      {
        if ( !*a4 || **a4 > 1 )
          sub_5025F0((__int64)a4, 0, 0, 0, v28, v29);
        v53 = *(__m128i **)&a4[1][2 * v52];
        v54 = v53[1].m128i_i64[0];
        if ( v54 > 0 )
        {
          v55 = 0;
          do
          {
            if ( !v53->m128i_i64[0] || *(int *)v53->m128i_i64[0] > 1 )
              sub_503260(v53, 0, 0, 0, v28, v29, *(double *)v30.m128i_i64, *(double *)a8.m128_u64, a9);
            sub_509AC0(v53->m128i_i64[1] + 96LL * v55++);
            v54 = v53[1].m128i_i64[0];
          }
          while ( v55 < v54 );
        }
        if ( (int)v54 > 0 )
          break;
        v60 = 4;
LABEL_109:
        v53[2].m128i_i32[0] = v60;
        if ( ++v52 >= (__int64)a4[2] )
        {
          v51 = a3[1].m128i_i64[0];
          goto LABEL_111;
        }
      }
      v56 = 0;
      v57 = 0;
      while ( 1 )
      {
        if ( v56 < v54 )
        {
          v58 = v53->m128i_i64[1] + 96 * v56;
          v59 = *(volatile signed __int32 **)(v58 + 56);
          v27 = *(unsigned int *)(v58 + 8);
          if ( v59 )
          {
            _InterlockedAdd(v59, 1u);
            if ( v53[8].m128i_i8[12] )
            {
              v57 += v27 + 2;
            }
            else if ( v57 < (int)v27 )
            {
              v57 = v27;
            }
            if ( !_InterlockedSub(v59, 1u) )
              free((void *)v59);
            v54 = v53[1].m128i_i64[0];
LABEL_103:
            if ( (int)v54 <= (int)++v56 )
              goto LABEL_108;
            continue;
          }
        }
        else
        {
          v27 = 0;
        }
        if ( !v53[8].m128i_i8[12] )
        {
          if ( v57 < (int)v27 )
            v57 = v27;
          goto LABEL_103;
        }
        ++v56;
        v57 += v27 + 2;
        if ( (int)v54 <= (int)v56 )
        {
LABEL_108:
          v60 = v57 + 4;
          goto LABEL_109;
        }
      }
    }
    ++v31;
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
LABEL_53:
  if ( v199 && !_InterlockedSub((volatile signed __int32 *)v199, 1u) )
  {
    v40 = v200;
    v41 = &v200[3 * v201];
    if ( v200 != v41 )
    {
      do
      {
        if ( *v40 && !_InterlockedSub((volatile signed __int32 *)*v40, 1u) )
          free(*v40);
        v40 += 3;
      }
      while ( v41 != v40 );
    }
    free(v199);
  }
  if ( v149.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v149.m128i_i64[0], 1u) )
  {
    v42 = v149.m128i_i64[1];
    v43 = v149.m128i_i64[1] + 96 * v150;
    if ( v43 != v149.m128i_i64[1] )
    {
      do
      {
        v44 = *(volatile signed __int32 **)(v42 + 56);
        if ( v44 && !_InterlockedSub(v44, 1u) )
          free(*(void **)(v42 + 56));
        v42 += 96;
      }
      while ( v43 != v42 );
    }
    free((void *)v149.m128i_i64[0]);
  }
  return v39;
}
