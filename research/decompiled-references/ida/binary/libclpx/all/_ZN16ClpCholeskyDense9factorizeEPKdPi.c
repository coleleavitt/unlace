__int64 __fastcall ClpCholeskyDense::factorize(
        ClpCholeskyDense *this,
        const double *a2,
        int *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  ClpCholeskyDense *v13; // rbx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 (*v16)(void); // rdx
  __int64 (*v17)(void); // rdx
  __int64 (*v18)(void); // rdx
  __int64 (*v19)(void); // rax
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 (*v22)(void); // rdx
  __int64 (*v23)(void); // rdx
  __int64 (*v24)(void); // rdx
  __int64 (*v25)(void); // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 (*v28)(void); // rax
  __int64 v29; // rax
  int v30; // eax
  int v31; // esi
  _QWORD *v32; // r9
  double v33; // xmm0_8
  int v34; // esi
  __int64 v35; // r13
  int v36; // r12d
  __m128d v37; // xmm6
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r9
  double v42; // xmm3_8
  __int64 v43; // rax
  int v44; // r12d
  int v45; // eax
  double v46; // xmm4_8
  int *v47; // r10
  double *v48; // rbx
  __int64 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // rax
  double v52; // xmm2_8
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rbp
  __int64 v56; // rax
  double *v57; // rdx
  __int64 v58; // rcx
  double v59; // xmm1_8
  double *v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // rdi
  _QWORD *v63; // rdx
  const void *v64; // rdi
  int v65; // r14d
  int v66; // ebp
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // r10
  __int64 v70; // rdx
  double v71; // xmm0_8
  __int64 v72; // rax
  double v73; // xmm2_8
  double v74; // xmm3_8
  __int64 v75; // rax
  int v76; // ecx
  double v77; // xmm3_8
  __int64 v78; // rdi
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 j; // rax
  __int64 v82; // rcx
  double v83; // xmm2_8
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rax
  double v89; // xmm2_8
  double v90; // xmm4_8
  __int64 v91; // rax
  int v92; // ebp
  int v93; // edx
  double *v94; // rdx
  int v95; // edx
  int v96; // ebp
  double v97; // xmm6_8
  __int64 v98; // rax
  __int64 i; // rcx
  int v100; // edx
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rcx
  const double *v105; // rdx
  __int64 v106; // rcx
  double v107; // xmm3_8
  bool v108; // cc
  double v109; // xmm2_8
  double v110; // xmm2_8
  double v111; // xmm3_8
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  int v114; // r8d
  int v115; // edi
  __m128d v116; // xmm1
  __int64 v117; // rdx
  unsigned int v118; // esi
  unsigned int v119; // eax
  unsigned int v120; // eax
  unsigned int v121; // edx
  int v122; // eax
  double v123; // xmm0_8
  double v124; // xmm0_8
  int *v125; // rax
  int v126; // edx
  int *v127; // r12
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rax
  int v133; // r8d
  __int64 v134; // rdx
  __int64 v135; // rax
  int v136; // esi
  __int64 v137; // r9
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rax
  double v140; // xmm2_8
  double v141; // xmm7_8
  double v142; // xmm2_8
  unsigned __int64 v143; // xmm7_8
  __int64 v144; // rax
  __int64 v145; // r8
  __int64 v146; // rdi
  __int64 v147; // rsi
  __int64 v148; // rax
  double v149; // xmm2_8
  std::ostream *v150; // r13
  _BYTE *v151; // r12
  char v152; // si
  std::ostream *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  double v157; // xmm4_8
  double v158; // xmm5_8
  __int64 (__fastcall *v159)(__int64, unsigned int); // rax
  __int64 v160; // rcx
  __int64 v161; // rsi
  int *v162; // rcx
  __int64 v163; // [rsp+8h] [rbp-C0h]
  __int64 v164; // [rsp+10h] [rbp-B8h]
  double v165; // [rsp+10h] [rbp-B8h]
  int v166; // [rsp+18h] [rbp-B0h]
  __int64 v167; // [rsp+20h] [rbp-A8h]
  __int64 v168; // [rsp+20h] [rbp-A8h]
  __int64 v169; // [rsp+28h] [rbp-A0h]
  __int64 v170; // [rsp+28h] [rbp-A0h]
  __int64 v171; // [rsp+30h] [rbp-98h]
  __int64 v172; // [rsp+38h] [rbp-90h]
  __int64 v173; // [rsp+40h] [rbp-88h]
  __int64 v174; // [rsp+40h] [rbp-88h]
  __int64 v175; // [rsp+48h] [rbp-80h]
  __int64 v176; // [rsp+48h] [rbp-80h]
  ClpCholeskyDense *v177; // [rsp+50h] [rbp-78h]
  __int64 v178; // [rsp+58h] [rbp-70h]
  const double *v179; // [rsp+68h] [rbp-60h]
  int v180; // [rsp+70h] [rbp-58h]
  int v181; // [rsp+70h] [rbp-58h]
  int v182; // [rsp+74h] [rbp-54h]
  ClpCholeskyDense *v183; // [rsp+80h] [rbp-48h]

  v13 = this;
  v14 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v15 = (_QWORD *)*v14;
  v16 = *(__int64 (**)(void))(*v14 + 56LL);
  if ( (char *)v16 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v172 = *(_QWORD *)(v14[11] + 48LL);
  }
  else
  {
    v172 = v16();
    v14 = *(_QWORD **)(*((_QWORD *)v13 + 4) + 192LL);
    v15 = (_QWORD *)*v14;
  }
  v17 = (__int64 (*)(void))v15[8];
  if ( (char *)v17 == (char *)ClpPackedMatrix::getVectorLengths )
  {
    v171 = *(_QWORD *)(v14[11] + 56LL);
  }
  else
  {
    v171 = v17();
    v14 = *(_QWORD **)(*((_QWORD *)v13 + 4) + 192LL);
    v15 = (_QWORD *)*v14;
  }
  v18 = (__int64 (*)(void))v15[6];
  if ( (char *)v18 == (char *)ClpPackedMatrix::getIndices )
  {
    v163 = *(_QWORD *)(v14[11] + 40LL);
  }
  else
  {
    v163 = v18();
    v14 = *(_QWORD **)(*((_QWORD *)v13 + 4) + 192LL);
    v15 = (_QWORD *)*v14;
  }
  v19 = (__int64 (*)(void))v15[5];
  if ( (char *)v19 == (char *)ClpPackedMatrix::getElements )
    v164 = *(_QWORD *)(v14[11] + 32LL);
  else
    v164 = v19();
  v20 = *((_QWORD **)v13 + 118);
  v21 = (_QWORD *)*v20;
  v22 = *(__int64 (**)(void))(*v20 + 56LL);
  if ( (char *)v22 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v175 = *(_QWORD *)(v20[11] + 48LL);
  }
  else
  {
    v156 = v22();
    v20 = *((_QWORD **)v13 + 118);
    v175 = v156;
    v21 = (_QWORD *)*v20;
  }
  v23 = (__int64 (*)(void))v21[8];
  if ( (char *)v23 == (char *)ClpPackedMatrix::getVectorLengths )
  {
    v177 = *(ClpCholeskyDense **)(v20[11] + 56LL);
  }
  else
  {
    v155 = v23();
    v20 = *((_QWORD **)v13 + 118);
    v177 = (ClpCholeskyDense *)v155;
    v21 = (_QWORD *)*v20;
  }
  v24 = (__int64 (*)(void))v21[6];
  if ( (char *)v24 == (char *)ClpPackedMatrix::getIndices )
  {
    v173 = *(_QWORD *)(v20[11] + 40LL);
  }
  else
  {
    v154 = v24();
    v20 = *((_QWORD **)v13 + 118);
    v173 = v154;
    v21 = (_QWORD *)*v20;
  }
  v25 = (__int64 (*)(void))v21[5];
  if ( (char *)v25 == (char *)ClpPackedMatrix::getElements )
    v178 = *(_QWORD *)(v20[11] + 32LL);
  else
    v178 = v25();
  v26 = *((_QWORD *)v13 + 4);
  v27 = *(_QWORD **)(v26 + 192);
  v28 = *(__int64 (**)(void))(*v27 + 24LL);
  if ( (char *)v28 == (char *)ClpPackedMatrix::getNumCols )
  {
    v29 = v27[11];
    if ( *(_BYTE *)(v29 + 8) )
    {
      v31 = *((_DWORD *)v13 + 40);
      v30 = *(_DWORD *)(v29 + 64);
      v32 = *((_QWORD **)v13 + 11);
      if ( !v31 )
        goto LABEL_21;
      goto LABEL_49;
    }
    v30 = *(_DWORD *)(v29 + 68);
  }
  else
  {
    v30 = v28();
    v26 = *((_QWORD *)v13 + 4);
  }
  v31 = *((_DWORD *)v13 + 40);
  v32 = *((_QWORD **)v13 + 11);
  if ( !v31 )
    goto LABEL_21;
LABEL_49:
  if ( v31 / 8 <= 0 )
  {
    v63 = v32;
  }
  else
  {
    v61 = v32;
    v62 = (unsigned int)(v31 / 8 - 1);
    do
    {
      *v61 = 0;
      v61[1] = 0;
      v61 += 8;
      *(v61 - 6) = 0;
      *(v61 - 5) = 0;
      *(v61 - 4) = 0;
      *(v61 - 3) = 0;
      *(v61 - 2) = 0;
      *(v61 - 1) = 0;
    }
    while ( v61 != &v32[8 * v62 + 8] );
    v63 = &v32[8 * (int)v62 + 8];
  }
  switch ( v31 % 8 )
  {
    case 1:
      goto LABEL_106;
    case 2:
      goto LABEL_105;
    case 3:
      goto LABEL_104;
    case 4:
      goto LABEL_103;
    case 5:
      goto LABEL_102;
    case 6:
      goto LABEL_101;
    case 7:
      v63[6] = 0;
LABEL_101:
      v63[5] = 0;
LABEL_102:
      v63[4] = 0;
LABEL_103:
      v63[3] = 0;
LABEL_104:
      v63[2] = 0;
LABEL_105:
      v63[1] = 0;
LABEL_106:
      *v63 = 0;
      break;
    default:
      break;
  }
LABEL_21:
  v33 = *(double *)(v26 + 904) * *(double *)(v26 + 928) * (*(double *)(v26 + 904) * *(double *)(v26 + 928));
  if ( v33 > 1.0 )
  {
    a5 = 0.0;
    if ( v33 < 0.0 )
    {
      v181 = v30;
      sqrt(v33);
      v26 = *((_QWORD *)v13 + 4);
      v32 = *((_QWORD **)v13 + 11);
      v33 = 1.0;
      v30 = v181;
    }
    else
    {
      v33 = 1.0;
    }
  }
  v34 = *((_DWORD *)v13 + 11);
  v35 = (__int64)(v32 - 1);
  v37 = (__m128d)*(unsigned __int64 *)(v26 + 944);
  v36 = v34 - 1;
  v37.m128d_f64[0] = v37.m128d_f64[0] * v37.m128d_f64[0];
  v180 = v34;
  v38 = v34 - 1;
  if ( !*((_BYTE *)v13 + 12) )
  {
    v39 = v30;
    if ( v34 <= 0 )
    {
      v92 = 0;
      v90 = 9.999999999999999e-21;
      goto LABEL_89;
    }
    v179 = &a2[v39];
    v40 = *((_QWORD *)v13 + 7);
    v41 = 0;
    v182 = v34 - 2;
    v167 = *((_QWORD *)v13 + 15);
    v42 = 9.999999999999999e-21;
    v169 = v36;
    a11 = 0.0;
    v183 = v13;
LABEL_27:
    v44 = v41 + 1;
    if ( *(_BYTE *)(v40 + v41) )
    {
      *(_QWORD *)(v167 + 8 * v41) = 0x3FF0000000000000LL;
      goto LABEL_26;
    }
    v45 = *(_DWORD *)(v175 + 4 * v41);
    v46 = v179[v41] + v37.m128d_f64[0];
    if ( v45 >= v45 + *((_DWORD *)v177 + v41) )
      goto LABEL_40;
    v47 = (int *)(v173 + 4LL * v45);
    v48 = (double *)(v178 + 8LL * v45);
    v49 = v173 + 4 + 4 * ((unsigned int)(*((_DWORD *)v177 + v41) - 1) + (__int64)v45);
    while ( 1 )
    {
      v50 = *v47;
      v51 = *(int *)(v172 + 4 * v50);
      v52 = a2[v50] * *v48;
      if ( (int)v51 < (int)v51 + *(_DWORD *)(v171 + 4 * v50) )
        break;
LABEL_38:
      ++v47;
      ++v48;
      if ( v47 == (int *)v49 )
      {
        v44 = v41 + 1;
LABEL_40:
        a6 = 0.0;
        if ( v180 > v44 )
        {
          v60 = (double *)(v35 + 8LL * v44);
          a6 = 0.0;
          do
          {
            a5 = *v60;
            if ( *v60 < 0.0 )
              a5 = -a5;
            ++v60;
            v42 = fmax(v42, a5);
          }
          while ( (double *)(v35 + 8 * ((unsigned int)(v182 - v41) + (__int64)v44) + 8) != v60 );
        }
        *(double *)(v167 + 8 * v41) = v46;
        if ( v46 < 0.0 )
          v46 = -v46;
        v42 = fmax(v42, v46);
LABEL_26:
        v43 = v169 - v41++;
        v35 = v35 + 8 * v43 - 8;
        if ( v44 < v180 )
          goto LABEL_27;
        a7 = v42 * 9.999999999999999e-21;
        v13 = v183;
        v90 = 9.999999999999999e-12;
        if ( a7 < 9.999999999999999e-12 )
        {
          v90 = a7;
          if ( v180 > 0 )
            goto LABEL_83;
          v92 = 0;
LABEL_88:
          v90 = fmax(9.999999999999999e-21, v90);
        }
        else
        {
          if ( v180 > 0 )
          {
LABEL_83:
            v91 = 1;
            v92 = 0;
            do
            {
              v93 = *(char *)(v40 + v91 - 1);
              a3[v91 - 1] = v93;
              if ( !v93 )
              {
                v94 = (double *)(v167 + 8 * v91 - 8);
                a5 = *v94;
                a6 = v33 + *v94;
                *v94 = a6;
                if ( a5 <= a7 )
                {
                  a3[v91 - 1] = 2;
                  ++v92;
                }
              }
              v95 = v91++;
            }
            while ( *((_DWORD *)v183 + 11) > v95 );
            goto LABEL_88;
          }
          v92 = 0;
        }
LABEL_89:
        *((double *)v13 + 64) = v90;
        *((_DWORD *)v13 + 63) = 0;
        *((_QWORD *)v13 + 57) = 0;
        *((_DWORD *)v13 + 77) = 0;
        *((_QWORD *)v13 + 58) = 0x7FEFFFFFFFFFFFFFLL;
        ClpCholeskyDense::factorizePart2(v13, a3);
        v96 = *((_DWORD *)v13 + 63) + v92;
        v97 = *((double *)v13 + 57);
        v165 = *((double *)v13 + 58);
        if ( *(int *)(*(_QWORD *)(*((_QWORD *)v13 + 4) + 344LL) + 104LL) > 1 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<double>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v150 = (std::ostream *)std::ostream::_M_insert<double>();
          v151 = *(_BYTE **)((char *)v150 + *(_QWORD *)(*(_QWORD *)v150 - 24LL) + 240);
          if ( !v151 )
            std::__throw_bad_cast();
          if ( v151[56] )
          {
            v152 = v151[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v152 = 10;
            v159 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v151 + 48LL);
            if ( v159 != std::ctype<char>::do_widen )
              v152 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double, double, double, double, double, double))v159)(
                       v151,
                       10,
                       v165,
                       a5,
                       a6,
                       a7,
                       v157,
                       v158,
                       v97,
                       a11);
          }
          v153 = (std::ostream *)std::ostream::put(v150, v152);
          std::ostream::flush(v153);
        }
        *((double *)v13 + 3) = v97 / v165;
        if ( v96 || *((_DWORD *)v13 + 20) )
        {
          if ( *((int *)v13 + 11) <= 0 )
          {
            LODWORD(i) = 0;
          }
          else
          {
            v98 = 0;
            for ( i = 0; ; i = (int)i + 1 )
            {
              while ( 1 )
              {
                v100 = a3[v98];
                *(_BYTE *)(*((_QWORD *)v13 + 7) + v98) = v100;
                if ( (_BYTE)v100 == 2 )
                  break;
                if ( *((_DWORD *)v13 + 11) <= (int)++v98 )
                  goto LABEL_96;
              }
              a3[i] = v98;
              *(_BYTE *)(*((_QWORD *)v13 + 7) + v98++) = 0;
              if ( *((_DWORD *)v13 + 11) <= (int)v98 )
                break;
            }
            LODWORD(i) = i + 1;
          }
LABEL_96:
          *((_DWORD *)v13 + 20) = i;
        }
        return 0;
      }
    }
    v53 = v163 + 4 * v51;
    v54 = (unsigned int)(*(_DWORD *)(v171 + 4 * v50) - 1) + 1LL;
    v55 = v164 + 8 * v51;
    v56 = 0;
    while ( 1 )
    {
      v58 = *(int *)(v53 + 4 * v56);
      if ( *(_BYTE *)(v40 + v58) )
        goto LABEL_33;
      if ( (int)v41 < (int)v58 )
      {
        v57 = (double *)(v35 + 8 * v58);
        a5 = *(double *)(v55 + 8 * v56) * v52 + *v57;
        *v57 = a5;
LABEL_33:
        if ( v54 == ++v56 )
          goto LABEL_38;
      }
      else
      {
        if ( (_DWORD)v41 != (_DWORD)v58 )
          goto LABEL_33;
        v59 = *(double *)(v55 + 8 * v56++);
        a5 = v59 * v52;
        v46 = v46 + a5;
        if ( v54 == v56 )
          goto LABEL_38;
      }
    }
  }
  v64 = *(const void **)(v26 + 160);
  v65 = *(_DWORD *)(v26 + 104);
  v166 = *(_DWORD *)(v26 + 108);
  v66 = v65 + v166;
  if ( v64 )
  {
    v67 = __dynamic_cast(
            v64,
            (const struct __class_type_info *)&`typeinfo for'ClpObjective,
            (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
            0);
    v38 = v34 - 1;
    v37 = (__m128d)*(unsigned __int64 *)&v37.m128d_f64[0];
    if ( v67 )
    {
      v68 = (_QWORD *)v67[3];
      if ( v68 )
      {
        v176 = v68[5];
        v168 = v68[6];
        v170 = v68[7];
        v174 = v68[4];
        if ( v166 > 0 )
        {
          v69 = *((_QWORD *)v13 + 15);
          v70 = 0;
          v71 = 1.0;
          while ( 1 )
          {
            v73 = a2[v70];
            v74 = v73;
            if ( v73 < 0.0 )
              v74 = -v73;
            if ( v74 <= 1.0e-100 )
            {
              *(_QWORD *)(v69 + 8 * v70) = 0xD4B249AD2594C37DLL;
            }
            else
            {
              v75 = *(int *)(v168 + 4 * v70);
              v76 = *(_DWORD *)(v170 + 4 * v70);
              v77 = 1.0 / v73;
              if ( (int)v75 < (int)v75 + v76 )
              {
                v78 = (unsigned int)(v76 - 1) + 1LL;
                v79 = v176 + 4 * v75;
                v80 = v174 + 8 * v75;
                for ( j = 0; j != v78; ++j )
                {
                  while ( 1 )
                  {
                    v82 = *(int *)(v79 + 4 * j);
                    if ( (int)v82 <= (int)v70 )
                      break;
                    *(double *)(v35 + 8 * v82) = -*(double *)(v80 + 8 * j);
LABEL_67:
                    if ( ++j == v78 )
                      goto LABEL_71;
                  }
                  if ( (_DWORD)v82 != (_DWORD)v70 )
                    goto LABEL_67;
                  v77 = v77 + *(double *)(v80 + 8 * j);
                }
              }
LABEL_71:
              v83 = -v77;
              if ( v77 < 0.0 )
                v77 = -v77;
              v71 = fmax(v71, v77);
              *(double *)(v69 + 8 * v70) = v83;
              v84 = *(int *)(v172 + 4 * v70);
              if ( (int)v84 < (int)v84 + *(_DWORD *)(v171 + 4 * v70) )
              {
                v85 = v163 + 4 * v84;
                v86 = (unsigned int)(*(_DWORD *)(v171 + 4 * v70) - 1) + 1LL;
                v87 = v164 + 8 * v84;
                v88 = 0;
                do
                {
                  *(_QWORD *)(v35 + 8LL * (v66 + *(_DWORD *)(v85 + 4 * v88))) = *(_QWORD *)(v87 + 8 * v88);
                  v89 = *(double *)(v87 + 8 * v88);
                  if ( v89 < 0.0 )
                    v89 = -v89;
                  ++v88;
                  v71 = fmax(v71, v89);
                }
                while ( v86 != v88 );
              }
            }
            v72 = v36 - v70++;
            v35 = v35 + 8 * v72 - 8;
            if ( (unsigned int)(v166 - 1) + 1LL == v70 )
              goto LABEL_107;
          }
        }
        goto LABEL_193;
      }
    }
  }
  if ( v166 <= 0 )
  {
LABEL_193:
    v71 = 1.0;
    goto LABEL_108;
  }
  v137 = *((_QWORD *)v13 + 15);
  v138 = 0;
  v71 = 1.0;
  do
  {
    v140 = a2[v138 / 4];
    v141 = v140;
    if ( v140 < 0.0 )
      v141 = -v140;
    if ( v141 <= 1.0e-100 )
    {
      *(double *)(v137 + 2 * v138) = -v140;
    }
    else
    {
      v142 = 1.0 / v140;
      v143 = *(_QWORD *)&v142 ^ 0x8000000000000000LL;
      if ( v142 < 0.0 )
        *(_QWORD *)&v142 ^= 0x8000000000000000LL;
      v71 = fmax(v71, v142);
      *(_QWORD *)(v137 + 2 * v138) = v143;
      v144 = *(int *)(v172 + v138);
      if ( (int)v144 < (int)v144 + *(_DWORD *)(v171 + v138) )
      {
        v145 = v163 + 4 * v144;
        v146 = (unsigned int)(*(_DWORD *)(v171 + v138) - 1) + 1LL;
        v147 = v164 + 8 * v144;
        v148 = 0;
        do
        {
          *(_QWORD *)(v35 + 8LL * (v66 + *(_DWORD *)(v145 + 4 * v148))) = *(_QWORD *)(v147 + 8 * v148);
          v149 = *(double *)(v147 + 8 * v148);
          if ( v149 < 0.0 )
            v149 = -v149;
          ++v148;
          v71 = fmax(v71, v149);
        }
        while ( v146 != v148 );
      }
    }
    v139 = 4LL * v36 - v138;
    v138 += 4LL;
    v35 = v35 + 2 * v139 - 8;
  }
  while ( 4LL * (unsigned int)(v166 - 1) + 4 != v138 );
LABEL_107:
  v38 = v36 - v166;
LABEL_108:
  if ( v166 < v66 )
  {
    v102 = v66;
    v103 = 8LL * v38 - 8;
    v104 = v166 - (__int64)v66;
    v105 = &a2[v104];
    v106 = *((_QWORD *)v13 + 15) + v104 * 8;
    do
    {
      v110 = v105[v102];
      v111 = v110;
      if ( v110 < 0.0 )
        v111 = -v110;
      if ( v111 > 1.0e-100 )
      {
        v107 = 1.0 / v110;
        v108 = 1.0 / v110 >= 0.0;
        v109 = -(1.0 / v110);
        if ( !v108 )
          v107 = v109;
        v71 = fmax(v71, v107);
      }
      else
      {
        v109 = -1.0e100;
      }
      *(double *)(v106 + v102 * 8) = v109;
      *(_QWORD *)(v35 + v102 * 8) = 0xBFF0000000000000LL;
      ++v102;
      v35 += v103;
      v103 -= 8;
    }
    while ( v65 + v166 + (unsigned __int64)(unsigned int)(v65 - 1) + 1 != v102 );
  }
  if ( v65 > 0 )
  {
    v112 = *((_QWORD *)v13 + 15);
    v113 = ((unsigned __int64)(v112 + 8LL * v66) >> 3) & 1;
    if ( (unsigned int)(v65 - 1) <= 4 )
    {
      v120 = 0;
LABEL_125:
      *(double *)(v112 + 8LL * (int)(v120 + v66)) = v37.m128d_f64[0];
      if ( v65 > (int)(v120 + 1) )
      {
        *(double *)(v112 + 8LL * (int)(v66 + v120 + 1)) = v37.m128d_f64[0];
        if ( (int)(v120 + 2) < v65 )
        {
          *(double *)(v112 + 8LL * (int)(v66 + v120 + 2)) = v37.m128d_f64[0];
          v121 = v120 + 3;
          if ( (int)(v120 + 3) < v65 )
          {
            v122 = v120 + 4;
            *(double *)(v112 + 8LL * (int)(v66 + v121)) = v37.m128d_f64[0];
            if ( v122 < v65 )
              *(double *)(v112 + 8LL * (v66 + v122)) = v37.m128d_f64[0];
          }
        }
      }
      goto LABEL_130;
    }
    v114 = 0;
    if ( (_DWORD)v113 )
    {
      *(double *)(v112 + 8LL * v66) = v37.m128d_f64[0];
      v114 = 1;
    }
    v115 = v65 - v113;
    v116 = _mm_unpacklo_pd(v37, v37);
    v117 = v112 + 8 * (v66 + v113);
    v118 = (unsigned int)(v65 - v113) >> 1;
    v119 = 0;
    do
    {
      ++v119;
      v117 += 16;
      *(__m128d *)(v117 - 16) = v116;
    }
    while ( v119 < v118 );
    v120 = (v115 & 0xFFFFFFFE) + v114;
    if ( (v115 & 0xFFFFFFFE) != v115 )
      goto LABEL_125;
  }
LABEL_130:
  v123 = v71 * 9.999999999999999e-21;
  if ( v123 >= 9.999999999999999e-12 )
    v124 = 9.999999999999999e-12;
  else
    v124 = fmax(9.999999999999999e-21, v123);
  *((double *)v13 + 64) = v124;
  *((_DWORD *)v13 + 63) = 0;
  *((_QWORD *)v13 + 57) = 0;
  *((_DWORD *)v13 + 77) = v66;
  *((_QWORD *)v13 + 58) = 0x7FEFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v180 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v125 = (int *)operator new[](4LL * v180);
  v126 = *((_DWORD *)v13 + 11);
  v127 = v125;
  if ( v126 )
  {
    if ( v126 / 8 <= 0 )
    {
      v162 = v125;
    }
    else
    {
      v160 = (unsigned int)(v126 / 8 - 1);
      v161 = (__int64)&v125[8 * v160 + 8];
      do
      {
        *(_OWORD *)v125 = 0;
        v125 += 8;
        *((_OWORD *)v125 - 1) = 0;
      }
      while ( (int *)v161 != v125 );
      v162 = &v127[8 * (int)v160 + 8];
    }
    switch ( v126 % 8 )
    {
      case 1:
        goto LABEL_191;
      case 2:
        goto LABEL_190;
      case 3:
        goto LABEL_189;
      case 4:
        goto LABEL_188;
      case 5:
        goto LABEL_187;
      case 6:
        goto LABEL_186;
      case 7:
        v162[6] = 0;
LABEL_186:
        v162[5] = 0;
LABEL_187:
        v162[4] = 0;
LABEL_188:
        v162[3] = 0;
LABEL_189:
        v162[2] = 0;
LABEL_190:
        v162[1] = 0;
LABEL_191:
        *v162 = 0;
        break;
      default:
        break;
    }
  }
  ClpCholeskyDense::factorizePart2(v13, v127);
  v128 = *((_QWORD *)v13 + 4);
  v129 = *(_QWORD *)(v128 + 1208);
  v130 = *(_QWORD *)(v128 + 1216);
  *((double *)v13 + 3) = *((double *)v13 + 57) / *((double *)v13 + 58);
  if ( v66 <= 0 )
  {
    v134 = 0;
  }
  else
  {
    v131 = 0;
    v132 = (unsigned int)(v66 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v133 = v127[v131];
        *(_BYTE *)(v131 + *((_QWORD *)v13 + 7)) = 0;
        if ( !v133 )
          break;
        *(_QWORD *)(v129 + 8 * v131++) = *((_QWORD *)v13 + 74);
        if ( v132 == v131 )
          goto LABEL_139;
      }
      *(_QWORD *)(v129 + 8 * v131++) = 0;
    }
    while ( v132 != v131 );
LABEL_139:
    v134 = v66;
  }
  if ( (int)v134 < *((_DWORD *)v13 + 11) )
  {
    v135 = v130 - 8LL * v66;
    do
    {
      while ( 1 )
      {
        v136 = v127[v134];
        *(_BYTE *)(v134 + *((_QWORD *)v13 + 7)) = 0;
        if ( v136 )
          break;
        *(_QWORD *)(v135 + 8 * v134++) = 0;
        if ( *((_DWORD *)v13 + 11) <= (int)v134 )
          return 0;
      }
      *(_QWORD *)(v135 + 8 * v134++) = *((_QWORD *)v13 + 88);
    }
    while ( (int)v134 < *((_DWORD *)v13 + 11) );
  }
  return 0;
}

