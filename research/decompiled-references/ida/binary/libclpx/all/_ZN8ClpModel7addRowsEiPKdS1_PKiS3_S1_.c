void __fastcall ClpModel::addRows(
        ClpModel *this,
        int a2,
        unsigned __int64 a3,
        double *a4,
        const int *a5,
        const int *a6,
        const double *a7)
{
  int v9; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  double *v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // xmm0_8
  unsigned __int64 v20; // rax
  const double *v21; // r10
  unsigned int v22; // edx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __m128d v25; // xmm0
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  __int64 v30; // rax
  int v31; // edx
  double v32; // xmm0_8
  __int64 v33; // rax
  unsigned int v34; // r11d
  __int64 v35; // rdi
  double *v36; // r10
  __int64 v37; // rax
  __m128d v38; // xmm2
  __m128d v39; // xmm0
  double v40; // xmm1_8
  double v41; // xmm1_8
  __int64 v42; // rdi
  __int64 v43; // rdi
  bool v44; // zf
  CoinPackedMatrix *v45; // rax
  int v46; // r11d
  __int64 v47; // rax
  int v48; // r10d
  unsigned int v49; // eax
  int v50; // eax
  int v51; // r11d
  __int64 v52; // rax
  unsigned int v53; // eax
  int v54; // eax
  __int64 v55; // rax
  double v56; // xmm1_8
  __int64 v57; // rax
  double v58; // xmm0_8
  int v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+0h] [rbp-58h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  int v64; // [rsp+18h] [rbp-40h]
  unsigned int v65; // [rsp+1Ch] [rbp-3Ch]

  if ( !a2 )
  {
    if ( a5 )
    {
LABEL_3:
      ClpModel::synchronizeMatrix(this);
      return;
    }
    return;
  }
  v9 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 79) &= 0xFFFFFFC4;
  v59 = v9;
  ClpModel::resize(this, a2 + v9, *((_DWORD *)this + 27));
  v14 = *((_QWORD *)this + 18);
  v15 = a4;
  v16 = 8LL * v59;
  v63 = v59;
  v17 = v14 + v16;
  v60 = *((_QWORD *)this + 19);
  v18 = v60 + v16;
  if ( !a3 )
  {
    if ( a2 <= 0 )
      goto LABEL_39;
    v13 = (unsigned int)(a2 - 1);
    v46 = 0;
    v47 = (v17 >> 3) & 1;
    if ( (unsigned int)v13 <= 4 )
      goto LABEL_56;
    if ( (_DWORD)v47 )
    {
      v46 = 1;
      *(_QWORD *)v17 = 0xFFEFFFFFFFFFFFFFLL;
    }
    v48 = a2 - v47;
    v13 = (unsigned int)(a2 - v47) >> 1;
    v14 += 8 * (v63 + v47);
    v49 = 0;
    do
    {
      ++v49;
      v14 += 16;
      *(_OWORD *)(v14 - 16) = xmmword_28C780;
    }
    while ( (unsigned int)v13 > v49 );
    v46 += v48 & 0xFFFFFFFE;
    if ( v48 != (v48 & 0xFFFFFFFE) )
    {
LABEL_56:
      *(_QWORD *)(v17 + 8LL * v46) = 0xFFEFFFFFFFFFFFFFLL;
      if ( v46 + 1 < a2 )
      {
        *(_QWORD *)(v17 + 8LL * (v46 + 1)) = 0xFFEFFFFFFFFFFFFFLL;
        if ( a2 > v46 + 2 )
        {
          *(_QWORD *)(v17 + 8LL * (v46 + 2)) = 0xFFEFFFFFFFFFFFFFLL;
          v50 = v46 + 3;
          if ( a2 > v46 + 3 )
          {
            v51 = v46 + 4;
            *(_QWORD *)(v17 + 8LL * v50) = 0xFFEFFFFFFFFFFFFFLL;
            if ( a2 > v51 )
              *(_QWORD *)(v17 + 8LL * v51) = 0xFFEFFFFFFFFFFFFFLL;
          }
        }
      }
    }
    if ( a4 )
    {
      v62 = v16 + 16;
      goto LABEL_23;
    }
LABEL_63:
    v14 = (unsigned int)a2;
    v15 = nullptr;
    v52 = (v18 >> 3) & 1;
    if ( a2 <= 5 )
      goto LABEL_69;
    if ( (_DWORD)v52 )
    {
      *(_QWORD *)v18 = 0x7FEFFFFFFFFFFFFFLL;
      LODWORD(v15) = 1;
    }
    v14 = (unsigned int)(a2 - v52);
    v13 = v60 + 8 * (v63 + v52);
    v53 = 0;
    do
    {
      ++v53;
      v13 += 16;
      *(_OWORD *)(v13 - 16) = xmmword_28C790;
    }
    while ( (unsigned int)v14 >> 1 > v53 );
    v15 = (double *)((v14 & 0xFFFFFFFE) + (unsigned int)v15);
    if ( (_DWORD)v14 != (v14 & 0xFFFFFFFE) )
    {
LABEL_69:
      *(_QWORD *)(v18 + 8LL * (int)v15) = 0x7FEFFFFFFFFFFFFFLL;
      if ( (int)v15 + 1 < a2 )
      {
        *(_QWORD *)(v18 + 8LL * ((int)v15 + 1)) = 0x7FEFFFFFFFFFFFFFLL;
        if ( (int)v15 + 2 < a2 )
        {
          *(_QWORD *)(v18 + 8LL * ((int)v15 + 2)) = 0x7FEFFFFFFFFFFFFFLL;
          v54 = (_DWORD)v15 + 3;
          if ( (int)v15 + 3 < a2 )
          {
            v15 = (double *)(unsigned int)((_DWORD)v15 + 4);
            *(_QWORD *)(v18 + 8LL * v54) = 0x7FEFFFFFFFFFFFFFLL;
            if ( a2 > (int)v15 )
            {
              v15 = (double *)(int)v15;
              *(_QWORD *)(v18 + 8LL * (int)v15) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( a2 <= 0 )
    goto LABEL_39;
  v62 = v16 + 16;
  if ( (v17 >= a3 + 16 || a3 >= v14 + v16 + 16) && (unsigned int)a2 > 9 )
  {
    v64 = 0;
    if ( ((a3 >> 3) & 1) != 0 )
    {
      v19 = *(_QWORD *)a3;
      if ( *(double *)a3 < -1.0e20 )
        v19 = 0xFFEFFFFFFFFFFFFFLL;
      *(_QWORD *)v17 = v19;
      v64 = 1;
    }
    v20 = 8 * ((a3 >> 3) & 1);
    v65 = a2 - ((a3 >> 3) & 1);
    v21 = (const double *)(a3 + v20);
    v22 = 0;
    v23 = v16 + v20 + v14;
    v24 = 0;
    do
    {
      ++v22;
      v25 = _mm_cmplt_pd(*(__m128d *)&v21[v24], (__m128d)xmmword_28A060);
      *(__m128d *)(v23 + v24 * 8) = _mm_or_pd(
                                      _mm_andn_pd(v25, *(__m128d *)&v21[v24]),
                                      _mm_and_pd((__m128d)xmmword_28C780, v25));
      v24 += 2;
    }
    while ( v65 >> 1 > v22 );
    v14 = v65;
    v13 = v65 & 0xFFFFFFFE;
    v26 = v13 + v64;
    if ( v65 != (_DWORD)v13 )
    {
      v13 = v26;
      v27 = *(double *)(a3 + 8LL * v26);
      if ( v27 < -1.0e20 )
        v27 = -1.797693134862316e308;
      v28 = v26 + 1;
      *(double *)(v17 + 8 * v13) = v27;
      if ( a2 > v28 )
      {
        v29 = *(double *)(a3 + 8LL * v28);
        if ( v29 < -1.0e20 )
          v29 = -1.797693134862316e308;
        *(double *)(v17 + 8LL * v28) = v29;
      }
    }
  }
  else
  {
    v13 = 8LL * (unsigned int)(a2 - 1) + 8;
    v57 = 0;
    while ( 1 )
    {
      v58 = *(double *)(a3 + v57);
      if ( v58 >= -1.0e20 )
        break;
LABEL_84:
      *(_QWORD *)(v17 + v57) = 0xFFEFFFFFFFFFFFFFLL;
      v57 += 8;
      if ( v57 == v13 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      *(double *)(v17 + v57) = v58;
      v57 += 8;
      if ( v57 == v13 )
        break;
      v58 = *(double *)(a3 + v57);
      if ( v58 < -1.0e20 )
        goto LABEL_84;
    }
  }
LABEL_22:
  if ( !v15 )
    goto LABEL_63;
LABEL_23:
  LOBYTE(v13) = v18 >= (unsigned __int64)(v15 + 2) || (unsigned __int64)v15 >= v60 + v62;
  if ( (_BYTE)v13 && a2 > 9 )
  {
    v14 = (unsigned int)a2;
    v17 = (unsigned int)(a2 - 1);
    v30 = ((unsigned __int64)v15 >> 3) & 1;
    if ( (unsigned int)v17 < 2 - (unsigned int)((_DWORD)v30 == 0) )
    {
      v40 = *v15;
      if ( *v15 > 1.0e20 )
      {
        LODWORD(v13) = 1;
        *(_QWORD *)v18 = 0x7FEFFFFFFFFFFFFFLL;
LABEL_36:
        v13 = (int)v13;
        v41 = v15[(int)v13];
        if ( v41 > 1.0e20 )
          v41 = 1.797693134862316e308;
        *(double *)(v18 + 8LL * (int)v13) = v41;
        goto LABEL_39;
      }
      LODWORD(v13) = 0;
      v14 = 0;
LABEL_35:
      v13 = (unsigned int)(v13 + 1);
      *(double *)(v18 + v14) = v40;
      if ( a2 <= (int)v13 )
        goto LABEL_39;
      goto LABEL_36;
    }
    v31 = 0;
    if ( (_DWORD)v30 )
    {
      v32 = *v15;
      if ( *v15 > 1.0e20 )
        v32 = 1.797693134862316e308;
      *(double *)v18 = v32;
      v31 = 1;
    }
    v14 = (unsigned int)(a2 - v30);
    v33 = v30;
    v34 = 0;
    v35 = v60 + v33 * 8 + v16;
    v36 = &v15[v33];
    v17 = (unsigned int)v14 >> 1;
    v37 = 0;
    do
    {
      v38 = *(__m128d *)&v36[v37];
      ++v34;
      v39 = _mm_cmplt_pd((__m128d)xmmword_28A080, v38);
      *(__m128d *)(v35 + v37 * 8) = _mm_or_pd(_mm_andn_pd(v39, v38), _mm_and_pd((__m128d)xmmword_28C790, v39));
      v37 += 2;
    }
    while ( (unsigned int)v17 > v34 );
    v13 = ((unsigned int)v14 & 0xFFFFFFFE) + v31;
    if ( (_DWORD)v14 != (v14 & 0xFFFFFFFE) )
    {
      v40 = v15[(int)v13];
      v14 = 8LL * (int)v13;
      if ( v40 > 1.0e20 )
        v40 = 1.797693134862316e308;
      goto LABEL_35;
    }
  }
  else
  {
    v55 = 0;
    while ( 1 )
    {
      v56 = v15[v55];
      if ( v56 <= 1.0e20 )
        break;
LABEL_78:
      *(_QWORD *)(v18 + 8 * v55++) = 0x7FEFFFFFFFFFFFFFLL;
      if ( a2 <= (int)v55 )
        goto LABEL_39;
    }
    while ( 1 )
    {
      *(double *)(v18 + 8 * v55++) = v56;
      if ( a2 <= (int)v55 )
        break;
      v56 = v15[v55];
      if ( v56 > 1.0e20 )
        goto LABEL_78;
    }
  }
LABEL_39:
  v42 = *((_QWORD *)this + 25);
  if ( v42 )
    (*(void (__fastcall **)(__int64, __int64, __int64, double *, unsigned __int64, unsigned __int64))(*(_QWORD *)v42 + 480LL))(
      v42,
      v14,
      v13,
      v15,
      v18,
      v17);
  v43 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = 0;
  if ( v43 )
    (*(void (__fastcall **)(__int64, __int64, __int64, double *, unsigned __int64, unsigned __int64))(*(_QWORD *)v43 + 480LL))(
      v43,
      v14,
      v13,
      v15,
      v18,
      v17);
  v44 = *((_QWORD *)this + 24) == 0;
  *((_QWORD *)this + 26) = 0;
  if ( v44 )
    ClpModel::createEmptyMatrix(this);
  ClpModel::setRowScale(this, nullptr);
  ClpModel::setColumnScale(this, nullptr);
  if ( *((_DWORD *)this + 82) )
    std::vector<std::string>::resize((char *)this + 368, *((int *)this + 26));
  if ( a5 )
  {
    v45 = (CoinPackedMatrix *)(***((__int64 (__fastcall ****)(_QWORD))this + 24))(*((_QWORD *)this + 24));
    CoinPackedMatrix::reserve(v45, *((_DWORD *)this + 27), 0, 1);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, const int *, const int *, const double *, __int64))(**((_QWORD **)this + 24) + 120LL))(
      *((_QWORD *)this + 24),
      (unsigned int)a2,
      0,
      a5,
      a6,
      a7,
      -1);
    goto LABEL_3;
  }
}

