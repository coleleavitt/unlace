__int64 __fastcall ClpSimplex::solveFromHotStart(ClpSimplex *this, ClpFactorization **a2)
{
  ClpFactorization *v4; // rdi
  int v5; // eax
  int v6; // edx
  _QWORD *v7; // rsi
  char *v8; // r13
  bool v9; // zf
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  char *v16; // rcx
  int v17; // esi
  __int64 v18; // rsi
  char *v19; // r13
  char *v20; // rsi
  char *v21; // rax
  char *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // xmm0_8
  __int64 v25; // r9
  char *v26; // rdx
  __int64 v27; // rsi
  char *v28; // rcx
  char *v29; // r15
  __int64 v30; // rdx
  char *v31; // rax
  __int64 v32; // r9
  __int64 v33; // xmm0_8
  __int64 v34; // r9
  char *v35; // rdx
  char *v36; // rcx
  char *v37; // r12
  char *v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // xmm0_8
  __int64 v42; // r9
  char *v43; // rsi
  __int64 v44; // r10
  char *v45; // r12
  __int64 v46; // rcx
  __m128i *v47; // r9
  char *v48; // r14
  __m128i *v49; // rsi
  unsigned int v50; // esi
  __int64 v51; // r11
  __int64 v52; // rdx
  const __m128i *v53; // rcx
  __m128i *v54; // rdx
  __int64 v55; // rsi
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  __int64 v58; // rsi
  __int32 *m128i_i32; // rcx
  __int64 v60; // r11
  __int8 *v61; // r9
  __int8 *v62; // rdx
  unsigned int v63; // ecx
  __int64 v64; // rsi
  __int64 v65; // rax
  unsigned __int64 v66; // r10
  __int64 v67; // rax
  unsigned int v68; // esi
  __int64 v69; // rax
  __int8 *v70; // rsi
  __int8 *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r8d
  __int64 v75; // rsi
  __int64 v76; // rdi
  double v77; // xmm2_8
  unsigned __int64 v78; // rax
  int v79; // edx
  double v80; // xmm0_8
  __int64 v81; // rcx
  double v82; // xmm0_8
  double v83; // xmm0_8
  __int64 v84; // rcx
  double v85; // xmm0_8
  int v86; // eax
  int v87; // ecx
  double v88; // xmm1_8
  double v89; // xmm2_8
  double v90; // xmm0_8
  int v91; // ecx
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rax
  int v95; // edx
  _QWORD *v96; // r9
  _QWORD *v97; // rax
  char *v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // xmm0_8
  __int64 v101; // rdi
  _QWORD *v102; // rsi
  _QWORD *v103; // rax
  char *v104; // rdx
  __int64 v105; // r9
  __int64 v106; // xmm0_8
  __int64 v107; // r9
  char *v108; // rsi
  char *v109; // rdx
  char *v110; // rax
  __int64 v111; // xmm0_8
  __int64 v112; // rax
  char *v113; // rdi
  char *v114; // rdx
  char *v115; // rax
  __int64 v116; // xmm0_8
  __int64 v117; // rax
  unsigned __int8 isDualObjectiveLimitReached; // al
  __int8 *v120; // rsi
  __int8 *v121; // rax
  char v122; // r10
  __m128i *v123; // rcx
  __m128i *v124; // rdx
  __int32 v125; // r11d
  double v126; // [rsp+8h] [rbp-80h]
  double v127; // [rsp+8h] [rbp-80h]
  __int64 v128; // [rsp+10h] [rbp-78h]
  int v129; // [rsp+10h] [rbp-78h]
  int v130; // [rsp+10h] [rbp-78h]
  __int64 v131; // [rsp+18h] [rbp-70h]
  __m128i *v132; // [rsp+20h] [rbp-68h]
  __int64 v133; // [rsp+28h] [rbp-60h]
  __int64 v134; // [rsp+30h] [rbp-58h]
  bool v135; // [rsp+3Bh] [rbp-4Dh]
  unsigned int v136; // [rsp+3Ch] [rbp-4Ch]
  __int64 v137; // [rsp+40h] [rbp-48h]
  __int64 v138; // [rsp+48h] [rbp-40h]

  v136 = *((_DWORD *)this + 74);
  *((_DWORD *)this + 74) = *((_DWORD *)this + 75);
  v4 = *a2;
  v5 = *((_DWORD *)this + 26);
  v6 = *((_DWORD *)this + 27);
  v7 = *((_QWORD **)this + 150);
  v8 = (char *)v4 + 8;
  v9 = v6 + v5 == 0;
  v10 = v6 + v5;
  v126 = *(double *)v4;
  v135 = v9;
  if ( (_QWORD *)((char *)v4 + 8) == v7 || !(v6 + v5) )
  {
    v17 = v6 + v5;
  }
  else
  {
    if ( v10 >> 3 <= 0 )
    {
      v16 = (char *)v4 + 8;
    }
    else
    {
      v11 = *((_QWORD *)this + 150);
      v12 = (unsigned int)((v10 >> 3) - 1);
      v13 = (__int64 *)((char *)v4 + 8);
      do
      {
        v14 = *v13;
        v13 += 8;
        v11 += 64;
        *(_QWORD *)(v11 - 64) = v14;
        *(_QWORD *)(v11 - 56) = *(v13 - 7);
        *(_QWORD *)(v11 - 48) = *(v13 - 6);
        *(_QWORD *)(v11 - 40) = *(v13 - 5);
        *(_QWORD *)(v11 - 32) = *(v13 - 4);
        *(_QWORD *)(v11 - 24) = *(v13 - 3);
        *(_QWORD *)(v11 - 16) = *(v13 - 2);
        *(_QWORD *)(v11 - 8) = *(v13 - 1);
      }
      while ( (__int64 *)((char *)v4 + 64 * v12 + 72) != v13 );
      v15 = ((int)v12 + 1LL) << 6;
      v16 = &v8[v15];
      v7 = (_QWORD *)((char *)v7 + v15);
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v7[6] = *((_QWORD *)v16 + 6);
LABEL_9:
        v7[5] = *((_QWORD *)v16 + 5);
LABEL_10:
        v7[4] = *((_QWORD *)v16 + 4);
LABEL_11:
        v7[3] = *((_QWORD *)v16 + 3);
LABEL_12:
        v7[2] = *((_QWORD *)v16 + 2);
LABEL_13:
        v7[1] = *((_QWORD *)v16 + 1);
LABEL_14:
        *v7 = *(_QWORD *)v16;
        break;
      default:
        break;
    }
    v5 = *((_DWORD *)this + 26);
    v6 = *((_DWORD *)this + 27);
    v17 = v6 + v5;
  }
  v18 = 8LL * v17;
  v19 = &v8[v18];
  v134 = v18;
  v20 = *((char **)this + 123);
  if ( v19 == v20 || v9 )
  {
    v27 = v134;
    v131 = v134;
  }
  else
  {
    if ( v10 >> 3 <= 0 )
    {
      v26 = v19;
    }
    else
    {
      v21 = *((char **)this + 123);
      v22 = v19;
      v23 = (unsigned int)((v10 >> 3) - 1);
      do
      {
        v24 = *(_QWORD *)v22;
        v21 += 64;
        v22 += 64;
        *((_QWORD *)v21 - 8) = v24;
        *((_QWORD *)v21 - 7) = *((_QWORD *)v22 - 7);
        *((_QWORD *)v21 - 6) = *((_QWORD *)v22 - 6);
        *((_QWORD *)v21 - 5) = *((_QWORD *)v22 - 5);
        *((_QWORD *)v21 - 4) = *((_QWORD *)v22 - 4);
        *((_QWORD *)v21 - 3) = *((_QWORD *)v22 - 3);
        *((_QWORD *)v21 - 2) = *((_QWORD *)v22 - 2);
        *((_QWORD *)v21 - 1) = *((_QWORD *)v22 - 1);
      }
      while ( &v20[64 * v23 + 64] != v21 );
      v25 = ((int)v23 + 1LL) << 6;
      v26 = &v19[v25];
      v20 += v25;
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_29;
      case 2:
        goto LABEL_28;
      case 3:
        goto LABEL_27;
      case 4:
        goto LABEL_26;
      case 5:
        goto LABEL_25;
      case 6:
        goto LABEL_24;
      case 7:
        *((_QWORD *)v20 + 6) = *((_QWORD *)v26 + 6);
LABEL_24:
        *((_QWORD *)v20 + 5) = *((_QWORD *)v26 + 5);
LABEL_25:
        *((_QWORD *)v20 + 4) = *((_QWORD *)v26 + 4);
LABEL_26:
        *((_QWORD *)v20 + 3) = *((_QWORD *)v26 + 3);
LABEL_27:
        *((_QWORD *)v20 + 2) = *((_QWORD *)v26 + 2);
LABEL_28:
        *((_QWORD *)v20 + 1) = *((_QWORD *)v26 + 1);
LABEL_29:
        *(_QWORD *)v20 = *(_QWORD *)v26;
        break;
      default:
        break;
    }
    v5 = *((_DWORD *)this + 26);
    v6 = *((_DWORD *)this + 27);
    v27 = 8LL * (v6 + v5);
    v131 = v27;
  }
  v28 = *((char **)this + 126);
  v29 = &v19[v27];
  if ( &v19[v27] == v28 || v9 )
  {
    v128 = v27;
  }
  else
  {
    if ( v10 >> 3 <= 0 )
    {
      v35 = &v19[v27];
    }
    else
    {
      v30 = *((_QWORD *)this + 126);
      v31 = &v19[v27];
      v32 = (unsigned int)((v10 >> 3) - 1);
      do
      {
        v33 = *(_QWORD *)v31;
        v31 += 64;
        v30 += 64;
        *(_QWORD *)(v30 - 64) = v33;
        *(_QWORD *)(v30 - 56) = *((_QWORD *)v31 - 7);
        *(_QWORD *)(v30 - 48) = *((_QWORD *)v31 - 6);
        *(_QWORD *)(v30 - 40) = *((_QWORD *)v31 - 5);
        *(_QWORD *)(v30 - 32) = *((_QWORD *)v31 - 4);
        *(_QWORD *)(v30 - 24) = *((_QWORD *)v31 - 3);
        *(_QWORD *)(v30 - 16) = *((_QWORD *)v31 - 2);
        *(_QWORD *)(v30 - 8) = *((_QWORD *)v31 - 1);
      }
      while ( &v29[64 * v32 + 64] != v31 );
      v34 = ((int)v32 + 1LL) << 6;
      v35 = &v29[v34];
      v28 += v34;
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_44;
      case 2:
        goto LABEL_43;
      case 3:
        goto LABEL_42;
      case 4:
        goto LABEL_41;
      case 5:
        goto LABEL_40;
      case 6:
        goto LABEL_39;
      case 7:
        *((_QWORD *)v28 + 6) = *((_QWORD *)v35 + 6);
LABEL_39:
        *((_QWORD *)v28 + 5) = *((_QWORD *)v35 + 5);
LABEL_40:
        *((_QWORD *)v28 + 4) = *((_QWORD *)v35 + 4);
LABEL_41:
        *((_QWORD *)v28 + 3) = *((_QWORD *)v35 + 3);
LABEL_42:
        *((_QWORD *)v28 + 2) = *((_QWORD *)v35 + 2);
LABEL_43:
        *((_QWORD *)v28 + 1) = *((_QWORD *)v35 + 1);
LABEL_44:
        *(_QWORD *)v28 = *(_QWORD *)v35;
        break;
      default:
        break;
    }
    v5 = *((_DWORD *)this + 26);
    v6 = *((_DWORD *)this + 27);
    v27 = 8LL * (v6 + v5);
    v128 = v27;
  }
  v36 = *((char **)this + 129);
  v37 = &v29[v27];
  if ( &v29[v27] == v36 || v9 )
  {
    v133 = v27;
    v44 = v27;
  }
  else
  {
    if ( v10 >> 3 <= 0 )
    {
      v43 = &v29[v27];
    }
    else
    {
      v38 = *((char **)this + 129);
      v39 = (__int64 *)&v29[v27];
      v40 = (unsigned int)((v10 >> 3) - 1);
      do
      {
        v41 = *v39;
        v38 += 64;
        v39 += 8;
        *((_QWORD *)v38 - 8) = v41;
        *((_QWORD *)v38 - 7) = *(v39 - 7);
        *((_QWORD *)v38 - 6) = *(v39 - 6);
        *((_QWORD *)v38 - 5) = *(v39 - 5);
        *((_QWORD *)v38 - 4) = *(v39 - 4);
        *((_QWORD *)v38 - 3) = *(v39 - 3);
        *((_QWORD *)v38 - 2) = *(v39 - 2);
        *((_QWORD *)v38 - 1) = *(v39 - 1);
      }
      while ( v38 != &v36[64 * v40 + 64] );
      v42 = ((int)v40 + 1LL) << 6;
      v43 = &v37[v42];
      v36 += v42;
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_59;
      case 2:
        goto LABEL_58;
      case 3:
        goto LABEL_57;
      case 4:
        goto LABEL_56;
      case 5:
        goto LABEL_55;
      case 6:
        goto LABEL_54;
      case 7:
        *((_QWORD *)v36 + 6) = *((_QWORD *)v43 + 6);
LABEL_54:
        *((_QWORD *)v36 + 5) = *((_QWORD *)v43 + 5);
LABEL_55:
        *((_QWORD *)v36 + 4) = *((_QWORD *)v43 + 4);
LABEL_56:
        *((_QWORD *)v36 + 3) = *((_QWORD *)v43 + 3);
LABEL_57:
        *((_QWORD *)v36 + 2) = *((_QWORD *)v43 + 2);
LABEL_58:
        *((_QWORD *)v36 + 1) = *((_QWORD *)v43 + 1);
LABEL_59:
        *(_QWORD *)v36 = *(_QWORD *)v43;
        break;
      default:
        break;
    }
    v5 = *((_DWORD *)this + 26);
    v6 = *((_DWORD *)this + 27);
    v133 = 8LL * (v5 + v6);
    v44 = v133;
  }
  v45 = &v37[v44];
  v46 = 8LL * v6;
  v137 = v6;
  v47 = *((__m128i **)this + 157);
  v48 = &v45[v46];
  v49 = (__m128i *)&v45[v46 + v46];
  v132 = v49;
  if ( v5 && v49 != v47 )
  {
    v50 = v5 >> 3;
    if ( v5 >> 3 <= 0 )
    {
      m128i_i32 = (__int32 *)&v45[v46 + v46];
    }
    else
    {
      v51 = 16LL * v6;
      v52 = v44 + v128 + v131 + v134;
      v53 = (const __m128i *)((char *)v4 + v51 + v52 + 8);
      if ( (v53 >= &v47[2] || v47 >= (__m128i *)((char *)v4 + v51 + v52 + 40)) && v50 > 1 )
      {
        v54 = *((__m128i **)this + 157);
        v55 = v50 - 1;
        do
        {
          v56 = _mm_loadu_si128(v53);
          v54 += 2;
          v53 += 2;
          v57 = _mm_loadu_si128(v53 - 1);
          v54[-2] = v56;
          v54[-1] = v57;
        }
        while ( &v47[2 * v55 + 2] != v54 );
      }
      else
      {
        v123 = v132;
        v124 = *((__m128i **)this + 157);
        v55 = v50 - 1;
        do
        {
          v125 = v123->m128i_i32[0];
          v124 += 2;
          v123 += 2;
          v124[-2].m128i_i32[0] = v125;
          v124[-2].m128i_i32[1] = v123[-2].m128i_i32[1];
          v124[-2].m128i_i32[2] = v123[-2].m128i_i32[2];
          v124[-2].m128i_i32[3] = v123[-2].m128i_i32[3];
          v124[-1].m128i_i32[0] = v123[-1].m128i_i32[0];
          v124[-1].m128i_i32[1] = v123[-1].m128i_i32[1];
          v124[-1].m128i_i32[2] = v123[-1].m128i_i32[2];
          v124[-1].m128i_i32[3] = v123[-1].m128i_i32[3];
        }
        while ( &v47[2 * v55 + 2] != v124 );
      }
      v58 = 2 * ((int)v55 + 1LL);
      v47 = (__m128i *)((char *)v47 + v58 * 16);
      m128i_i32 = v132[v58].m128i_i32;
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_76;
      case 2:
        goto LABEL_75;
      case 3:
        goto LABEL_74;
      case 4:
        goto LABEL_73;
      case 5:
        goto LABEL_72;
      case 6:
        goto LABEL_71;
      case 7:
        v47[1].m128i_i32[2] = m128i_i32[6];
LABEL_71:
        v47[1].m128i_i32[1] = m128i_i32[5];
LABEL_72:
        v47[1].m128i_i32[0] = m128i_i32[4];
LABEL_73:
        v47->m128i_i32[3] = m128i_i32[3];
LABEL_74:
        v47->m128i_i32[2] = m128i_i32[2];
LABEL_75:
        v47->m128i_i32[1] = m128i_i32[1];
LABEL_76:
        v47->m128i_i32[0] = *m128i_i32;
        break;
      default:
        break;
    }
    v5 = *((_DWORD *)this + 26);
    v6 = *((_DWORD *)this + 27);
    v49 = v132;
  }
  v60 = 3 * v5;
  v138 = 2 * v6;
  v61 = &v49->m128i_i8[4 * v5 + 4 + 4 * (int)v60 + 4 * v138];
  v62 = *((__int8 **)this + 33);
  if ( v61 != v62 && !v9 )
  {
    v63 = v10 >> 3;
    if ( v10 >> 3 > 0 )
    {
      v64 = v133 + v128 + v131 + v134;
      v65 = 4 * (v5 + 4 * v137 + v60 + v138);
      v66 = (unsigned __int64)v4 + v65 + v64 + 12;
      if ( (v66 >= (unsigned __int64)(v62 + 16) || v62 >= (__int8 *)v4 + v65 + v64 + 28) && v63 > 1 )
      {
        v67 = 0;
        v68 = 0;
        do
        {
          ++v68;
          *(__m128i *)&v62[v67] = _mm_loadu_si128((const __m128i *)(v66 + v67));
          v67 += 16;
        }
        while ( v68 < v63 >> 1 );
        v69 = 8LL * (v63 & 0xFFFFFFFE);
        v70 = &v61[v69];
        v71 = &v62[v69];
        if ( (v63 & 0xFFFFFFFE) != v63 )
        {
          *v71 = *v70;
          v71[1] = v70[1];
          v71[2] = v70[2];
          v71[3] = v70[3];
          v71[4] = v70[4];
          v71[5] = v70[5];
          v71[6] = v70[6];
          v71[7] = v70[7];
        }
        LODWORD(v72) = v63 - 1;
      }
      else
      {
        v120 = v61;
        v72 = v63 - 1;
        v121 = *((__int8 **)this + 33);
        do
        {
          v122 = *v120;
          v121 += 8;
          v120 += 8;
          *(v121 - 8) = v122;
          *(v121 - 7) = *(v120 - 7);
          *(v121 - 6) = *(v120 - 6);
          *(v121 - 5) = *(v120 - 5);
          *(v121 - 4) = *(v120 - 4);
          *(v121 - 3) = *(v120 - 3);
          *(v121 - 2) = *(v120 - 2);
          *(v121 - 1) = *(v120 - 1);
        }
        while ( &v62[8 * v72 + 8] != v121 );
      }
      v73 = 8LL * (int)v72 + 8;
      v61 += v73;
      v62 += v73;
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_96;
      case 2:
        goto LABEL_95;
      case 3:
        goto LABEL_94;
      case 4:
        goto LABEL_93;
      case 5:
        goto LABEL_92;
      case 6:
        goto LABEL_91;
      case 7:
        v62[6] = v61[6];
LABEL_91:
        v62[5] = v61[5];
LABEL_92:
        v62[4] = v61[4];
LABEL_93:
        v62[3] = v61[3];
LABEL_94:
        v62[2] = v61[2];
LABEL_95:
        v62[1] = v61[1];
LABEL_96:
        *v62 = *v61;
        break;
      default:
        break;
    }
  }
  ClpSimplex::setFactorization(this, a2[1]);
  v74 = *((_DWORD *)this + 27);
  *((_DWORD *)this + 79) = 511;
  v75 = *((_QWORD *)this + 123);
  v76 = *((_QWORD *)this + 126);
  v77 = *((double *)this + 12);
  if ( v74 > 0 )
  {
    v78 = 0;
    v79 = 0;
    do
    {
      v80 = *(double *)(*((_QWORD *)this + 22) + v78);
      if ( v80 > *(double *)&v45[v78] )
      {
        v81 = *((_QWORD *)this + 29);
        v82 = v80 * v77;
        if ( v81 )
          v82 = v82 / *(double *)(v81 + v78);
        *(double *)(v75 + v78) = v82;
      }
      v83 = *(double *)(*((_QWORD *)this + 23) + v78);
      if ( *(double *)&v48[v78] > v83 )
      {
        v84 = *((_QWORD *)this + 29);
        v85 = v83 * v77;
        if ( v84 )
          v85 = v85 / *(double *)(v84 + v78);
        *(double *)(v76 + v78) = v85;
      }
      ++v79;
      v78 += 8LL;
    }
    while ( *((_DWORD *)this + 27) > v79 );
  }
  v129 = *((_DWORD *)this + 334);
  v86 = ClpSimplexDual::fastDual(this, 1);
  v87 = *((_DWORD *)this + 80);
  *((_DWORD *)this + 334) = v129;
  v88 = *(double *)this;
  v89 = *((double *)this + 5);
  v90 = fmax((*((double *)this + 9) * v88 - v89) * v88, v126);
  if ( v86 )
  {
    v130 = v87;
    ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
    v88 = *(double *)this;
    v89 = *((double *)this + 5);
    v127 = fmax((*((double *)this + 9) * v88 - v89) * v88, v126);
    if ( !*((_DWORD *)this + 306) )
    {
      v90 = *((double *)this + 1);
      v87 = v130;
      if ( *((_DWORD *)this + 81) == 1 && !v130 )
      {
        if ( v90 <= v127 )
        {
          v87 = 3;
          if ( *((_DWORD *)this + 308) || v90 > v127 )
            goto LABEL_129;
        }
        else
        {
          v87 = 3;
          if ( *((_DWORD *)this + 308) )
          {
LABEL_117:
            v127 = v90;
            goto LABEL_129;
          }
          v127 = *((double *)this + 1);
        }
LABEL_121:
        v87 = 1;
        goto LABEL_129;
      }
      if ( *((_DWORD *)this + 308) )
      {
        if ( v130 != 10 && v130 )
        {
          v90 = v127;
LABEL_110:
          if ( v87 < 0 )
          {
            v127 = v90;
            v87 = 3;
            goto LABEL_129;
          }
          goto LABEL_117;
        }
      }
      else if ( v90 <= v127 && v130 != 10 )
      {
        goto LABEL_121;
      }
    }
    v87 = 3;
    goto LABEL_129;
  }
  if ( v87 )
    goto LABEL_110;
  v127 = v90;
  isDualObjectiveLimitReached = ClpModel::isDualObjectiveLimitReached(this);
  v88 = *(double *)this;
  v87 = isDualObjectiveLimitReached;
  v89 = *((double *)this + 5);
LABEL_129:
  *((_DWORD *)this + 80) = v87;
  v91 = *((_DWORD *)this + 27);
  v92 = *((_QWORD *)this + 15);
  v93 = *((_QWORD *)this + 150);
  *((double *)this + 9) = (v127 * v88 + v89) / v88;
  if ( v91 > 0 )
  {
    v94 = 1;
    do
    {
      v95 = v94;
      *(_QWORD *)(v92 + 8 * v94 - 8) = *(_QWORD *)(v93 + 8 * v94 - 8);
      v91 = *((_DWORD *)this + 27);
      ++v94;
    }
    while ( v91 > v95 );
  }
  v96 = *((_QWORD **)this + 22);
  if ( v91 && v96 != (_QWORD *)v45 )
  {
    if ( v91 >> 3 > 0 )
    {
      v97 = *((_QWORD **)this + 22);
      v98 = v45;
      v99 = (unsigned int)((v91 >> 3) - 1);
      do
      {
        v100 = *(_QWORD *)v98;
        v97 += 8;
        v98 += 64;
        *(v97 - 8) = v100;
        *(v97 - 7) = *((_QWORD *)v98 - 7);
        *(v97 - 6) = *((_QWORD *)v98 - 6);
        *(v97 - 5) = *((_QWORD *)v98 - 5);
        *(v97 - 4) = *((_QWORD *)v98 - 4);
        *(v97 - 3) = *((_QWORD *)v98 - 3);
        *(v97 - 2) = *((_QWORD *)v98 - 2);
        *(v97 - 1) = *((_QWORD *)v98 - 1);
      }
      while ( &v96[8 * v99 + 8] != v97 );
      v101 = ((int)v99 + 1LL) << 6;
      v45 += v101;
      v96 = (_QWORD *)((char *)v96 + v101);
    }
    switch ( v91 % 8 )
    {
      case 1:
        goto LABEL_145;
      case 2:
        goto LABEL_144;
      case 3:
        goto LABEL_143;
      case 4:
        goto LABEL_142;
      case 5:
        goto LABEL_141;
      case 6:
        goto LABEL_140;
      case 7:
        v96[6] = *((_QWORD *)v45 + 6);
LABEL_140:
        v96[5] = *((_QWORD *)v45 + 5);
LABEL_141:
        v96[4] = *((_QWORD *)v45 + 4);
LABEL_142:
        v96[3] = *((_QWORD *)v45 + 3);
LABEL_143:
        v96[2] = *((_QWORD *)v45 + 2);
LABEL_144:
        v96[1] = *((_QWORD *)v45 + 1);
LABEL_145:
        *v96 = *(_QWORD *)v45;
        break;
      default:
        break;
    }
    v91 = *((_DWORD *)this + 27);
  }
  v102 = *((_QWORD **)this + 23);
  if ( v91 && v102 != (_QWORD *)v48 )
  {
    if ( v91 >> 3 > 0 )
    {
      v103 = *((_QWORD **)this + 23);
      v104 = v48;
      v105 = (unsigned int)((v91 >> 3) - 1);
      do
      {
        v106 = *(_QWORD *)v104;
        v103 += 8;
        v104 += 64;
        *(v103 - 8) = v106;
        *(v103 - 7) = *((_QWORD *)v104 - 7);
        *(v103 - 6) = *((_QWORD *)v104 - 6);
        *(v103 - 5) = *((_QWORD *)v104 - 5);
        *(v103 - 4) = *((_QWORD *)v104 - 4);
        *(v103 - 3) = *((_QWORD *)v104 - 3);
        *(v103 - 2) = *((_QWORD *)v104 - 2);
        *(v103 - 1) = *((_QWORD *)v104 - 1);
      }
      while ( &v102[8 * v105 + 8] != v103 );
      v107 = ((int)v105 + 1LL) << 6;
      v48 += v107;
      v102 = (_QWORD *)((char *)v102 + v107);
    }
    switch ( v91 % 8 )
    {
      case 1:
        goto LABEL_160;
      case 2:
        goto LABEL_159;
      case 3:
        goto LABEL_158;
      case 4:
        goto LABEL_157;
      case 5:
        goto LABEL_156;
      case 6:
        goto LABEL_155;
      case 7:
        v102[6] = *((_QWORD *)v48 + 6);
LABEL_155:
        v102[5] = *((_QWORD *)v48 + 5);
LABEL_156:
        v102[4] = *((_QWORD *)v48 + 4);
LABEL_157:
        v102[3] = *((_QWORD *)v48 + 3);
LABEL_158:
        v102[2] = *((_QWORD *)v48 + 2);
LABEL_159:
        v102[1] = *((_QWORD *)v48 + 1);
LABEL_160:
        *v102 = *(_QWORD *)v48;
        break;
      default:
        break;
    }
  }
  v108 = *((char **)this + 123);
  if ( v19 != v108 && !v135 )
  {
    if ( v10 >> 3 > 0 )
    {
      v109 = v19;
      v110 = *((char **)this + 123);
      do
      {
        v111 = *(_QWORD *)v109;
        v110 += 64;
        v109 += 64;
        *((_QWORD *)v110 - 8) = v111;
        *((_QWORD *)v110 - 7) = *((_QWORD *)v109 - 7);
        *((_QWORD *)v110 - 6) = *((_QWORD *)v109 - 6);
        *((_QWORD *)v110 - 5) = *((_QWORD *)v109 - 5);
        *((_QWORD *)v110 - 4) = *((_QWORD *)v109 - 4);
        *((_QWORD *)v110 - 3) = *((_QWORD *)v109 - 3);
        *((_QWORD *)v110 - 2) = *((_QWORD *)v109 - 2);
        *((_QWORD *)v110 - 1) = *((_QWORD *)v109 - 1);
      }
      while ( &v108[64 * ((v10 >> 3) - 1) + 64] != v110 );
      v112 = ((v10 >> 3) - 1 + 1LL) << 6;
      v19 += v112;
      v108 += v112;
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_174;
      case 2:
        goto LABEL_173;
      case 3:
        goto LABEL_172;
      case 4:
        goto LABEL_171;
      case 5:
        goto LABEL_170;
      case 6:
        goto LABEL_169;
      case 7:
        *((_QWORD *)v108 + 6) = *((_QWORD *)v19 + 6);
LABEL_169:
        *((_QWORD *)v108 + 5) = *((_QWORD *)v19 + 5);
LABEL_170:
        *((_QWORD *)v108 + 4) = *((_QWORD *)v19 + 4);
LABEL_171:
        *((_QWORD *)v108 + 3) = *((_QWORD *)v19 + 3);
LABEL_172:
        *((_QWORD *)v108 + 2) = *((_QWORD *)v19 + 2);
LABEL_173:
        *((_QWORD *)v108 + 1) = *((_QWORD *)v19 + 1);
LABEL_174:
        *(_QWORD *)v108 = *(_QWORD *)v19;
        break;
      default:
        break;
    }
  }
  v113 = *((char **)this + 126);
  if ( v29 != v113 && !v135 )
  {
    if ( v10 >> 3 > 0 )
    {
      v114 = v29;
      v115 = *((char **)this + 126);
      do
      {
        v116 = *(_QWORD *)v114;
        v115 += 64;
        v114 += 64;
        *((_QWORD *)v115 - 8) = v116;
        *((_QWORD *)v115 - 7) = *((_QWORD *)v114 - 7);
        *((_QWORD *)v115 - 6) = *((_QWORD *)v114 - 6);
        *((_QWORD *)v115 - 5) = *((_QWORD *)v114 - 5);
        *((_QWORD *)v115 - 4) = *((_QWORD *)v114 - 4);
        *((_QWORD *)v115 - 3) = *((_QWORD *)v114 - 3);
        *((_QWORD *)v115 - 2) = *((_QWORD *)v114 - 2);
        *((_QWORD *)v115 - 1) = *((_QWORD *)v114 - 1);
      }
      while ( v115 != &v113[64 * ((v10 >> 3) - 1) + 64] );
      v117 = ((v10 >> 3) - 1 + 1LL) << 6;
      v29 += v117;
      v113 += v117;
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_188;
      case 2:
        goto LABEL_187;
      case 3:
        goto LABEL_186;
      case 4:
        goto LABEL_185;
      case 5:
        goto LABEL_184;
      case 6:
        goto LABEL_183;
      case 7:
        *((_QWORD *)v113 + 6) = *((_QWORD *)v29 + 6);
LABEL_183:
        *((_QWORD *)v113 + 5) = *((_QWORD *)v29 + 5);
LABEL_184:
        *((_QWORD *)v113 + 4) = *((_QWORD *)v29 + 4);
LABEL_185:
        *((_QWORD *)v113 + 3) = *((_QWORD *)v29 + 3);
LABEL_186:
        *((_QWORD *)v113 + 2) = *((_QWORD *)v29 + 2);
LABEL_187:
        *((_QWORD *)v113 + 1) = *((_QWORD *)v29 + 1);
LABEL_188:
        *(_QWORD *)v113 = *(_QWORD *)v29;
        break;
      default:
        break;
    }
  }
  *((_DWORD *)this + 74) = v136;
  return v136;
}

