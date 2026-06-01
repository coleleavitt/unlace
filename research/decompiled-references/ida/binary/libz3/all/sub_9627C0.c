void __fastcall sub_9627C0(
        const __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // r13
  __int64 v11; // r10
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // r8
  __int64 *v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r12
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // esi
  int v24; // ecx
  int v25; // edx
  __int64 *v26; // rax
  int v27; // esi
  __int64 v28; // rdx
  __int64 *v29; // rdi
  __int64 *k; // rdx
  __int64 v31; // rcx
  unsigned int v32; // ebp
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r12
  int v36; // ecx
  int v37; // edx
  int v38; // esi
  int v39; // ecx
  int v40; // edx
  __int64 v41; // r9
  __int64 *v42; // rsi
  __int64 *m; // r8
  __int64 v44; // rcx
  __int64 v45; // rbp
  __m128i *v46; // r12
  size_t v47; // r15
  signed __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // r8
  unsigned int v52; // r9d
  __int64 v53; // r8
  __int64 *v54; // r11
  __int64 v55; // rbx
  __int64 v56; // rbp
  __int64 v57; // r12
  int v58; // esi
  int v59; // edx
  int v60; // eax
  int v61; // edx
  int v62; // esi
  int v63; // ecx
  int v64; // edx
  __int64 *v65; // rax
  int v66; // esi
  __int64 v67; // rdx
  __int64 *v68; // rdi
  __int64 *i; // rdx
  __int64 v70; // rcx
  unsigned int v71; // ebp
  __int64 v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // r12
  int v75; // ecx
  int v76; // edx
  int v77; // esi
  int v78; // ecx
  int v79; // edx
  __int64 v80; // r9
  __int64 *v81; // rsi
  __int64 *j; // r8
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 *v86; // rdx
  __int64 v87; // rcx
  signed __int64 v88; // r15
  size_t v89; // rcx
  unsigned int v90; // eax
  __int64 v91; // rcx
  __int64 *v92; // rdx
  __int64 v93; // rcx
  __m128i *v94; // r8
  unsigned __int64 v95; // rax
  signed __int64 v96; // rsi
  __int64 v97; // r9
  const __m128i *v98; // rdx
  const __m128i *v99; // rcx
  __int64 v100; // rdi
  __m128i v101; // xmm1
  __m128i v102; // xmm0
  __int64 v103; // r10
  unsigned __int64 v104; // rdx
  __m128i *v105; // rdx
  __m128i *v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // r10
  __m128i v109; // xmm0
  __m128i v110; // xmm1
  const __m128i *v111; // rdx
  const __m128i *v112; // rax
  __m128i v113; // xmm1
  __m128i v114; // xmm0
  __int64 v115; // rcx
  __m128i *v116; // [rsp+8h] [rbp-90h]
  __int64 v117; // [rsp+18h] [rbp-80h]
  __int64 v118; // [rsp+18h] [rbp-80h]
  __int64 v119; // [rsp+20h] [rbp-78h]
  __int64 v120; // [rsp+28h] [rbp-70h]
  const __m128i *src; // [rsp+30h] [rbp-68h]
  __m128i *v122; // [rsp+38h] [rbp-60h]
  __int64 v124; // [rsp+48h] [rbp-50h]

  v8 = a4;
  v122 = (__m128i *)a1;
  if ( a5 <= a4 )
    v8 = a5;
  if ( a7 >= v8 )
  {
    sub_9603B0(a1, a2, a3, a4, a5, a6, (__int64 **)a8);
    return;
  }
  v119 = a4;
  v9 = a4;
  src = a2;
  v120 = a5;
  if ( a5 >= a4 )
  {
LABEL_37:
    v10 = v122;
    v116 = (__m128i *)((char *)src
                     + 8 * (v120 / 2)
                     + 8 * ((v120 + ((unsigned __int64)v120 >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    v50 = 0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)v122) >> 3);
LABEL_38:
    if ( v50 <= 0 )
      goto LABEL_56;
    while ( 1 )
    {
      v51 = *(unsigned int *)(a8 + 8);
      v52 = v51 - 1;
      v53 = 32 * v51;
      v54 = &v10->m128i_i64[(v50 >> 1) + (v50 & 0xFFFFFFFFFFFFFFFELL)];
      v55 = v116->m128i_i64[0];
      v56 = v116->m128i_i64[1];
      v57 = v116[1].m128i_i64[0];
      v58 = *(_DWORD *)(v116->m128i_i64[0] + 12);
      v59 = (*(_DWORD *)(v56 + 12) - v58) ^ (v58 << 8);
      v60 = (v59 - v58 + (v59 ^ ((v58 - v59) << 16))) ^ ((v58 - v59) << 10);
      v61 = (*(_DWORD *)(v57 + 12) - v60) ^ (v60 << 8);
      v62 = (v60 - v61) << 10;
      v63 = v61 ^ ((v60 - v61) << 16);
      v64 = v61 - v60;
      v65 = *(__int64 **)a8;
      v66 = (v64 + v63) ^ v62;
      v118 = *(_QWORD *)a8 + v53;
      v67 = 32LL * (v66 & v52);
      v68 = (__int64 *)(*(_QWORD *)a8 + v67);
      if ( v67 != v53 )
      {
        for ( i = &v65[(unsigned __int64)v67 / 8]; (__int64 *)v118 != i; i += 4 )
        {
          v70 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *((_DWORD *)i + 7) == v66 && v55 == v70 && v56 == i[1] && v57 == i[2] )
            {
              v71 = *((_DWORD *)i + 6);
              goto LABEL_47;
            }
          }
          else if ( !v70 )
          {
            goto LABEL_46;
          }
        }
      }
      if ( v65 == v68 )
      {
LABEL_46:
        v71 = 0;
        goto LABEL_47;
      }
      v92 = *(__int64 **)a8;
      while ( 1 )
      {
        v93 = *v92;
        if ( (unsigned __int64)*v92 > 1 )
          break;
        if ( !v93 )
          goto LABEL_46;
LABEL_113:
        v92 += 4;
        if ( v68 == v92 )
          goto LABEL_46;
      }
      if ( *((_DWORD *)v92 + 7) != v66 || v55 != v93 || v56 != v92[1] || v57 != v92[2] )
        goto LABEL_113;
      v71 = *((_DWORD *)v92 + 6);
LABEL_47:
      v72 = *v54;
      v73 = v54[1];
      v74 = v54[2];
      v75 = *(_DWORD *)(*v54 + 12);
      v76 = (*(_DWORD *)(v73 + 12) - v75) ^ (v75 << 8);
      v77 = ((v76 ^ ((v75 - v76) << 16)) + v76 - v75) ^ ((v75 - v76) << 10);
      v78 = (*(_DWORD *)(v74 + 12) - v77) ^ (v77 << 8);
      v79 = ((v78 ^ ((v77 - v78) << 16)) + v78 - v77) ^ ((v77 - v78) << 10);
      v80 = 32LL * (v79 & v52);
      v81 = &v65[(unsigned __int64)v80 / 8];
      if ( v53 != v80 )
      {
        for ( j = &v65[(unsigned __int64)v80 / 8]; (__int64 *)v118 != j; j += 4 )
        {
          v83 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 7) == v79 && v72 == v83 && v73 == j[1] && v74 == j[2] )
            {
              v90 = *((_DWORD *)j + 6);
              goto LABEL_96;
            }
          }
          else if ( !v83 )
          {
            goto LABEL_54;
          }
        }
      }
      while ( v81 != v65 )
      {
        v91 = *v65;
        if ( (unsigned __int64)*v65 > 1 )
        {
          if ( *((_DWORD *)v65 + 7) == v79 && v72 == v91 && v73 == v65[1] && v74 == v65[2] )
          {
            v90 = *((_DWORD *)v65 + 6);
LABEL_96:
            if ( v90 >= v71 )
              goto LABEL_55;
LABEL_97:
            v50 >>= 1;
            goto LABEL_38;
          }
        }
        else if ( !v91 )
        {
          break;
        }
        v65 += 4;
      }
LABEL_54:
      if ( v71 )
        goto LABEL_97;
LABEL_55:
      v10 = (__m128i *)(v54 + 3);
      v50 = v50 - (v50 >> 1) - 1;
      if ( v50 <= 0 )
      {
LABEL_56:
        v45 = v120 / 2;
        v124 = 0xAAAAAAAAAAAAAAABLL * (((char *)v10 - (char *)v122) >> 3);
        goto LABEL_25;
      }
    }
  }
  while ( 2 )
  {
    v124 = v9 / 2;
    v10 = (__m128i *)((char *)v122 + 8 * (v9 / 2) + 8 * ((v9 + ((unsigned __int64)v9 >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    v116 = (__m128i *)src;
    v11 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)src) >> 3);
LABEL_6:
    if ( v11 <= 0 )
      goto LABEL_24;
    do
    {
      v12 = *(unsigned int *)(a8 + 8);
      v13 = v12 - 1;
      v14 = 32 * v12;
      v15 = &v116->m128i_i64[(v11 >> 1) + (v11 & 0xFFFFFFFFFFFFFFFELL)];
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v19 = *(_DWORD *)(*v15 + 12);
      v20 = (*(_DWORD *)(v17 + 12) - v19) ^ (v19 << 8);
      v21 = (v20 - v19 + (v20 ^ ((v19 - v20) << 16))) ^ ((v19 - v20) << 10);
      v22 = (*(_DWORD *)(v18 + 12) - v21) ^ (v21 << 8);
      v23 = (v21 - v22) << 10;
      v24 = v22 ^ ((v21 - v22) << 16);
      v25 = v22 - v21;
      v26 = *(__int64 **)a8;
      v27 = (v25 + v24) ^ v23;
      v117 = *(_QWORD *)a8 + v14;
      v28 = 32LL * (v27 & v13);
      v29 = (__int64 *)(*(_QWORD *)a8 + v28);
      if ( v28 != v14 )
      {
        for ( k = &v26[(unsigned __int64)v28 / 8]; (__int64 *)v117 != k; k += 4 )
        {
          v31 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *((_DWORD *)k + 7) == v27 && v16 == v31 && v17 == k[1] && v18 == k[2] )
            {
              v32 = *((_DWORD *)k + 6);
              goto LABEL_15;
            }
          }
          else if ( !v31 )
          {
            goto LABEL_14;
          }
        }
      }
      if ( v26 == v29 )
      {
LABEL_14:
        v32 = 0;
        goto LABEL_15;
      }
      v86 = *(__int64 **)a8;
      while ( 1 )
      {
        v87 = *v86;
        if ( (unsigned __int64)*v86 > 1 )
          break;
        if ( !v87 )
          goto LABEL_14;
LABEL_77:
        v86 += 4;
        if ( v29 == v86 )
          goto LABEL_14;
      }
      if ( *((_DWORD *)v86 + 7) != v27 || v16 != v87 || v17 != v86[1] || v18 != v86[2] )
        goto LABEL_77;
      v32 = *((_DWORD *)v86 + 6);
LABEL_15:
      v33 = v10->m128i_i64[0];
      v34 = v10->m128i_i64[1];
      v35 = v10[1].m128i_i64[0];
      v36 = *(_DWORD *)(v10->m128i_i64[0] + 12);
      v37 = (*(_DWORD *)(v34 + 12) - v36) ^ (v36 << 8);
      v38 = ((v37 ^ ((v36 - v37) << 16)) + v37 - v36) ^ ((v36 - v37) << 10);
      v39 = (*(_DWORD *)(v35 + 12) - v38) ^ (v38 << 8);
      v40 = ((v39 ^ ((v38 - v39) << 16)) + v39 - v38) ^ ((v38 - v39) << 10);
      v41 = 32LL * (v40 & v13);
      v42 = &v26[(unsigned __int64)v41 / 8];
      if ( v14 != v41 )
      {
        for ( m = &v26[(unsigned __int64)v41 / 8]; (__int64 *)v117 != m; m += 4 )
        {
          v44 = *m;
          if ( (unsigned __int64)*m > 1 )
          {
            if ( *((_DWORD *)m + 7) == v40 && v33 == v44 && v34 == m[1] && v35 == m[2] )
            {
              v84 = *((_DWORD *)m + 6);
              goto LABEL_60;
            }
          }
          else if ( !v44 )
          {
            goto LABEL_22;
          }
        }
      }
      while ( v42 != v26 )
      {
        v85 = *v26;
        if ( (unsigned __int64)*v26 > 1 )
        {
          if ( *((_DWORD *)v26 + 7) == v40 && v33 == v85 && v34 == v26[1] && v35 == v26[2] )
          {
            v84 = *((_DWORD *)v26 + 6);
LABEL_60:
            if ( v84 < v32 )
              goto LABEL_23;
LABEL_61:
            v11 >>= 1;
            goto LABEL_6;
          }
        }
        else if ( !v85 )
        {
          break;
        }
        v26 += 4;
      }
LABEL_22:
      if ( !v32 )
        goto LABEL_61;
LABEL_23:
      v116 = (__m128i *)(v15 + 3);
      v11 = v11 - (v11 >> 1) - 1;
    }
    while ( v11 > 0 );
LABEL_24:
    v45 = 0xAAAAAAAAAAAAAAABLL * (((char *)v116 - (char *)src) >> 3);
LABEL_25:
    v119 -= v124;
    if ( v119 <= v45 || v45 > a7 )
    {
      if ( v119 > a7 )
      {
        if ( v10 == src )
        {
          v46 = v116;
        }
        else if ( v116 == src )
        {
          v46 = v10;
        }
        else
        {
          v94 = v10;
          v95 = 0xAAAAAAAAAAAAAAABLL * (((char *)v116 - (char *)v10) >> 3);
          v96 = 0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)v10) >> 3);
          if ( v96 == v95 - v96 )
          {
            v111 = src;
            v112 = v10;
            do
            {
              v113 = _mm_loadu_si128(v111);
              v114 = _mm_loadu_si128(v112);
              v111 = (const __m128i *)((char *)v111 + 24);
              v112 = (const __m128i *)((char *)v112 + 24);
              v115 = v112[-1].m128i_i64[1];
              *(__m128i *)((char *)v112 - 24) = v113;
              v112[-1].m128i_i64[1] = v111[-1].m128i_i64[1];
              *(__m128i *)((char *)v111 - 24) = v114;
              v111[-1].m128i_i64[1] = v115;
            }
            while ( src != v112 );
            v46 = (__m128i *)((char *)v10 + (((char *)&src[-2].m128i_u64[1] - (char *)v10) & 0xFFFFFFFFFFFFFFF8LL) + 24);
          }
          else
          {
            while ( 1 )
            {
              v97 = v95 - v96;
              if ( v96 < (__int64)(v95 - v96) )
                break;
LABEL_134:
              v105 = (__m128i *)((char *)v94 + 24 * v95);
              v94 = (__m128i *)((char *)v105 - 24 * v97);
              if ( v96 > 0 )
              {
                v106 = (__m128i *)((char *)v105 - 24 * v97);
                v107 = 0;
                do
                {
                  v108 = v106[-1].m128i_i64[1];
                  ++v107;
                  v106 = (__m128i *)((char *)v106 - 24);
                  v109 = _mm_loadu_si128(v106);
                  v110 = _mm_loadu_si128((__m128i *)((char *)v105 - 24));
                  v105 = (__m128i *)((char *)v105 - 24);
                  *v106 = v110;
                  v106[1].m128i_i64[0] = v105[1].m128i_i64[0];
                  v105[1].m128i_i64[0] = v108;
                  *v105 = v109;
                }
                while ( v96 != v107 );
                v94 = (__m128i *)((char *)v94 - 24 * v96);
              }
              v96 = v95 % v97;
              if ( !(v95 % v97) )
                goto LABEL_141;
              v95 = v97;
            }
            while ( 1 )
            {
              v98 = (__m128i *)((char *)v94 + 24 * v96);
              if ( v97 > 0 )
              {
                v99 = v94;
                v100 = 0;
                do
                {
                  v101 = _mm_loadu_si128(v98);
                  v102 = _mm_loadu_si128(v99);
                  ++v100;
                  v99 = (const __m128i *)((char *)v99 + 24);
                  v103 = v99[-1].m128i_i64[1];
                  v98 = (const __m128i *)((char *)v98 + 24);
                  *(__m128i *)((char *)v99 - 24) = v101;
                  v99[-1].m128i_i64[1] = v98[-1].m128i_i64[1];
                  *(__m128i *)((char *)v98 - 24) = v102;
                  v98[-1].m128i_i64[1] = v103;
                }
                while ( v97 != v100 );
                v94 = (__m128i *)((char *)v94 + 24 * v97);
              }
              v104 = v95 % v96;
              if ( !(v95 % v96) )
                break;
              v95 = v96;
              v96 -= v104;
              v97 = v95 - v96;
              if ( v96 >= (__int64)(v95 - v96) )
                goto LABEL_134;
            }
LABEL_141:
            v46 = (__m128i *)((char *)v10 + (char *)v116 - (char *)src);
          }
        }
      }
      else
      {
        v46 = v116;
        if ( v119 )
        {
          v88 = (char *)v116 - (char *)src;
          v46 = (__m128i *)((char *)v116 - ((char *)src - (char *)v10));
          if ( (char *)src - (char *)v10 <= 24 )
          {
            if ( (char *)src - (char *)v10 == 24 )
            {
              *a6 = _mm_loadu_si128(v10);
              a6[1].m128i_i64[0] = v10[1].m128i_i64[0];
              if ( v88 <= 24 )
              {
                if ( v88 == 24 )
                {
                  *v10 = _mm_loadu_si128(src);
                  v10[1].m128i_i64[0] = src[1].m128i_i64[0];
                }
              }
              else
              {
                memmove(v10, src, v88);
              }
              *(__m128i *)((char *)v116 - 24) = _mm_loadu_si128(a6);
              v116[-1].m128i_i64[1] = a6[1].m128i_i64[0];
            }
            else if ( v88 <= 24 )
            {
              if ( v88 == 24 )
              {
                *v10 = _mm_loadu_si128(src);
                v10[1].m128i_i64[0] = src[1].m128i_i64[0];
              }
            }
            else
            {
              memmove(v10, src, (char *)v116 - (char *)src);
            }
          }
          else
          {
            memmove(a6, v10, (char *)src - (char *)v10);
            v89 = (char *)src - (char *)v10;
            if ( v88 <= 24 )
            {
              if ( v88 == 24 )
              {
                *v10 = _mm_loadu_si128(src);
                v10[1].m128i_i64[0] = src[1].m128i_i64[0];
              }
            }
            else
            {
              memmove(v10, src, v88);
              v89 = (char *)src - (char *)v10;
            }
            memmove(v46, a6, v89);
          }
        }
      }
    }
    else
    {
      v46 = v10;
      if ( v45 )
      {
        v47 = (char *)v116 - (char *)src;
        v48 = (char *)src - (char *)v10;
        if ( (char *)v116 - (char *)src <= 24 )
        {
          if ( (char *)v116 - (char *)src == 24 )
          {
            *a6 = _mm_loadu_si128(src);
            a6[1].m128i_i64[0] = src[1].m128i_i64[0];
            if ( v48 <= 24 )
            {
              if ( v48 == 24 )
              {
                *(__m128i *)((char *)v116 - 24) = _mm_loadu_si128(v10);
                v116[-1].m128i_i64[1] = v10[1].m128i_i64[0];
              }
            }
            else
            {
              memmove((char *)v116 - v48, v10, v48);
            }
            *v10 = _mm_loadu_si128(a6);
            v10[1].m128i_i64[0] = a6[1].m128i_i64[0];
          }
          else if ( v48 <= 24 )
          {
            if ( v48 == 24 )
            {
              *(__m128i *)((char *)v116 - 24) = _mm_loadu_si128(v10);
              v116[-1].m128i_i64[1] = v10[1].m128i_i64[0];
            }
          }
          else
          {
            memmove((char *)v116 - v48, v10, (char *)src - (char *)v10);
          }
        }
        else
        {
          memmove(a6, src, (char *)v116 - (char *)src);
          if ( v48 <= 24 )
          {
            if ( v48 == 24 )
            {
              *(__m128i *)((char *)v116 - 24) = _mm_loadu_si128(v10);
              v116[-1].m128i_i64[1] = v10[1].m128i_i64[0];
            }
          }
          else
          {
            memmove((char *)v116 - v48, v10, v48);
          }
          memmove(v10, a6, v47);
        }
        v46 = (__m128i *)((char *)v10 + v47);
      }
    }
    sub_9627C0((_DWORD)v122, (_DWORD)v10, (_DWORD)v46, v124, v45, (_DWORD)a6, a7, a8);
    v120 -= v45;
    v49 = v120;
    if ( v119 <= v120 )
      v49 = v119;
    if ( a7 < v49 )
    {
      v9 = v119;
      v122 = v46;
      src = v116;
      if ( v120 >= v119 )
        goto LABEL_37;
      continue;
    }
    break;
  }
  sub_9603B0(v46, v116, a3, v119, v120, a6, (__int64 **)a8);
}

