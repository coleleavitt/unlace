void __fastcall ClpModel::addRows(
        ClpModel *this,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        const CoinPackedVectorBase *const *a5)
{
  int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // xmm0_8
  unsigned __int64 v19; // rax
  const double *v20; // r10
  unsigned int v21; // esi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __m128d v24; // xmm0
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  double v28; // xmm0_8
  unsigned __int64 v29; // rax
  int v30; // edx
  __int64 v31; // xmm0_8
  unsigned __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned int v35; // edi
  __m128d v36; // xmm2
  __m128d v37; // xmm0
  double v38; // xmm1_8
  double v39; // xmm1_8
  __int64 v40; // rdi
  __int64 v41; // rdi
  bool v42; // zf
  _QWORD *v43; // r12
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rax
  _QWORD *v47; // r14
  _QWORD *v48; // rbp
  void *v49; // rdi
  __int64 v50; // rax
  unsigned int v51; // r11d
  unsigned int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // edi
  unsigned int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rax
  double v61; // xmm0_8
  __int64 v62; // rax
  double v63; // xmm1_8
  __int64 v64; // [rsp+0h] [rbp-58h]
  int v65; // [rsp+8h] [rbp-50h]
  unsigned int v66; // [rsp+Ch] [rbp-4Ch]

  if ( !a2 )
    return;
  v10 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 79) &= 0xFFFFFFC4;
  v11 = (unsigned int)(a2 + v10);
  ClpModel::resize(this, v11, *((_DWORD *)this + 27));
  v12 = v10;
  v13 = *((_QWORD *)this + 18);
  v14 = *((_QWORD *)this + 19);
  v15 = 8 * v12;
  v16 = v13 + 8 * v12;
  v17 = v14 + 8 * v12;
  if ( a3 )
  {
    if ( a2 <= 0 )
      goto LABEL_36;
    v64 = v15 + 16;
    LOBYTE(v11) = v16 >= a3 + 16 || a3 >= v13 + v15 + 16;
    if ( (_BYTE)v11 && (unsigned int)a2 > 9 )
    {
      v65 = 0;
      if ( ((a3 >> 3) & 1) != 0 )
      {
        v18 = *(_QWORD *)a3;
        if ( *(double *)a3 < -1.0e20 )
          v18 = 0xFFEFFFFFFFFFFFFFLL;
        *(_QWORD *)v16 = v18;
        v65 = 1;
      }
      v19 = 8 * ((a3 >> 3) & 1);
      v66 = a2 - ((a3 >> 3) & 1);
      v20 = (const double *)(a3 + v19);
      v21 = 0;
      v22 = v15 + v19 + v13;
      v23 = 0;
      do
      {
        ++v21;
        v24 = _mm_cmplt_pd(*(__m128d *)&v20[v23], (__m128d)xmmword_28A060);
        *(__m128d *)(v22 + v23 * 8) = _mm_or_pd(
                                        _mm_andn_pd(v24, *(__m128d *)&v20[v23]),
                                        _mm_and_pd((__m128d)xmmword_28C780, v24));
        v23 += 2;
      }
      while ( v66 >> 1 > v21 );
      v11 = v66;
      v13 = v66 & 0xFFFFFFFE;
      v25 = v13 + v65;
      if ( v66 != (_DWORD)v13 )
      {
        v13 = v25;
        v26 = *(double *)(a3 + 8LL * v25);
        if ( v26 < -1.0e20 )
          v26 = -1.797693134862316e308;
        v27 = v25 + 1;
        *(double *)(v16 + 8 * v13) = v26;
        if ( a2 > v27 )
        {
          v28 = *(double *)(a3 + 8LL * v27);
          if ( v28 < -1.0e20 )
            v28 = -1.797693134862316e308;
          *(double *)(v16 + 8LL * v27) = v28;
        }
      }
    }
    else
    {
      v13 = 8LL * (unsigned int)(a2 - 1) + 8;
      v60 = 0;
      while ( 1 )
      {
        v61 = *(double *)(a3 + v60);
        if ( v61 >= -1.0e20 )
          break;
LABEL_82:
        *(_QWORD *)(v16 + v60) = 0xFFEFFFFFFFFFFFFFLL;
        v60 += 8;
        if ( v60 == v13 )
          goto LABEL_19;
      }
      while ( 1 )
      {
        *(double *)(v16 + v60) = v61;
        v60 += 8;
        if ( v60 == v13 )
          break;
        v61 = *(double *)(a3 + v60);
        if ( v61 < -1.0e20 )
          goto LABEL_82;
      }
    }
LABEL_19:
    if ( a4 )
      goto LABEL_20;
LABEL_67:
    v54 = (v17 >> 3) & 1;
    if ( a2 <= 5 )
    {
      v58 = 0;
    }
    else
    {
      v11 = 0;
      if ( (_DWORD)v54 )
      {
        *(_QWORD *)v17 = 0x7FEFFFFFFFFFFFFFLL;
        v11 = 1;
      }
      v55 = a2 - v54;
      v12 += v54;
      v56 = 0;
      v57 = v14 + 8 * v12;
      v16 = v55 >> 1;
      do
      {
        ++v56;
        v57 += 16;
        *(_OWORD *)(v57 - 16) = xmmword_28C790;
      }
      while ( (unsigned int)v16 > v56 );
      v13 = v55 & 0xFFFFFFFE;
      v58 = v13 + v11;
      if ( v55 == (_DWORD)v13 )
        goto LABEL_36;
    }
    *(_QWORD *)(v17 + 8LL * v58) = 0x7FEFFFFFFFFFFFFFLL;
    v13 = (unsigned int)(v58 + 1);
    if ( a2 > (int)v13 )
    {
      *(_QWORD *)(v17 + 8LL * (int)v13) = 0x7FEFFFFFFFFFFFFFLL;
      v13 = (unsigned int)(v58 + 2);
      if ( a2 > (int)v13 )
      {
        *(_QWORD *)(v17 + 8LL * (int)v13) = 0x7FEFFFFFFFFFFFFFLL;
        v13 = (unsigned int)(v58 + 3);
        if ( a2 > (int)v13 )
        {
          v59 = v58 + 4;
          v13 = (int)v13;
          *(_QWORD *)(v17 + 8LL * (int)v13) = 0x7FEFFFFFFFFFFFFFLL;
          if ( a2 > v59 )
            *(_QWORD *)(v17 + 8LL * v59) = 0x7FEFFFFFFFFFFFFFLL;
        }
      }
    }
    goto LABEL_36;
  }
  if ( a2 <= 0 )
    goto LABEL_36;
  v50 = (v16 >> 3) & 1;
  v11 = 0;
  if ( (unsigned int)(a2 - 1) <= 4 )
    goto LABEL_60;
  if ( (_DWORD)v50 )
  {
    *(_QWORD *)v16 = 0xFFEFFFFFFFFFFFFFLL;
    LODWORD(v11) = 1;
  }
  v51 = a2 - v50;
  v13 += 8 * (v12 + v50);
  v52 = 0;
  do
  {
    ++v52;
    v13 += 16;
    *(_OWORD *)(v13 - 16) = xmmword_28C780;
  }
  while ( v51 >> 1 > v52 );
  v11 = (v51 & 0xFFFFFFFE) + (unsigned int)v11;
  if ( v51 != (v51 & 0xFFFFFFFE) )
  {
LABEL_60:
    *(_QWORD *)(v16 + 8LL * (int)v11) = 0xFFEFFFFFFFFFFFFFLL;
    if ( a2 > (int)v11 + 1 )
    {
      *(_QWORD *)(v16 + 8LL * ((int)v11 + 1)) = 0xFFEFFFFFFFFFFFFFLL;
      if ( a2 > (int)v11 + 2 )
      {
        *(_QWORD *)(v16 + 8LL * ((int)v11 + 2)) = 0xFFEFFFFFFFFFFFFFLL;
        v53 = v11 + 3;
        if ( a2 > (int)v11 + 3 )
        {
          v11 = (unsigned int)(v11 + 4);
          *(_QWORD *)(v16 + 8LL * v53) = 0xFFEFFFFFFFFFFFFFLL;
          if ( a2 > (int)v11 )
          {
            v11 = (int)v11;
            *(_QWORD *)(v16 + 8LL * (int)v11) = 0xFFEFFFFFFFFFFFFFLL;
          }
        }
      }
    }
  }
  if ( !a4 )
    goto LABEL_67;
  v64 = v15 + 16;
LABEL_20:
  LOBYTE(v13) = v17 >= a4 + 16 || a4 >= v14 + v64;
  if ( !(_BYTE)v13 || a2 <= 9 )
  {
    v62 = 0;
    while ( 1 )
    {
      v63 = *(double *)(a4 + 8 * v62);
      if ( v63 <= 1.0e20 )
        break;
LABEL_88:
      *(_QWORD *)(v17 + 8 * v62++) = 0x7FEFFFFFFFFFFFFFLL;
      if ( a2 <= (int)v62 )
        goto LABEL_36;
    }
    while ( 1 )
    {
      *(double *)(v17 + 8 * v62++) = v63;
      if ( a2 <= (int)v62 )
        goto LABEL_36;
      v63 = *(double *)(a4 + 8 * v62);
      if ( v63 > 1.0e20 )
        goto LABEL_88;
    }
  }
  v12 = (unsigned int)a2;
  v11 = (unsigned int)(a2 - 1);
  v29 = (a4 >> 3) & 1;
  if ( (unsigned int)v11 < 2 - (unsigned int)((_DWORD)v29 == 0) )
  {
    v38 = *(double *)a4;
    if ( *(double *)a4 > 1.0e20 )
    {
      LODWORD(v13) = 1;
      *(_QWORD *)v17 = 0x7FEFFFFFFFFFFFFFLL;
LABEL_33:
      v13 = (int)v13;
      v39 = *(double *)(a4 + 8LL * (int)v13);
      if ( v39 > 1.0e20 )
        v39 = 1.797693134862316e308;
      *(double *)(v17 + 8LL * (int)v13) = v39;
      goto LABEL_36;
    }
    LODWORD(v13) = 0;
    v12 = 0;
LABEL_32:
    v13 = (unsigned int)(v13 + 1);
    *(double *)(v17 + v12) = v38;
    if ( a2 <= (int)v13 )
      goto LABEL_36;
    goto LABEL_33;
  }
  v30 = 0;
  if ( (_DWORD)v29 )
  {
    v31 = *(_QWORD *)a4;
    if ( *(double *)a4 > 1.0e20 )
      v31 = 0x7FEFFFFFFFFFFFFFLL;
    *(_QWORD *)v17 = v31;
    v30 = 1;
  }
  v12 = (unsigned int)(a2 - v29);
  v32 = 8 * v29;
  v16 = a4 + v32;
  v33 = v32 + v15 + v14;
  v11 = (unsigned int)v12 >> 1;
  v34 = 0;
  v35 = 0;
  do
  {
    v36 = *(__m128d *)(v16 + v34);
    ++v35;
    v37 = _mm_cmplt_pd((__m128d)xmmword_28A080, v36);
    *(__m128d *)(v33 + v34) = _mm_or_pd(_mm_andn_pd(v37, v36), _mm_and_pd((__m128d)xmmword_28C790, v37));
    v34 += 16;
  }
  while ( (unsigned int)v11 > v35 );
  v13 = ((unsigned int)v12 & 0xFFFFFFFE) + v30;
  if ( (_DWORD)v12 != (v12 & 0xFFFFFFFE) )
  {
    v38 = *(double *)(a4 + 8LL * (int)v13);
    v12 = 8LL * (int)v13;
    if ( v38 > 1.0e20 )
      v38 = 1.797693134862316e308;
    goto LABEL_32;
  }
LABEL_36:
  v40 = *((_QWORD *)this + 25);
  if ( v40 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v40 + 480LL))(
      v40,
      v11,
      v13,
      v12,
      v17,
      v16);
  v41 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = 0;
  if ( v41 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v41 + 480LL))(
      v41,
      v11,
      v13,
      v12,
      v17,
      v16);
  v42 = *((_QWORD *)this + 24) == 0;
  *((_QWORD *)this + 26) = 0;
  if ( v42 )
    ClpModel::createEmptyMatrix(this);
  if ( a5 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, const CoinPackedVectorBase *const *, __int64, unsigned __int64, unsigned __int64))(**((_QWORD **)this + 24) + 104LL))(
      *((_QWORD *)this + 24),
      (unsigned int)a2,
      a5,
      v12,
      v17,
      v16);
    ClpModel::synchronizeMatrix(this);
  }
  ClpModel::setRowScale(this, nullptr);
  ClpModel::setColumnScale(this, nullptr);
  if ( *((_DWORD *)this + 82) )
  {
    v43 = *((_QWORD **)this + 47);
    v44 = *((_QWORD *)this + 46);
    v45 = *((int *)this + 26);
    v46 = ((__int64)v43 - v44) >> 3;
    if ( v45 > v46 )
    {
      std::vector<std::string>::_M_default_append((char *)this + 368, v45 - v46);
    }
    else if ( v45 < v46 )
    {
      v47 = (_QWORD *)(v44 + 8 * v45);
      if ( v43 != v47 )
      {
        v48 = (_QWORD *)(v44 + 8 * v45);
        do
        {
          while ( 1 )
          {
            v49 = (void *)(*v48 - 24LL);
            if ( v49 != &std::string::_Rep::_S_empty_rep_storage )
              break;
            if ( v43 == ++v48 )
              goto LABEL_52;
          }
          ++v48;
          sub_8F640((__int64)v49);
        }
        while ( v43 != v48 );
      }
LABEL_52:
      *((_QWORD *)this + 47) = v47;
    }
  }
}

