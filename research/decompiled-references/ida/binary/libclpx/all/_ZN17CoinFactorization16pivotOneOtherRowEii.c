__int64 __fastcall CoinFactorization::pivotOneOtherRow(CoinFactorization *this, int a2, int a3)
{
  __int64 v4; // rbp
  bool v6; // cc
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx
  int *v13; // r8
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r13
  __int64 v26; // r14
  int v27; // r9d
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rsi
  double v32; // xmm1_8
  double v33; // xmm0_8
  double v34; // xmm6_8
  __int64 v35; // rbx
  __int64 v36; // rax
  int *v37; // rdi
  int v38; // r11d
  double v39; // xmm6_8
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rax
  _DWORD *v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  __m128d v49; // xmm9
  int v50; // ebx
  __int64 v51; // rdi
  int *v52; // r8
  __int64 v53; // r10
  __int64 v54; // rcx
  int v55; // eax
  int v56; // r9d
  int v57; // r12d
  double *v58; // rdx
  double *v59; // r11
  int *v60; // r10
  int v61; // esi
  double v62; // xmm1_8
  __m128d v63; // xmm0
  __int64 v64; // rdx
  int v65; // ecx
  __int64 v66; // xmm5_8
  __m128d v67; // xmm3
  int v68; // esi
  int v69; // r9d
  __int64 v70; // rax
  __int64 v71; // r11
  double v72; // xmm2_8
  char v73; // r9
  __int64 v74; // r11
  __int64 v75; // rdx
  int v76; // r10d
  double v77; // xmm4_8
  int v78; // ebp
  int v79; // eax
  double v80; // xmm1_8
  double v81; // xmm5_8
  __int64 *v82; // rsi
  __int64 *v83; // rdx
  int *v84; // rax
  int v85; // ecx
  __int64 v86; // xmm0_8
  int *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // r11
  __int64 v92; // r8
  __int64 v93; // rbp
  __int64 v94; // rcx
  _DWORD *v95; // r10
  __int64 v96; // rsi
  int *v97; // rax
  int v98; // r9d
  int v99; // ebx
  int v100; // esi
  int *v101; // r9
  __int64 v102; // rax
  _DWORD *v103; // rdx
  int v104; // edx
  int v105; // eax
  int v106; // ebx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // r11
  __int64 v112; // rbp
  __int64 v113; // rdi
  _DWORD *v114; // r9
  int v115; // r8d
  __int64 v116; // rsi
  __int64 v117; // r9
  __int64 v118; // rdi
  int *v119; // r10
  __int64 v120; // rdi
  _DWORD *v121; // r9
  __int64 v122; // rsi
  __int64 v123; // r9
  int v124; // r9d
  unsigned int v125; // edi
  int v126; // r8d
  unsigned int v127; // ebx
  __int64 v128; // rdi
  unsigned __int64 v129; // r10
  __int64 v130; // rdi
  __int64 v131; // rsi
  unsigned int v132; // r8d
  signed int v133; // r9d
  int v134; // esi
  int v135; // r8d
  int v136; // edi
  signed int v137; // r9d
  int v138; // esi
  __int64 v139; // r11
  __int64 v140; // rbx
  __int64 v141; // rdi
  __int64 v142; // rsi
  int v143; // r8d
  __int64 v144; // rsi
  int *v145; // r9
  int *v146; // rsi
  int v147; // r8d
  __int64 v148; // rdi
  _DWORD *v149; // rdx
  _DWORD *v150; // rcx
  int v151; // r9d
  __int64 v152; // rax
  __int64 v153; // r10
  __int64 v154; // xmm0_8
  double v155; // xmm0_8
  int v156; // r9d
  double v157; // xmm4_8
  int v158; // r9d
  __int64 v159; // rax
  __int64 v160; // r11
  double v161; // xmm4_8
  __int64 v162; // r11
  __m128d v163; // xmm0
  int v164; // r10d
  __m128d v165; // xmm2
  _BYTE *v166; // rbp
  char v167; // si
  std::ostream *v168; // rax
  __int64 v169; // rsi
  __int64 (__fastcall *v170)(__int64, unsigned int); // rax
  int v171; // [rsp+8h] [rbp-160h]
  __int64 v172; // [rsp+8h] [rbp-160h]
  int v173; // [rsp+14h] [rbp-154h]
  int *v174; // [rsp+18h] [rbp-150h]
  __int64 v175; // [rsp+20h] [rbp-148h]
  _DWORD *v176; // [rsp+28h] [rbp-140h]
  int v177; // [rsp+28h] [rbp-140h]
  double *v178; // [rsp+30h] [rbp-138h]
  int *v179; // [rsp+30h] [rbp-138h]
  int v180; // [rsp+38h] [rbp-130h]
  __int64 v182; // [rsp+40h] [rbp-128h]
  __int64 v183; // [rsp+48h] [rbp-120h]
  __int64 v184; // [rsp+50h] [rbp-118h]
  __int64 v185; // [rsp+60h] [rbp-108h]
  int v186; // [rsp+68h] [rbp-100h]
  signed int v187; // [rsp+6Ch] [rbp-FCh]
  unsigned __int64 v188; // [rsp+70h] [rbp-F8h]
  __int64 v189; // [rsp+78h] [rbp-F0h]
  int v190; // [rsp+80h] [rbp-E8h]
  int v191; // [rsp+84h] [rbp-E4h]
  __int64 v192; // [rsp+88h] [rbp-E0h]
  __int64 v193; // [rsp+90h] [rbp-D8h]
  __int64 v194; // [rsp+98h] [rbp-D0h]
  _DWORD *v195; // [rsp+A8h] [rbp-C0h]
  int *v196; // [rsp+B8h] [rbp-B0h]
  __int64 v197; // [rsp+C0h] [rbp-A8h]
  int v198; // [rsp+C8h] [rbp-A0h]
  int v199; // [rsp+CCh] [rbp-9Ch]
  __int64 v200; // [rsp+D0h] [rbp-98h]
  _DWORD *v201; // [rsp+D8h] [rbp-90h]
  double v202; // [rsp+E8h] [rbp-80h]

  v4 = a3;
  v6 = *((_DWORD *)this + 54) <= -2;
  v7 = *((_QWORD *)this + 26);
  v8 = *((_QWORD *)this + 29);
  v9 = *((_QWORD *)this + 23);
  v10 = *((_QWORD *)this + 50);
  if ( v6 )
    v7 = 0;
  if ( *((int *)this + 60) <= -2 )
    v8 = 0;
  v183 = v8;
  v11 = *((_QWORD *)this + 32);
  if ( *((int *)this + 66) <= -2 )
    v11 = 0;
  v184 = v11;
  v12 = 4LL * a2;
  v13 = (int *)(v7 + v12);
  v194 = v12;
  if ( *((int *)this + 48) <= -2 )
    v9 = 0;
  v14 = *(_DWORD *)(v9 + 4LL * a2);
  v15 = *((_QWORD *)this + 53);
  v189 = v9;
  v171 = *v13;
  v16 = *((_QWORD *)this + 81);
  if ( *((int *)this + 164) <= -2 )
    v16 = 0;
  v182 = v16;
  v17 = *(int *)(v16 + 4 * v4);
  if ( *((int *)this + 102) <= -2 )
    v10 = 0;
  v192 = v10;
  if ( *((int *)this + 108) <= -2 )
    v15 = 0;
  v18 = *(int *)(v12 + v10);
  v19 = *(int *)(v15 + v12);
  *(_DWORD *)(v10 + 4 * v19) = v18;
  *(_DWORD *)(v15 + 4 * v18) = v19;
  *(_DWORD *)(v12 + v10) = *((_DWORD *)this + 14);
  *(_DWORD *)(v15 + v12) = -2;
  *v13 = 0;
  v20 = *((int *)this + 176);
  if ( *((_DWORD *)this + 177) <= (int)v20 )
  {
    if ( (*((_BYTE *)this + 496) & 4) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v166 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v166 )
        std::__throw_bad_cast();
      if ( v166[56] )
      {
        v167 = v166[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v167 = 10;
        v170 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v166 + 48LL);
        if ( v170 != std::ctype<char>::do_widen )
          v167 = v170((__int64)v166, 10u);
      }
      v168 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v167);
      std::ostream::flush(v168);
    }
    return 0;
  }
  v22 = *((_QWORD *)this + 95);
  v23 = *((_QWORD *)this + 89);
  v24 = *((_QWORD *)this + 92);
  v25 = *((_QWORD *)this + 75);
  v26 = *((_QWORD *)this + 78);
  if ( *((int *)this + 192) <= -2 )
    v22 = 0;
  if ( *((int *)this + 180) <= -2 )
    v23 = 0;
  v6 = *((_DWORD *)this + 186) <= -2;
  *(_DWORD *)(v22 + 4LL * *((int *)this + 15)) = v20;
  v27 = *((_DWORD *)this + 15) + 1;
  if ( v6 )
    v24 = 0;
  *((_DWORD *)this + 15) = v27;
  *(_DWORD *)(v22 + 4LL * v27) = v20 + 1;
  ++*((_DWORD *)this + 176);
  v28 = *((_QWORD *)this + 56);
  if ( *((int *)this + 114) <= -2 )
    v28 = 0;
  v188 = v28;
  if ( *((int *)this + 152) <= -2 )
    v25 = 0;
  if ( *((int *)this + 158) <= -2 )
    v26 = 0;
  v29 = 4 * v17;
  v30 = *(_DWORD *)(v26 + 4 * v17);
  v31 = v17 + 1;
  v32 = *(double *)(v25 + 8 * v31);
  v33 = *(double *)(v25 + 8 * v31 - 8);
  v173 = v30;
  if ( v30 == a2 )
  {
    v32 = *(double *)(v25 + 8 * v31 - 8);
    v33 = *(double *)(v25 + 8 * v31);
    v173 = *(_DWORD *)(v26 + v29 + 4);
  }
  v34 = 1.0 / v32;
  v35 = 4LL * v173;
  v36 = *((_QWORD *)this + 69);
  v37 = (int *)(v35 + v7);
  v200 = v35;
  v38 = *v37;
  v196 = v37;
  if ( *((int *)this + 140) <= -2 )
    v36 = 0;
  v199 = *v37;
  *(double *)(v36 + 8LL * *((int *)this + 14)) = v34;
  v39 = v34 * v33;
  *(_DWORD *)(v183 + 4 * v4) = 0;
  *(_DWORD *)(v24 + 4 * v20) = v173;
  *(double *)(v23 + 8 * v20) = v39;
  v40 = *(int *)(v35 + v189);
  v201 = (_DWORD *)(v35 + v189);
  v41 = 0;
  v42 = v40 + v38;
  v198 = *(_DWORD *)(v35 + v189);
  if ( *((int *)this + 128) > -2 )
    v41 = *((_QWORD *)this + 63);
  v43 = 4 * v40;
  v175 = v41;
  v195 = (_DWORD *)(v41 + v43);
  if ( (_DWORD)v4 == *(_DWORD *)(v41 + v43) )
  {
    v45 = (_DWORD *)(v41 + v43);
    v46 = v41;
  }
  else
  {
    v44 = v41 + v43 + 4;
    do
    {
      v45 = (_DWORD *)v44;
      v44 += 4;
    }
    while ( *(_DWORD *)(v44 - 4) != a3 );
    v46 = v175;
  }
  v190 = v42 - 1;
  *v45 = *(_DWORD *)(v46 + 4LL * (v42 - 1));
  v47 = *((_QWORD *)this + 38);
  v48 = 0;
  if ( *((int *)this + 78) <= -2 )
    v47 = 0;
  v185 = v47;
  if ( *((int *)this + 90) > -2 )
    v48 = *((_QWORD *)this + 44);
  v193 = v48;
  v186 = v171 + v14 - 1;
  if ( v186 < v14 )
  {
    v104 = 0;
    v187 = 0;
  }
  else
  {
    v49 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    v191 = 0;
    v172 = v14;
    v187 = 0;
    v180 = a2;
    v197 = v46 + v43 + 4;
    do
    {
      v50 = *(_DWORD *)(v175 + 4 * v172);
      if ( a3 != v50 )
      {
        v51 = 4LL * v50;
        v52 = (int *)(v182 + v51);
        v174 = (int *)(v183 + v51);
        v53 = *(int *)(v182 + v51);
        v54 = 4 * v53;
        v55 = *(_DWORD *)(v182 + v51);
        v56 = v53 + *(_DWORD *)(v183 + v51);
        v57 = v55 + 1;
        v58 = (double *)(v25 + 8 * v53);
        v59 = v58 + 1;
        v60 = (int *)(v26 + 4 * v53 + 4);
        v176 = (_DWORD *)(v26 + v54);
        v61 = *(_DWORD *)(v26 + v54);
        v178 = v58;
        v62 = *v58;
        v63 = (__m128d)*((unsigned __int64 *)v58 + 1);
        v64 = v55 + 1;
        v65 = *v60;
        if ( v180 == v61 )
        {
          if ( v56 > v57 )
          {
            v158 = v56 - v55;
            v159 = v57 + 1LL;
            v160 = (unsigned int)(v158 - 2);
            v68 = v57;
            v78 = -1;
            v161 = 0.0;
            v73 = 0;
            v162 = v159 + v160;
            v67 = 0;
            v66 = *(_QWORD *)&v49.m128d_f64[0];
            while ( 1 )
            {
              v164 = *(_DWORD *)(v26 + 4 * v64 + 4);
              v165 = (__m128d)*(unsigned __int64 *)(v25 + 8 * v64 + 8);
              if ( v173 == v65 )
              {
                v161 = v63.m128d_f64[0];
                v73 = 1;
                v64 = v159;
                v65 = v164;
                v63 = v165;
                if ( v162 == v159 )
                  goto LABEL_167;
              }
              else
              {
                *(_DWORD *)(v26 + 4LL * v68) = v65;
                *(double *)(v25 + 8LL * v68) = v63.m128d_f64[0];
                v163 = _mm_and_pd(v63, v49);
                if ( v163.m128d_f64[0] > v67.m128d_f64[0] )
                  v78 = v68;
                else
                  v163 = v67;
                ++v68;
                v64 = v159;
                v67 = v163;
                v65 = v164;
                v63 = v165;
                if ( v162 == v159 )
                {
LABEL_167:
                  v72 = v62;
                  v51 = 4LL * v50;
                  v79 = v68 - v57;
                  v62 = v161;
                  goto LABEL_58;
                }
              }
              ++v159;
            }
          }
          v72 = v62;
          v68 = v55 + 1;
          v79 = 0;
          v62 = 0.0;
          v78 = -1;
          v73 = 0;
          v67.m128d_f64[0] = 0.0;
          v66 = *(_QWORD *)&v49.m128d_f64[0];
        }
        else if ( v173 == v61 )
        {
          if ( v56 > v57 )
          {
            v151 = v56 - v55;
            v152 = v57 + 1LL;
            v68 = v57;
            v78 = -1;
            v72 = 0.0;
            v153 = v152 + (unsigned int)(v151 - 2);
            v67.m128d_f64[0] = 0.0;
            v66 = *(_QWORD *)&v49.m128d_f64[0];
            while ( 1 )
            {
              v156 = *(_DWORD *)(v26 + 4 * v64 + 4);
              v157 = *(double *)(v25 + 8 * v64 + 8);
              if ( v180 == v65 )
              {
                v72 = v63.m128d_f64[0];
                v64 = v152;
                v63.m128d_f64[0] = v157;
                v65 = v156;
                if ( v153 == v152 )
                  goto LABEL_158;
              }
              else
              {
                *(_DWORD *)(v26 + 4LL * v68) = v65;
                *(double *)(v25 + 8LL * v68) = v63.m128d_f64[0];
                v65 = v156;
                v154 = *(_QWORD *)&v63.m128d_f64[0] & *(_QWORD *)&v49.m128d_f64[0];
                v64 = v152;
                v6 = *(double *)&v154 <= v67.m128d_f64[0];
                v155 = fmax(*(double *)&v154, v67.m128d_f64[0]);
                if ( !v6 )
                  v78 = v68;
                ++v68;
                v67.m128d_f64[0] = v155;
                v63.m128d_f64[0] = v157;
                if ( v153 == v152 )
                {
LABEL_158:
                  v73 = 1;
                  v79 = v68 - v57;
                  goto LABEL_58;
                }
              }
              ++v152;
            }
          }
          v68 = v55 + 1;
          v79 = 0;
          v78 = -1;
          v72 = 0.0;
          v73 = 1;
          v67.m128d_f64[0] = 0.0;
          v66 = *(_QWORD *)&v49.m128d_f64[0];
        }
        else
        {
          v66 = 0x7FFFFFFFFFFFFFFFLL;
          *v59 = v62;
          *v60 = v61;
          v67.m128d_f64[0] = fabs(v62);
          v68 = v55 + 2;
          if ( v56 > v57 )
          {
            v69 = v56 - v55;
            v70 = v57 + 1LL;
            v71 = (unsigned int)(v69 - 2);
            v62 = 0.0;
            v72 = 0.0;
            v73 = 0;
            v74 = v70 + v71;
            while ( 1 )
            {
              v76 = *(_DWORD *)(v26 + 4 * v64 + 4);
              v77 = *(double *)(v25 + 8 * v64 + 8);
              if ( v180 == v65 )
              {
                v72 = v63.m128d_f64[0];
                v64 = v70;
                v63.m128d_f64[0] = v77;
                v65 = v76;
                if ( v74 == v70 )
                  goto LABEL_57;
              }
              else
              {
                if ( v173 == v65 )
                {
                  v62 = v63.m128d_f64[0];
                  v73 = 1;
                }
                else
                {
                  v75 = v68++;
                  *(_DWORD *)(v26 + 4 * v75) = v65;
                  *(double *)(v25 + 8 * v75) = v63.m128d_f64[0];
                }
                v64 = v70;
                v65 = v76;
                v63.m128d_f64[0] = v77;
                if ( v74 == v70 )
                {
LABEL_57:
                  v78 = v57;
                  v79 = v68 - v57;
                  goto LABEL_58;
                }
              }
              ++v70;
            }
          }
          v78 = v55 + 1;
          v73 = 0;
          v79 = v68 - v57;
          v62 = 0.0;
          v72 = 0.0;
        }
LABEL_58:
        *v178 = v72;
        *v176 = v180;
        v80 = v62 - v72 * v39;
        *v174 = v79;
        *(_QWORD *)&v81 = v66 & *(_QWORD *)&v80;
        ++*(_DWORD *)(v184 + v51);
        ++*v52;
        if ( v81 <= *((double *)this + 1) )
        {
          if ( v73 )
          {
            ++v191;
            if ( v50 == *v195 )
            {
              v150 = v195;
            }
            else
            {
              v149 = (_DWORD *)v197;
              do
                v150 = v149++;
              while ( *(v149 - 1) != v50 );
            }
            *v150 = *(_DWORD *)(v175 + 4LL * --v190);
          }
        }
        else
        {
          if ( !v73 )
          {
            *(_DWORD *)(v188 + 4LL * v187++) = v50;
            if ( *(_DWORD *)(v182 + 4LL * *(int *)(v193 + 4LL * v50))
               - v68
               - *(_DWORD *)(v184 + 4LL * *(int *)(v193 + 4LL * v50)) <= 0 )
            {
              v179 = v52;
              v202 = v81;
              v177 = *v174;
              if ( !(unsigned __int8)CoinFactorization::getColumnSpace(this, v50, *v174 + 1) )
                return 0;
              v81 = v202;
              v68 = *v179 + v177;
              v78 = *v179 + v78 - v57;
              v57 = *v179;
            }
          }
          *(double *)(v25 + 8LL * v68) = v80;
          *(_DWORD *)(v26 + 4LL * v68) = v173;
          if ( v81 > v67.m128d_f64[0] )
            v78 = v68;
          v79 = v68 + 1 - v57;
        }
        *v174 = v79;
        if ( v78 >= 0 )
        {
          v82 = (__int64 *)(v25 + 8LL * v57);
          v83 = (__int64 *)(v25 + 8LL * v78);
          v84 = (int *)(v26 + 4LL * v78);
          v85 = *v84;
          v86 = *v83;
          *v83 = *v82;
          v87 = (int *)(v26 + 4LL * v57);
          *v84 = *v87;
          *v82 = v86;
          *v87 = v85;
        }
        v88 = 4LL * (v50 + *((_DWORD *)this + 8));
        if ( *(_DWORD *)(v185 + v88) != -2 )
        {
          v89 = 0;
          v90 = *((_QWORD *)this + 38);
          v91 = 0;
          v92 = *((_QWORD *)this + 35);
          v93 = 0;
          v94 = *((_QWORD *)this + 41);
          if ( *((int *)this + 78) > -2 )
            v91 = *((_QWORD *)this + 38);
          v95 = (_DWORD *)(v91 + v88);
          v96 = *(int *)(v91 + 4LL * (v50 + *((_DWORD *)this + 8)));
          if ( *((int *)this + 72) > -2 )
            v93 = *((_QWORD *)this + 35);
          if ( *((int *)this + 84) > -2 )
            v89 = *((_QWORD *)this + 41);
          v97 = (int *)(v89 + v88);
          v98 = *v97;
          if ( *v97 < 0 )
            *(_DWORD *)(v93 + 4LL * (-2 - v98)) = v96;
          else
            *(_DWORD *)(v91 + 4LL * v98) = v96;
          if ( (int)v96 >= 0 )
            *(_DWORD *)(v89 + 4 * v96) = v98;
          *v95 = -2;
          *v97 = -2;
          v99 = *((_DWORD *)this + 8) + v50;
          v100 = *v174;
          if ( *((int *)this + 78) <= -2 )
            v90 = 0;
          if ( *((int *)this + 72) <= -2 )
            v92 = 0;
          if ( *((int *)this + 84) <= -2 )
            v94 = 0;
          v101 = (int *)(v92 + 4LL * v100);
          v102 = *v101;
          *(_DWORD *)(v94 + 4LL * v99) = -2 - v100;
          v103 = (_DWORD *)(v90 + 4LL * v99);
          *v101 = v99;
          if ( (int)v102 < 0 )
          {
            *v103 = -1;
          }
          else
          {
            *v103 = v102;
            *(_DWORD *)(v94 + 4 * v102) = v99;
          }
        }
      }
      ++v172;
    }
    while ( v186 >= (int)v172 );
    v104 = v187 - v191;
  }
  v105 = *(_DWORD *)(v189 + 4LL * *(int *)(v192 + 4LL * v173));
  *((_DWORD *)this + 18) += v104;
  v106 = v190 - v198 + v187;
  if ( v105 - v190 < v187 )
  {
    *v196 = v190 - v198;
    if ( !(unsigned __int8)CoinFactorization::getRowSpace(this, v173, v106) )
      return 0;
    v190 = *v201 + v190 - v198;
  }
  v107 = *((_QWORD *)this + 38);
  v108 = *((_QWORD *)this + 35);
  *v196 = v106;
  v109 = *((_QWORD *)this + 41);
  if ( v199 != v106 )
  {
    v110 = 0;
    v111 = 0;
    v112 = 0;
    if ( *((int *)this + 78) > -2 )
      v111 = v107;
    v113 = *(int *)(v111 + 4LL * v173);
    if ( *((int *)this + 72) > -2 )
      v112 = v108;
    if ( *((int *)this + 84) > -2 )
      v110 = *((_QWORD *)this + 41);
    v114 = (_DWORD *)(v110 + v200);
    v115 = *(_DWORD *)(v110 + 4LL * v173);
    if ( v115 < 0 )
      *(_DWORD *)(v112 + 4LL * (-2 - v115)) = v113;
    else
      *(_DWORD *)(v111 + 4LL * v115) = v113;
    if ( (int)v113 >= 0 )
      *(_DWORD *)(v110 + 4 * v113) = v115;
    *(_DWORD *)(v111 + 4LL * v173) = -2;
    v116 = 0;
    *v114 = -2;
    v117 = 0;
    v118 = 0;
    if ( *((int *)this + 78) > -2 )
      v117 = v107;
    if ( *((int *)this + 72) > -2 )
      v118 = v108;
    v119 = (int *)(v118 + 4LL * v106);
    v120 = *v119;
    if ( *((int *)this + 84) > -2 )
      v116 = v109;
    v121 = (_DWORD *)(v200 + v117);
    *(_DWORD *)(v116 + 4LL * v173) = -2 - v106;
    *v119 = v173;
    if ( (int)v120 < 0 )
    {
      *v121 = -1;
    }
    else
    {
      *v121 = v120;
      *(_DWORD *)(v116 + 4 * v120) = v173;
    }
  }
  if ( v187 )
  {
    v122 = 4LL * v190;
    v123 = v175 + v122;
    if ( (v188 >= v175 + v122 + 16 || v175 + v122 >= v188 + 16) && (unsigned int)v187 > 0xC )
    {
      v124 = 0;
      v125 = -(int)(v188 >> 2) & 3;
      if ( v125 )
      {
        *(_DWORD *)(v175 + 4LL * v190) = *(_DWORD *)v188;
        if ( v125 == 1 )
        {
          ++v190;
          v124 = 1;
        }
        else
        {
          v126 = v190 + 2;
          *(_DWORD *)(v175 + 4LL * (v190 + 1)) = *(_DWORD *)(v188 + 4);
          if ( v125 == 2 )
          {
            v190 += 2;
            v124 = 2;
          }
          else
          {
            v190 += 3;
            *(_DWORD *)(v175 + 4LL * v126) = *(_DWORD *)(v188 + 8);
            v124 = 3;
          }
        }
      }
      v127 = v187 - v125;
      v128 = 4LL * v125;
      v129 = v188 + v128;
      v130 = v175 + v122 + v128;
      v131 = 0;
      v132 = 0;
      do
      {
        ++v132;
        *(__m128i *)(v130 + v131) = _mm_load_si128((const __m128i *)(v129 + v131));
        v131 += 16;
      }
      while ( v132 < v127 >> 2 );
      v133 = (v127 & 0xFFFFFFFC) + v124;
      v134 = (v127 & 0xFFFFFFFC) + v190;
      if ( (v127 & 0xFFFFFFFC) != v127 )
      {
        *(_DWORD *)(v175 + 4LL * v134) = *(_DWORD *)(v188 + 4LL * v133);
        if ( v133 + 1 < v187 )
        {
          *(_DWORD *)(v175 + 4LL * (v134 + 1)) = *(_DWORD *)(v188 + 4LL * (v133 + 1));
          if ( v187 > v133 + 2 )
          {
            *(_DWORD *)(v175 + 4LL * (v134 + 2)) = *(_DWORD *)(v188 + 4LL * (v133 + 2));
            if ( v187 > v133 + 3 )
            {
              v135 = v134 + 4;
              *(_DWORD *)(v175 + 4LL * (v134 + 3)) = *(_DWORD *)(v188 + 4LL * (v133 + 3));
              v136 = v133 + 4;
              if ( v187 > v133 + 4 )
              {
                v137 = v133 + 5;
                v138 = v134 + 5;
                *(_DWORD *)(v175 + 4LL * v135) = *(_DWORD *)(v188 + 4LL * v136);
                if ( v187 > v137 )
                  *(_DWORD *)(v175 + 4LL * v138) = *(_DWORD *)(v188 + 4LL * v137);
              }
            }
          }
        }
      }
    }
    else
    {
      v169 = 0;
      do
      {
        *(_DWORD *)(v123 + v169) = *(_DWORD *)(v188 + v169);
        v169 += 4;
      }
      while ( v169 != 4LL * (unsigned int)(v187 - 1) + 4 );
    }
  }
  v139 = 0;
  v140 = 0;
  v141 = 0;
  if ( *((int *)this + 78) > -2 )
    v139 = v107;
  v142 = *(int *)(v139 + v194);
  if ( *((int *)this + 72) > -2 )
    v140 = v108;
  if ( *((int *)this + 84) > -2 )
    v141 = v109;
  v143 = *(_DWORD *)(v141 + v194);
  if ( v143 < 0 )
    *(_DWORD *)(v140 + 4LL * (-2 - v143)) = v142;
  else
    *(_DWORD *)(v139 + 4LL * v143) = v142;
  if ( (int)v142 >= 0 )
    *(_DWORD *)(v141 + 4 * v142) = v143;
  *(_DWORD *)(v139 + v194) = -2;
  *(_DWORD *)(v141 + v194) = -2;
  if ( *((int *)this + 78) <= -2 )
    v107 = 0;
  if ( *((int *)this + 72) <= -2 )
    v108 = 0;
  if ( *((int *)this + 84) <= -2 )
    v109 = 0;
  v144 = 4LL * (*((_DWORD *)this + 8) + a3);
  v145 = (int *)(v107 + v144);
  v146 = (int *)(v109 + v144);
  v147 = *v146;
  v148 = *v145;
  if ( *v146 < 0 )
    *(_DWORD *)(v108 + 4LL * (-2 - v147)) = v148;
  else
    *(_DWORD *)(v107 + 4LL * v147) = v148;
  if ( (int)v148 >= 0 )
    *(_DWORD *)(v109 + 4 * v148) = v147;
  *v145 = -2;
  *v146 = -2;
  return 1;
}

