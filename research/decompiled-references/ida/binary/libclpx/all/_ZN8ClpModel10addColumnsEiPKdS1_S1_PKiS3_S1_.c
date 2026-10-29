__int64 __fastcall ClpModel::addColumns(
        ClpModel *this,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        double *a5,
        const int *a6,
        const int *a7,
        const double *a8)
{
  int v10; // r15d
  int v15; // edx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  char *v18; // r11
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v20; // r10
  __int64 v21; // r9
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  int v24; // ecx
  unsigned __int64 v25; // xmm0_8
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  char *v29; // r11
  __int64 v30; // rax
  __m128d v31; // xmm0
  signed int v32; // ecx
  __int64 v33; // rax
  double v34; // xmm0_8
  int v35; // ecx
  double v36; // xmm0_8
  unsigned __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // xmm0_8
  unsigned __int64 v40; // rax
  const double *v41; // rdi
  __int64 v42; // rdx
  unsigned int v43; // r11d
  __int64 v44; // rax
  __m128d v45; // xmm2
  __m128d v46; // xmm0
  signed int v47; // ecx
  double v48; // xmm1_8
  __int64 v49; // rdx
  int v50; // ecx
  double v51; // xmm1_8
  __int64 v52; // r13
  int v53; // edx
  unsigned int v54; // r8d
  unsigned __int64 v55; // rax
  const double *v56; // rdi
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdi
  bool v62; // zf
  int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned int v66; // eax
  int v67; // eax
  int v68; // edx
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  double v71; // xmm0_8
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  double v74; // xmm1_8
  unsigned __int64 *s; // [rsp+8h] [rbp-80h]
  __int64 v77; // [rsp+18h] [rbp-70h]
  char *v78; // [rsp+20h] [rbp-68h]
  double *v79; // [rsp+20h] [rbp-68h]
  __int64 v80; // [rsp+28h] [rbp-60h]
  __int64 v81; // [rsp+28h] [rbp-60h]
  __int64 v82; // [rsp+28h] [rbp-60h]
  __int64 v83; // [rsp+30h] [rbp-58h]
  __int64 v84; // [rsp+38h] [rbp-50h]
  char v85[64]; // [rsp+48h] [rbp-40h] BYREF

  if ( !a2 )
    return ClpModel::synchronizeMatrix(this);
  v10 = *((_DWORD *)this + 27);
  *((_DWORD *)this + 79) &= 0xFFFFFE38;
  v15 = a2 + v10;
  v16 = *((unsigned int *)this + 26);
  ClpModel::resize(this, v16, v15);
  v18 = *((char **)this + 22);
  v19 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  v20 = 8LL * v10;
  v83 = v10;
  v21 = 0;
  s = (unsigned __int64 *)&v18[v20];
  v77 = *((_QWORD *)this + 23);
  v22 = v77 + v20;
  if ( v19 )
  {
    v80 = v20;
    v78 = v18;
    v16 = 0;
    v23 = (**v19)(v19, 0, 0, v85, 0, 2);
    v20 = v80;
    v18 = v78;
    v21 = v23;
  }
  v79 = (double *)(v21 + v20);
  if ( a3 )
  {
    if ( a2 > 0 )
    {
      v81 = v20 + 16;
      if ( ((unsigned __int64)s >= a3 + 16 || a3 >= (unsigned __int64)&v18[v20 + 16]) && (unsigned int)a2 > 9 )
      {
        v24 = 0;
        if ( ((a3 >> 3) & 1) != 0 )
        {
          v25 = *(_QWORD *)a3;
          if ( *(double *)a3 < -1.0e20 )
            v25 = 0xFFEFFFFFFFFFFFFFLL;
          *s = v25;
          v24 = 1;
        }
        v26 = a2 - ((a3 >> 3) & 1);
        v27 = 0;
        v28 = 8 * ((a3 >> 3) & 1);
        v16 = a3 + v28;
        v29 = &v18[v20 + v28];
        v30 = 0;
        do
        {
          ++v27;
          v31 = _mm_cmplt_pd(*(__m128d *)(v16 + v30), (__m128d)xmmword_28A060);
          *(__m128d *)&v29[v30] = _mm_or_pd(
                                    _mm_andn_pd(v31, *(__m128d *)(v16 + v30)),
                                    _mm_and_pd((__m128d)xmmword_28C780, v31));
          v30 += 16;
        }
        while ( v26 >> 1 > v27 );
        v32 = (v26 & 0xFFFFFFFE) + v24;
        if ( v26 != (v26 & 0xFFFFFFFE) )
        {
          v33 = v32;
          v34 = *(double *)(a3 + 8LL * v32);
          if ( v34 < -1.0e20 )
            v34 = -1.797693134862316e308;
          v16 = (unsigned __int64)s;
          v35 = v32 + 1;
          *(double *)&s[v33] = v34;
          if ( a2 > v35 )
          {
            v36 = *(double *)(a3 + 8LL * v35);
            if ( v36 < -1.0e20 )
              v36 = -1.797693134862316e308;
            *(double *)&s[v35] = v36;
          }
        }
      }
      else
      {
        v69 = 8LL * (unsigned int)(a2 - 1) + 8;
        v70 = 0;
        do
        {
          while ( 1 )
          {
            v71 = *(double *)(a3 + v70);
            v16 = (unsigned __int64)s;
            if ( v71 < -1.0e20 )
              break;
            *(double *)&s[v70 / 8] = v71;
            v70 += 8LL;
            if ( v70 == v69 )
              goto LABEL_22;
          }
          s[v70 / 8] = 0xFFEFFFFFFFFFFFFFLL;
          v70 += 8LL;
        }
        while ( v70 != v69 );
      }
LABEL_22:
      if ( a4 )
      {
LABEL_23:
        if ( (v22 >= a4 + 16 || a4 >= v81 + v77) && a2 > 9 )
        {
          v16 = (unsigned int)a2;
          v37 = (a4 >> 3) & 1;
          if ( a2 - 1 < 2 - (unsigned int)((_DWORD)v37 == 0) )
          {
            v48 = *(double *)a4;
            if ( *(double *)a4 > 1.0e20 )
            {
              v50 = 1;
              *(_QWORD *)v22 = 0x7FEFFFFFFFFFFFFFLL;
LABEL_36:
              v51 = *(double *)(a4 + 8LL * v50);
              if ( v51 > 1.0e20 )
                v51 = 1.797693134862316e308;
              *(double *)(v22 + 8LL * v50) = v51;
              goto LABEL_39;
            }
            v47 = 0;
            v49 = 0;
LABEL_35:
            v50 = v47 + 1;
            *(double *)(v22 + v49) = v48;
            if ( v50 >= a2 )
              goto LABEL_39;
            goto LABEL_36;
          }
          v38 = 0;
          if ( (_DWORD)v37 )
          {
            v39 = *(_QWORD *)a4;
            if ( *(double *)a4 > 1.0e20 )
              v39 = 0x7FEFFFFFFFFFFFFFLL;
            *(_QWORD *)v22 = v39;
            v38 = 1;
          }
          v16 = (unsigned int)(a2 - v37);
          v40 = 8 * v37;
          v41 = (const double *)(a4 + v40);
          v42 = v20 + v40 + v77;
          v43 = 0;
          v44 = 0;
          do
          {
            v45 = *(__m128d *)&v41[v44];
            ++v43;
            v46 = _mm_cmplt_pd((__m128d)xmmword_28A080, v45);
            *(__m128d *)(v42 + v44 * 8) = _mm_or_pd(_mm_andn_pd(v46, v45), _mm_and_pd((__m128d)xmmword_28C790, v46));
            v44 += 2;
          }
          while ( v43 < (unsigned int)v16 >> 1 );
          v47 = (v16 & 0xFFFFFFFE) + v38;
          if ( (_DWORD)v16 != (v16 & 0xFFFFFFFE) )
          {
            v48 = *(double *)(a4 + 8LL * v47);
            v49 = 8LL * v47;
            if ( v48 > 1.0e20 )
              v48 = 1.797693134862316e308;
            goto LABEL_35;
          }
        }
        else
        {
          v73 = 0;
          while ( 1 )
          {
            v74 = *(double *)(a4 + 8 * v73);
            if ( v74 <= 1.0e20 )
              break;
LABEL_88:
            *(_QWORD *)(v22 + 8 * v73++) = 0x7FEFFFFFFFFFFFFFLL;
            if ( a2 <= (int)v73 )
              goto LABEL_39;
          }
          while ( 1 )
          {
            *(double *)(v22 + 8 * v73++) = v74;
            if ( a2 <= (int)v73 )
              break;
            v74 = *(double *)(a4 + 8 * v73);
            if ( v74 > 1.0e20 )
              goto LABEL_88;
          }
        }
LABEL_39:
        v52 = (unsigned int)(a2 - 1);
        if ( a5 )
        {
LABEL_40:
          if ( (v79 >= a5 + 2 || (unsigned __int64)a5 >= v21 + v81) && (unsigned int)a2 > 0x18 )
          {
            v53 = 0;
            if ( (((unsigned __int64)a5 >> 3) & 1) != 0 )
            {
              v53 = 1;
              *v79 = *a5;
            }
            v54 = 0;
            v16 = a2 - ((unsigned int)((unsigned __int64)a5 >> 3) & 1);
            v55 = ((unsigned __int64)a5 >> 3) & 1;
            v56 = &a5[v55];
            v57 = v55 * 8 + v20 + v21;
            v58 = 0;
            do
            {
              ++v54;
              *(_OWORD *)(v57 + v58 * 8) = *(_OWORD *)&v56[v58];
              v58 += 2;
            }
            while ( (unsigned int)v16 >> 1 > v54 );
            v17 = ((unsigned int)v16 & 0xFFFFFFFE) + v53;
            if ( (_DWORD)v16 != (v16 & 0xFFFFFFFE) )
            {
              v59 = (int)v17;
              v17 = (unsigned int)(v17 + 1);
              v79[v59] = a5[v59];
              if ( a2 > (int)v17 )
              {
                v17 = (int)v17;
                v79[(int)v17] = a5[(int)v17];
              }
            }
          }
          else
          {
            v17 = 8LL * (unsigned int)(a2 - 1) + 8;
            v72 = 0;
            do
            {
              v79[v72 / 8] = a5[v72 / 8];
              v72 += 8LL;
            }
            while ( v17 != v72 );
          }
          goto LABEL_49;
        }
        goto LABEL_74;
      }
      v52 = (unsigned int)(a2 - 1);
      goto LABEL_62;
    }
  }
  else
  {
    v84 = v21;
    v82 = v20;
    if ( a2 > 0 )
    {
      v16 = 0;
      v52 = (unsigned int)(a2 - 1);
      memset(s, 0, 8 * v52 + 8);
      v20 = v82;
      v21 = v84;
      if ( a4 )
      {
        v81 = v82 + 16;
        goto LABEL_23;
      }
LABEL_62:
      v63 = 0;
      v64 = (v22 >> 3) & 1;
      if ( (unsigned int)v52 <= 4 )
        goto LABEL_68;
      if ( (_DWORD)v64 )
      {
        v63 = 1;
        *(_QWORD *)v22 = 0x7FEFFFFFFFFFFFFFLL;
      }
      v16 = (unsigned int)(a2 - v64);
      v65 = v77 + 8 * (v83 + v64);
      v66 = 0;
      do
      {
        ++v66;
        v65 += 16;
        *(_OWORD *)(v65 - 16) = xmmword_28C790;
      }
      while ( v66 < (unsigned int)v16 >> 1 );
      v63 += v16 & 0xFFFFFFFE;
      if ( (_DWORD)v16 != (v16 & 0xFFFFFFFE) )
      {
LABEL_68:
        *(_QWORD *)(v22 + 8LL * v63) = 0x7FEFFFFFFFFFFFFFLL;
        if ( v63 + 1 < a2 )
        {
          *(_QWORD *)(v22 + 8LL * (v63 + 1)) = 0x7FEFFFFFFFFFFFFFLL;
          if ( v63 + 2 < a2 )
          {
            *(_QWORD *)(v22 + 8LL * (v63 + 2)) = 0x7FEFFFFFFFFFFFFFLL;
            v67 = v63 + 3;
            if ( a2 > v63 + 3 )
            {
              v68 = v63 + 4;
              *(_QWORD *)(v22 + 8LL * v67) = 0x7FEFFFFFFFFFFFFFLL;
              if ( a2 > v68 )
                *(_QWORD *)(v22 + 8LL * v68) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
        }
      }
      v81 = v20 + 16;
      if ( a5 )
        goto LABEL_40;
LABEL_74:
      v16 = 0;
      memset(v79, 0, 8 * v52 + 8);
    }
  }
LABEL_49:
  v60 = *((_QWORD *)this + 25);
  if ( v60 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v60 + 480LL))(v60, v16, v17);
  v61 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = 0;
  if ( v61 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v61 + 480LL))(v61, v16, v17);
  v62 = *((_QWORD *)this + 24) == 0;
  *((_QWORD *)this + 26) = 0;
  if ( v62 )
    ClpModel::createEmptyMatrix(this);
  ClpModel::setRowScale(this, nullptr);
  ClpModel::setColumnScale(this, nullptr);
  if ( *((_DWORD *)this + 82) )
    std::vector<std::string>::resize((char *)this + 392, *((int *)this + 27));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, const int *, const int *, const double *, __int64))(**((_QWORD **)this + 24) + 120LL))(
    *((_QWORD *)this + 24),
    (unsigned int)a2,
    1,
    a6,
    a7,
    a8,
    -1);
  return ClpModel::synchronizeMatrix(this);
}

