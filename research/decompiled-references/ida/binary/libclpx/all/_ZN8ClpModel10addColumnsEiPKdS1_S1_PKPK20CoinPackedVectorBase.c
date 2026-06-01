void __fastcall ClpModel::addColumns(
        ClpModel *this,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        double *a5,
        const CoinPackedVectorBase *const *a6)
{
  int v11; // r15d
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v18; // r15
  __int64 v19; // r9
  __int64 v20; // rax
  double *v21; // r10
  int v22; // ecx
  unsigned __int64 v23; // xmm0_8
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // rax
  __m128d v29; // xmm0
  signed int v30; // ecx
  __int64 v31; // rax
  double v32; // xmm0_8
  int v33; // ecx
  double v34; // xmm0_8
  unsigned __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // xmm0_8
  unsigned __int64 v38; // rax
  const double *v39; // rdi
  __int64 v40; // rdx
  unsigned int v41; // r11d
  __int64 v42; // rax
  __m128d v43; // xmm2
  __m128d v44; // xmm0
  int v45; // ecx
  double v46; // xmm1_8
  __int64 v47; // rdx
  int v48; // ecx
  double v49; // xmm1_8
  __int64 v50; // r13
  int v51; // edx
  unsigned int v52; // r8d
  unsigned __int64 v53; // rax
  const double *v54; // rdi
  unsigned __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdi
  bool v60; // zf
  _QWORD *v61; // r12
  __int64 v62; // rdx
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rax
  _QWORD *v65; // r14
  _QWORD *v66; // rbp
  void *v67; // rdi
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rdi
  unsigned int v71; // eax
  int v72; // eax
  int v73; // edx
  __int64 v74; // rdx
  unsigned __int64 v75; // rax
  double v76; // xmm0_8
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  double v79; // xmm1_8
  unsigned __int64 v80; // [rsp+0h] [rbp-80h]
  unsigned __int64 *s; // [rsp+8h] [rbp-78h]
  __int64 v82; // [rsp+10h] [rbp-70h]
  __int64 v83; // [rsp+18h] [rbp-68h]
  __int64 v84; // [rsp+18h] [rbp-68h]
  __int64 v85; // [rsp+18h] [rbp-68h]
  __int64 v87; // [rsp+28h] [rbp-58h]
  double *v88; // [rsp+30h] [rbp-50h]
  char v89[64]; // [rsp+40h] [rbp-40h] BYREF

  if ( !a2 )
    return;
  v11 = *((_DWORD *)this + 27);
  *((_DWORD *)this + 79) &= 0xFFFFFE38;
  v12 = a2 + v11;
  v13 = *((unsigned int *)this + 26);
  ClpModel::resize(this, v13, v12);
  v15 = v11;
  v16 = *((_QWORD *)this + 22);
  v17 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  v18 = 8LL * v11;
  v87 = v15;
  v19 = 0;
  s = (unsigned __int64 *)(v16 + v18);
  v82 = *((_QWORD *)this + 23);
  v80 = v18 + v82;
  if ( v17 )
  {
    v83 = v16;
    v13 = 0;
    v20 = (**v17)(v17, 0, 0, v89, 0, 2);
    v16 = v83;
    v19 = v20;
  }
  v21 = (double *)(v19 + v18);
  if ( !a3 )
  {
    v88 = (double *)(v19 + v18);
    v85 = v19;
    if ( a2 <= 0 )
      goto LABEL_48;
    v13 = 0;
    v50 = (unsigned int)(a2 - 1);
    memset(s, 0, 8 * v50 + 8);
    v19 = v85;
    v21 = v88;
    if ( a4 )
    {
      v84 = v18 + 16;
      goto LABEL_22;
    }
LABEL_69:
    v68 = 0;
    v69 = (v80 >> 3) & 1;
    if ( (unsigned int)v50 <= 4 )
      goto LABEL_75;
    if ( (_DWORD)v69 )
    {
      v68 = 1;
      *(_QWORD *)v80 = 0x7FEFFFFFFFFFFFFFLL;
    }
    v13 = (unsigned int)(a2 - v69);
    v70 = v82 + 8 * (v87 + v69);
    v71 = 0;
    do
    {
      ++v71;
      v70 += 16;
      *(_OWORD *)(v70 - 16) = xmmword_28C790;
    }
    while ( v71 < (unsigned int)v13 >> 1 );
    v68 += v13 & 0xFFFFFFFE;
    if ( (_DWORD)v13 != (v13 & 0xFFFFFFFE) )
    {
LABEL_75:
      *(_QWORD *)(v80 + 8LL * v68) = 0x7FEFFFFFFFFFFFFFLL;
      if ( a2 > v68 + 1 )
      {
        *(_QWORD *)(v80 + 8LL * (v68 + 1)) = 0x7FEFFFFFFFFFFFFFLL;
        if ( a2 > v68 + 2 )
        {
          *(_QWORD *)(v80 + 8LL * (v68 + 2)) = 0x7FEFFFFFFFFFFFFFLL;
          v72 = v68 + 3;
          if ( a2 > v68 + 3 )
          {
            v73 = v68 + 4;
            *(_QWORD *)(v80 + 8LL * v72) = 0x7FEFFFFFFFFFFFFFLL;
            if ( a2 > v73 )
              *(_QWORD *)(v80 + 8LL * v73) = 0x7FEFFFFFFFFFFFFFLL;
          }
        }
      }
    }
    v84 = v18 + 16;
    if ( a5 )
      goto LABEL_39;
LABEL_81:
    v13 = 0;
    memset(v21, 0, 8 * v50 + 8);
    goto LABEL_48;
  }
  if ( a2 <= 0 )
    goto LABEL_48;
  v84 = v18 + 16;
  if ( ((unsigned __int64)s >= a3 + 16 || a3 >= v16 + v18 + 16) && (unsigned int)a2 > 9 )
  {
    v22 = 0;
    if ( ((a3 >> 3) & 1) != 0 )
    {
      v23 = *(_QWORD *)a3;
      if ( *(double *)a3 < -1.0e20 )
        v23 = 0xFFEFFFFFFFFFFFFFLL;
      *s = v23;
      v22 = 1;
    }
    v24 = a2 - ((a3 >> 3) & 1);
    v25 = 0;
    v26 = 8 * ((a3 >> 3) & 1);
    v13 = a3 + v26;
    v27 = v18 + v26 + v16;
    v28 = 0;
    do
    {
      ++v25;
      v29 = _mm_cmplt_pd(*(__m128d *)(v13 + v28), (__m128d)xmmword_28A060);
      *(__m128d *)(v27 + v28) = _mm_or_pd(
                                  _mm_andn_pd(v29, *(__m128d *)(v13 + v28)),
                                  _mm_and_pd((__m128d)xmmword_28C780, v29));
      v28 += 16;
    }
    while ( v24 >> 1 > v25 );
    v30 = (v24 & 0xFFFFFFFE) + v22;
    if ( v24 != (v24 & 0xFFFFFFFE) )
    {
      v31 = v30;
      v32 = *(double *)(a3 + 8LL * v30);
      if ( v32 < -1.0e20 )
        v32 = -1.797693134862316e308;
      v13 = (__int64)s;
      v33 = v30 + 1;
      *(double *)&s[v31] = v32;
      if ( a2 > v33 )
      {
        v34 = *(double *)(a3 + 8LL * v33);
        if ( v34 < -1.0e20 )
          v34 = -1.797693134862316e308;
        *(double *)&s[v33] = v34;
      }
    }
  }
  else
  {
    v74 = 8LL * (unsigned int)(a2 - 1) + 8;
    v75 = 0;
    do
    {
      while ( 1 )
      {
        v76 = *(double *)(a3 + v75);
        v13 = (__int64)s;
        if ( v76 < -1.0e20 )
          break;
        *(double *)&s[v75 / 8] = v76;
        v75 += 8LL;
        if ( v75 == v74 )
          goto LABEL_21;
      }
      s[v75 / 8] = 0xFFEFFFFFFFFFFFFFLL;
      v75 += 8LL;
    }
    while ( v75 != v74 );
  }
LABEL_21:
  if ( !a4 )
  {
    v50 = (unsigned int)(a2 - 1);
    goto LABEL_69;
  }
LABEL_22:
  if ( (v80 >= a4 + 16 || a4 >= v84 + v82) && a2 > 9 )
  {
    v13 = (unsigned int)a2;
    v35 = (a4 >> 3) & 1;
    if ( a2 - 1 < 2 - (unsigned int)((_DWORD)v35 == 0) )
    {
      v46 = *(double *)a4;
      if ( *(double *)a4 > 1.0e20 )
      {
        v13 = 0x7FEFFFFFFFFFFFFFLL;
        v48 = 1;
        *(_QWORD *)v80 = 0x7FEFFFFFFFFFFFFFLL;
LABEL_35:
        v49 = *(double *)(a4 + 8LL * v48);
        if ( v49 > 1.0e20 )
          v49 = 1.797693134862316e308;
        *(double *)(v80 + 8LL * v48) = v49;
        goto LABEL_38;
      }
      v45 = 0;
      v47 = 0;
LABEL_34:
      v48 = v45 + 1;
      *(double *)(v80 + v47) = v46;
      if ( a2 <= v48 )
        goto LABEL_38;
      goto LABEL_35;
    }
    v36 = 0;
    if ( (_DWORD)v35 )
    {
      v37 = *(_QWORD *)a4;
      if ( *(double *)a4 > 1.0e20 )
        v37 = 0x7FEFFFFFFFFFFFFFLL;
      *(_QWORD *)v80 = v37;
      v36 = 1;
    }
    v13 = (unsigned int)(a2 - v35);
    v38 = 8 * v35;
    v39 = (const double *)(a4 + v38);
    v40 = v18 + v38 + v82;
    v41 = 0;
    v42 = 0;
    do
    {
      v43 = *(__m128d *)&v39[v42];
      ++v41;
      v44 = _mm_cmplt_pd((__m128d)xmmword_28A080, v43);
      *(__m128d *)(v40 + v42 * 8) = _mm_or_pd(_mm_andn_pd(v44, v43), _mm_and_pd((__m128d)xmmword_28C790, v44));
      v42 += 2;
    }
    while ( v41 < (unsigned int)v13 >> 1 );
    v45 = (v13 & 0xFFFFFFFE) + v36;
    if ( (_DWORD)v13 != (v13 & 0xFFFFFFFE) )
    {
      v46 = *(double *)(a4 + 8LL * v45);
      v47 = 8LL * v45;
      if ( v46 > 1.0e20 )
        v46 = 1.797693134862316e308;
      goto LABEL_34;
    }
  }
  else
  {
    v78 = 0;
    while ( 1 )
    {
      v79 = *(double *)(a4 + 8 * v78);
      if ( v79 <= 1.0e20 )
        break;
LABEL_95:
      *(_QWORD *)(v80 + 8 * v78++) = 0x7FEFFFFFFFFFFFFFLL;
      if ( a2 <= (int)v78 )
        goto LABEL_38;
    }
    while ( 1 )
    {
      v13 = v18 + v82;
      *(double *)(v80 + 8 * v78++) = v79;
      if ( a2 <= (int)v78 )
        break;
      v79 = *(double *)(a4 + 8 * v78);
      if ( v79 > 1.0e20 )
        goto LABEL_95;
    }
  }
LABEL_38:
  v50 = (unsigned int)(a2 - 1);
  if ( !a5 )
    goto LABEL_81;
LABEL_39:
  if ( (v21 >= a5 + 2 || (unsigned __int64)a5 >= v19 + v84) && (unsigned int)a2 > 0x18 )
  {
    v51 = 0;
    if ( (((unsigned __int64)a5 >> 3) & 1) != 0 )
    {
      v51 = 1;
      *v21 = *a5;
    }
    v52 = 0;
    v13 = a2 - ((unsigned int)((unsigned __int64)a5 >> 3) & 1);
    v53 = ((unsigned __int64)a5 >> 3) & 1;
    v54 = &a5[v53];
    v55 = v53 * 8 + v18 + v19;
    v56 = 0;
    do
    {
      ++v52;
      *(_OWORD *)(v55 + v56 * 8) = *(_OWORD *)&v54[v56];
      v56 += 2;
    }
    while ( (unsigned int)v13 >> 1 > v52 );
    v14 = ((unsigned int)v13 & 0xFFFFFFFE) + v51;
    if ( (_DWORD)v13 != (v13 & 0xFFFFFFFE) )
    {
      v57 = (int)v14;
      v14 = (unsigned int)(v14 + 1);
      v21[v57] = a5[v57];
      if ( a2 > (int)v14 )
      {
        v14 = (int)v14;
        v21[(int)v14] = a5[(int)v14];
      }
    }
  }
  else
  {
    v14 = 8LL * (unsigned int)(a2 - 1) + 8;
    v77 = 0;
    do
    {
      v21[v77 / 8] = a5[v77 / 8];
      v77 += 8LL;
    }
    while ( v14 != v77 );
  }
LABEL_48:
  v58 = *((_QWORD *)this + 25);
  if ( v58 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v58 + 480LL))(v58, v13, v14);
  v59 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = 0;
  if ( v59 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v59 + 480LL))(v59, v13, v14);
  v60 = *((_QWORD *)this + 24) == 0;
  *((_QWORD *)this + 26) = 0;
  if ( v60 )
    ClpModel::createEmptyMatrix(this);
  if ( a6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 96LL))(*((_QWORD *)this + 24), (unsigned int)a2);
    ClpModel::synchronizeMatrix(this);
  }
  ClpModel::setRowScale(this, nullptr);
  ClpModel::setColumnScale(this, nullptr);
  if ( *((_DWORD *)this + 82) )
  {
    v61 = *((_QWORD **)this + 50);
    v62 = *((_QWORD *)this + 49);
    v63 = *((int *)this + 27);
    v64 = ((__int64)v61 - v62) >> 3;
    if ( v63 > v64 )
    {
      std::vector<std::string>::_M_default_append((char *)this + 392, v63 - v64);
    }
    else if ( v63 < v64 )
    {
      v65 = (_QWORD *)(v62 + 8 * v63);
      if ( v61 != v65 )
      {
        v66 = (_QWORD *)(v62 + 8 * v63);
        do
        {
          while ( 1 )
          {
            v67 = (void *)(*v66 - 24LL);
            if ( v67 != &std::string::_Rep::_S_empty_rep_storage )
              break;
            if ( v61 == ++v66 )
              goto LABEL_64;
          }
          ++v66;
          sub_8F640((__int64)v67);
        }
        while ( v61 != v66 );
      }
LABEL_64:
      *((_QWORD *)this + 50) = v65;
    }
  }
}

