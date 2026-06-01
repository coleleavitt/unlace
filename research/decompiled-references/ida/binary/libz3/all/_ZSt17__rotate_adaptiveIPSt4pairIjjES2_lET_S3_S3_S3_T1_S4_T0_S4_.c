__int64 __fastcall std::__rotate_adaptive<std::pair<unsigned int,unsigned int> *,std::pair<unsigned int,unsigned int> *,long>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7)
{
  char *v7; // r11
  char *v8; // r10
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __m128d v20; // xmm0
  unsigned __int64 v21; // rcx
  char *v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  char *v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __m128d v43; // xmm0
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  char *v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __m128i v54; // xmm0
  unsigned __int64 v55; // rdx
  __int64 *v56; // rcx
  __int64 *v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // r12
  __int64 v60; // r14
  _DWORD *v61; // rsi
  _DWORD *v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rdx
  __m128d v67; // xmm0
  __m128d v68; // xmm1
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rdx
  __int64 *v71; // rcx
  __int64 *v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rcx
  _DWORD *v75; // rdx
  __int64 v76; // rcx
  int v77; // edi
  int v78; // ebp
  int v79; // ebp
  int v80; // edi
  __int64 i; // rcx
  int v82; // esi
  int v83; // ebp
  int v84; // esi
  char *v85; // rsi
  __int64 *v86; // rdx
  __int64 v87; // rdi
  __int64 v88; // rcx
  char *v89; // rdx
  __int64 v90; // rdi
  char *v91; // rcx
  __int64 v92; // rdx
  char *v93; // rsi
  __int64 *v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // rcx
  __int64 v99; // rax
  __m128i v100; // xmm0
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  char *v103; // rdx
  __int64 *v104; // rax
  __int64 v105; // rcx
  char *v106; // rax
  int v107; // ecx
  int v108; // edx
  int v109; // ecx
  int v110; // edx

  v7 = (char *)a1;
  v8 = a2;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return (__int64)v7;
    v10 = a3 - a2;
    v11 = (a3 - a2) >> 3;
    v12 = v11;
    if ( v10 <= 0 )
    {
      v17 = 0;
      v46 = (__int64)&v8[-a1];
      v15 = 0;
      v16 = v46 >> 3;
      if ( v46 <= 0 )
        return (__int64)v7;
      goto LABEL_13;
    }
    if ( (unsigned __int64)(a6 - v8 - 4) <= 8 )
    {
      v85 = a6;
      v86 = (__int64 *)v8;
      do
      {
        v87 = *v86;
        v85 += 8;
        ++v86;
        *((_QWORD *)v85 - 1) = v87;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      if ( v10 <= 8 )
      {
        v14 = 0;
        goto LABEL_11;
      }
      v13 = 0;
      do
      {
        *(__m128i *)&a6[v13] = _mm_loadu_si128((const __m128i *)&v8[v13]);
        v13 += 16;
      }
      while ( v13 != 16 * (v11 >> 1) );
      if ( (v11 & 1) != 0 )
      {
        v14 = v11 & 0xFFFFFFFFFFFFFFFELL;
LABEL_11:
        *(_QWORD *)&a6[8 * v14] = *(_QWORD *)&v8[8 * v14];
      }
    }
    v15 = v10;
    v16 = (v8 - v7) >> 3;
    v17 = v10 >> 3;
    if ( v8 - v7 <= 0 )
      goto LABEL_22;
LABEL_13:
    if ( (unsigned __int64)(a3 - v8 + 12) <= 8 )
    {
      v91 = &a3[-8 * v16];
      do
      {
        v92 = *((_QWORD *)v8 - 1);
        v8 -= 8;
        *(_QWORD *)&v91[8 * v16-- - 8] = v92;
      }
      while ( v16 );
    }
    else
    {
      v18 = 1;
      if ( v16 )
        v18 = v16;
      if ( v16 <= 1 )
      {
        v21 = 0;
        goto LABEL_21;
      }
      v19 = 0;
      do
      {
        v20 = (__m128d)_mm_loadh_ps((const double *)&v8[v19 - 16]);
        *(__m128d *)&a3[v19 - 16] = _mm_shuffle_pd(v20, v20, 1);
        v19 -= 16;
      }
      while ( -16LL * (v18 >> 1) != v19 );
      if ( (v18 & 1) != 0 )
      {
        v21 = v18 & 0xFFFFFFFFFFFFFFFELL;
LABEL_21:
        *(_QWORD *)&a3[8 * ~v21] = *(_QWORD *)&v8[8 * ~v21];
      }
    }
LABEL_22:
    if ( v15 > 0 )
    {
      v22 = a6 + 8;
      if ( (unsigned __int64)(v7 - (a6 + 8) + 4) <= 8 )
      {
        v88 = v17;
        v89 = v7;
        while ( 1 )
        {
          v90 = *(_QWORD *)a6;
          v89 += 8;
          a6 = v22;
          *((_QWORD *)v89 - 1) = v90;
          if ( !--v88 )
            break;
          v22 += 8;
        }
      }
      else
      {
        v23 = 1;
        if ( v17 > 0 )
          v23 = v17;
        if ( v17 <= 1 )
        {
          v25 = 0;
          goto LABEL_31;
        }
        v24 = 0;
        do
        {
          *(__m128i *)&v7[v24] = _mm_loadu_si128((const __m128i *)&a6[v24]);
          v24 += 16;
        }
        while ( 16 * (v23 >> 1) != v24 );
        if ( (v23 & 1) != 0 )
        {
          v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
LABEL_31:
          *(_QWORD *)&v7[8 * v25] = *(_QWORD *)&a6[8 * v25];
        }
      }
      v26 = 8 * v17 - 8;
      if ( v17 <= 0 )
        v26 = 0;
      return (__int64)&v7[v26 + 8];
    }
    return (__int64)v7;
  }
  if ( a4 > a7 )
  {
    if ( (char *)a1 == a2 )
      return (__int64)a3;
    if ( a2 == a3 )
      return (__int64)v7;
    v47 = &a2[-a1];
    v48 = (__int64)&a3[-a1] >> 3;
    v49 = (__int64)&a2[-a1] >> 3;
    if ( v49 != v48 - v49 )
    {
      v50 = v48 - v49;
      if ( v49 >= (__int64)(v48 - v49) )
        goto LABEL_88;
LABEL_76:
      v51 = a1 + 8 * v49;
      if ( v50 <= 0 )
        goto LABEL_85;
      if ( 8 * v49 + 16 > 0 && v51 < a1 + 16 )
      {
        for ( i = 0; i != v50; ++i )
        {
          v82 = *(_DWORD *)(a1 + 8 * i);
          *(_DWORD *)(a1 + 8 * i) = *(_DWORD *)(v51 + 8 * i);
          v83 = *(_DWORD *)(v51 + 8 * i + 4);
          *(_DWORD *)(v51 + 8 * i) = v82;
          v84 = *(_DWORD *)(a1 + 8 * i + 4);
          *(_DWORD *)(a1 + 8 * i + 4) = v83;
          *(_DWORD *)(v51 + 8 * i + 4) = v84;
        }
        goto LABEL_84;
      }
      if ( v50 == 1 )
      {
        v55 = 0;
      }
      else
      {
        v52 = 0;
        v53 = 0;
        do
        {
          v54 = _mm_loadu_si128((const __m128i *)(a1 + v52));
          ++v53;
          *(__m128i *)(a1 + v52) = _mm_loadu_si128((const __m128i *)(v51 + v52));
          *(__m128i *)(v51 + v52) = v54;
          v52 += 16;
        }
        while ( v53 != (unsigned __int64)v50 >> 1 );
        v55 = v50 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v50 & 1) == 0 )
          goto LABEL_84;
      }
      v56 = (__int64 *)(a1 + 8 * v55);
      v57 = (__int64 *)(a1 + 8 * (v49 + v55));
      v58 = *v56;
      *v56 = *v57;
      *v57 = v58;
LABEL_84:
      a1 += 8 * v50;
LABEL_85:
      if ( !(v48 % v49) )
        return (__int64)&v7[a3 - v8];
      v50 = v49;
      v49 -= v48 % v49;
      while ( 1 )
      {
        v48 = v50;
        v50 -= v49;
        if ( v49 < v50 )
          goto LABEL_76;
LABEL_88:
        v59 = 8 * v48;
        v60 = 8 * v50;
        v61 = (_DWORD *)(a1 + 8 * v48);
        v62 = &v61[-2 * v50];
        if ( v49 <= 0 )
        {
          a1 = a1 + 8 * v48 - 8 * v50;
          goto LABEL_97;
        }
        v63 = v59 - v60;
        if ( v59 - v60 > v59 - 16 && v59 > v63 - 16 )
        {
          v75 = (_DWORD *)(a1 + 8 * v48 - 8 * v50);
          v76 = 0;
          do
          {
            v77 = *(v75 - 2);
            v78 = *(v61 - 2);
            ++v76;
            v75 -= 2;
            v61 -= 2;
            *v75 = v78;
            v79 = v61[1];
            *v61 = v77;
            v80 = v75[1];
            v75[1] = v79;
            v61[1] = v80;
          }
          while ( v49 != v76 );
          goto LABEL_96;
        }
        if ( v49 == 1 )
        {
          v69 = 0;
        }
        else
        {
          v64 = a1 + v63 - 16;
          v65 = a1 + v59 - 16;
          v66 = 0;
          do
          {
            ++v66;
            v64 -= 16;
            v65 -= 16;
            v67 = (__m128d)_mm_loadh_ps((const double *)(v64 + 16));
            v68 = (__m128d)_mm_loadh_ps((const double *)(v65 + 16));
            *(__m128d *)(v64 + 16) = _mm_shuffle_pd(v68, v68, 1);
            *(__m128d *)(v65 + 16) = _mm_shuffle_pd(v67, v67, 1);
          }
          while ( v66 != (unsigned __int64)v49 >> 1 );
          v69 = v49 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v49 & 1) == 0 )
            goto LABEL_96;
        }
        v70 = v59 + 8 * ~v69;
        v71 = (__int64 *)(a1 + v70);
        v72 = (__int64 *)(a1 + v70 - v60);
        v73 = *v72;
        *v72 = *v71;
        *v71 = v73;
LABEL_96:
        a1 = (__int64)&v62[-2 * v49];
LABEL_97:
        v49 = v48 % v50;
        if ( !(v48 % v50) )
          return (__int64)&v7[a3 - v8];
      }
    }
    if ( (unsigned __int64)(a1 + 15 - (_QWORD)a2) <= 0x1E )
    {
      v106 = a2;
      do
      {
        v107 = *(_DWORD *)v106;
        v108 = *(_DWORD *)v7;
        v7 += 8;
        v106 += 8;
        *((_DWORD *)v7 - 2) = v107;
        v109 = *((_DWORD *)v106 - 1);
        *((_DWORD *)v106 - 2) = v108;
        v110 = *((_DWORD *)v7 - 1);
        *((_DWORD *)v7 - 1) = v109;
        *((_DWORD *)v106 - 1) = v110;
      }
      while ( a2 != v7 );
      return (__int64)a2;
    }
    v98 = ((unsigned __int64)(v47 - 8) >> 3) + 1;
    if ( v47 == &byte_8 )
    {
      v101 = 0;
    }
    else
    {
      v99 = 0;
      do
      {
        v100 = _mm_loadu_si128((const __m128i *)(a1 + v99));
        *(__m128i *)(a1 + v99) = _mm_loadu_si128((const __m128i *)&a2[v99]);
        *(__m128i *)&a2[v99] = v100;
        v99 += 16;
      }
      while ( 16 * (v98 >> 1) != v99 );
      if ( (v98 & 1) == 0 )
        return (__int64)a2;
      v101 = v98 & 0xFFFFFFFFFFFFFFFELL;
    }
    v102 = 8 * v101;
    v103 = &a2[v102];
    v104 = (__int64 *)(a1 + v102);
    v105 = *v104;
    *v104 = *(_QWORD *)v103;
    *(_QWORD *)v103 = v105;
    return (__int64)a2;
  }
  if ( !a4 )
    return (__int64)a3;
  v28 = (__int64)&a2[-a1];
  v29 = (__int64)&a2[-a1] >> 3;
  v30 = (__int64)&v8[-a1] >> 3;
  if ( (__int64)&v8[-a1] > 0 )
  {
    if ( (unsigned __int64)&a6[-a1 - 4] <= 8 )
    {
      v93 = a6;
      v94 = (__int64 *)a1;
      do
      {
        v95 = *v94;
        v93 += 8;
        ++v94;
        *((_QWORD *)v93 - 1) = v95;
        --v30;
      }
      while ( v30 );
    }
    else
    {
      if ( v28 <= 8 )
      {
        v32 = 0;
        goto LABEL_44;
      }
      v31 = 0;
      do
      {
        *(__m128i *)&a6[v31] = _mm_loadu_si128((const __m128i *)(a1 + v31));
        v31 += 16;
      }
      while ( 16 * (v29 >> 1) != v31 );
      if ( (v29 & 1) != 0 )
      {
        v32 = v29 & 0xFFFFFFFFFFFFFFFELL;
LABEL_44:
        *(_QWORD *)&a6[8 * v32] = *(_QWORD *)(a1 + 8 * v32);
      }
    }
    v33 = v28 - 8;
    if ( !v28 )
      v33 = 0;
    v34 = v33 + 8;
    a6 += v33 + 8;
    v35 = (a3 - v8) >> 3;
    v36 = v34 >> 3;
    if ( a3 - v8 <= 0 )
      goto LABEL_57;
    goto LABEL_48;
  }
  v36 = 0;
  v34 = 0;
  v35 = (a3 - v8) >> 3;
  if ( a3 - v8 <= 0 )
    return (__int64)a3;
LABEL_48:
  v37 = v8 + 8;
  if ( (unsigned __int64)(v7 - (v8 + 8) + 4) <= 8 )
  {
    while ( 1 )
    {
      v74 = *(_QWORD *)v8;
      v7 += 8;
      v8 = v37;
      *((_QWORD *)v7 - 1) = v74;
      if ( !--v35 )
        break;
      v37 += 8;
    }
  }
  else
  {
    v38 = 1;
    if ( v35 )
      v38 = v35;
    if ( v35 <= 1 )
    {
      v40 = 0;
      goto LABEL_56;
    }
    v39 = 0;
    do
    {
      *(__m128i *)&v7[v39] = _mm_loadu_si128((const __m128i *)&v8[v39]);
      v39 += 16;
    }
    while ( 16 * (v38 >> 1) != v39 );
    if ( (v38 & 1) != 0 )
    {
      v40 = v38 & 0xFFFFFFFFFFFFFFFELL;
LABEL_56:
      *(_QWORD *)&v7[8 * v40] = *(_QWORD *)&v8[8 * v40];
    }
  }
LABEL_57:
  if ( v34 <= 0 )
    return (__int64)a3;
  if ( (unsigned __int64)(a3 - 8 - a6 + 20) <= 8 )
  {
    v96 = v36;
    do
    {
      v97 = *((_QWORD *)a6 - 1);
      a6 -= 8;
      *(_QWORD *)&a3[8 * v96-- - 8 + -8 * v36] = v97;
    }
    while ( v96 );
    goto LABEL_67;
  }
  v41 = 1;
  if ( v36 > 0 )
    v41 = v36;
  if ( v36 <= 1 )
  {
    v44 = 0;
  }
  else
  {
    v42 = 0;
    do
    {
      v43 = (__m128d)_mm_loadh_ps((const double *)&a6[v42 - 16]);
      *(__m128d *)&a3[v42 - 16] = _mm_shuffle_pd(v43, v43, 1);
      v42 -= 16;
    }
    while ( -16LL * (v41 >> 1) != v42 );
    if ( (v41 & 1) == 0 )
      goto LABEL_67;
    v44 = v41 & 0xFFFFFFFFFFFFFFFELL;
  }
  *(_QWORD *)&a3[8 * ~v44] = *(_QWORD *)&a6[8 * ~v44];
LABEL_67:
  v45 = 8 * (1 - v36);
  if ( v36 <= 0 )
    v45 = 0;
  return (__int64)&a3[v45 - 8];
}

