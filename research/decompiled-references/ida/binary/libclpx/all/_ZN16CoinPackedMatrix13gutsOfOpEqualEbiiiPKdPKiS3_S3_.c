__int64 __fastcall CoinPackedMatrix::gutsOfOpEqual(
        CoinPackedMatrix *this,
        char a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        const double *a6,
        const int *a7,
        const int *a8,
        const int *a9)
{
  __int64 v9; // r14
  __int64 v12; // r9
  __m128d v13; // xmm1
  int v14; // eax
  void *v15; // rdi
  int *v16; // rax
  void *v17; // rdi
  unsigned __int64 v18; // rdi
  _DWORD *v19; // rax
  double v20; // xmm2_8
  __int64 v21; // rdi
  int v22; // ecx
  unsigned __int64 v23; // rdx
  double v24; // xmm1_8
  __m128d v25; // xmm0
  __m128d v26; // xmm2
  __int64 result; // rax
  void *v28; // rdi
  void *v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  int v33; // edx
  int v34; // edx
  __int64 v35; // r10
  __int64 v36; // r15
  __int64 v37; // r11
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r13
  int v41; // ecx
  int *v42; // rsi
  const int *v43; // rdi
  bool v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __m128i v47; // xmm1
  __int64 v48; // r8
  __m128d v49; // xmm2
  void *v50; // rdi
  const int *v51; // r9
  int v52; // esi
  const int *v53; // rcx
  int *v54; // rdi
  int v55; // edx
  int v56; // r15d
  const double *v57; // r10
  double *v58; // r8
  __int64 v59; // rsi
  const double *v60; // rdx
  __int64 v61; // r9
  __int64 v62; // xmm0_8
  __int64 v63; // r9
  double v64; // xmm2_8
  __int64 v65; // r8
  unsigned __int64 v66; // rcx
  int v67; // esi
  __m128d v68; // xmm0
  __m128d v69; // xmm1
  void *v70; // rdi
  __int64 v71; // rax
  void *v72; // rdi
  __int64 v73; // r9
  int v74; // r8d
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // r8d
  const int *v79; // rsi
  int v80; // ecx
  int *v81; // rax
  const int *v82; // rbx
  int v83; // edx
  int v84; // edi
  void *v85; // rdi
  void *v86; // rdi
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // [rsp+0h] [rbp-48h]
  __int64 v92; // [rsp+0h] [rbp-48h]
  __int64 v93; // [rsp+0h] [rbp-48h]
  __int64 v94; // [rsp+0h] [rbp-48h]
  unsigned int v95; // [rsp+0h] [rbp-48h]
  unsigned int v96; // [rsp+0h] [rbp-48h]
  unsigned int v97; // [rsp+0h] [rbp-48h]
  __int64 v98; // [rsp+8h] [rbp-40h]
  int v99; // [rsp+8h] [rbp-40h]
  int v100; // [rsp+8h] [rbp-40h]
  int v101; // [rsp+8h] [rbp-40h]
  int v102; // [rsp+8h] [rbp-40h]

  v9 = (int)a4;
  *((_BYTE *)this + 8) = a2;
  *((_DWORD *)this + 16) = a4;
  *((_DWORD *)this + 17) = a3;
  *((_DWORD *)this + 18) = a5;
  if ( !a9 && a5 > 0 )
  {
    a4 = (int)a4;
    v12 = 4LL * (int)a4;
    if ( *(const int *)((char *)a8 + v12) == a5 && !*a8 )
    {
      if ( *((_DWORD *)this + 19) < (int)a4 || (v77 = *((_QWORD *)this + 6)) == 0 )
      {
        v70 = *((void **)this + 7);
        *((_DWORD *)this + 19) = a4;
        if ( v70 )
        {
          v99 = a5;
          operator delete[](v70);
          a4 = *((int *)this + 19);
          a5 = v99;
          v12 = 4LL * (int)v9;
        }
        v100 = a5;
        v92 = v12;
        if ( a4 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_105;
        v71 = operator new[](4 * a4);
        v72 = *((void **)this + 6);
        *((_QWORD *)this + 7) = v71;
        v73 = v92;
        v74 = v100;
        if ( v72 )
        {
          operator delete[](v72);
          v74 = v100;
          v73 = v92;
        }
        v101 = v74;
        v93 = v73;
        v75 = *((_DWORD *)this + 19) + 1;
        if ( v75 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_105;
        v76 = operator new[](4 * v75);
        a5 = v101;
        v12 = v93;
        v77 = v76;
        *((_QWORD *)this + 6) = v76;
      }
      v102 = a5;
      v94 = v12;
      CoinMemcpyN<int>(a8, (unsigned int)(v9 + 1), v77);
      v78 = v102;
      v79 = (const int *)((char *)a8 + v94 + 4);
      if ( v79 != a8 + 1 )
      {
        v80 = a8[1];
        v81 = *((int **)this + 7);
        v82 = a8 + 2;
        for ( *v81 = v80; v79 != v82; *v81 = v84 )
        {
          v83 = *v82++;
          ++v81;
          v84 = v83 - v80;
          v80 = v83;
        }
      }
      v85 = *((void **)this + 4);
      if ( *((_DWORD *)this + 20) >= v102 )
      {
        if ( v85 )
        {
          v90 = *((_QWORD *)this + 5);
          goto LABEL_101;
        }
        *((_DWORD *)this + 20) = v102;
      }
      else
      {
        *((_DWORD *)this + 20) = v102;
        if ( v85 )
        {
          operator delete[](v85);
          v78 = v102;
        }
      }
      v86 = *((void **)this + 5);
      if ( v86 )
      {
        v95 = v78;
        operator delete[](v86);
        v78 = v95;
      }
      v87 = *((int *)this + 20);
      v96 = v78;
      if ( v87 <= 0xFFFFFFFFFFFFFFFLL )
      {
        *((_QWORD *)this + 4) = operator new[](8 * v87);
        v88 = *((int *)this + 20);
        if ( v88 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v89 = operator new[](4 * v88);
          v78 = v96;
          v90 = v89;
          *((_QWORD *)this + 5) = v89;
LABEL_101:
          v97 = v78;
          CoinMemcpyN<int>(a7, v78, v90);
          return CoinMemcpyN<double>(a6, v97, *((_QWORD *)this + 4));
        }
      }
LABEL_105:
      __cxa_throw_bad_array_new_length();
    }
  }
  v13 = (__m128d)0x3FF0000000000000uLL;
  v13.m128d_f64[0] = (*((double *)this + 3) + 1.0) * (double)(int)a4;
  if ( fabs(v13.m128d_f64[0]) >= 4.503599627370496e15 )
  {
    v14 = (int)v13.m128d_f64[0];
    *((_DWORD *)this + 19) = (int)v13.m128d_f64[0];
    if ( (int)v13.m128d_f64[0] > 0 )
      goto LABEL_6;
LABEL_39:
    v50 = *((void **)this + 6);
    if ( v50 )
      operator delete[](v50);
    v19 = (_DWORD *)operator new[](4u);
    *((_QWORD *)this + 6) = v19;
    *v19 = 0;
    goto LABEL_18;
  }
  v49.m128d_f64[0] = (double)(int)v13.m128d_f64[0];
  v14 = (int)COERCE_DOUBLE(
               COERCE_UNSIGNED_INT64(
                 COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v13, v49).m128d_f64[0] & 0x3FF0000000000000LL)
               + v49.m128d_f64[0])
             | *(_QWORD *)&v13.m128d_f64[0] & 0x8000000000000000LL);
  *((_DWORD *)this + 19) = v14;
  if ( v14 <= 0 )
    goto LABEL_39;
LABEL_6:
  v15 = *((void **)this + 7);
  if ( v15 )
  {
    operator delete[](v15);
    v14 = *((_DWORD *)this + 19);
  }
  if ( (unsigned __int64)v14 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_105;
  v16 = (int *)operator new[](4LL * v14);
  *((_QWORD *)this + 7) = v16;
  if ( !a9 )
  {
    v51 = &a8[(int)v9 + 1];
    if ( v51 != a8 + 1 )
    {
      v52 = a8[1];
      v53 = a8 + 2;
      *v16 = v52;
      if ( v51 == a8 + 2 )
      {
LABEL_47:
        *v16 = v52 - *a8;
        goto LABEL_11;
      }
      v54 = v16;
      do
      {
        v55 = *v53++;
        ++v54;
        v56 = v55 - v52;
        v52 = v55;
        *v54 = v56;
      }
      while ( v51 != v53 );
    }
    v52 = *v16;
    goto LABEL_47;
  }
  CoinMemcpyN<int>(a9, (unsigned int)v9, v16);
LABEL_11:
  v17 = *((void **)this + 6);
  if ( v17 )
    operator delete[](v17);
  v18 = *((_DWORD *)this + 19) + 1;
  if ( v18 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_105;
  v19 = (_DWORD *)operator new[](4 * v18);
  v20 = *((double *)this + 2);
  *((_QWORD *)this + 6) = v19;
  *v19 = 0;
  if ( v20 == 0.0 )
  {
    if ( (int)v9 > 0 )
    {
      v21 = *((_QWORD *)this + 7);
      v22 = 0;
      v23 = 0;
      do
      {
        v22 += *(_DWORD *)(v21 + v23);
        v19[v23 / 4 + 1] = v22;
        v23 += 4LL;
      }
      while ( 4LL * (unsigned int)(v9 - 1) + 4 != v23 );
    }
  }
  else if ( (int)v9 > 0 )
  {
    v64 = v20 + 1.0;
    v65 = *((_QWORD *)this + 7);
    v66 = 0;
    v67 = 0;
    do
    {
      v68 = 0;
      v68.m128d_f64[0] = (double)*(int *)(v65 + v66) * v64;
      if ( fabs(v68.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v69.m128d_f64[0] = (double)(int)v68.m128d_f64[0];
        *(_QWORD *)&v68.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v68, v69).m128d_f64[0] & 0x3FF0000000000000LL)
                                       + v69.m128d_f64[0])
                                     | *(_QWORD *)&v68.m128d_f64[0] & 0x8000000000000000LL;
      }
      v67 += (int)v68.m128d_f64[0];
      v19[v66 / 4 + 1] = v67;
      v66 += 4LL;
    }
    while ( 4LL * (unsigned int)(v9 - 1) + 4 != v66 );
  }
LABEL_18:
  v24 = 0.0;
  if ( *((int *)this + 19) > 0 )
    v24 = (double)(int)v19[v9];
  v25 = (__m128d)0x3FF0000000000000uLL;
  v25.m128d_f64[0] = (*((double *)this + 3) + 1.0) * v24;
  if ( fabs(v25.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v26.m128d_f64[0] = (double)(int)v25.m128d_f64[0];
    *(_QWORD *)&v25.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v25, v26).m128d_f64[0] & 0x3FF0000000000000LL)
                                   + v26.m128d_f64[0])
                                 | *(_QWORD *)&v25.m128d_f64[0] & 0x8000000000000000LL;
  }
  result = (unsigned int)(int)v25.m128d_f64[0];
  *((_DWORD *)this + 20) = result;
  if ( (int)result > 0 )
  {
    v28 = *((void **)this + 4);
    if ( v28 )
      operator delete[](v28);
    v29 = *((void **)this + 5);
    if ( v29 )
      operator delete[](v29);
    v30 = *((int *)this + 20);
    if ( v30 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_105;
    v31 = operator new[](8 * v30);
    v32 = *((int *)this + 20);
    *((_QWORD *)this + 4) = v31;
    if ( v32 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_105;
    result = operator new[](4 * v32);
    v33 = *((_DWORD *)this + 16);
    *((_QWORD *)this + 5) = result;
    v34 = v33 - 1;
    if ( v34 >= 0 )
    {
      v35 = v34;
      v36 = *((_QWORD *)this + 6);
      v37 = v34 - 1LL;
      v38 = *((_QWORD *)this + 7);
      v98 = *((_QWORD *)this + 4);
      v91 = v37 - (unsigned int)v34;
      while ( 1 )
      {
        v39 = *(int *)(v36 + 4 * v35);
        v40 = a8[v35];
        v41 = *(_DWORD *)(v38 + 4 * v35);
        v42 = (int *)(result + 4 * v39);
        v43 = &a7[v40];
        v44 = v41 == 0;
        if ( v42 != v43 && v41 )
        {
          if ( v41 >> 3 > 0 )
          {
            v45 = 0;
            v46 = (unsigned int)((v41 >> 3) - 1);
            do
            {
              v47 = _mm_loadu_si128((const __m128i *)&v43[v45]);
              *(__m128i *)&v42[v45 + 4] = _mm_loadu_si128((const __m128i *)&v43[v45 + 4]);
              *(__m128i *)&v42[v45] = v47;
              v45 += 8;
            }
            while ( v45 != 8 * (v46 + 1) );
            v48 = 32 * ((int)v46 + 1LL);
            v43 = (const int *)((char *)v43 + v48);
            v42 = (int *)((char *)v42 + v48);
          }
          switch ( v41 % 8 )
          {
            case 1:
              goto LABEL_54;
            case 2:
              goto LABEL_53;
            case 3:
              goto LABEL_52;
            case 4:
              goto LABEL_51;
            case 5:
              goto LABEL_50;
            case 6:
              goto LABEL_49;
            case 7:
              v42[6] = v43[6];
LABEL_49:
              v42[5] = v43[5];
LABEL_50:
              v42[4] = v43[4];
LABEL_51:
              v42[3] = v43[3];
LABEL_52:
              v42[2] = v43[2];
LABEL_53:
              v42[1] = v43[1];
LABEL_54:
              *v42 = *v43;
              break;
            default:
              break;
          }
          v41 = *(_DWORD *)(v38 + 4 * v35);
          v39 = *(int *)(v36 + 4 * v35);
          v44 = v41 == 0;
        }
        v57 = &a6[v40];
        v58 = (double *)(v98 + 8 * v39);
        if ( v58 != v57 && !v44 )
        {
          if ( v41 >> 3 > 0 )
          {
            v59 = v98 + 8 * v39;
            v60 = &a6[v40];
            v61 = (unsigned int)((v41 >> 3) - 1);
            do
            {
              v62 = *(_QWORD *)v60;
              v60 += 8;
              v59 += 64;
              *(_QWORD *)(v59 - 64) = v62;
              *(double *)(v59 - 56) = *(v60 - 7);
              *(double *)(v59 - 48) = *(v60 - 6);
              *(double *)(v59 - 40) = *(v60 - 5);
              *(double *)(v59 - 32) = *(v60 - 4);
              *(double *)(v59 - 24) = *(v60 - 3);
              *(double *)(v59 - 16) = *(v60 - 2);
              *(double *)(v59 - 8) = *(v60 - 1);
            }
            while ( v60 != &v57[8 * v61 + 8] );
            v63 = ((int)v61 + 1LL) << 6;
            v57 = (const double *)((char *)v57 + v63);
            v58 = (double *)((char *)v58 + v63);
          }
          switch ( v41 % 8 )
          {
            case 1:
              goto LABEL_69;
            case 2:
              goto LABEL_68;
            case 3:
              goto LABEL_67;
            case 4:
              goto LABEL_66;
            case 5:
              goto LABEL_65;
            case 6:
              goto LABEL_64;
            case 7:
              v58[6] = v57[6];
LABEL_64:
              v58[5] = v57[5];
LABEL_65:
              v58[4] = v57[4];
LABEL_66:
              v58[3] = v57[3];
LABEL_67:
              v58[2] = v57[2];
LABEL_68:
              v58[1] = v57[1];
LABEL_69:
              *v58 = *v57;
              break;
            default:
              break;
          }
        }
        v35 = v37;
        if ( v37 == v91 )
          break;
        --v37;
      }
    }
  }
  return result;
}

