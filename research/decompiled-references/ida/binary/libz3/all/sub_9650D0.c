void __fastcall sub_9650D0(void *a1, char *a2, char *a3, __int64 **a4, __m128i a5, double a6, __m128 a7)
{
  char *v7; // r14
  __m128i *v8; // r15
  __m128 v9; // xmm1
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  __int64 *v15; // r11
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 *v19; // rsi
  __int64 *v20; // rdi
  __int64 *i; // rax
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // r13
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rax
  __int64 *v32; // r10
  __int64 *j; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 **v36; // rbp
  __int64 v37; // rbx
  signed __int64 v38; // r14
  __int64 v39; // r10
  __int64 **v40; // rdi
  __m128i *v41; // r8
  __int64 v42; // r15
  const __m128i *v43; // rbp
  signed __int64 v44; // r12
  __int64 **v45; // r13
  const __m128i *v46; // rdi
  __int64 **v47; // rdi
  __int64 v48; // r12
  const __m128i *v49; // r13
  signed __int64 v50; // rax
  __m128i *v51; // r8
  __int64 v52; // r15
  __int64 v53; // rax
  const __m128i *v54; // r14
  signed __int64 v55; // r13
  __int64 **v56; // r12
  __int64 v57; // rbp
  const __m128i *v58; // rdi
  signed __int64 v59; // rdx
  unsigned __int64 v60; // rax
  signed __int64 v61; // r12
  const __m128i *v62; // r13
  unsigned int v63; // eax
  __m128i *v64; // rcx
  __int64 v65; // r13
  __int64 *v66; // rax
  unsigned __int64 v67; // rdx
  unsigned int v68; // ebp
  __int64 v69; // rsi
  __int64 v70; // r10
  __int64 v71; // r12
  int v72; // r14d
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // r14d
  __int64 v77; // rax
  __int64 *v78; // r15
  __int64 *k; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 *v82; // rax
  unsigned __int64 v83; // rdx
  __int64 *v84; // rax
  unsigned __int64 v85; // rdx
  __int64 *v86; // rax
  unsigned __int64 v87; // rdx
  unsigned int v88; // eax
  __m128i *v89; // rax
  __int64 *v90; // rax
  __int64 v91; // rdx
  signed __int64 v92; // rax
  __m128i v93; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v94; // [rsp+18h] [rbp-B0h]
  __int64 v95; // [rsp+20h] [rbp-A8h]
  __int64 v96; // [rsp+28h] [rbp-A0h]
  __int64 *v97; // [rsp+30h] [rbp-98h]
  __m128i *v98; // [rsp+38h] [rbp-90h]
  __int64 **v99; // [rsp+40h] [rbp-88h]
  const __m128i *v100; // [rsp+48h] [rbp-80h]
  char *v101; // [rsp+50h] [rbp-78h]
  __m128i *v102; // [rsp+58h] [rbp-70h]
  void *src; // [rsp+60h] [rbp-68h]
  void *v104; // [rsp+68h] [rbp-60h]
  signed __int64 v105; // [rsp+70h] [rbp-58h]
  char *v106; // [rsp+78h] [rbp-50h]
  void *v107; // [rsp+80h] [rbp-48h]
  __int64 v108; // [rsp+88h] [rbp-40h]

  v107 = a3;
  v98 = (__m128i *)a2;
  v104 = a1;
  v99 = a4;
  v100 = (const __m128i *)&a3[a2 - (_BYTE *)a1];
  v105 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (_BYTE *)a1) >> 3);
  if ( a2 - (_BYTE *)a1 <= 144 )
  {
    sub_960AE0((char *)a1, v98->m128i_i8, a4, *(double *)a5.m128i_i64, a6, a7);
    return;
  }
  v106 = (char *)a1;
  v108 = a2 - (_BYTE *)a1;
  do
  {
    src = v106;
    v7 = v106 + 168;
    v106 = v7;
    v8 = (__m128i *)(v7 - 144);
    do
    {
      v9 = (__m128)_mm_loadu_si128(v8);
      a7 = _mm_movehl_ps(a7, v9);
      v96 = v8[1].m128i_i64[0];
      v10 = *(_DWORD *)(v9.m128_u64[0] + 12);
      v95 = a7.m128_u64[0];
      v11 = (*(_DWORD *)(a7.m128_u64[0] + 12) - v10) ^ (v10 << 8);
      v12 = ((v11 ^ ((v10 - v11) << 16)) + v11 - v10) ^ ((v10 - v11) << 10);
      v13 = (*(_DWORD *)(v96 + 12) - v12) ^ (v12 << 8);
      v14 = ((v13 ^ ((v12 - v13) << 16)) + v13 - v12) ^ ((v12 - v13) << 10);
      v15 = *v99;
      v16 = *((_DWORD *)v99 + 2);
      v93.m128i_i32[0] = v16 - 1;
      v17 = 32LL * v16;
      v18 = 32LL * (v14 & (v16 - 1));
      v19 = &v15[(unsigned __int64)v17 / 8];
      v94 = v18;
      v20 = &v15[(unsigned __int64)v18 / 8];
      if ( v18 != v17 )
      {
        for ( i = &v15[(unsigned __int64)v18 / 8]; v19 != i; i += 4 )
        {
          v22 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *((_DWORD *)i + 7) == v14 && v22 == v9.m128_u64[0] && i[1] == v95 && v96 == i[2] )
            {
              LODWORD(v97) = *((_DWORD *)i + 6);
              goto LABEL_12;
            }
          }
          else if ( !v22 )
          {
            goto LABEL_11;
          }
        }
      }
      if ( v15 == v20 )
      {
LABEL_11:
        LODWORD(v97) = 0;
        goto LABEL_12;
      }
      v86 = v15;
      while ( 1 )
      {
        v87 = *v86;
        if ( (unsigned __int64)*v86 > 1 )
          break;
        if ( !v87 )
          goto LABEL_11;
LABEL_84:
        v86 += 4;
        if ( v20 == v86 )
          goto LABEL_11;
      }
      if ( *((_DWORD *)v86 + 7) != v14 || v87 != v9.m128_u64[0] || v86[1] != v95 || v96 != v86[2] )
        goto LABEL_84;
      LODWORD(v97) = *((_DWORD *)v86 + 6);
LABEL_12:
      v23 = *((_QWORD *)v7 - 21);
      v24 = *((_QWORD *)v7 - 20);
      v25 = *((_QWORD *)v7 - 19);
      v26 = *(_DWORD *)(v23 + 12);
      v27 = (*(_DWORD *)(v24 + 12) - v26) ^ (v26 << 8);
      v28 = ((v27 ^ ((v26 - v27) << 16)) + v27 - v26) ^ ((v26 - v27) << 10);
      v29 = (*(_DWORD *)(v25 + 12) - v28) ^ (v28 << 8);
      v30 = ((v29 ^ ((v28 - v29) << 16)) + v29 - v28) ^ ((v28 - v29) << 10);
      v31 = 32LL * ((unsigned int)v30 & v93.m128i_i32[0]);
      v32 = &v15[(unsigned __int64)v31 / 8];
      if ( v17 != v31 )
      {
        for ( j = &v15[(unsigned __int64)v31 / 8]; v19 != j; j += 4 )
        {
          v34 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 7) == v30 && v23 == v34 && v24 == j[1] && v25 == j[2] )
            {
              v63 = *((_DWORD *)j + 6);
              goto LABEL_43;
            }
          }
          else if ( !v34 )
          {
            goto LABEL_19;
          }
        }
      }
      if ( v15 == v32 )
      {
LABEL_19:
        if ( !(_DWORD)v97 )
          goto LABEL_44;
        goto LABEL_20;
      }
      v84 = v15;
      while ( 2 )
      {
        v85 = *v84;
        if ( (unsigned __int64)*v84 <= 1 )
        {
          if ( !v85 )
            goto LABEL_19;
          goto LABEL_76;
        }
        if ( *((_DWORD *)v84 + 7) != v30 || v23 != v85 || v24 != v84[1] || v25 != v84[2] )
        {
LABEL_76:
          v84 += 4;
          if ( v32 == v84 )
            goto LABEL_19;
          continue;
        }
        break;
      }
      v63 = *((_DWORD *)v84 + 6);
LABEL_43:
      if ( v63 >= (unsigned int)v97 )
      {
LABEL_44:
        v64 = v8;
        v65 = v95;
        v101 = v7;
        v102 = v8;
        v97 = &v15[(unsigned __int64)v17 / 8];
        v95 = (__int64)v8;
        if ( v94 == v17 )
          goto LABEL_61;
LABEL_45:
        v66 = v20;
        while ( 2 )
        {
          v67 = *v66;
          if ( (unsigned __int64)*v66 <= 1 )
          {
            if ( !v67 )
            {
LABEL_51:
              v68 = 0;
              goto LABEL_52;
            }
            goto LABEL_48;
          }
          if ( *((_DWORD *)v66 + 7) != v14 || v67 != v9.m128_u64[0] || v66[1] != v65 || v96 != v66[2] )
          {
LABEL_48:
            v66 += 4;
            if ( v97 == v66 )
              goto LABEL_61;
            continue;
          }
          break;
        }
        v68 = *((_DWORD *)v66 + 6);
LABEL_52:
        v69 = v64[-2].m128i_i64[1];
        v70 = v64[-1].m128i_i64[0];
        v71 = v64[-1].m128i_i64[1];
        v72 = *(_DWORD *)(v69 + 12);
        v73 = (*(_DWORD *)(v70 + 12) - v72) ^ (v72 << 8);
        v74 = ((v73 ^ ((v72 - v73) << 16)) + v73 - v72) ^ ((v72 - v73) << 10);
        v75 = (*(_DWORD *)(v71 + 12) - v74) ^ (v74 << 8);
        v76 = ((v75 ^ ((v74 - v75) << 16)) + v75 - v74) ^ ((v74 - v75) << 10);
        v77 = 32LL * ((unsigned int)v76 & v93.m128i_i32[0]);
        v78 = &v15[(unsigned __int64)v77 / 8];
        if ( v17 != v77 )
        {
          for ( k = &v15[(unsigned __int64)v77 / 8]; v97 != k; k += 4 )
          {
            v80 = *k;
            if ( (unsigned __int64)*k > 1 )
            {
              if ( *((_DWORD *)k + 7) == v76 && v69 == v80 && v70 == k[1] && v71 == k[2] )
              {
                v88 = *((_DWORD *)k + 6);
                goto LABEL_97;
              }
            }
            else if ( !v80 )
            {
              goto LABEL_59;
            }
          }
        }
        if ( v15 == v78 )
        {
LABEL_59:
          v64 = (__m128i *)((char *)v64 - 24);
          if ( !v68 )
            goto LABEL_98;
          goto LABEL_60;
        }
        v90 = v15;
        while ( 1 )
        {
          v91 = *v90;
          if ( (unsigned __int64)*v90 > 1 )
          {
            if ( *((_DWORD *)v90 + 7) == v76 && v69 == v91 && v70 == v90[1] && v71 == v90[2] )
            {
              v88 = *((_DWORD *)v90 + 6);
LABEL_97:
              v64 = (__m128i *)((char *)v64 - 24);
              if ( v88 >= v68 )
              {
LABEL_98:
                v89 = (__m128i *)v95;
                v7 = v101;
                v8 = v102;
                *(_QWORD *)(v95 + 16) = v96;
                *v89 = (__m128i)v9;
                goto LABEL_23;
              }
LABEL_60:
              a5 = _mm_loadu_si128(v64);
              v81 = v64[1].m128i_i64[0];
              v95 = (__int64)v64;
              v64[2].m128i_i64[1] = v81;
              *(__m128i *)((char *)v64 + 24) = a5;
              if ( v94 != v17 )
                goto LABEL_45;
LABEL_61:
              if ( v15 == v20 )
                goto LABEL_51;
              v82 = v15;
              while ( 2 )
              {
                v83 = *v82;
                if ( (unsigned __int64)*v82 <= 1 )
                {
                  if ( !v83 )
                    goto LABEL_51;
                  goto LABEL_65;
                }
                if ( *((_DWORD *)v82 + 7) != v14 || v83 != v9.m128_u64[0] || v82[1] != v65 || v96 != v82[2] )
                {
LABEL_65:
                  v82 += 4;
                  if ( v20 == v82 )
                    goto LABEL_51;
                  continue;
                }
                break;
              }
              v68 = *((_DWORD *)v82 + 6);
              goto LABEL_52;
            }
          }
          else if ( !v91 )
          {
            goto LABEL_59;
          }
          v90 += 4;
          if ( v78 == v90 )
            goto LABEL_59;
        }
      }
LABEL_20:
      if ( (char *)v8 - (_BYTE *)src <= 24 )
      {
        if ( (char *)v8 - (_BYTE *)src == 24 )
        {
          a5 = _mm_loadu_si128((const __m128i *)(v7 - 168));
          *v8 = a5;
          v8[1].m128i_i64[0] = *((_QWORD *)v7 - 19);
        }
      }
      else
      {
        v93 = (__m128i)v9;
        memmove((char *)src + 24, src, (char *)v8 - (_BYTE *)src);
        v9 = (__m128)_mm_load_si128(&v93);
      }
      v35 = v96;
      *(__m128 *)(v7 - 168) = v9;
      *((_QWORD *)v7 - 19) = v35;
LABEL_23:
      v8 = (__m128i *)((char *)v8 + 24);
    }
    while ( v7 != (char *)v8 );
  }
  while ( (char *)v98 - v106 > 144 );
  v36 = v99;
  v37 = v108;
  sub_960AE0(v106, v98->m128i_i8, v99, *(double *)a5.m128i_i64, *(double *)v9.m128_u64, a7);
  if ( v37 > 168 )
  {
    v38 = 14;
    v39 = 7;
    while ( 1 )
    {
      v93.m128i_i64[0] = v38;
      if ( v105 < v38 )
      {
        v50 = v105;
        v41 = (__m128i *)v107;
        v48 = 4 * v39;
        v49 = (const __m128i *)v104;
      }
      else
      {
        v94 = v39;
        v40 = v36;
        v95 = 4 * v39;
        v41 = (__m128i *)v107;
        v42 = 8 * (4 * v39 + v38);
        v43 = (const __m128i *)v104;
        v44 = 8 * (v38 + v39) - v42;
        v45 = v40;
        do
        {
          v46 = v43;
          v43 = (const __m128i *)((char *)v43 + v42);
          v41 = (__m128i *)sub_964D60(
                             v46,
                             (const __m128i *)((char *)v43 + v44),
                             (const __m128i *)((char *)v43 + v44),
                             v43,
                             v41,
                             v45);
        }
        while ( v38 <= (__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)v98 - (char *)v43) >> 3)) );
        v47 = v45;
        v39 = v94;
        v48 = v95;
        v49 = v43;
        v50 = 0xAAAAAAAAAAAAAAABLL * (((char *)v98 - (char *)v43) >> 3);
        v36 = v47;
      }
      if ( v50 > v39 )
        v50 = v39;
      sub_964D60(
        v49,
        (const __m128i *)((char *)v49 + 24 * v50),
        (const __m128i *)((char *)v49 + 24 * v50),
        v98,
        v41,
        v36);
      if ( v105 < v48 )
        break;
      v51 = (__m128i *)v104;
      v94 = v48;
      v95 = 2 * v48;
      v52 = 24 * v48;
      v53 = 24 * v93.m128i_i64[0] - 24 * v48;
      v54 = (const __m128i *)v107;
      v55 = v48;
      v56 = v36;
      v57 = v53;
      do
      {
        v58 = v54;
        v54 = (const __m128i *)((char *)v54 + v52);
        v51 = (__m128i *)sub_964D60(
                           v58,
                           (const __m128i *)((char *)v54 + v57),
                           (const __m128i *)((char *)v54 + v57),
                           v54,
                           v51,
                           v56);
        v59 = 0xAAAAAAAAAAAAAAABLL * (((char *)v100 - (char *)v54) >> 3);
      }
      while ( v55 <= v59 );
      v60 = 0xAAAAAAAAAAAAAAABLL * (((char *)v100 - (char *)v54) >> 3);
      v36 = v56;
      v61 = v55;
      v62 = v54;
      v38 = v95;
      if ( v59 > v93.m128i_i64[0] )
        v60 = v93.m128i_i64[0];
      sub_964D60(
        v62,
        (const __m128i *)((char *)v62 + 24 * v60),
        (const __m128i *)((char *)v62 + 24 * v60),
        v100,
        v51,
        v36);
      v39 = v94;
      if ( v105 <= v61 )
        return;
    }
    v92 = v105;
    if ( v105 > v38 )
      v92 = v38;
    sub_964D60(
      (const __m128i *)v107,
      (const __m128i *)((char *)v107 + 24 * v92),
      (const __m128i *)((char *)v107 + 24 * v92),
      v100,
      (__m128i *)v104,
      v99);
  }
}

