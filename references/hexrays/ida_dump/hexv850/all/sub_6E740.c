__int64 __fastcall sub_6E740(__int64 a1, _QWORD *a2, int a3, __int64 *a4, _QWORD *a5, __int64 *a6, __m128i *a7)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *exception; // rdi
  __int64 v12; // rax
  __int64 (*v13)(void); // rdx
  __int32 v14; // r11d
  __int32 v15; // r11d
  __int64 *v16; // rcx
  int *v17; // rax
  int *v18; // rdx
  __int32 v19; // r11d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // r10
  unsigned __int64 v24; // rbp
  int v25; // r9d
  unsigned __int64 v26; // rdx
  int *v27; // r8
  unsigned __int64 v28; // xmm0_8
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  signed int v31; // r12d
  int v32; // r13d
  __int64 (__fastcall *v33)(__int64, int, int); // rax
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // r13
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  signed int v47; // ebp
  int v48; // r12d
  __int64 (__fastcall *v49)(__int64, int, int); // rax
  _QWORD *v50; // rcx
  unsigned __int64 v51; // rax
  _QWORD *v52; // rax
  _DWORD *v53; // rcx
  __int64 v54; // rdx
  _DWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r10
  unsigned __int64 v59; // xmm0_8
  int *v60; // rax
  __int64 v61; // rax
  int v62; // r12d
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rbp
  __int64 v66; // r14
  __int64 v67; // r15
  int v68; // edx
  __int64 v69; // r13
  __int64 v70; // r15
  __int64 v71; // rbp
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rsi
  signed int v74; // r8d
  __int64 (__fastcall *v75)(__int64, int, int); // rax
  _QWORD *v76; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  int v80; // eax
  int v81; // eax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rsi
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rsi
  __int64 v88; // rcx
  int v89; // r14d
  __int64 v90; // r13
  __int64 v91; // rbp
  __int64 v92; // r12
  _QWORD *v93; // rdi
  _DWORD *v94; // rsi
  __int64 v95; // rcx
  _DWORD *v96; // rdx
  _DWORD *v97; // rax
  unsigned __int64 v98; // r12
  __m128i v99; // xmm1
  __int64 v100; // rax
  unsigned __int64 v101; // rsi
  __m128i v102; // xmm7
  const __m128i *v103; // rdi
  __m128i v104; // xmm0
  __m128i *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 *v108; // r8
  __int64 v109; // rsi
  int v110; // edi
  __int32 *v111; // rax
  __int64 v112; // rsi
  __int64 (__fastcall *v113)(__int64); // rax
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rdx
  __int64 (__fastcall *v117)(__int64); // rax
  int v118; // ecx
  _DWORD *v119; // rax
  __int64 v120; // rdx
  int v121; // r15d
  __int64 *v122; // r14
  _QWORD *v123; // rbx
  __int64 v124; // rax
  unsigned __int32 v125; // r11d
  __int64 v126; // r13
  int v127; // r12d
  __int64 v128; // rax
  __int64 v129; // r13
  __int64 v130; // rbx
  __int64 *v131; // rbp
  _DWORD *v132; // rsi
  __int64 v133; // rcx
  _DWORD *v134; // rdx
  _DWORD *v135; // rax
  unsigned __int64 v136; // rdi
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rsi
  __int64 v141; // rcx
  __int64 *v142; // r12
  __int64 v143; // rax
  __int64 v144; // rsi
  _QWORD *v145; // rax
  __int64 *v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rdx
  char v153; // r13
  unsigned __int64 v154; // rax
  _BYTE *v155; // rdx
  __int64 v156; // rax
  __m128i v157; // xmm1
  __m128i v158; // xmm0
  __m128i *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __m128i *v164; // rax
  int v165; // edi
  __int64 v166; // rdx
  __int64 v167; // rax
  __m128i v168; // xmm0
  __m128i *v169; // rdi
  unsigned int v170; // eax
  int v171; // eax
  __m128i v172; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v173; // [rsp+10h] [rbp-F8h]
  __int64 v174; // [rsp+18h] [rbp-F0h]
  __int64 v175; // [rsp+20h] [rbp-E8h]
  __int64 v176; // [rsp+28h] [rbp-E0h]
  __int64 *v177; // [rsp+30h] [rbp-D8h]
  __m128i *v178; // [rsp+38h] [rbp-D0h]
  __int64 v179; // [rsp+40h] [rbp-C8h]
  _QWORD *v180; // [rsp+48h] [rbp-C0h]
  __int64 *v181; // [rsp+50h] [rbp-B8h]
  unsigned int v182; // [rsp+58h] [rbp-B0h]
  int v183; // [rsp+5Ch] [rbp-ACh]
  __int64 *v184; // [rsp+60h] [rbp-A8h]
  unsigned __int32 v185; // [rsp+68h] [rbp-A0h]
  __int32 v186; // [rsp+6Ch] [rbp-9Ch]
  int v187; // [rsp+78h] [rbp-90h] BYREF
  int v188; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v189; // [rsp+80h] [rbp-88h] BYREF
  __int64 v190; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v191; // [rsp+90h] [rbp-78h] BYREF
  __int128 v192; // [rsp+98h] [rbp-70h]
  unsigned __int64 v193; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v194; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v195; // [rsp+C8h] [rbp-40h]

  v183 = a3;
  v177 = a4;
  v180 = a2;
  v184 = a6;
  v178 = a7;
  v195 = __readfsqword(0x28u);
  v12 = *(_QWORD *)a1;
  v13 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v13 == (char *)sub_605C0 )
  {
    v14 = *(_DWORD *)(a1 + 56);
  }
  else
  {
    v14 = v13();
    v12 = *(_QWORD *)a1;
  }
  v172.m128i_i32[0] = v14;
  v185 = v14 + 1;
  (*(void (__fastcall **)(__int64, _QWORD))(v12 + 168))(a1, (unsigned int)(v14 + 1));
  v15 = v172.m128i_i32[0];
  v16 = v177;
  v17 = (int *)*v177;
  if ( 4 * v177[1] )
  {
    do
    {
      v18 = (int *)(*(_QWORD *)(a1 + 96) + 4LL * *v17);
      if ( *v18 >= 0 )
      {
        if ( !under_debugger )
          sub_37CFE0(50414);
        goto LABEL_281;
      }
      *v18 = v15;
      ++v17;
    }
    while ( v17 != (int *)(*v16 + 4 * v16[1]) );
  }
  LODWORD(v173) = v15;
  sub_627C0(a1);
  v191 = 0;
  v19 = v173;
  v192 = 0;
  v20 = *v177;
  v21 = v177[1];
  v193 = 0;
  v194 = 0;
  v172.m128i_i64[0] = v20;
  v182 = v183 - 7;
  v181 = &v189;
  if ( !(4 * v21) )
    goto LABEL_159;
  do
  {
    v22 = *(int *)v172.m128i_i64[0];
    v23 = (_QWORD *)(24 * v22 + *(_QWORD *)(a1 + 48));
    v179 = 24 * v22;
    v24 = (unsigned int)v23[1] - 1;
    v25 = v23[1];
    while ( (v24 & 0x80000000) == 0LL )
    {
      while ( 1 )
      {
        v29 = 4 * v24;
        v30 = *(unsigned int *)(*v23 + 4 * v24);
        v31 = *(_DWORD *)(*v23 + 4 * v24);
        v32 = v31;
        if ( v30 < *(_QWORD *)(a1 + 104) )
        {
          v32 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v30);
          if ( v32 < 0 )
            v32 = *(_DWORD *)(*v23 + 4 * v24);
        }
        v33 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
        if ( v33 == sub_66FA0 )
          break;
        LODWORD(v176) = v19;
        LODWORD(v175) = v25;
        v174 = 4 * v24;
        v173 = (unsigned __int64)v23;
        v42 = v33((__int64)a5, v22, v31);
        v19 = v176;
        v25 = v175;
        v29 = 4 * v24;
        v23 = (_QWORD *)v173;
LABEL_46:
        if ( v42 != 5 )
        {
          v31 = *(_DWORD *)(*v23 + v29);
          goto LABEL_9;
        }
        if ( v32 != v19 )
        {
          if ( !under_debugger )
            sub_37CFE0(50917);
          goto LABEL_281;
        }
        --v24;
        --v25;
        if ( (v24 & 0x80000000) != 0LL )
          goto LABEL_50;
      }
      v34 = (_QWORD *)a5[1];
      if ( !v34 )
        goto LABEL_9;
      v35 = *v34 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v35 )
      {
        v36 = 24;
LABEL_103:
        v42 = *(_DWORD *)(v36 + 8);
        goto LABEL_46;
      }
      if ( (*(_BYTE *)(*v34 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_9;
      while ( 1 )
      {
        v36 = v35 + 24;
        if ( (int)v22 < *(_DWORD *)(v35 + 24) )
        {
LABEL_44:
          v35 = *(_QWORD *)(v35 + 8);
          goto LABEL_24;
        }
        if ( (_DWORD)v22 == *(_DWORD *)(v35 + 24) )
        {
          if ( v31 < *(_DWORD *)(v35 + 28) )
            goto LABEL_44;
          if ( v31 <= *(_DWORD *)(v35 + 28) )
            break;
        }
        v35 = *(_QWORD *)(v35 + 16);
LABEL_24:
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v26 = v192;
          if ( v24 < (unsigned __int64)v192 )
            goto LABEL_10;
          goto LABEL_26;
        }
      }
      if ( v34 != (_QWORD *)v35 )
        goto LABEL_103;
LABEL_9:
      v26 = v192;
      if ( v24 >= (unsigned __int64)v192 )
      {
LABEL_26:
        v37 = v25;
        v187 = -1;
        v173 = v25;
        if ( v25 < v26 )
          goto LABEL_35;
        if ( v26 < v173 )
        {
          v38 = v191;
          if ( (unsigned __int64)&v187 < v191 || (unsigned __int64)&v187 >= v191 + 4LL * *((_QWORD *)&v192 + 1) )
          {
            if ( *((_QWORD *)&v192 + 1) >= v173
              || (v186 = v19,
                  LODWORD(v176) = v25,
                  v175 = v29,
                  v174 = (__int64)v23,
                  v191 = qvector_reserve(&v191, v191, v173, 4),
                  v26 = v192,
                  v38 = v191,
                  v23 = (_QWORD *)v174,
                  v29 = v175,
                  v25 = v176,
                  v19 = v186,
                  (unsigned __int64)v192 < v173) )
            {
              v138 = v173;
              while ( 1 )
              {
                *(_DWORD *)(v38 + 4 * v26++) = -1;
                if ( v138 == v26 )
                  break;
                v38 = v191;
              }
            }
          }
          else if ( *((_QWORD *)&v192 + 1) >= v173
                 || (v186 = v19,
                     LODWORD(v176) = v25,
                     v175 = v29,
                     v174 = (__int64)v23,
                     v191 = qvector_reserve(&v191, v191, v173, 4),
                     v26 = v192,
                     v38 = v191,
                     v23 = (_QWORD *)v174,
                     v29 = v175,
                     v25 = v176,
                     v19 = v186,
                     (unsigned __int64)v192 < v173) )
          {
            v39 = v173;
            while ( 1 )
            {
              *(_DWORD *)(v38 + 4 * v26++) = -1;
              if ( v39 == v26 )
                break;
              v38 = v191;
            }
          }
          v37 = v173;
LABEL_35:
          *(_QWORD *)&v192 = v37;
        }
        v40 = v194;
        if ( v173 == (_QWORD)v194 )
          goto LABEL_10;
        v189 = 0;
        if ( v173 >= (unsigned __int64)v194 )
        {
          if ( (unsigned __int64)v181 < v193 || (unsigned __int64)v181 >= v193 + 8LL * *((_QWORD *)&v194 + 1) )
          {
            if ( *((_QWORD *)&v194 + 1) < v173 )
            {
              v186 = v19;
              LODWORD(v176) = v25;
              v175 = v29;
              v174 = (__int64)v23;
              v193 = qvector_reserve(&v193, v193, v173, 8);
              v19 = v186;
              v40 = v194;
              v25 = v176;
              v29 = v175;
              v23 = (_QWORD *)v174;
            }
            v140 = v173;
            v141 = v189;
            if ( v40 < v173 )
            {
              do
                *(_QWORD *)(v193 + 8 * v40++) = v141;
              while ( v140 != v40 );
              *(_QWORD *)&v194 = v173;
              goto LABEL_10;
            }
          }
          else if ( *((_QWORD *)&v194 + 1) < v173 )
          {
            v186 = v19;
            LODWORD(v176) = v25;
            v175 = v29;
            v174 = (__int64)v23;
            v193 = qvector_reserve(&v193, v193, v173, 8);
            v41 = v173;
            v40 = v194;
            v19 = v186;
            v25 = v176;
            v29 = v175;
            v23 = (_QWORD *)v174;
            if ( (unsigned __int64)v194 < v173 )
              goto LABEL_42;
          }
          else
          {
            v41 = v173;
            if ( (unsigned __int64)v194 < v173 )
            {
              do
LABEL_42:
                *(_QWORD *)(v193 + 8 * v40++) = 0;
              while ( v41 != v40 );
            }
          }
        }
        *(_QWORD *)&v194 = v173;
      }
LABEL_10:
      v27 = (int *)(v191 + v29);
      v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v31)).m128i_u64[0];
      if ( *v27 != -1 && v32 != *v27 && v182 > 1 )
      {
        if ( !under_debugger )
          sub_37CFE0(50413);
        goto LABEL_281;
      }
      *v27 = v32;
      --v25;
      *(_QWORD *)(v193 + 8 * v24--) = v28;
    }
LABEL_50:
    v43 = *(_QWORD *)(a1 + 72) + v179;
    v44 = (unsigned int)(*(_DWORD *)(v43 + 8) - 1);
    v45 = 4 * v44;
    if ( (int)v44 < 0 )
      goto LABEL_71;
    while ( 1 )
    {
LABEL_53:
      v46 = *(unsigned int *)(*(_QWORD *)v43 + v45);
      v47 = *(_DWORD *)(*(_QWORD *)v43 + v45);
      v48 = v47;
      if ( v46 < *(_QWORD *)(a1 + 104) )
      {
        v48 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v46);
        if ( v48 < 0 )
          v48 = *(_DWORD *)(*(_QWORD *)v43 + v45);
      }
      if ( v48 != v19 )
        goto LABEL_52;
      v49 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
      if ( v49 != sub_66FA0 )
      {
        LODWORD(v175) = v19;
        v174 = v45;
        v173 = v43;
        v81 = v49((__int64)a5, v47, v22);
        v19 = v175;
        v45 = v174;
        v43 = v173;
        goto LABEL_111;
      }
      v50 = (_QWORD *)a5[1];
      if ( v50 )
      {
        v51 = *v50 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v51 )
        {
          v79 = 24;
          goto LABEL_198;
        }
        if ( (*(_BYTE *)(*v50 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
          break;
      }
LABEL_61:
      v52 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v47);
      v53 = (_DWORD *)*v52;
      v54 = *v52 + 4LL * v52[1];
      if ( *v52 == v54 )
        goto LABEL_272;
      v55 = (_DWORD *)*v52;
      while ( (_DWORD)v22 != *v55 )
      {
        if ( (_DWORD *)v54 == ++v55 )
          goto LABEL_272;
      }
      v56 = v55 - v53;
      if ( (_DWORD)v56 == -1 )
      {
LABEL_272:
        if ( !under_debugger )
          sub_37CFE0(50415);
        goto LABEL_281;
      }
      v57 = v192;
      v58 = (int)v56;
      if ( (int)v56 < (unsigned __int64)v192 )
        goto LABEL_67;
      v188 = -1;
      v82 = (int)v56 + 1;
      v173 = v82;
      if ( v82 >= (unsigned __int64)v192 )
      {
        if ( (unsigned __int64)v192 >= v173 )
          goto LABEL_127;
        v83 = v191;
        if ( (unsigned __int64)&v188 < v191 || (unsigned __int64)&v188 >= v191 + 4LL * *((_QWORD *)&v192 + 1) )
        {
          if ( *((_QWORD *)&v192 + 1) >= v173
            || (LODWORD(v179) = v19,
                v176 = v58,
                v175 = v45,
                v174 = v43,
                v191 = qvector_reserve(&v191, v191, v173, 4),
                v57 = v192,
                v83 = v191,
                v43 = v174,
                v45 = v175,
                v58 = v176,
                v19 = v179,
                (unsigned __int64)v192 < v173) )
          {
            v139 = v173;
            while ( 1 )
            {
              *(_DWORD *)(v83 + 4 * v57++) = -1;
              if ( v139 == v57 )
                break;
              v83 = v191;
            }
            v82 = v173;
          }
          else
          {
            v82 = v173;
          }
        }
        else
        {
          if ( *((_QWORD *)&v192 + 1) >= v173
            || (LODWORD(v179) = v19,
                v176 = v58,
                v175 = v45,
                v174 = v43,
                v191 = qvector_reserve(&v191, v191, v173, 4),
                v57 = v192,
                v83 = v191,
                v43 = v174,
                v45 = v175,
                v58 = v176,
                v19 = v179,
                (unsigned __int64)v192 < v173) )
          {
            v84 = v173;
            while ( 1 )
            {
              *(_DWORD *)(v83 + 4 * v57++) = -1;
              if ( v84 == v57 )
                break;
              v83 = v191;
            }
          }
          v82 = v173;
        }
      }
      *(_QWORD *)&v192 = v82;
LABEL_127:
      v85 = v194;
      if ( v173 != (_QWORD)v194 )
      {
        v190 = 0;
        if ( v173 >= (unsigned __int64)v194 )
        {
          if ( (unsigned __int64)&v190 < v193 || (unsigned __int64)&v190 >= v193 + 8LL * *((_QWORD *)&v194 + 1) )
          {
            if ( *((_QWORD *)&v194 + 1) < v173 )
            {
              LODWORD(v179) = v19;
              v176 = v58;
              v175 = v45;
              v174 = v43;
              v193 = qvector_reserve(&v193, v193, v173, 8);
              v19 = v179;
              v85 = v194;
              v58 = v176;
              v45 = v175;
              v43 = v174;
            }
            v87 = v173;
            v88 = v190;
            if ( v85 < v173 )
            {
              do
                *(_QWORD *)(v193 + 8 * v85++) = v88;
              while ( v87 != v85 );
              *(_QWORD *)&v194 = v173;
              goto LABEL_67;
            }
          }
          else
          {
            if ( *((_QWORD *)&v194 + 1) < v173 )
            {
              LODWORD(v179) = v19;
              v176 = v58;
              v175 = v45;
              v174 = v43;
              v193 = qvector_reserve(&v193, v193, v173, 8);
              v19 = v179;
              v85 = v194;
              v58 = v176;
              v45 = v175;
              v43 = v174;
            }
            v86 = v173;
            if ( v85 < v173 )
            {
              do
                *(_QWORD *)(v193 + 8 * v85++) = 0;
              while ( v86 != v85 );
            }
          }
        }
        *(_QWORD *)&v194 = v173;
      }
LABEL_67:
      v59 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v22)).m128i_u64[0];
      v60 = (int *)(v191 + 4 * v58);
      if ( *v60 != -1 && v48 != *v60 && v182 > 1 )
      {
        if ( !under_debugger )
          sub_37CFE0(50413);
        goto LABEL_281;
      }
      *v60 = v48;
      LODWORD(v44) = v44 - 1;
      v45 -= 4;
      *(_QWORD *)(v193 + 8 * v58) = v59;
      if ( (_DWORD)v44 == -1 )
        goto LABEL_71;
    }
    while ( 2 )
    {
      v79 = v51 + 24;
      if ( v47 < *(_DWORD *)(v51 + 24) )
        goto LABEL_101;
      if ( v47 != *(_DWORD *)(v51 + 24) )
      {
LABEL_97:
        v51 = *(_QWORD *)(v51 + 16);
        goto LABEL_98;
      }
      if ( (int)v22 < *(_DWORD *)(v51 + 28) )
      {
LABEL_101:
        v51 = *(_QWORD *)(v51 + 8);
LABEL_98:
        if ( (*(_BYTE *)v51 & 2) != 0 )
          goto LABEL_61;
        continue;
      }
      break;
    }
    if ( (int)v22 > *(_DWORD *)(v51 + 28) )
      goto LABEL_97;
    if ( v50 == (_QWORD *)v51 )
      goto LABEL_61;
LABEL_198:
    v81 = *(_DWORD *)(v79 + 8);
LABEL_111:
    if ( v81 != 5 )
    {
      v47 = *(_DWORD *)(*(_QWORD *)v43 + v45);
      goto LABEL_61;
    }
LABEL_52:
    LODWORD(v44) = v44 - 1;
    v45 -= 4;
    if ( (_DWORD)v44 != -1 )
      goto LABEL_53;
LABEL_71:
    v172.m128i_i64[0] += 4;
    v61 = *v177 + 4 * v177[1];
    v173 = *v177;
  }
  while ( v172.m128i_i64[0] != v61 );
  if ( v173 != v172.m128i_i64[0] )
  {
    while ( 1 )
    {
      v62 = *(_DWORD *)v173;
      v63 = 24LL * *(int *)v173;
      v64 = v63 + *(_QWORD *)(a1 + 48);
      v65 = (unsigned int)(*(_DWORD *)(v64 + 8) - 1);
      if ( (int)v65 >= 0 )
      {
        v172.m128i_i32[0] = v19;
        v174 = (__int64)a5;
        v66 = 4 * v65;
        v67 = v63;
        do
        {
          LODWORD(v65) = v65 - 1;
          v68 = *(_DWORD *)(*(_QWORD *)v64 + v66);
          v66 -= 4;
          sub_688A0(a1, v62, v68);
        }
        while ( (_DWORD)v65 != -1 );
        v19 = v172.m128i_i32[0];
        a5 = (_QWORD *)v174;
        v63 = v67;
      }
      v69 = *(_QWORD *)(a1 + 72) + v63;
      v70 = (unsigned int)(*(_DWORD *)(v69 + 8) - 1);
      v71 = 4 * v70;
      if ( (int)v70 >= 0 )
        break;
LABEL_141:
      v173 += 4LL;
      if ( v173 == *v177 + 4 * v177[1] )
        goto LABEL_142;
    }
    while ( 2 )
    {
      v72 = *(unsigned int *)(*(_QWORD *)v69 + v71);
      v73 = v72;
      v74 = *(_DWORD *)(*(_QWORD *)v69 + v71);
      if ( v72 < *(_QWORD *)(a1 + 104) )
      {
        v74 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v72);
        if ( v74 < 0 )
          v74 = *(_DWORD *)(*(_QWORD *)v69 + v71);
      }
      v75 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
      if ( v75 != sub_66FA0 )
      {
        LODWORD(v174) = v19;
        v172.m128i_i32[0] = v74;
        v80 = v75((__int64)a5, v73, v62);
        v19 = v174;
        v74 = v172.m128i_i32[0];
        goto LABEL_105;
      }
      v76 = (_QWORD *)a5[1];
      if ( !v76 )
        goto LABEL_79;
      v77 = *v76 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v77 )
      {
        v78 = 24;
LABEL_196:
        v80 = *(_DWORD *)(v78 + 8);
LABEL_105:
        if ( v80 != 5 || v74 == v19 )
        {
          LODWORD(v73) = *(_DWORD *)(*(_QWORD *)v69 + v71);
          if ( v80 == 5 || v74 == v19 )
            goto LABEL_109;
          goto LABEL_80;
        }
        if ( !under_debugger )
          sub_37CFE0(50917);
LABEL_281:
        BUG();
      }
      if ( (*(_BYTE *)(*v76 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_79;
LABEL_89:
      v78 = v77 + 24;
      if ( (int)v73 < *(_DWORD *)(v77 + 24) )
        goto LABEL_100;
      if ( (_DWORD)v73 != *(_DWORD *)(v77 + 24) )
        goto LABEL_91;
      if ( v62 < *(_DWORD *)(v77 + 28) )
      {
LABEL_100:
        v77 = *(_QWORD *)(v77 + 8);
      }
      else
      {
        if ( v62 <= *(_DWORD *)(v77 + 28) )
        {
          if ( v76 != (_QWORD *)v77 )
            goto LABEL_196;
LABEL_79:
          if ( v74 != v19 )
            goto LABEL_80;
LABEL_109:
          v172.m128i_i32[0] = v19;
          sub_688A0(a1, v73, v62);
LABEL_81:
          LODWORD(v70) = v70 - 1;
          v19 = v172.m128i_i32[0];
          v71 -= 4;
          if ( (_DWORD)v70 == -1 )
            goto LABEL_141;
          continue;
        }
LABEL_91:
        v77 = *(_QWORD *)(v77 + 16);
      }
      break;
    }
    if ( (*(_BYTE *)v77 & 2) != 0 )
    {
      if ( v74 == v19 )
        goto LABEL_109;
LABEL_80:
      v172.m128i_i32[0] = v19;
      sub_6E1A0(a1, v178, v73, v62, v74, v19);
      goto LABEL_81;
    }
    goto LABEL_89;
  }
LABEL_142:
  if ( !(_QWORD)v192 )
    goto LABEL_159;
  v89 = 0;
  v90 = 0;
  v91 = 24LL * v19;
  while ( 2 )
  {
    v92 = *(int *)(v191 + 4 * v90);
    if ( (_DWORD)v92 == -1 )
      goto LABEL_158;
    v93 = (_QWORD *)(v91 + *(_QWORD *)(a1 + 48));
    v94 = (_DWORD *)*v93;
    v95 = v93[1];
    v96 = (_DWORD *)(*v93 + 4 * v95);
    if ( (_DWORD *)*v93 == v96 )
      goto LABEL_222;
    v97 = (_DWORD *)*v93;
    while ( (_DWORD)v92 != *v97 )
    {
      if ( v96 == ++v97 )
        goto LABEL_222;
    }
    if ( v96 == v97 )
    {
LABEL_222:
      if ( v93[2] < (unsigned __int64)(v95 + 1) )
      {
        LODWORD(v173) = v19;
        v172.m128i_i64[0] = (__int64)v93;
        v162 = qvector_reserve(v93, v94, v95 + 1, 4);
        v93 = (_QWORD *)v172.m128i_i64[0];
        v19 = v173;
        v163 = *(_QWORD *)(v172.m128i_i64[0] + 8);
        *(_QWORD *)v172.m128i_i64[0] = v162;
        v96 = (_DWORD *)(v162 + 4 * v163);
      }
      *v96 = v92;
      ++v93[1];
      v142 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v92);
      v143 = v142[1];
      v144 = *v142;
      if ( v142[2] < (unsigned __int64)(v143 + 1) )
      {
        v172.m128i_i32[0] = v19;
        v161 = qvector_reserve(v142, v144, v143 + 1, 4);
        *v142 = v161;
        v144 = v161;
        v19 = v172.m128i_i32[0];
        v143 = v142[1];
      }
      *(_DWORD *)(v144 + 4 * v143) = v19;
      ++v142[1];
    }
    if ( !v178 )
      goto LABEL_158;
    v98 = v178->m128i_i64[0];
    v99 = _mm_cvtsi32_si128(*(_DWORD *)(v191 + 4 * v90));
    v172 = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), v99),
             _mm_unpacklo_epi32(
               _mm_cvtsi32_si128(*(_DWORD *)(v193 + 8 * v90)),
               _mm_cvtsi32_si128(*(_DWORD *)(v193 + 8 * v90 + 4))));
    if ( !v98 )
    {
      LODWORD(v173) = v19;
      v167 = qalloc(40);
      v168 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v167, (__m128i)(unsigned __int64)v167);
      if ( !v167 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v169 = v178;
      *(_QWORD *)(v167 + 32) = 0;
      *(_OWORD *)(v167 + 16) = 0;
      v19 = v173;
      *(__m128i *)(v167 + 8) = v168;
      *(_QWORD *)v167 = v167 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v169->m128i_i64[0] = v167;
      *(_QWORD *)v167 = v167 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v167 & 3LL;
      *(__m128i *)(v169->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                               (__m128i)v169->m128i_u64[0],
                                               (__m128i)v169->m128i_u64[0]);
      *(_QWORD *)v169->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v169->m128i_i64[0] |= 2uLL;
      v98 = v169->m128i_i64[0];
LABEL_153:
      LODWORD(v173) = v19;
      v100 = qalloc(40);
      v101 = v100;
      if ( !v100 )
      {
        v8 = __cxa_allocate_exception(8u);
        *v8 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v8,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v102 = _mm_load_si128(&v172);
      v103 = v178;
      *(_OWORD *)(v100 + 16) = 0;
      v19 = v173;
      *(_OWORD *)v100 = 0;
      *(__m128i *)(v100 + 24) = v102;
      *(_QWORD *)v100 = v98 & 0xFFFFFFFFFFFFFFFCLL;
      v104 = _mm_loadl_epi64(v103);
      *(_QWORD *)v100 = v98 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v100 + 8) = _mm_unpacklo_epi64(v104, v104);
      if ( v103->m128i_i64[0] == v98 )
      {
LABEL_253:
        *(_QWORD *)v98 = v101 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v98 & 3LL;
        *(_QWORD *)(v103->m128i_i64[0] + 8) = v101;
        *(_QWORD *)(v103->m128i_i64[0] + 16) = v101;
        v166 = *(_QWORD *)v101 & 2LL;
        *(_QWORD *)v101 &= ~1uLL;
        v172.m128i_i64[0] = v103->m128i_i64[0];
        *(_QWORD *)v101 = v166 | v172.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_157;
      }
      v105 = v178;
      *(_QWORD *)(v98 + 8) = v101;
      v106 = v105->m128i_i64[0];
      if ( *(_QWORD *)(v106 + 8) != v98 )
        goto LABEL_156;
LABEL_247:
      *(_QWORD *)(v106 + 8) = v101;
      goto LABEL_156;
    }
    if ( !v178->m128i_i64[1] )
      goto LABEL_153;
    v153 = 1;
    v154 = *(_QWORD *)v98 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v154 & 2) != 0 )
      goto LABEL_241;
    while ( 2 )
    {
      if ( v19 < *(_DWORD *)(v154 + 24) )
        goto LABEL_251;
      if ( v19 != *(_DWORD *)(v154 + 24) )
      {
LABEL_239:
        v155 = *(_BYTE **)(v154 + 16);
        v153 = 0;
        if ( (*v155 & 2) != 0 )
          goto LABEL_240;
LABEL_252:
        v154 = (unsigned __int64)v155;
        continue;
      }
      break;
    }
    v165 = _mm_cvtsi128_si32(v99);
    if ( v165 < *(_DWORD *)(v154 + 28) )
    {
LABEL_251:
      v155 = *(_BYTE **)(v154 + 8);
      v153 = 1;
      if ( (*v155 & 2) != 0 )
      {
LABEL_240:
        v98 = v154;
        goto LABEL_241;
      }
      goto LABEL_252;
    }
    if ( v165 > *(_DWORD *)(v154 + 28) )
      goto LABEL_239;
    if ( v154 )
      goto LABEL_158;
    v98 = 0;
LABEL_241:
    LODWORD(v173) = v19;
    v156 = qalloc(40);
    v101 = v156;
    if ( !v156 )
    {
      v7 = __cxa_allocate_exception(8u);
      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v157 = _mm_load_si128(&v172);
    v103 = v178;
    *(_OWORD *)(v156 + 16) = 0;
    v19 = v173;
    *(_OWORD *)v156 = 0;
    *(__m128i *)(v156 + 24) = v157;
    *(_QWORD *)v156 = v98 & 0xFFFFFFFFFFFFFFFCLL;
    v158 = _mm_loadl_epi64(v103);
    *(_QWORD *)v156 = v98 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v156 + 8) = _mm_unpacklo_epi64(v158, v158);
    if ( v98 == v103->m128i_i64[0] )
      goto LABEL_253;
    if ( v153 )
    {
      v164 = v178;
      *(_QWORD *)(v98 + 8) = v101;
      v106 = v164->m128i_i64[0];
      if ( v98 != *(_QWORD *)(v106 + 8) )
        goto LABEL_156;
      goto LABEL_247;
    }
    v159 = v178;
    *(_QWORD *)(v98 + 16) = v101;
    v160 = v159->m128i_i64[0];
    if ( v98 == *(_QWORD *)(v160 + 16) )
      *(_QWORD *)(v160 + 16) = v101;
LABEL_156:
    v172.m128i_i32[0] = v19;
    sub_6DDB0(v178, (__int64 *)v101);
    v19 = v172.m128i_i32[0];
LABEL_157:
    ++v178->m128i_i64[1];
LABEL_158:
    v90 = ++v89;
    if ( v89 < (unsigned __int64)v192 )
      continue;
    break;
  }
LABEL_159:
  if ( !v184 )
    goto LABEL_166;
  v107 = v184[1];
  if ( !v107 )
    goto LABEL_166;
  if ( v177[1] != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51803);
    goto LABEL_281;
  }
  v108 = v184;
  v109 = *v184;
  v110 = *(_DWORD *)*v177;
  v111 = (__int32 *)*v184;
  if ( 8 * v107 )
  {
    do
    {
      if ( *v111 == v110 )
      {
        *v111 = v19;
        v107 = v108[1];
        v109 = *v108;
      }
      v111 += 2;
    }
    while ( v111 != (__int32 *)(v109 + 8 * v107) );
  }
LABEL_166:
  v112 = *(_QWORD *)a1;
  v113 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL);
  if ( v113 == sub_605E0 )
  {
    v114 = *(unsigned int *)(a1 + 36);
  }
  else
  {
    v172.m128i_i32[0] = v19;
    v170 = v113(a1);
    v112 = *(_QWORD *)a1;
    v19 = v172.m128i_i32[0];
    v114 = v170;
  }
  v115 = (_DWORD *)*v177;
  v116 = *v177 + 4 * v177[1];
  if ( *v177 != v116 )
  {
    while ( (_DWORD)v114 != *v115 )
    {
      if ( (_DWORD *)v116 == ++v115 )
        goto LABEL_174;
    }
    if ( v115 != (_DWORD *)v116 )
      *(_DWORD *)(a1 + 36) = v19;
  }
LABEL_174:
  v117 = *(__int64 (__fastcall **)(__int64))(v112 + 88);
  if ( v117 == sub_605F0 )
  {
    v118 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v172.m128i_i32[0] = v19;
    v171 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64), __int64))v117)(
             a1,
             v112,
             sub_605F0,
             v114);
    v19 = v172.m128i_i32[0];
    v118 = v171;
  }
  v119 = (_DWORD *)*v177;
  v120 = *v177 + 4 * v177[1];
  if ( *v177 != v120 )
  {
    while ( v118 != *v119 )
    {
      if ( (_DWORD *)v120 == ++v119 )
        goto LABEL_182;
    }
    if ( (_DWORD *)v120 != v119 )
      *(_DWORD *)(a1 + 40) = v19;
  }
LABEL_182:
  v121 = v183;
  v122 = v177;
  v172.m128i_i32[0] = v19;
  v123 = v180;
  sub_6C260(v180, v19, v177, v183);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v123 + 168LL))(v123, v185);
  v124 = v172.m128i_i32[0];
  *(_DWORD *)(v123[38] + 4LL * v172.m128i_i32[0]) = v121;
  v125 = v124;
  if ( v122[1] )
  {
    v126 = 3 * v124;
    v127 = 0;
    v128 = 0;
    v129 = 8 * v126;
    do
    {
      v130 = *(int *)(*v177 + 4 * v128);
      v131 = (__int64 *)(v129 + v180[6]);
      v132 = (_DWORD *)*v131;
      v133 = v131[1];
      v134 = (_DWORD *)(*v131 + 4 * v133);
      if ( (_DWORD *)*v131 == v134 )
        goto LABEL_227;
      v135 = (_DWORD *)*v131;
      while ( (_DWORD)v130 != *v135 )
      {
        if ( v134 == ++v135 )
          goto LABEL_227;
      }
      if ( v134 == v135 )
      {
LABEL_227:
        if ( v131[2] < (unsigned __int64)(v133 + 1) )
        {
          v150 = v129 + v180[6];
          v172.m128i_i32[0] = v125;
          v151 = qvector_reserve(v150, v132, v133 + 1, 4);
          v152 = v131[1];
          v125 = v172.m128i_i32[0];
          *v131 = v151;
          v134 = (_DWORD *)(v151 + 4 * v152);
        }
        v145 = v180;
        *v134 = v130;
        ++v131[1];
        v146 = (__int64 *)(v145[9] + 24 * v130);
        v147 = v146[1];
        v148 = *v146;
        if ( v146[2] < (unsigned __int64)(v147 + 1) )
        {
          v172.m128i_i32[0] = v125;
          v149 = qvector_reserve(v146, v148, v147 + 1, 4);
          *v146 = v149;
          v148 = v149;
          v125 = v172.m128i_i32[0];
          v147 = v146[1];
        }
        *(_DWORD *)(v148 + 4 * v147) = v125;
        ++v146[1];
      }
      v128 = ++v127;
    }
    while ( v127 < (unsigned __int64)v177[1] );
  }
  v136 = v193;
  *((_DWORD *)v180 + 9) = v125;
  if ( v136 )
  {
    v172.m128i_i32[0] = v125;
    *(_QWORD *)&v194 = 0;
    qfree(v136);
    v125 = v172.m128i_i32[0];
  }
  if ( v191 )
  {
    v172.m128i_i32[0] = v125;
    *(_QWORD *)&v192 = 0;
    qfree(v191);
    return v172.m128i_u32[0];
  }
  return v125;
}
