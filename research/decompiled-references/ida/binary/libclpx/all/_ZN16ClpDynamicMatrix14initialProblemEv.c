__int64 __fastcall ClpDynamicMatrix::initialProblem(ClpDynamicMatrix *this, __m128 a2)
{
  ClpDynamicMatrix *v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ebx
  ClpDynamicMatrix *v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r11
  _BYTE *v12; // r10
  int *v13; // rdx
  int v14; // edi
  int v15; // esi
  __int64 v16; // r8
  int v17; // edx
  int v18; // ebx
  char v19; // al
  __int64 v20; // rsi
  double *v21; // rdx
  double v22; // xmm1_8
  __int64 v23; // rsi
  char v24; // al
  _BYTE *v25; // rcx
  char v26; // si
  __int64 v27; // rbx
  int v28; // r12d
  __int64 v29; // r13
  int v30; // ecx
  int *v31; // rax
  int v32; // r14d
  int v33; // edx
  int v34; // esi
  CoinPackedMatrix *v35; // rdi
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  _DWORD *v43; // r9
  unsigned __int64 v44; // r10
  unsigned int v45; // r8d
  int v46; // edi
  int v47; // r10d
  int v48; // r9d
  __int64 v49; // rdi
  __int64 v50; // xmm0_8
  __int64 v51; // rdi
  __int64 v52; // xmm0_8
  __int64 v53; // r14
  __int64 v54; // rdi
  __int64 v55; // rdx
  unsigned int v56; // r13d
  __int64 v57; // r14
  __int64 v58; // rdx
  unsigned int v59; // r11d
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdi
  unsigned int v63; // r15d
  int v64; // r9d
  unsigned int v65; // r10d
  __int64 v66; // rax
  int v67; // edi
  __int64 v68; // rax
  int v69; // edx
  __int64 v70; // rax
  int v71; // edi
  __int64 v72; // rax
  int v73; // edx
  unsigned int v74; // eax
  int v75; // edx
  int v76; // r10d
  __int64 v77; // rax
  int v78; // r9d
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rsi
  unsigned __int64 v85; // xmm0_8
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned __int64 *v89; // rcx
  _QWORD *v90; // rdi
  int v91; // eax
  _BYTE *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  int *v95; // rbx
  int *v96; // rdx
  __int64 v97; // rsi
  signed int v98; // r15d
  int v99; // edx
  int v100; // edi
  _DWORD *v101; // r9
  int v102; // edx
  int v103; // r8d
  int v104; // edx
  __int64 v105; // r10
  unsigned int v106; // ecx
  unsigned int v107; // r8d
  signed int v108; // r9d
  unsigned int v109; // r11d
  __int64 v110; // rcx
  __m128i v111; // xmm3
  unsigned int v112; // edx
  __m128i si128; // xmm2
  __m128i v114; // xmm0
  int v115; // ecx
  int v116; // edx
  __int64 v117; // r9
  int v118; // edx
  __int64 v119; // r10
  __int64 v120; // rcx
  _DWORD *v121; // r8
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // rcx
  __int64 v125; // rdx
  int v126; // ebp
  __int64 v127; // r13
  int v128; // esi
  ClpDynamicMatrix *v129; // r12
  __int64 v130; // r14
  int v131; // esi
  __int64 v132; // rdx
  double *v133; // r10
  double *v134; // r11
  double *v135; // rdx
  _BYTE *v136; // rbx
  int v137; // eax
  __int64 result; // rax
  int v139; // eax
  __int64 v140; // rbx
  __int64 v141; // r10
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // rsi
  int v145; // r11d
  int v146; // r9d
  __int64 v147; // rcx
  _BYTE *v148; // rax
  _BYTE *v149; // rdx
  unsigned __int64 v150; // rax
  __int64 v151; // r11
  int v152; // [rsp+0h] [rbp-E8h]
  __int64 v153; // [rsp+0h] [rbp-E8h]
  int v154; // [rsp+8h] [rbp-E0h]
  __int64 v155; // [rsp+8h] [rbp-E0h]
  __int64 v156; // [rsp+10h] [rbp-D8h]
  __int64 v157; // [rsp+18h] [rbp-D0h]
  __int64 v158; // [rsp+20h] [rbp-C8h]
  int v159; // [rsp+28h] [rbp-C0h]
  int v160; // [rsp+28h] [rbp-C0h]
  int v161; // [rsp+2Ch] [rbp-BCh]
  __int64 v162; // [rsp+30h] [rbp-B8h]
  __int64 v163; // [rsp+38h] [rbp-B0h]
  __int64 v164; // [rsp+40h] [rbp-A8h]
  __int64 v165; // [rsp+48h] [rbp-A0h]
  __int64 v166; // [rsp+50h] [rbp-98h]
  int v167; // [rsp+58h] [rbp-90h]
  int v168; // [rsp+5Ch] [rbp-8Ch]
  __int64 v169; // [rsp+60h] [rbp-88h]
  __int64 v170; // [rsp+68h] [rbp-80h]
  __int64 v171; // [rsp+70h] [rbp-78h]
  __int64 v172; // [rsp+78h] [rbp-70h]
  __int64 v173; // [rsp+80h] [rbp-68h]
  __int64 v174; // [rsp+88h] [rbp-60h]
  __int64 v175; // [rsp+90h] [rbp-58h]
  __int64 v176; // [rsp+98h] [rbp-50h]
  char v177[64]; // [rsp+A8h] [rbp-40h] BYREF

  v2 = this;
  v3 = *((_QWORD **)this + 11);
  v169 = 0;
  v158 = v3[4];
  v156 = v3[5];
  v164 = v3[6];
  v166 = v3[7];
  v4 = *((_QWORD *)this + 30);
  v5 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))(v4 + 160);
  if ( v5 )
  {
    v169 = (**v5)(v5, 0, 0, v177, 0, 2);
    v4 = *((_QWORD *)v2 + 30);
  }
  v6 = *((int *)v2 + 64);
  v7 = *((_DWORD *)v2 + 50);
  v163 = *(_QWORD *)(v4 + 120);
  v172 = *(_QWORD *)(v4 + 176);
  v173 = *(_QWORD *)(v4 + 184);
  v174 = *(_QWORD *)(v4 + 112);
  v175 = *(_QWORD *)(v4 + 144);
  v176 = *(_QWORD *)(v4 + 152);
  v8 = *(_DWORD *)(v164 + 4 * v6);
  *((_DWORD *)v2 + 62) = v6;
  *((_DWORD *)v2 + 51) = 0;
  v152 = v8;
  if ( v7 > 0 )
  {
    v9 = v2;
    v10 = 0;
    while ( 1 )
    {
      v11 = *((_QWORD *)v9 + 39);
      v161 = v10;
      v157 = 4 * v10;
      v12 = (_BYTE *)(v10 + *((_QWORD *)v9 + 29));
      *(_DWORD *)(*((_QWORD *)v9 + 23) + 4 * v10) = -1;
      v13 = (int *)(v11 + 4 * v10);
      if ( (*v12 & 7) == 1 )
      {
        v139 = *((_DWORD *)v9 + 75);
        v14 = *v13;
        v159 = v139 + v10;
        if ( *v13 < 0 )
          goto LABEL_108;
        v15 = 1;
      }
      else
      {
        v14 = *v13;
        v15 = 0;
        v159 = -1;
        if ( *v13 < 0 )
          goto LABEL_114;
      }
      v16 = *((_QWORD *)v9 + 40);
      v17 = v14;
      v18 = v159;
      do
      {
        while ( 1 )
        {
          v19 = *(_BYTE *)(*((_QWORD *)v9 + 46) + v17) & 7;
          if ( v19 != 1 )
            break;
          v17 = *(_DWORD *)(v16 + 4LL * v17);
          ++v15;
          if ( v17 < 0 )
            goto LABEL_13;
        }
        if ( !v19 )
        {
          ++v15;
          v18 = v17;
        }
        v17 = *(_DWORD *)(v16 + 4LL * v17);
      }
      while ( v17 >= 0 );
LABEL_13:
      v159 = v18;
      if ( v15 > 1 )
      {
        v20 = *((_QWORD *)v9 + 27);
        v167 = *((_DWORD *)v9 + 51) + *((_DWORD *)v9 + 66);
        v21 = (double *)(v174 + 8LL * v167);
        *v21 = 0.0;
        v22 = *(double *)(v20 + 8 * v10);
        if ( v22 <= -1.0e20 )
          v22 = -1.797693134862316e308;
        a2.m128_u64[0] = *(_QWORD *)(*((_QWORD *)v9 + 28) + 8 * v10);
        if ( *(double *)a2.m128_u64 >= 1.0e20 )
          a2.m128_u64[0] = 0x7FEFFFFFFFFFFFFFLL;
        v23 = *((_QWORD *)v9 + 30);
        *(double *)(v175 + 8LL * v167) = v22;
        *(_QWORD *)(v176 + 8LL * v167) = a2.m128_u64[0];
        v24 = *v12 & 7;
        if ( v24 == 1 )
        {
          v148 = (_BYTE *)(*(_QWORD *)(v23 + 264) + *(_DWORD *)(v23 + 108) + v167);
          *v148 = *v148 & 0xF8 | 1;
          *v21 = 0.0;
        }
        else
        {
          v25 = (_BYTE *)(*(_QWORD *)(v23 + 264) + *(_DWORD *)(v23 + 108) + v167);
          v26 = *v25 & 0xF8;
          if ( v24 == 3 )
          {
            *v25 = v26 | 3;
            *v21 = v22;
          }
          else
          {
            *v25 = v26 | 2;
            *v21 = *(double *)a2.m128_u64;
          }
        }
        v27 = 4 * v10;
        if ( *(int *)(*((_QWORD *)v9 + 39) + 4 * v10) >= 0 )
        {
          v171 = v10;
          v28 = *(_DWORD *)(*((_QWORD *)v9 + 39) + 4 * v10);
          while ( 1 )
          {
            while ( 1 )
            {
              v29 = 4LL * v28;
              if ( (*(_BYTE *)(*((_QWORD *)v9 + 46) + v28) & 7) == 1 )
                break;
              v28 = *(_DWORD *)(*((_QWORD *)v9 + 40) + 4LL * v28);
              if ( v28 < 0 )
                goto LABEL_51;
            }
            v30 = *((_DWORD *)v9 + 67);
            v31 = (int *)(*((_QWORD *)v9 + 41) + v29);
            v32 = v31[1] - *v31 + 1;
            v154 = v31[1] - *v31;
            v33 = v32 + v152;
            if ( v32 + v152 > v30 )
            {
              v34 = *((_DWORD *)v9 + 65);
              v35 = *((CoinPackedMatrix **)v9 + 11);
              if ( 3 * v30 / 2 >= v33 )
                v33 = 3 * v30 / 2;
              *((_DWORD *)v9 + 67) = v33;
              CoinPackedMatrix::reserve(v35, v34, v33, 0);
              v36 = *((_QWORD **)v9 + 11);
              v158 = v36[4];
              v156 = v36[5];
              v164 = v36[6];
              v166 = v36[7];
              v31 = (int *)(v29 + *((_QWORD *)v9 + 41));
            }
            *(_DWORD *)(v166 + 4LL * *((int *)v9 + 62)) = v32;
            v37 = *v31;
            a2.m128_u64[0] = *(_QWORD *)(*((_QWORD *)v9 + 44) + 8LL * v28);
            v168 = v37;
            *(_QWORD *)(v169 + 8LL * *((int *)v9 + 62)) = a2.m128_u64[0];
            if ( v154 > 0 )
            {
              v38 = *((_QWORD *)v9 + 43);
              v39 = v37;
              v40 = 8LL * v37;
              v41 = 4 * v39;
              v42 = *((_QWORD *)v9 + 42);
              v165 = v38 + v40;
              v170 = 8LL * v152;
              v43 = (_DWORD *)(4LL * v152 + v156);
              v162 = 4LL * v152;
              v44 = v42 + v41;
              if ( (v38 + v40 >= (unsigned __int64)(v158 + v170 + 32)
                 || v170 + v158 >= (unsigned __int64)(v38 + v40 + 32))
                && (unsigned int)v154 > 0xE
                && ((unsigned __int64)v43 >= v158 + 8 * (v152 + (__int64)v154)
                 || v170 + v158 >= (unsigned __int64)(v156 + 4 * (v152 + (__int64)v154)))
                && (v44 >= v156 + v162 + 16 || (unsigned __int64)v43 >= v42 + v41 + 16) )
              {
                v45 = -(int)(v44 >> 2) & 3;
                if ( v45 )
                {
                  v46 = *(_DWORD *)v44;
                  v47 = 1;
                  *v43 = v46;
                  v48 = v152 + 1;
                  *(_QWORD *)(v158 + 8LL * v152) = *(_QWORD *)(v38 + v40);
                  if ( v45 != 1 )
                  {
                    v49 = v48;
                    v50 = *(_QWORD *)(v38 + v40 + 8);
                    v47 = 2;
                    *(_DWORD *)(v156 + 4LL * v48) = *(_DWORD *)(v42 + v41 + 4);
                    v48 = v152 + 2;
                    *(_QWORD *)(v158 + 8 * v49) = v50;
                    if ( v45 != 2 )
                    {
                      v51 = v48;
                      v47 = 3;
                      v52 = *(_QWORD *)(v38 + v40 + 16);
                      *(_DWORD *)(v156 + 4LL * v48) = *(_DWORD *)(v42 + v41 + 8);
                      v48 = v152 + 3;
                      *(_QWORD *)(v158 + 8 * v51) = v52;
                    }
                  }
                }
                else
                {
                  v48 = v152;
                  v47 = 0;
                }
                v53 = 4LL * v45;
                v54 = 8LL * v45;
                v55 = v53 + v41;
                v56 = v154 - v45;
                v57 = v156 + v162 + v53;
                v58 = v42 + v55;
                v59 = (v154 - v45) >> 2;
                v60 = v38 + v54 + v40;
                v61 = v158 + v170 + v54;
                v62 = 0;
                v63 = 0;
                do
                {
                  ++v63;
                  *(__m128i *)(v57 + v62) = _mm_load_si128((const __m128i *)(v58 + v62));
                  a2 = *(__m128 *)(v60 + 2 * v62 + 16);
                  *(_OWORD *)(v61 + 2 * v62) = *(_OWORD *)(v60 + 2 * v62);
                  *(__m128 *)(v61 + 2 * v62 + 16) = a2;
                  v62 += 16;
                }
                while ( v63 < v59 );
                v64 = (v56 & 0xFFFFFFFC) + v48;
                v65 = (v56 & 0xFFFFFFFC) + v47;
                if ( (v56 & 0xFFFFFFFC) != v56 )
                {
                  v66 = (int)(v168 + v65);
                  a2.m128_u64[0] = *(_QWORD *)(v38 + 8 * v66);
                  *(_DWORD *)(v156 + 4LL * v64) = *(_DWORD *)(v42 + 4 * v66);
                  v67 = v64 + 1;
                  *(_QWORD *)(v158 + 8LL * v64) = a2.m128_u64[0];
                  if ( v154 > (int)(v65 + 1) )
                  {
                    v68 = (int)(v168 + v65 + 1);
                    a2.m128_u64[0] = *(_QWORD *)(v38 + 8 * v68);
                    *(_DWORD *)(v156 + 4LL * v67) = *(_DWORD *)(v42 + 4 * v68);
                    v69 = v64 + 2;
                    *(_QWORD *)(v158 + 8LL * v67) = a2.m128_u64[0];
                    if ( v154 > (int)(v65 + 2) )
                    {
                      v70 = (int)(v168 + v65 + 2);
                      a2.m128_u64[0] = *(_QWORD *)(v38 + 8 * v70);
                      *(_DWORD *)(v156 + 4LL * v69) = *(_DWORD *)(v42 + 4 * v70);
                      v71 = v64 + 3;
                      *(_QWORD *)(v158 + 8LL * v69) = a2.m128_u64[0];
                      if ( v154 > (int)(v65 + 3) )
                      {
                        v72 = (int)(v168 + v65 + 3);
                        v73 = *(_DWORD *)(v42 + 4 * v72);
                        a2.m128_u64[0] = *(_QWORD *)(v38 + 8 * v72);
                        v74 = v65 + 4;
                        *(_DWORD *)(v156 + 4LL * v71) = v73;
                        v75 = v64 + 4;
                        *(_QWORD *)(v158 + 8LL * v71) = a2.m128_u64[0];
                        if ( v154 > (int)(v65 + 4) )
                        {
                          v76 = v65 + 5;
                          v77 = (int)(v168 + v74);
                          v78 = v64 + 5;
                          a2.m128_u64[0] = *(_QWORD *)(v38 + 8 * v77);
                          *(_DWORD *)(v156 + 4LL * v75) = *(_DWORD *)(v42 + 4 * v77);
                          *(_QWORD *)(v158 + 8LL * v75) = a2.m128_u64[0];
                          if ( v154 > v76 )
                          {
                            v79 = v168 + v76;
                            a2.m128_u64[0] = *(_QWORD *)(v38 + 8 * v79);
                            *(_DWORD *)(v156 + 4LL * v78) = *(_DWORD *)(v42 + 4 * v79);
                            *(_QWORD *)(v158 + 8LL * v78) = a2.m128_u64[0];
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v150 = 0;
                do
                {
                  a2.m128_u64[0] = *(_QWORD *)(v165 + 2 * v150);
                  v43[v150 / 4] = *(_DWORD *)(v44 + v150);
                  *(_QWORD *)(v170 + v158 + 2 * v150) = a2.m128_u64[0];
                  v150 += 4LL;
                }
                while ( v150 != 4LL * (unsigned int)(v154 - 1) + 4 );
              }
              v152 += v154;
            }
            v80 = v152;
            v81 = *((_QWORD *)v9 + 45);
            *(_DWORD *)(v156 + 4LL * v152++) = v167;
            *(_QWORD *)(v158 + 8 * v80) = 0x3FF0000000000000LL;
            *(_DWORD *)(v81 + 4LL * (*((_DWORD *)v9 + 62) - *((_DWORD *)v9 + 64))) = v28;
            v82 = *((int *)v9 + 62);
            v83 = *((_QWORD *)v9 + 30);
            *(_QWORD *)(v163 + 8 * v82) = 0;
            *(_BYTE *)(*(_QWORD *)(v83 + 264) + v82) = *(_BYTE *)(*(_QWORD *)(v83 + 264) + v82) & 0xF8 | 1;
            v84 = *((_QWORD *)v9 + 47);
            if ( v84 )
            {
              v85 = *(_QWORD *)(v84 + 8LL * v28);
              v86 = *((_QWORD *)v9 + 48);
              v87 = *((int *)v9 + 62);
              v88 = 8 * v87;
              v89 = (unsigned __int64 *)(v172 + 8 * v87);
              *v89 = v85;
              v90 = (_QWORD *)(8 * v87 + v173);
              if ( !v86 )
              {
                *v90 = 0x7FEFFFFFFFFFFFFFLL;
                goto LABEL_49;
              }
            }
            else
            {
              v86 = *((_QWORD *)v9 + 48);
              v87 = *((int *)v9 + 62);
              v88 = 8 * v87;
              v89 = (unsigned __int64 *)(v172 + 8 * v87);
              *v89 = 0;
              v90 = (_QWORD *)(8 * v87 + v173);
              if ( !v86 )
              {
                *v90 = 0x7FEFFFFFFFFFFFFFLL;
                goto LABEL_50;
              }
            }
            *v90 = *(_QWORD *)(v86 + 8LL * v28);
LABEL_49:
            a2.m128_u64[0] = *v89;
            *(_QWORD *)(v163 + v88) = *v89;
LABEL_50:
            v91 = v87 + 1;
            *((_DWORD *)v9 + 62) = v91;
            *(_DWORD *)(v164 + 4LL * v91) = v152;
            v28 = *(_DWORD *)(*((_QWORD *)v9 + 40) + 4LL * v28);
            if ( v28 < 0 )
            {
LABEL_51:
              v10 = v171;
              v27 = v157;
              break;
            }
          }
        }
        v92 = (_BYTE *)(*(_QWORD *)(*((_QWORD *)v9 + 30) + 264LL)
                      + *(_DWORD *)(*((_QWORD *)v9 + 30) + 108LL)
                      + *((_DWORD *)v9 + 51)
                      + *((_DWORD *)v9 + 66));
        *v92 = *v92 & 0xF8 | *(_BYTE *)(*((_QWORD *)v9 + 29) + v10) & 7;
        v93 = *((_QWORD *)v9 + 24);
        *(_DWORD *)(*((_QWORD *)v9 + 23) + v27) = *((_DWORD *)v9 + 51);
        v94 = *((int *)v9 + 51);
        v95 = (int *)(*((_QWORD *)v9 + 22) + v27);
        *((_DWORD *)v9 + 51) = v94 + 1;
        *(_DWORD *)(v93 + 4 * v94) = v161;
        v96 = v95;
        goto LABEL_53;
      }
      if ( !v15 )
      {
LABEL_114:
        v140 = 8 * v10;
        v141 = v157 + 4;
        if ( *(_DWORD *)(v11 + v157 + 4) > v14 )
        {
LABEL_115:
          v142 = v14;
          a2.m128_u64[0] = 0;
          v143 = v14 + 1LL;
          v144 = 8LL * v14;
          v145 = -1;
          v146 = 99999999;
          v147 = 4 * v143;
          while ( 1 )
          {
            *(_BYTE *)(*((_QWORD *)v9 + 46) + v142) = *(_BYTE *)(*((_QWORD *)v9 + 46) + v142) & 0xF8 | 3;
            *(double *)a2.m128_u64 = *(double *)a2.m128_u64 + *(double *)(*((_QWORD *)v9 + 47) + v144);
            if ( v146 > *(_DWORD *)(*((_QWORD *)v9 + 41) + v147) - *(_DWORD *)(*((_QWORD *)v9 + 41) + v147 - 4) )
            {
              v145 = v14;
              v146 = *(_DWORD *)(*((_QWORD *)v9 + 41) + v147) - *(_DWORD *)(*((_QWORD *)v9 + 41) + v147 - 4);
            }
            ++v14;
            v144 += 8;
            v147 += 4;
            v142 = v143;
            if ( *(_DWORD *)(*((_QWORD *)v9 + 39) + v141) <= v14 )
              break;
            ++v143;
          }
          goto LABEL_120;
        }
LABEL_133:
        a2.m128_u64[0] = 0;
        v145 = -1;
LABEL_120:
        if ( *(double *)a2.m128_u64 <= *(double *)(*((_QWORD *)v9 + 27) + v140) - 0.00000001 )
        {
          *(_BYTE *)(*((_QWORD *)v9 + 46) + v145) &= 0xF8u;
          v149 = (_BYTE *)(v10 + *((_QWORD *)v9 + 29));
          *(_DWORD *)(*((_QWORD *)v9 + 22) + 4 * v10) = v145;
          *v149 = *v149 & 0xF8 | 3;
          v96 = (int *)(*((_QWORD *)v9 + 22) + v157);
        }
        else
        {
          *(_BYTE *)(v10 + *((_QWORD *)v9 + 29)) = *(_BYTE *)(v10 + *((_QWORD *)v9 + 29)) & 0xF8 | 1;
          v96 = (int *)(*((_QWORD *)v9 + 22) + v157);
          *v96 = *((_DWORD *)v9 + 75) + v10;
        }
        goto LABEL_53;
      }
      v139 = *((_DWORD *)v9 + 75);
LABEL_108:
      v96 = (int *)(*((_QWORD *)v9 + 22) + v157);
      if ( v159 >= v139 )
      {
        v140 = 8 * v10;
        *v96 = v10 + v139;
        ClpDynamicMatrix::keyValue(v9, v10);
        if ( *(double *)(*((_QWORD *)v9 + 27) + 8 * v10) - 0.00000001 > *(double *)a2.m128_u64
          || *(double *)a2.m128_u64 > *(double *)(*((_QWORD *)v9 + 28) + 8 * v10) + 0.00000001 )
        {
          v151 = *((_QWORD *)v9 + 39);
          v14 = *(_DWORD *)(v151 + 4 * v10);
          v141 = v157 + 4;
          if ( *(_DWORD *)(v151 + v157 + 4) > v14 )
            goto LABEL_115;
          goto LABEL_133;
        }
        v96 = (int *)(*((_QWORD *)v9 + 22) + v157);
      }
LABEL_53:
      *v96 = v159;
      if ( *((_DWORD *)v9 + 50) <= (int)++v10 )
      {
        v4 = *((_QWORD *)v9 + 30);
        v2 = v9;
        break;
      }
    }
  }
  v97 = *(_QWORD *)(v4 + 1256);
  v98 = *(_DWORD *)(v4 + 108);
  if ( !v97 )
    goto LABEL_98;
  v99 = *((_DWORD *)v2 + 66) + *((_DWORD *)v2 + 51);
  v100 = *(_DWORD *)(v4 + 104);
  if ( v99 > 0 )
  {
    v101 = *(_DWORD **)(v4 + 1256);
    v102 = *(_DWORD *)(v4 + 108);
    v103 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 264) + v103 + v102) & 7) == 1 )
      {
        v104 = v98 + v103++;
        *v101++ = v104;
        v99 = *((_DWORD *)v2 + 66) + *((_DWORD *)v2 + 51);
        if ( v99 <= v103 )
          break;
      }
      else
      {
        *v101 = -1;
        ++v103;
        v99 = *((_DWORD *)v2 + 51) + *((_DWORD *)v2 + 66);
        ++v101;
        if ( v99 <= v103 )
          break;
      }
      v102 = *(_DWORD *)(v4 + 108);
    }
  }
  if ( v100 <= v99 )
    goto LABEL_80;
  v105 = v99;
  v106 = -(int)((unsigned __int64)(v97 + 4LL * v99) >> 2) & 3;
  v107 = v106 + 3;
  if ( v106 + 3 < 5 )
    v107 = 5;
  if ( v107 <= v100 - 1 - v99 )
  {
    v108 = v99;
    if ( v106 )
    {
      v108 = v99 + 1;
      *(_DWORD *)(v97 + 4LL * v99) = v98 + v99;
      if ( v106 != 1 )
      {
        *(_DWORD *)(v97 + 4LL * v108) = v98 + v108;
        v108 = v99 + 2;
        if ( v106 != 2 )
        {
          *(_DWORD *)(v97 + 4LL * v108) = v98 + v108;
          v108 = v99 + 3;
        }
      }
    }
    v109 = v100 - v99 - v106;
    v110 = v97 + 4 * (v99 + (unsigned __int64)v106);
    v111 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v98), 0);
    v112 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v114 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v108), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v112;
      v110 += 16;
      *(__m128i *)(v110 - 16) = _mm_add_epi32(v111, v114);
      v114 = _mm_add_epi32(v114, si128);
    }
    while ( v112 < v109 >> 2 );
    v99 = (v109 & 0xFFFFFFFC) + v108;
    if ( (v109 & 0xFFFFFFFC) == v109 )
      goto LABEL_80;
    v105 = v99;
  }
  *(_DWORD *)(v97 + 4 * v105) = v98 + v99;
  if ( v100 > v99 + 1 )
  {
    *(_DWORD *)(v97 + 4LL * (v99 + 1)) = v98 + v99 + 1;
    if ( v99 + 2 < v100 )
    {
      *(_DWORD *)(v97 + 4LL * (v99 + 2)) = v98 + v99 + 2;
      if ( v99 + 3 < v100 )
      {
        *(_DWORD *)(v97 + 4LL * (v99 + 3)) = v98 + v99 + 3;
        v115 = v99 + 4;
        if ( v100 > v99 + 4 )
        {
          v116 = v99 + 5;
          *(_DWORD *)(v97 + 4LL * v115) = v98 + v115;
          if ( v100 > v116 )
            *(_DWORD *)(v97 + 4LL * v116) = v98 + v116;
        }
      }
    }
  }
LABEL_80:
  if ( v98 <= 0 )
  {
    v118 = 0;
    goto LABEL_92;
  }
  v117 = 0;
  v118 = -1;
  v119 = (unsigned int)(v98 - 1) + 1LL;
  do
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 264) + v117) & 7) != 1 || v100 <= v118 )
        goto LABEL_82;
      v120 = 4LL * ++v118;
      v121 = (_DWORD *)(v97 + v120);
      if ( *(_DWORD *)(v97 + v120) != -1 )
        break;
LABEL_134:
      *v121 = v117;
LABEL_82:
      if ( v119 == ++v117 )
        goto LABEL_90;
    }
    v122 = v97 + v120 + 4;
    while ( v100 != v118 )
    {
      v121 = (_DWORD *)v122;
      v122 += 4;
      ++v118;
      if ( *(_DWORD *)(v122 - 4) == -1 )
        goto LABEL_134;
    }
    ++v117;
    v118 = v100;
  }
  while ( v119 != v117 );
LABEL_90:
  if ( v118 < 0 )
    v118 = 0;
LABEL_92:
  if ( v100 > v118 )
  {
    v123 = v118;
    v124 = v118 + 1LL;
    v125 = v124 + (unsigned int)(v100 - 1 - v118);
    while ( 1 )
    {
      if ( *(_DWORD *)(v97 + 4 * v123) == -1 )
        *(_DWORD *)(v97 + 4 * v123) = v98 + v123;
      v123 = v124;
      if ( v125 == v124 )
        break;
      ++v124;
    }
  }
LABEL_98:
  if ( *((_QWORD *)v2 + 1) )
  {
    if ( *(_QWORD *)(v4 + 1032) )
    {
      v126 = *((_DWORD *)v2 + 51);
      v127 = *(_QWORD *)(v4 + 984);
      v155 = *(_QWORD *)(v4 + 1008);
      v153 = *(_QWORD *)(v4 + 1200);
      v160 = *(_DWORD *)(v4 + 104);
      v128 = *((_DWORD *)v2 + 66);
      if ( v160 - v128 > v126 )
      {
        v129 = v2;
        v130 = *(_QWORD *)(v4 + 1032);
        while ( 1 )
        {
          v131 = v98 + v126 + v128;
          v132 = 8LL * v131;
          v133 = (double *)(v153 + v132);
          v134 = (double *)(v127 + v132);
          v135 = (double *)(v155 + v132);
          *v133 = 0.0;
          *v134 = -1.797693134862316e308;
          *v135 = 1.797693134862316e308;
          *(_QWORD *)(v130 + 8LL * v131) = 0;
          ClpNonLinearCost::setOne(*(ClpNonLinearCost **)(v4 + 1320), v131, *v133, *v134, *v135, 0.0);
          v136 = (_BYTE *)(*(_QWORD *)(*((_QWORD *)v129 + 30) + 264LL) + v131);
          *v136 = *v136 & 0xF8 | 1;
          v128 = *((_DWORD *)v129 + 66);
          v137 = v128 + v126++;
          *(_QWORD *)(*((_QWORD *)v129 + 1) + 8LL * v137) = 0;
          if ( v160 - v128 <= v126 )
            break;
          v4 = *((_QWORD *)v129 + 30);
        }
        v2 = v129;
      }
    }
  }
  result = *((unsigned int *)v2 + 62);
  *((_DWORD *)v2 + 24) = result;
  return result;
}

