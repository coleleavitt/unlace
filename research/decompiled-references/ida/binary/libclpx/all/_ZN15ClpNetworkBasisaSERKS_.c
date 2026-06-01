int *__fastcall ClpNetworkBasis::operator=(int *a1, int *a2)
{
  void *v3; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  bool v16; // zf
  int v17; // edi
  int v18; // eax
  unsigned __int64 v19; // rdi
  __m128i *v20; // rax
  __m128i *v21; // r8
  int v22; // esi
  unsigned int v23; // r10d
  const __m128i *v24; // rdx
  __m128i *v25; // rcx
  __int64 v26; // r10
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __m128i *v31; // rax
  __m128i *v32; // r8
  int v33; // esi
  unsigned int v34; // r10d
  const __m128i *v35; // rdx
  __m128i *v36; // rcx
  __int64 v37; // r10
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  __m128i *v42; // rax
  __m128i *v43; // r8
  int v44; // esi
  unsigned int v45; // r10d
  const __m128i *v46; // rdx
  __m128i *v47; // rcx
  __int64 v48; // r10
  __m128i v49; // xmm1
  __m128i v50; // xmm0
  __int64 v51; // rdx
  unsigned __int64 v52; // rdi
  __m128i *v53; // rax
  __m128i *v54; // r8
  int v55; // esi
  unsigned int v56; // r10d
  const __m128i *v57; // rdx
  __m128i *v58; // rcx
  __int64 v59; // r10
  __m128i v60; // xmm1
  __m128i v61; // xmm0
  __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  __m128i *v64; // rax
  __m128i *v65; // r8
  int v66; // esi
  unsigned int v67; // r10d
  const __m128i *v68; // rdx
  __m128i *v69; // rcx
  __int64 v70; // r10
  __m128i v71; // xmm1
  __m128i v72; // xmm0
  __int64 v73; // rdx
  unsigned __int64 v74; // rdi
  _QWORD *v75; // rax
  _QWORD *v76; // r9
  int v77; // esi
  __int64 *v78; // rcx
  _QWORD *v79; // rdx
  __int64 v80; // xmm0_8
  __int64 v81; // rdx
  unsigned __int64 v82; // rdi
  __m128i *v83; // rax
  __m128i *v84; // r8
  int v85; // esi
  unsigned int v86; // r10d
  const __m128i *v87; // rdx
  __m128i *v88; // rcx
  __int64 v89; // r10
  __m128i v90; // xmm1
  __m128i v91; // xmm0
  __int64 v92; // rdx
  unsigned __int64 v93; // rdi
  __m128i *v94; // rax
  __m128i *v95; // r8
  int v96; // esi
  unsigned int v97; // r10d
  const __m128i *v98; // rdx
  __m128i *v99; // rcx
  __int64 v100; // r10
  __m128i v101; // xmm1
  __m128i v102; // xmm0
  __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  __m128i *v105; // rax
  __m128i *v106; // r8
  int v107; // esi
  unsigned int v108; // r10d
  const __m128i *v109; // rdx
  __m128i *v110; // rcx
  __int64 v111; // r10
  __m128i v112; // xmm1
  __m128i v113; // xmm0
  __int64 v114; // rdx
  unsigned __int64 v115; // rdi
  __m128i *v116; // rax
  __m128i *v117; // r8
  int v118; // esi
  unsigned int v119; // r10d
  const __m128i *v120; // rdx
  __m128i *v121; // rcx
  __int64 v122; // r10
  __m128i v123; // xmm1
  __m128i v124; // xmm0
  __int64 v125; // rdx
  unsigned __int64 v126; // rdi
  __m128i *v127; // rax
  __m128i *v128; // r8
  int v129; // esi
  unsigned int v130; // r10d
  const __m128i *v131; // rdx
  __m128i *v132; // rcx
  __int64 v133; // r10
  __m128i v134; // xmm1
  __m128i v135; // xmm0
  __int64 v136; // rdx
  int *result; // rax
  _BYTE *v138; // rax
  int v139; // edx
  _BYTE *v140; // rsi
  int v141; // r8d
  unsigned int v142; // edi
  __int64 v143; // rdx
  unsigned int v144; // ecx
  __int64 v145; // rdx
  _BYTE *v146; // r9
  _BYTE *v147; // rdx
  signed int v148; // edi
  __int64 v149; // rdx
  __m128i *v150; // rcx
  int *v151; // rdx
  int v152; // r11d
  __m128i *v153; // rcx
  int *v154; // rdx
  int v155; // r11d
  __m128i *v156; // rcx
  int *v157; // rdx
  int v158; // r11d
  __m128i *v159; // rcx
  int *v160; // rdx
  int v161; // r11d
  __m128i *v162; // rcx
  int *v163; // rdx
  int v164; // r11d
  __m128i *v165; // rcx
  int *v166; // rdx
  int v167; // r11d
  __m128i *v168; // rcx
  int *v169; // rdx
  int v170; // r11d
  __m128i *v171; // rcx
  int *v172; // rdx
  int v173; // r11d
  __m128i *v174; // rdx
  int *v175; // rcx
  int v176; // r11d
  __m128i *v177; // rcx
  int *v178; // rdx
  int v179; // r11d
  _BYTE *v180; // rcx
  char *v181; // rdx
  char v182; // r9

  if ( a1 == a2 )
    return a1;
  v3 = *((void **)a1 + 2);
  if ( v3 )
    operator delete[](v3);
  v5 = *((void **)a1 + 3);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)a1 + 4);
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)a1 + 5);
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)a1 + 6);
  if ( v8 )
    operator delete[](v8);
  v9 = *((void **)a1 + 7);
  if ( v9 )
    operator delete[](v9);
  v10 = *((void **)a1 + 8);
  if ( v10 )
    operator delete[](v10);
  v11 = *((void **)a1 + 9);
  if ( v11 )
    operator delete[](v11);
  v12 = *((void **)a1 + 10);
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)a1 + 11);
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)a1 + 12);
  if ( v14 )
    operator delete[](v14);
  v15 = *((void **)a1 + 13);
  if ( v15 )
    operator delete[](v15);
  v16 = *((_QWORD *)a2 + 2) == 0;
  v17 = *a2;
  v18 = a2[1];
  *a1 = *a2;
  a1[1] = v18;
  if ( v16 )
  {
    *((_QWORD *)a1 + 2) = 0;
  }
  else
  {
    v19 = v17 + 1;
    if ( v19 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v20 = (__m128i *)operator new[](4 * v19);
    v17 = *a1;
    *((_QWORD *)a1 + 2) = v20;
    v21 = *((__m128i **)a2 + 2);
    v22 = v17 + 1;
    if ( v17 != -1 && v21 != v20 )
    {
      v23 = v22 >> 3;
      if ( v22 >> 3 > 0 )
      {
        if ( (v21 >= &v20[2] || v20 >= &v21[2]) && v23 > 1 )
        {
          v24 = *((const __m128i **)a2 + 2);
          v25 = v20;
          v26 = v23 - 1;
          do
          {
            v27 = _mm_loadu_si128(v24);
            v24 += 2;
            v25 += 2;
            v28 = _mm_loadu_si128(v24 - 1);
            v25[-2] = v27;
            v25[-1] = v28;
          }
          while ( v24 != &v21[2 * v26 + 2] );
        }
        else
        {
          v150 = v20;
          v151 = *((int **)a2 + 2);
          v26 = v23 - 1;
          do
          {
            v152 = *v151;
            v151 += 8;
            v150 += 2;
            v150[-2].m128i_i32[0] = v152;
            v150[-2].m128i_i32[1] = *(v151 - 7);
            v150[-2].m128i_i32[2] = *(v151 - 6);
            v150[-2].m128i_i32[3] = *(v151 - 5);
            v150[-1].m128i_i32[0] = *(v151 - 4);
            v150[-1].m128i_i32[1] = *(v151 - 3);
            v150[-1].m128i_i32[2] = *(v151 - 2);
            v150[-1].m128i_i32[3] = *(v151 - 1);
          }
          while ( &v21[2 * v26 + 2] != (__m128i *)v151 );
        }
        v29 = 32 * ((int)v26 + 1LL);
        v21 = (__m128i *)((char *)v21 + v29);
        v20 = (__m128i *)((char *)v20 + v29);
      }
      switch ( v22 % 8 )
      {
        case 1:
          goto LABEL_184;
        case 2:
          goto LABEL_183;
        case 3:
          goto LABEL_182;
        case 4:
          goto LABEL_181;
        case 5:
          goto LABEL_180;
        case 6:
          goto LABEL_179;
        case 7:
          v20[1].m128i_i32[2] = v21[1].m128i_i32[2];
LABEL_179:
          v20[1].m128i_i32[1] = v21[1].m128i_i32[1];
LABEL_180:
          v20[1].m128i_i32[0] = v21[1].m128i_i32[0];
LABEL_181:
          v20->m128i_i32[3] = v21->m128i_i32[3];
LABEL_182:
          v20->m128i_i32[2] = v21->m128i_i32[2];
LABEL_183:
          v20->m128i_i32[1] = v21->m128i_i32[1];
LABEL_184:
          v20->m128i_i32[0] = v21->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  if ( *((_QWORD *)a2 + 3) )
  {
    v30 = v17 + 1;
    if ( v30 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v31 = (__m128i *)operator new[](4 * v30);
    v17 = *a1;
    *((_QWORD *)a1 + 3) = v31;
    v32 = *((__m128i **)a2 + 3);
    v33 = v17 + 1;
    if ( v17 != -1 && v32 != v31 )
    {
      v34 = v33 >> 3;
      if ( v33 >> 3 > 0 )
      {
        if ( (v32 >= &v31[2] || v31 >= &v32[2]) && v34 > 1 )
        {
          v35 = *((const __m128i **)a2 + 3);
          v36 = v31;
          v37 = v34 - 1;
          do
          {
            v38 = _mm_loadu_si128(v35);
            v35 += 2;
            v36 += 2;
            v39 = _mm_loadu_si128(v35 - 1);
            v36[-2] = v38;
            v36[-1] = v39;
          }
          while ( v35 != &v32[2 * v37 + 2] );
        }
        else
        {
          v153 = v31;
          v154 = *((int **)a2 + 3);
          v37 = v34 - 1;
          do
          {
            v155 = *v154;
            v154 += 8;
            v153 += 2;
            v153[-2].m128i_i32[0] = v155;
            v153[-2].m128i_i32[1] = *(v154 - 7);
            v153[-2].m128i_i32[2] = *(v154 - 6);
            v153[-2].m128i_i32[3] = *(v154 - 5);
            v153[-1].m128i_i32[0] = *(v154 - 4);
            v153[-1].m128i_i32[1] = *(v154 - 3);
            v153[-1].m128i_i32[2] = *(v154 - 2);
            v153[-1].m128i_i32[3] = *(v154 - 1);
          }
          while ( &v32[2 * v37 + 2] != (__m128i *)v154 );
        }
        v40 = 32 * ((int)v37 + 1LL);
        v32 = (__m128i *)((char *)v32 + v40);
        v31 = (__m128i *)((char *)v31 + v40);
      }
      switch ( v33 % 8 )
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
          v31[1].m128i_i32[2] = v32[1].m128i_i32[2];
LABEL_186:
          v31[1].m128i_i32[1] = v32[1].m128i_i32[1];
LABEL_187:
          v31[1].m128i_i32[0] = v32[1].m128i_i32[0];
LABEL_188:
          v31->m128i_i32[3] = v32->m128i_i32[3];
LABEL_189:
          v31->m128i_i32[2] = v32->m128i_i32[2];
LABEL_190:
          v31->m128i_i32[1] = v32->m128i_i32[1];
LABEL_191:
          v31->m128i_i32[0] = v32->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0;
  }
  if ( *((_QWORD *)a2 + 4) )
  {
    v41 = v17 + 1;
    if ( v41 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v42 = (__m128i *)operator new[](4 * v41);
    v17 = *a1;
    *((_QWORD *)a1 + 4) = v42;
    v43 = *((__m128i **)a2 + 4);
    v44 = v17 + 1;
    if ( v17 != -1 && v43 != v42 )
    {
      v45 = v44 >> 3;
      if ( v44 >> 3 > 0 )
      {
        if ( (v43 >= &v42[2] || v42 >= &v43[2]) && v45 > 1 )
        {
          v46 = *((const __m128i **)a2 + 4);
          v47 = v42;
          v48 = v45 - 1;
          do
          {
            v49 = _mm_loadu_si128(v46);
            v46 += 2;
            v47 += 2;
            v50 = _mm_loadu_si128(v46 - 1);
            v47[-2] = v49;
            v47[-1] = v50;
          }
          while ( v46 != &v43[2 * v48 + 2] );
        }
        else
        {
          v159 = v42;
          v160 = *((int **)a2 + 4);
          v48 = v45 - 1;
          do
          {
            v161 = *v160;
            v160 += 8;
            v159 += 2;
            v159[-2].m128i_i32[0] = v161;
            v159[-2].m128i_i32[1] = *(v160 - 7);
            v159[-2].m128i_i32[2] = *(v160 - 6);
            v159[-2].m128i_i32[3] = *(v160 - 5);
            v159[-1].m128i_i32[0] = *(v160 - 4);
            v159[-1].m128i_i32[1] = *(v160 - 3);
            v159[-1].m128i_i32[2] = *(v160 - 2);
            v159[-1].m128i_i32[3] = *(v160 - 1);
          }
          while ( &v43[2 * v48 + 2] != (__m128i *)v160 );
        }
        v51 = 32 * ((int)v48 + 1LL);
        v43 = (__m128i *)((char *)v43 + v51);
        v42 = (__m128i *)((char *)v42 + v51);
      }
      switch ( v44 % 8 )
      {
        case 1:
          goto LABEL_205;
        case 2:
          goto LABEL_204;
        case 3:
          goto LABEL_203;
        case 4:
          goto LABEL_202;
        case 5:
          goto LABEL_201;
        case 6:
          goto LABEL_200;
        case 7:
          v42[1].m128i_i32[2] = v43[1].m128i_i32[2];
LABEL_200:
          v42[1].m128i_i32[1] = v43[1].m128i_i32[1];
LABEL_201:
          v42[1].m128i_i32[0] = v43[1].m128i_i32[0];
LABEL_202:
          v42->m128i_i32[3] = v43->m128i_i32[3];
LABEL_203:
          v42->m128i_i32[2] = v43->m128i_i32[2];
LABEL_204:
          v42->m128i_i32[1] = v43->m128i_i32[1];
LABEL_205:
          v42->m128i_i32[0] = v43->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 4) = 0;
  }
  if ( *((_QWORD *)a2 + 5) )
  {
    v52 = v17 + 1;
    if ( v52 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v53 = (__m128i *)operator new[](4 * v52);
    v17 = *a1;
    *((_QWORD *)a1 + 5) = v53;
    v54 = *((__m128i **)a2 + 5);
    v55 = v17 + 1;
    if ( v17 != -1 && v54 != v53 )
    {
      v56 = v55 >> 3;
      if ( v55 >> 3 > 0 )
      {
        if ( (v54 >= &v53[2] || v53 >= &v54[2]) && v56 > 1 )
        {
          v57 = *((const __m128i **)a2 + 5);
          v58 = v53;
          v59 = v56 - 1;
          do
          {
            v60 = _mm_loadu_si128(v57);
            v57 += 2;
            v58 += 2;
            v61 = _mm_loadu_si128(v57 - 1);
            v58[-2] = v60;
            v58[-1] = v61;
          }
          while ( v57 != &v54[2 * v59 + 2] );
        }
        else
        {
          v162 = v53;
          v163 = *((int **)a2 + 5);
          v59 = v56 - 1;
          do
          {
            v164 = *v163;
            v163 += 8;
            v162 += 2;
            v162[-2].m128i_i32[0] = v164;
            v162[-2].m128i_i32[1] = *(v163 - 7);
            v162[-2].m128i_i32[2] = *(v163 - 6);
            v162[-2].m128i_i32[3] = *(v163 - 5);
            v162[-1].m128i_i32[0] = *(v163 - 4);
            v162[-1].m128i_i32[1] = *(v163 - 3);
            v162[-1].m128i_i32[2] = *(v163 - 2);
            v162[-1].m128i_i32[3] = *(v163 - 1);
          }
          while ( &v54[2 * v59 + 2] != (__m128i *)v163 );
        }
        v62 = 32 * ((int)v59 + 1LL);
        v54 = (__m128i *)((char *)v54 + v62);
        v53 = (__m128i *)((char *)v53 + v62);
      }
      switch ( v55 % 8 )
      {
        case 1:
          goto LABEL_198;
        case 2:
          goto LABEL_197;
        case 3:
          goto LABEL_196;
        case 4:
          goto LABEL_195;
        case 5:
          goto LABEL_194;
        case 6:
          goto LABEL_193;
        case 7:
          v53[1].m128i_i32[2] = v54[1].m128i_i32[2];
LABEL_193:
          v53[1].m128i_i32[1] = v54[1].m128i_i32[1];
LABEL_194:
          v53[1].m128i_i32[0] = v54[1].m128i_i32[0];
LABEL_195:
          v53->m128i_i32[3] = v54->m128i_i32[3];
LABEL_196:
          v53->m128i_i32[2] = v54->m128i_i32[2];
LABEL_197:
          v53->m128i_i32[1] = v54->m128i_i32[1];
LABEL_198:
          v53->m128i_i32[0] = v54->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 5) = 0;
  }
  if ( *((_QWORD *)a2 + 6) )
  {
    v63 = v17 + 1;
    if ( v63 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v64 = (__m128i *)operator new[](4 * v63);
    v17 = *a1;
    *((_QWORD *)a1 + 6) = v64;
    v65 = *((__m128i **)a2 + 6);
    v66 = v17 + 1;
    if ( v17 != -1 && v65 != v64 )
    {
      v67 = v66 >> 3;
      if ( v66 >> 3 > 0 )
      {
        if ( (v65 >= &v64[2] || v64 >= &v65[2]) && v67 > 1 )
        {
          v68 = *((const __m128i **)a2 + 6);
          v69 = v64;
          v70 = v67 - 1;
          do
          {
            v71 = _mm_loadu_si128(v68);
            v68 += 2;
            v69 += 2;
            v72 = _mm_loadu_si128(v68 - 1);
            v69[-2] = v71;
            v69[-1] = v72;
          }
          while ( v68 != &v65[2 * v70 + 2] );
        }
        else
        {
          v156 = v64;
          v157 = *((int **)a2 + 6);
          v70 = v67 - 1;
          do
          {
            v158 = *v157;
            v157 += 8;
            v156 += 2;
            v156[-2].m128i_i32[0] = v158;
            v156[-2].m128i_i32[1] = *(v157 - 7);
            v156[-2].m128i_i32[2] = *(v157 - 6);
            v156[-2].m128i_i32[3] = *(v157 - 5);
            v156[-1].m128i_i32[0] = *(v157 - 4);
            v156[-1].m128i_i32[1] = *(v157 - 3);
            v156[-1].m128i_i32[2] = *(v157 - 2);
            v156[-1].m128i_i32[3] = *(v157 - 1);
          }
          while ( &v65[2 * v70 + 2] != (__m128i *)v157 );
        }
        v73 = 32 * ((int)v70 + 1LL);
        v65 = (__m128i *)((char *)v65 + v73);
        v64 = (__m128i *)((char *)v64 + v73);
      }
      switch ( v66 % 8 )
      {
        case 1:
          goto LABEL_212;
        case 2:
          goto LABEL_211;
        case 3:
          goto LABEL_210;
        case 4:
          goto LABEL_209;
        case 5:
          goto LABEL_208;
        case 6:
          goto LABEL_207;
        case 7:
          v64[1].m128i_i32[2] = v65[1].m128i_i32[2];
LABEL_207:
          v64[1].m128i_i32[1] = v65[1].m128i_i32[1];
LABEL_208:
          v64[1].m128i_i32[0] = v65[1].m128i_i32[0];
LABEL_209:
          v64->m128i_i32[3] = v65->m128i_i32[3];
LABEL_210:
          v64->m128i_i32[2] = v65->m128i_i32[2];
LABEL_211:
          v64->m128i_i32[1] = v65->m128i_i32[1];
LABEL_212:
          v64->m128i_i32[0] = v65->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 6) = 0;
  }
  if ( *((_QWORD *)a2 + 7) )
  {
    v74 = v17 + 1;
    if ( v74 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_289;
    v75 = (_QWORD *)operator new[](8 * v74);
    v17 = *a1;
    *((_QWORD *)a1 + 7) = v75;
    v76 = *((_QWORD **)a2 + 7);
    v77 = v17 + 1;
    if ( v17 != -1 && v76 != v75 )
    {
      if ( v77 >> 3 > 0 )
      {
        v78 = *((__int64 **)a2 + 7);
        v79 = v75;
        do
        {
          v80 = *v78;
          v79 += 8;
          v78 += 8;
          *(v79 - 8) = v80;
          *(v79 - 7) = *(v78 - 7);
          *(v79 - 6) = *(v78 - 6);
          *(v79 - 5) = *(v78 - 5);
          *(v79 - 4) = *(v78 - 4);
          *(v79 - 3) = *(v78 - 3);
          *(v79 - 2) = *(v78 - 2);
          *(v79 - 1) = *(v78 - 1);
        }
        while ( v79 != &v75[8 * (unsigned int)((v77 >> 3) - 1) + 8] );
        v81 = ((v77 >> 3) - 1 + 1LL) << 6;
        v76 = (_QWORD *)((char *)v76 + v81);
        v75 = (_QWORD *)((char *)v75 + v81);
      }
      switch ( v77 % 8 )
      {
        case 1:
          goto LABEL_177;
        case 2:
          goto LABEL_176;
        case 3:
          goto LABEL_175;
        case 4:
          goto LABEL_174;
        case 5:
          goto LABEL_173;
        case 6:
          goto LABEL_172;
        case 7:
          v75[6] = v76[6];
LABEL_172:
          v75[5] = v76[5];
LABEL_173:
          v75[4] = v76[4];
LABEL_174:
          v75[3] = v76[3];
LABEL_175:
          v75[2] = v76[2];
LABEL_176:
          v75[1] = v76[1];
LABEL_177:
          *v75 = *v76;
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 7) = 0;
  }
  if ( *((_QWORD *)a2 + 8) )
  {
    v82 = v17 + 1;
    if ( v82 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v83 = (__m128i *)operator new[](4 * v82);
    v17 = *a1;
    *((_QWORD *)a1 + 8) = v83;
    v84 = *((__m128i **)a2 + 8);
    v85 = v17 + 1;
    if ( v17 != -1 && v84 != v83 )
    {
      v86 = v85 >> 3;
      if ( v85 >> 3 > 0 )
      {
        if ( (v84 >= &v83[2] || v83 >= &v84[2]) && v86 > 1 )
        {
          v87 = *((const __m128i **)a2 + 8);
          v88 = v83;
          v89 = v86 - 1;
          do
          {
            v90 = _mm_loadu_si128(v87);
            v87 += 2;
            v88 += 2;
            v91 = _mm_loadu_si128(v87 - 1);
            v88[-2] = v90;
            v88[-1] = v91;
          }
          while ( v87 != &v84[2 * v89 + 2] );
        }
        else
        {
          v177 = v83;
          v178 = *((int **)a2 + 8);
          v89 = v86 - 1;
          do
          {
            v179 = *v178;
            v178 += 8;
            v177 += 2;
            v177[-2].m128i_i32[0] = v179;
            v177[-2].m128i_i32[1] = *(v178 - 7);
            v177[-2].m128i_i32[2] = *(v178 - 6);
            v177[-2].m128i_i32[3] = *(v178 - 5);
            v177[-1].m128i_i32[0] = *(v178 - 4);
            v177[-1].m128i_i32[1] = *(v178 - 3);
            v177[-1].m128i_i32[2] = *(v178 - 2);
            v177[-1].m128i_i32[3] = *(v178 - 1);
          }
          while ( &v84[2 * v89 + 2] != (__m128i *)v178 );
        }
        v92 = 32 * ((int)v89 + 1LL);
        v84 = (__m128i *)((char *)v84 + v92);
        v83 = (__m128i *)((char *)v83 + v92);
      }
      switch ( v85 % 8 )
      {
        case 1:
          goto LABEL_226;
        case 2:
          goto LABEL_225;
        case 3:
          goto LABEL_224;
        case 4:
          goto LABEL_223;
        case 5:
          goto LABEL_222;
        case 6:
          goto LABEL_221;
        case 7:
          v83[1].m128i_i32[2] = v84[1].m128i_i32[2];
LABEL_221:
          v83[1].m128i_i32[1] = v84[1].m128i_i32[1];
LABEL_222:
          v83[1].m128i_i32[0] = v84[1].m128i_i32[0];
LABEL_223:
          v83->m128i_i32[3] = v84->m128i_i32[3];
LABEL_224:
          v83->m128i_i32[2] = v84->m128i_i32[2];
LABEL_225:
          v83->m128i_i32[1] = v84->m128i_i32[1];
LABEL_226:
          v83->m128i_i32[0] = v84->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 8) = 0;
  }
  if ( *((_QWORD *)a2 + 9) )
  {
    v93 = v17 + 1;
    if ( v93 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v94 = (__m128i *)operator new[](4 * v93);
    v17 = *a1;
    *((_QWORD *)a1 + 9) = v94;
    v95 = *((__m128i **)a2 + 9);
    v96 = v17 + 1;
    if ( v17 != -1 && v95 != v94 )
    {
      v97 = v96 >> 3;
      if ( v96 >> 3 > 0 )
      {
        if ( (v95 >= &v94[2] || v94 >= &v95[2]) && v97 > 1 )
        {
          v98 = *((const __m128i **)a2 + 9);
          v99 = v94;
          v100 = v97 - 1;
          do
          {
            v101 = _mm_loadu_si128(v98);
            v98 += 2;
            v99 += 2;
            v102 = _mm_loadu_si128(v98 - 1);
            v99[-2] = v101;
            v99[-1] = v102;
          }
          while ( v98 != &v95[2 * v100 + 2] );
        }
        else
        {
          v171 = v94;
          v172 = *((int **)a2 + 9);
          v100 = v97 - 1;
          do
          {
            v173 = *v172;
            v172 += 8;
            v171 += 2;
            v171[-2].m128i_i32[0] = v173;
            v171[-2].m128i_i32[1] = *(v172 - 7);
            v171[-2].m128i_i32[2] = *(v172 - 6);
            v171[-2].m128i_i32[3] = *(v172 - 5);
            v171[-1].m128i_i32[0] = *(v172 - 4);
            v171[-1].m128i_i32[1] = *(v172 - 3);
            v171[-1].m128i_i32[2] = *(v172 - 2);
            v171[-1].m128i_i32[3] = *(v172 - 1);
          }
          while ( &v95[2 * v100 + 2] != (__m128i *)v172 );
        }
        v103 = 32 * ((int)v100 + 1LL);
        v95 = (__m128i *)((char *)v95 + v103);
        v94 = (__m128i *)((char *)v94 + v103);
      }
      switch ( v96 % 8 )
      {
        case 1:
          goto LABEL_233;
        case 2:
          goto LABEL_232;
        case 3:
          goto LABEL_231;
        case 4:
          goto LABEL_230;
        case 5:
          goto LABEL_229;
        case 6:
          goto LABEL_228;
        case 7:
          v94[1].m128i_i32[2] = v95[1].m128i_i32[2];
LABEL_228:
          v94[1].m128i_i32[1] = v95[1].m128i_i32[1];
LABEL_229:
          v94[1].m128i_i32[0] = v95[1].m128i_i32[0];
LABEL_230:
          v94->m128i_i32[3] = v95->m128i_i32[3];
LABEL_231:
          v94->m128i_i32[2] = v95->m128i_i32[2];
LABEL_232:
          v94->m128i_i32[1] = v95->m128i_i32[1];
LABEL_233:
          v94->m128i_i32[0] = v95->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 9) = 0;
  }
  if ( *((_QWORD *)a2 + 10) )
  {
    v104 = v17 + 1;
    if ( v104 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v105 = (__m128i *)operator new[](4 * v104);
    v17 = *a1;
    *((_QWORD *)a1 + 10) = v105;
    v106 = *((__m128i **)a2 + 10);
    v107 = v17 + 1;
    if ( v17 != -1 && v106 != v105 )
    {
      v108 = v107 >> 3;
      if ( v107 >> 3 > 0 )
      {
        if ( (v106 >= &v105[2] || v105 >= &v106[2]) && v108 > 1 )
        {
          v109 = *((const __m128i **)a2 + 10);
          v110 = v105;
          v111 = v108 - 1;
          do
          {
            v112 = _mm_loadu_si128(v109);
            v109 += 2;
            v110 += 2;
            v113 = _mm_loadu_si128(v109 - 1);
            v110[-2] = v112;
            v110[-1] = v113;
          }
          while ( v109 != &v106[2 * v111 + 2] );
        }
        else
        {
          v168 = v105;
          v169 = *((int **)a2 + 10);
          v111 = v108 - 1;
          do
          {
            v170 = *v169;
            v169 += 8;
            v168 += 2;
            v168[-2].m128i_i32[0] = v170;
            v168[-2].m128i_i32[1] = *(v169 - 7);
            v168[-2].m128i_i32[2] = *(v169 - 6);
            v168[-2].m128i_i32[3] = *(v169 - 5);
            v168[-1].m128i_i32[0] = *(v169 - 4);
            v168[-1].m128i_i32[1] = *(v169 - 3);
            v168[-1].m128i_i32[2] = *(v169 - 2);
            v168[-1].m128i_i32[3] = *(v169 - 1);
          }
          while ( &v106[2 * v111 + 2] != (__m128i *)v169 );
        }
        v114 = 32 * ((int)v111 + 1LL);
        v106 = (__m128i *)((char *)v106 + v114);
        v105 = (__m128i *)((char *)v105 + v114);
      }
      switch ( v107 % 8 )
      {
        case 1:
          goto LABEL_219;
        case 2:
          goto LABEL_218;
        case 3:
          goto LABEL_217;
        case 4:
          goto LABEL_216;
        case 5:
          goto LABEL_215;
        case 6:
          goto LABEL_214;
        case 7:
          v105[1].m128i_i32[2] = v106[1].m128i_i32[2];
LABEL_214:
          v105[1].m128i_i32[1] = v106[1].m128i_i32[1];
LABEL_215:
          v105[1].m128i_i32[0] = v106[1].m128i_i32[0];
LABEL_216:
          v105->m128i_i32[3] = v106->m128i_i32[3];
LABEL_217:
          v105->m128i_i32[2] = v106->m128i_i32[2];
LABEL_218:
          v105->m128i_i32[1] = v106->m128i_i32[1];
LABEL_219:
          v105->m128i_i32[0] = v106->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 10) = 0;
  }
  if ( *((_QWORD *)a2 + 11) )
  {
    v115 = v17 + 1;
    if ( v115 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_289;
    v116 = (__m128i *)operator new[](4 * v115);
    v17 = *a1;
    *((_QWORD *)a1 + 11) = v116;
    v117 = *((__m128i **)a2 + 11);
    v118 = v17 + 1;
    if ( v17 != -1 && v117 != v116 )
    {
      v119 = v118 >> 3;
      if ( v118 >> 3 > 0 )
      {
        if ( (v117 >= &v116[2] || v116 >= &v117[2]) && v119 > 1 )
        {
          v120 = *((const __m128i **)a2 + 11);
          v121 = v116;
          v122 = v119 - 1;
          do
          {
            v123 = _mm_loadu_si128(v120);
            v120 += 2;
            v121 += 2;
            v124 = _mm_loadu_si128(v120 - 1);
            v121[-2] = v123;
            v121[-1] = v124;
          }
          while ( v120 != &v117[2 * v122 + 2] );
        }
        else
        {
          v165 = v116;
          v166 = *((int **)a2 + 11);
          v122 = v119 - 1;
          do
          {
            v167 = *v166;
            v166 += 8;
            v165 += 2;
            v165[-2].m128i_i32[0] = v167;
            v165[-2].m128i_i32[1] = *(v166 - 7);
            v165[-2].m128i_i32[2] = *(v166 - 6);
            v165[-2].m128i_i32[3] = *(v166 - 5);
            v165[-1].m128i_i32[0] = *(v166 - 4);
            v165[-1].m128i_i32[1] = *(v166 - 3);
            v165[-1].m128i_i32[2] = *(v166 - 2);
            v165[-1].m128i_i32[3] = *(v166 - 1);
          }
          while ( &v117[2 * v122 + 2] != (__m128i *)v166 );
        }
        v125 = 32 * ((int)v122 + 1LL);
        v117 = (__m128i *)((char *)v117 + v125);
        v116 = (__m128i *)((char *)v116 + v125);
      }
      switch ( v118 % 8 )
      {
        case 1:
          goto LABEL_248;
        case 2:
          goto LABEL_247;
        case 3:
          goto LABEL_246;
        case 4:
          goto LABEL_245;
        case 5:
          goto LABEL_244;
        case 6:
          goto LABEL_243;
        case 7:
          v116[1].m128i_i32[2] = v117[1].m128i_i32[2];
LABEL_243:
          v116[1].m128i_i32[1] = v117[1].m128i_i32[1];
LABEL_244:
          v116[1].m128i_i32[0] = v117[1].m128i_i32[0];
LABEL_245:
          v116->m128i_i32[3] = v117->m128i_i32[3];
LABEL_246:
          v116->m128i_i32[2] = v117->m128i_i32[2];
LABEL_247:
          v116->m128i_i32[1] = v117->m128i_i32[1];
LABEL_248:
          v116->m128i_i32[0] = v117->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)a1 + 11) = 0;
  }
  if ( !*((_QWORD *)a2 + 12) )
  {
    *((_QWORD *)a1 + 12) = 0;
    goto LABEL_156;
  }
  v126 = v17 + 1;
  if ( v126 > 0x1FFFFFFFFFFFFFFELL )
LABEL_289:
    __cxa_throw_bad_array_new_length();
  v127 = (__m128i *)operator new[](4 * v126);
  v17 = *a1;
  *((_QWORD *)a1 + 12) = v127;
  v128 = *((__m128i **)a2 + 12);
  v129 = v17 + 1;
  if ( v17 != -1 && v128 != v127 )
  {
    v130 = v129 >> 3;
    if ( v129 >> 3 > 0 )
    {
      if ( (v127 >= &v128[2] || v128 >= &v127[2]) && v130 > 1 )
      {
        v131 = *((const __m128i **)a2 + 12);
        v132 = v127;
        v133 = v130 - 1;
        do
        {
          v134 = _mm_loadu_si128(v131);
          v131 += 2;
          v132 += 2;
          v135 = _mm_loadu_si128(v131 - 1);
          v132[-2] = v134;
          v132[-1] = v135;
        }
        while ( v131 != &v128[2 * v133 + 2] );
      }
      else
      {
        v174 = v127;
        v175 = *((int **)a2 + 12);
        v133 = v130 - 1;
        do
        {
          v176 = *v175;
          v174 += 2;
          v175 += 8;
          v174[-2].m128i_i32[0] = v176;
          v174[-2].m128i_i32[1] = *(v175 - 7);
          v174[-2].m128i_i32[2] = *(v175 - 6);
          v174[-2].m128i_i32[3] = *(v175 - 5);
          v174[-1].m128i_i32[0] = *(v175 - 4);
          v174[-1].m128i_i32[1] = *(v175 - 3);
          v174[-1].m128i_i32[2] = *(v175 - 2);
          v174[-1].m128i_i32[3] = *(v175 - 1);
        }
        while ( v174 != &v127[2 * v133 + 2] );
      }
      v136 = 32 * ((int)v133 + 1LL);
      v128 = (__m128i *)((char *)v128 + v136);
      v127 = (__m128i *)((char *)v127 + v136);
    }
    switch ( v129 % 8 )
    {
      case 1:
        goto LABEL_240;
      case 2:
        goto LABEL_239;
      case 3:
        goto LABEL_238;
      case 4:
        goto LABEL_237;
      case 5:
        goto LABEL_236;
      case 6:
        goto LABEL_235;
      case 7:
        v127[1].m128i_i32[2] = v128[1].m128i_i32[2];
LABEL_235:
        v127[1].m128i_i32[1] = v128[1].m128i_i32[1];
LABEL_236:
        v127[1].m128i_i32[0] = v128[1].m128i_i32[0];
LABEL_237:
        v127->m128i_i32[3] = v128->m128i_i32[3];
LABEL_238:
        v127->m128i_i32[2] = v128->m128i_i32[2];
LABEL_239:
        v127->m128i_i32[1] = v128->m128i_i32[1];
LABEL_240:
        v16 = *((_QWORD *)a2 + 13) == 0;
        v127->m128i_i32[0] = v128->m128i_i32[0];
        if ( !v16 )
          goto LABEL_159;
        goto LABEL_157;
      default:
        break;
    }
  }
LABEL_156:
  if ( !*((_QWORD *)a2 + 13) )
  {
LABEL_157:
    *((_QWORD *)a1 + 13) = 0;
    return a1;
  }
LABEL_159:
  v138 = (_BYTE *)operator new[](v17 + 1);
  v139 = *a1;
  *((_QWORD *)a1 + 13) = v138;
  v140 = *((_BYTE **)a2 + 13);
  v141 = v139 + 1;
  if ( v139 == -1 || v140 == v138 )
    return a1;
  v142 = v141 >> 3;
  if ( v141 >> 3 > 0 )
  {
    if ( (v140 >= v138 + 16 || v138 >= v140 + 16) && v142 > 1 )
    {
      v143 = 0;
      v144 = 0;
      do
      {
        ++v144;
        *(__m128i *)&v138[v143] = _mm_loadu_si128((const __m128i *)&v140[v143]);
        v143 += 16;
      }
      while ( v144 < v142 >> 1 );
      v145 = 8LL * (v142 & 0xFFFFFFFE);
      v146 = &v140[v145];
      v147 = &v138[v145];
      if ( v142 != (v142 & 0xFFFFFFFE) )
      {
        *v147 = *v146;
        v147[1] = v146[1];
        v147[2] = v146[2];
        v147[3] = v146[3];
        v147[4] = v146[4];
        v147[5] = v146[5];
        v147[6] = v146[6];
        v147[7] = v146[7];
      }
      v148 = v142 - 1;
    }
    else
    {
      v148 = v142 - 1;
      v180 = v138;
      v181 = *((char **)a2 + 13);
      do
      {
        v182 = *v181;
        v181 += 8;
        v180 += 8;
        *(v180 - 8) = v182;
        *(v180 - 7) = *(v181 - 7);
        *(v180 - 6) = *(v181 - 6);
        *(v180 - 5) = *(v181 - 5);
        *(v180 - 4) = *(v181 - 4);
        *(v180 - 3) = *(v181 - 3);
        *(v180 - 2) = *(v181 - 2);
        *(v180 - 1) = *(v181 - 1);
      }
      while ( &v140[8 * v148 + 8] != v181 );
    }
    v149 = 8LL * v148 + 8;
    v140 += v149;
    v138 += v149;
  }
  switch ( v141 % 8 )
  {
    case 1:
      goto LABEL_255;
    case 2:
      goto LABEL_254;
    case 3:
      goto LABEL_253;
    case 4:
      goto LABEL_252;
    case 5:
      goto LABEL_251;
    case 6:
      goto LABEL_250;
    case 7:
      v138[6] = v140[6];
LABEL_250:
      v138[5] = v140[5];
LABEL_251:
      v138[4] = v140[4];
LABEL_252:
      v138[3] = v140[3];
LABEL_253:
      v138[2] = v140[2];
LABEL_254:
      v138[1] = v140[1];
LABEL_255:
      *v138 = *v140;
      result = a1;
      break;
    default:
      return a1;
  }
  return result;
}

