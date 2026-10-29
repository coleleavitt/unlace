__int64 __fastcall ClpSimplex::outDuplicateRows(ClpSimplex *this, int a2, int *a3, char a4, double a5, double a6)
{
  unsigned __int64 v7; // rdi
  double *v8; // rbp
  __int64 v9; // rdi
  const CoinPackedMatrix *v10; // rsi
  __int64 (__fastcall *v11)(ClpPackedMatrix *); // rax
  int *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // r12d
  int *v16; // rbx
  double v17; // xmm0_8
  __int64 v18; // rax
  double v19; // xmm8_8
  double v20; // xmm1_8
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __m128d v25; // xmm7
  __int64 v26; // r10
  __int64 v27; // r9
  int v28; // edi
  double v29; // xmm0_8
  int v30; // ecx
  unsigned int v31; // r15d
  int v33; // ebx
  __int64 v34; // rsi
  int v35; // edi
  double v36; // xmm2_8
  __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rbx
  char v40; // bp
  double v41; // xmm3_8
  double v42; // xmm0_8
  __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdx
  double *v46; // rdi
  double *v47; // rsi
  double v48; // xmm0_8
  double v49; // xmm3_8
  __m128d v50; // xmm10
  __m128d v51; // xmm9
  __m128d v52; // xmm2
  __m128d v53; // xmm0
  __m128d v54; // xmm3
  double v55; // xmm2_8
  __int64 v56; // xmm13_8
  __m128d v57; // xmm14
  double v58; // xmm2_8
  __m128d v59; // xmm12
  __m128d v60; // xmm10
  __m128d v61; // xmm2
  __m128d v62; // xmm9
  __m128d v63; // xmm9
  int v64; // edx
  __int64 v65; // rdi
  _BYTE *v66; // rdx
  _BYTE *v67; // rdx
  int v68; // edx
  __m128d v69; // xmm10
  __m128d v70; // xmm14
  double *v71; // [rsp+0h] [rbp-108h]
  unsigned int v72; // [rsp+0h] [rbp-108h]
  __int64 v73; // [rsp+8h] [rbp-100h]
  __int64 v74; // [rsp+10h] [rbp-F8h]
  __int64 v75; // [rsp+18h] [rbp-F0h]
  __int64 v76; // [rsp+20h] [rbp-E8h]
  int v77; // [rsp+20h] [rbp-E8h]
  __int64 v78; // [rsp+20h] [rbp-E8h]
  __int64 v79; // [rsp+28h] [rbp-E0h]
  double *v80; // [rsp+30h] [rbp-D8h]
  __int64 v81; // [rsp+38h] [rbp-D0h]
  _BYTE v88[32]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v89; // [rsp+90h] [rbp-78h]
  __int64 v90; // [rsp+98h] [rbp-70h]
  __int64 v91; // [rsp+A0h] [rbp-68h]
  __int64 v92; // [rsp+A8h] [rbp-60h]

  v7 = a2 + *((_DWORD *)this + 27);
  if ( v7 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v80 = (double *)operator new[](8 * v7);
  v8 = &v80[a2];
  coin_init_random_vec(v8, *((_DWORD *)this + 27));
  v9 = *((_QWORD *)this + 24);
  v10 = nullptr;
  if ( v9 )
  {
    v11 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v9;
    if ( v11 == ClpPackedMatrix::getPackedMatrix )
      v10 = *(const CoinPackedMatrix **)(v9 + 88);
    else
      v10 = (const CoinPackedMatrix *)((__int64 (__fastcall *)(__int64, _QWORD))v11)(v9, 0);
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v88, v10);
  CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v88);
  v74 = v91;
  v73 = v90;
  v76 = v92;
  v75 = v89;
  if ( a2 > 0 )
  {
    v12 = a3;
    v71 = v80;
    v81 = v90 + 4;
    do
    {
      v13 = *v12;
      v14 = *(int *)(v74 + 4 * v13);
      v15 = v14 + *(_DWORD *)(v76 + 4 * v13);
      v16 = (int *)(v73 + 4 * v14);
      CoinSort_2<int,double>(v16, v73 + 4LL * v15, v75 + 8 * v14);
      if ( (int)v14 >= v15 )
      {
        v17 = 0.0;
      }
      else
      {
        v17 = 0.0;
        do
        {
          v18 = *v16++;
          v17 = v17 + v8[v18];
        }
        while ( (int *)(v81 + 4 * ((unsigned int)(v15 - v14 - 1) + v14)) != v16 );
      }
      ++v12;
      *v71++ = v17;
    }
    while ( &a3[a2 - 1 + 1] != v12 );
  }
  CoinSort_2<double,int>(v80, v8, a3);
  if ( a5 < 0.0 )
    a5 = *((double *)this + 110);
  v19 = 0.0;
  v20 = *v80;
  v21 = *a3;
  if ( a6 > 0.0 )
    v19 = 1.0 / a6;
  if ( a2 <= 1 )
  {
    v31 = 0;
    goto LABEL_23;
  }
  v22 = 1;
  v72 = 0;
  v23 = v76;
  v24 = (unsigned int)(a2 - 2) + 2LL;
  v25 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
LABEL_20:
  v29 = v80[v22];
  v30 = a3[v22];
  if ( v29 != v20 )
  {
    ++v22;
    v20 = v29;
    if ( v24 != v22 )
      goto LABEL_19;
LABEL_22:
    v31 = v72;
    goto LABEL_23;
  }
  v26 = v30;
  v27 = v21;
  v28 = *(_DWORD *)(v23 + 4LL * v30);
  if ( v28 != *(_DWORD *)(v23 + 4LL * v21) )
    goto LABEL_18;
  v33 = *(_DWORD *)(v74 + 4LL * v30);
  v34 = *(int *)(v74 + 4LL * v21);
  v35 = v33 + v28;
  v77 = *(_DWORD *)(v74 + 4LL * v21) - v33;
  if ( v33 < v35 )
  {
    if ( *(_DWORD *)(v73 + 4 * v34) != *(_DWORD *)(v73 + 4LL * v33) )
      goto LABEL_18;
    v36 = 0.0;
    v37 = v33 + (__int64)v77 + 1;
    v38 = -(__int64)v77;
    v78 = v37 + (unsigned int)(v35 - v33 - 1);
    v39 = v75 + 8 * v38;
    v79 = v73 + 4 * v38;
    v40 = 0;
    while ( 1 )
    {
      v41 = *(double *)(v39 + 8 * v37 - 8);
      v42 = *(double *)(v75 + 8 * v34);
      if ( v36 == 0.0 )
      {
        v36 = v41 / v42;
        if ( v78 == v37 )
          goto LABEL_34;
      }
      else
      {
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42 * v36 - v41) & *(_QWORD *)&v25.m128d_f64[0]) > 0.00000001 )
          v40 = 1;
        if ( v78 == v37 )
        {
LABEL_34:
          v26 = v30;
          v27 = v21;
          if ( !v40 )
            goto LABEL_35;
LABEL_18:
          if ( v24 == ++v22 )
            goto LABEL_22;
LABEL_19:
          v21 = v30;
          goto LABEL_20;
        }
      }
      v34 = v37;
      if ( *(_DWORD *)(v79 + 4 * v37) != *(_DWORD *)(v73 + 4 * (v37 + 1) - 4) )
        goto LABEL_18;
      ++v37;
    }
  }
  v36 = 0.0;
LABEL_35:
  v43 = 8 * v26;
  v44 = *((_QWORD *)this + 18);
  v45 = *((_QWORD *)this + 19);
  v46 = (double *)(v44 + 8 * v27);
  v47 = (double *)(8 * v26 + v44);
  v50 = (__m128d)*(unsigned __int64 *)v46;
  v51 = (__m128d)*(unsigned __int64 *)(v45 + 8 * v27);
  v48 = *v47;
  v49 = *(double *)(v45 + 8 * v26);
  v50.m128d_f64[0] = v50.m128d_f64[0] * v36;
  v51.m128d_f64[0] = v51.m128d_f64[0] * v36;
  if ( v36 >= 0.0 )
  {
    v52 = v51;
    v51 = v50;
    v50 = v52;
  }
  if ( a4 && (v48 < v51.m128d_f64[0] - 0.00000001 || v50.m128d_f64[0] + 0.00000001 < v49) )
  {
    if ( v51.m128d_f64[0] < v48 - 0.00000001 || v49 + 0.00000001 < v50.m128d_f64[0] )
      goto LABEL_18;
    v51.m128d_f64[0] = fmax(v51.m128d_f64[0], v48);
    v53 = v51;
    if ( v51.m128d_f64[0] < -1.0e30 )
      v53 = (__m128d)0xFFEFFFFFFFFFFFFFLL;
    v50.m128d_f64[0] = fmin(v50.m128d_f64[0], v49);
    v68 = v21;
    v47 = v46;
    v21 = a3[v22];
    v43 = 8 * v27;
    v30 = v68;
    v54 = v50;
    if ( v50.m128d_f64[0] > 1.0e30 )
LABEL_73:
      v54 = (__m128d)0x7FEFFFFFFFFFFFFFuLL;
  }
  else
  {
    v51.m128d_f64[0] = fmax(v51.m128d_f64[0], v48);
    v53 = v51;
    if ( v51.m128d_f64[0] < -1.0e30 )
      v53 = (__m128d)0xFFEFFFFFFFFFFFFFLL;
    v50.m128d_f64[0] = fmin(v50.m128d_f64[0], v49);
    v54 = v50;
    if ( v50.m128d_f64[0] > 1.0e30 )
      goto LABEL_73;
  }
  if ( v53.m128d_f64[0] - a5 <= v54.m128d_f64[0] )
  {
    if ( a5 >= COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v54.m128d_f64[0] - v53.m128d_f64[0]) & *(_QWORD *)&v25.m128d_f64[0]) )
    {
      v55 = _mm_cmplt_sd(_mm_and_pd(v54, v25), _mm_and_pd(v53, v25)).m128d_f64[0];
      v56 = ~*(_QWORD *)&v55 & *(_QWORD *)&v53.m128d_f64[0];
      *(_QWORD *)&v54.m128d_f64[0] = *(_QWORD *)&v54.m128d_f64[0] & *(_QWORD *)&v55 | v56;
      *(_QWORD *)&v53.m128d_f64[0] = v56 | *(_QWORD *)&v55 & *(_QWORD *)&v54.m128d_f64[0];
    }
    if ( a6 > 0.0 )
    {
      if ( v53.m128d_f64[0] > -1.0e30 )
      {
        v57.m128d_f64[0] = v53.m128d_f64[0] + 0.5;
        v58 = v53.m128d_f64[0] + 0.5;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v53.m128d_f64[0] + 0.5) & *(_QWORD *)&v25.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v59 = 0;
          v59.m128d_f64[0] = (double)(int)v57.m128d_f64[0];
          *(_QWORD *)&v58 = COERCE_UNSIGNED_INT64(
                              v59.m128d_f64[0]
                            - COERCE_DOUBLE(
                                COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v59, v57).m128d_f64[0]))
                              & 0x3FF0000000000000LL))
                          | ~*(_QWORD *)&v25.m128d_f64[0] & *(_QWORD *)&v57.m128d_f64[0];
        }
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v53.m128d_f64[0] - v58) & *(_QWORD *)&v25.m128d_f64[0]) < 0.000000001 )
        {
          v53.m128d_f64[0] = v58;
        }
        else
        {
          v60.m128d_f64[0] = v53.m128d_f64[0] * v19 + 0.5;
          if ( COERCE_DOUBLE(*(_QWORD *)&v60.m128d_f64[0] & *(_QWORD *)&v25.m128d_f64[0]) < 4.503599627370496e15 )
          {
            v70 = 0;
            v70.m128d_f64[0] = (double)(int)v60.m128d_f64[0];
            *(_QWORD *)&v60.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                             v70.m128d_f64[0]
                                           - COERCE_DOUBLE(
                                               COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v70, v60).m128d_f64[0]))
                                             & 0x3FF0000000000000LL))
                                         | ~*(_QWORD *)&v25.m128d_f64[0] & *(_QWORD *)&v60.m128d_f64[0];
          }
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v53.m128d_f64[0] * v19 - v60.m128d_f64[0]) & *(_QWORD *)&v25.m128d_f64[0]) < 0.000000001 )
            v53.m128d_f64[0] = a6 * v60.m128d_f64[0];
        }
      }
      if ( v54.m128d_f64[0] < 1.0e30 )
      {
        v61.m128d_f64[0] = v54.m128d_f64[0] + 0.5;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v54.m128d_f64[0] + 0.5) & *(_QWORD *)&v25.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v62 = 0;
          v62.m128d_f64[0] = (double)(int)v61.m128d_f64[0];
          *(_QWORD *)&v61.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v62.m128d_f64[0]
                                         - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v62, v61).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | ~*(_QWORD *)&v25.m128d_f64[0] & *(_QWORD *)&v61.m128d_f64[0];
        }
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v54.m128d_f64[0] - v61.m128d_f64[0]) & *(_QWORD *)&v25.m128d_f64[0]) < 0.000000001 )
        {
          v54.m128d_f64[0] = v61.m128d_f64[0];
        }
        else
        {
          v63.m128d_f64[0] = v54.m128d_f64[0] * v19 + 0.5;
          if ( COERCE_DOUBLE(*(_QWORD *)&v63.m128d_f64[0] & *(_QWORD *)&v25.m128d_f64[0]) < 4.503599627370496e15 )
          {
            v69 = 0;
            v69.m128d_f64[0] = (double)(int)v63.m128d_f64[0];
            *(_QWORD *)&v63.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                             v69.m128d_f64[0]
                                           - COERCE_DOUBLE(
                                               COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v69, v63).m128d_f64[0]))
                                             & 0x3FF0000000000000LL))
                                         | ~*(_QWORD *)&v25.m128d_f64[0] & *(_QWORD *)&v63.m128d_f64[0];
          }
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v54.m128d_f64[0] * v19 - v63.m128d_f64[0]) & *(_QWORD *)&v25.m128d_f64[0]) < 0.000000001 )
            v54.m128d_f64[0] = a6 * v63.m128d_f64[0];
        }
      }
    }
    *v47 = v53.m128d_f64[0];
    *(double *)(*((_QWORD *)this + 19) + v43) = v54.m128d_f64[0];
    a3[v72] = v21;
    v64 = *((_DWORD *)this + 27);
    v65 = *((_QWORD *)this + 33);
    ++v72;
    if ( (*(_BYTE *)(v65 + v21 + v64) & 7) != 1 )
    {
      v66 = (_BYTE *)(v65 + v30 + v64);
      if ( (*v66 & 7) == 1 )
      {
        *v66 = *v66 & 0xF8 | 4;
        v67 = (_BYTE *)(*((_QWORD *)this + 33) + v21 + *((_DWORD *)this + 27));
        *v67 = *v67 & 0xF8 | 1;
      }
    }
    goto LABEL_18;
  }
  v31 = -1;
LABEL_23:
  operator delete[](v80);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v88);
  return v31;
}

