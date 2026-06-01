__int64 __fastcall ClpPredictorCorrector::solveSystem(
        ClpPredictorCorrector *this,
        double *a2,
        double *a3,
        double *a4,
        const double *a5,
        const double *a6,
        double *a7,
        bool a8)
{
  int v12; // edx
  int v13; // r13d
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r11d
  unsigned __int64 v21; // rsi
  const double *v22; // r8
  double *v23; // rsi
  signed int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  __int64 result; // rax
  double v28; // xmm3_8
  double *v29; // rsi
  int v30; // r9d
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // r11d
  __int64 v35; // rdx
  const double *v36; // r8
  double *v37; // rdi
  double *v38; // rdx
  signed int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  double v42; // xmm0_8
  double v43; // xmm3_8
  double v44; // xmm1_8
  int v45; // ecx
  double *v46; // rdi
  int v47; // r9d
  __int64 v48; // rax
  unsigned int v49; // ecx
  unsigned int v50; // r11d
  unsigned __int64 v51; // rdx
  double *v52; // rsi
  const double *v53; // r8
  double *v54; // rdx
  __int64 v55; // rdx
  double *v56; // rax
  double *v57; // rax
  unsigned __int64 v58; // rax
  double *v59; // rax
  double *v60; // rdx
  unsigned __int64 v61; // rax

  v12 = *((_DWORD *)this + 26);
  v13 = v12 + *((_DWORD *)this + 27);
  if ( a5 )
  {
    v14 = 1;
    if ( v12 > 0 )
    {
      do
      {
        v15 = v14;
        a3[v14 - 1] = a5[v14 - 1];
        ++v14;
      }
      while ( *((_DWORD *)this + 26) > v15 );
    }
  }
  else if ( v12 )
  {
    if ( v12 / 8 <= 0 )
    {
      v57 = a3;
    }
    else
    {
      v56 = a3;
      do
      {
        *v56 = 0.0;
        v56[1] = 0.0;
        v56 += 8;
        *(v56 - 6) = 0.0;
        *(v56 - 5) = 0.0;
        *(v56 - 4) = 0.0;
        *(v56 - 3) = 0.0;
        *(v56 - 2) = 0.0;
        *(v56 - 1) = 0.0;
      }
      while ( v56 != &a3[8 * (unsigned int)(v12 / 8 - 1) + 8] );
      v57 = &a3[8 * (v12 / 8 - 1) + 8];
    }
    switch ( v12 % 8 )
    {
      case 1:
        goto LABEL_62;
      case 2:
        goto LABEL_61;
      case 3:
        goto LABEL_60;
      case 4:
        goto LABEL_59;
      case 5:
        goto LABEL_58;
      case 6:
        goto LABEL_57;
      case 7:
        v57[6] = 0.0;
LABEL_57:
        v57[5] = 0.0;
LABEL_58:
        v57[4] = 0.0;
LABEL_59:
        v57[3] = 0.0;
LABEL_60:
        v57[2] = 0.0;
LABEL_61:
        v57[1] = 0.0;
LABEL_62:
        *v57 = 0.0;
        break;
      default:
        break;
    }
  }
  v16 = *((_QWORD *)this + 161);
  if ( *(int *)(v16 + 8) > 19 || *(_BYTE *)(v16 + 12) == 1 )
  {
    if ( v13 > 0 )
    {
      if ( (a2 >= a4 + 2 || a4 >= a2 + 2) && (unsigned int)v13 > 0x18 )
      {
        v17 = 0;
        if ( (((unsigned __int64)a4 >> 3) & 1) != 0 )
        {
          v17 = 1;
          *a2 = *a4;
        }
        v18 = 0;
        v19 = 0;
        v20 = v13 - (((unsigned __int64)a4 >> 3) & 1);
        v21 = ((unsigned __int64)a4 >> 3) & 1;
        v22 = &a4[v21];
        v23 = &a2[v21];
        do
        {
          ++v19;
          *(_OWORD *)&v23[v18] = *(_OWORD *)&v22[v18];
          v18 += 2;
        }
        while ( v20 >> 1 > v19 );
        v24 = (v20 & 0xFFFFFFFE) + v17;
        if ( v20 != (v20 & 0xFFFFFFFE) )
        {
          v25 = v24;
          v26 = v24 + 1;
          a2[v25] = a4[v25];
          if ( v13 > v26 )
            a2[v26] = a4[v26];
        }
      }
      else
      {
        v58 = 0;
        do
        {
          a2[v58 / 8] = a4[v58 / 8];
          v58 += 8LL;
        }
        while ( v58 != 8LL * (unsigned int)(v13 - 1) + 8 );
      }
    }
    result = (*(__int64 (__fastcall **)(__int64, double *, double *, _QWORD, double))(*(_QWORD *)v16 + 32LL))(
               v16,
               a2,
               a3,
               *((_QWORD *)this + 142),
               *((double *)this + 124));
  }
  else
  {
    if ( v13 > 0 )
    {
      v29 = *((double **)this + 142);
      if ( (unsigned int)v13 > 0xE && (v29 >= a2 + 2 || a2 >= v29 + 2) && (a4 >= a2 + 2 || a2 >= a4 + 2) )
      {
        v30 = 0;
        v31 = ((unsigned __int64)a4 >> 3) & 1;
        if ( (((unsigned __int64)a4 >> 3) & 1) != 0 )
        {
          v30 = 1;
          *a2 = *a4 * *v29;
        }
        v32 = 0;
        v33 = 0;
        v34 = v13 - v31;
        v35 = (unsigned int)v31;
        v36 = &a4[v35];
        v37 = &v29[v35];
        v38 = &a2[v35];
        do
        {
          ++v33;
          *(__m128d *)&v38[v32] = _mm_mul_pd(*(__m128d *)&v37[v32], *(__m128d *)&v36[v32]);
          v32 += 2;
        }
        while ( v34 >> 1 > v33 );
        v39 = (v34 & 0xFFFFFFFE) + v30;
        if ( v34 != (v34 & 0xFFFFFFFE) )
        {
          v40 = v39;
          v41 = v39 + 1;
          a2[v40] = a4[v40] * v29[v40];
          if ( v41 < v13 )
            a2[v41] = a4[v41] * v29[v41];
        }
      }
      else
      {
        v61 = 0;
        do
        {
          a2[v61 / 8] = a4[v61 / 8] * v29[v61 / 8];
          v61 += 8LL;
        }
        while ( v61 != 8LL * (unsigned int)(v13 - 1) + 8 );
      }
    }
    multiplyAdd(&a2[*((int *)this + 27)], *((_DWORD *)this + 26), -1.0, a3, 1.0);
    v42 = 1.0;
    (*(void (__fastcall **)(_QWORD, double *, double *, double))(**((_QWORD **)this + 24) + 360LL))(
      *((_QWORD *)this + 24),
      a2,
      a3,
      1.0);
    maximumAbsElement(a3, *((_DWORD *)this + 26));
    if ( 1.0 > 1.0e-30 )
    {
      if ( 1.0 > 0.5 )
      {
        v44 = 1.0;
        if ( 1.0 >= 2.0 )
        {
          v44 = 1.0;
          if ( 1.0 <= 1.797693134862316e308 )
          {
            do
            {
              v42 = v42 * 0.5;
              v44 = v44 * 0.5;
            }
            while ( v42 >= 2.0 );
          }
        }
      }
      else
      {
        v44 = 1.0;
        do
        {
          v42 = v42 + v42;
          v44 = v44 + v44;
        }
        while ( v42 <= 0.5 );
      }
      v43 = *((double *)this + 124) / v44;
    }
    else
    {
      v43 = 0.0;
      v44 = 0.0;
    }
    multiplyAdd(nullptr, *((_DWORD *)this + 26), 0.0, a3, v44);
    (*(void (__fastcall **)(_QWORD, double *, double, double, double))(**((_QWORD **)this + 161) + 24LL))(
      *((_QWORD *)this + 161),
      a3,
      0.0,
      v44,
      1.0);
    multiplyAdd(nullptr, *((_DWORD *)this + 26), 0.0, a3, v43);
    multiplyAdd(a3, *((_DWORD *)this + 26), -1.0, &a2[*((int *)this + 27)], 0.0);
    v45 = *((_DWORD *)this + 27);
    if ( v45 )
    {
      if ( v45 / 8 <= 0 )
      {
        v60 = a2;
      }
      else
      {
        v59 = a2;
        do
        {
          *v59 = 0.0;
          v59[1] = 0.0;
          v59 += 8;
          *(v59 - 6) = 0.0;
          *(v59 - 5) = 0.0;
          *(v59 - 4) = 0.0;
          *(v59 - 3) = 0.0;
          *(v59 - 2) = 0.0;
          *(v59 - 1) = 0.0;
        }
        while ( v59 != &a2[8 * (unsigned int)(v45 / 8 - 1) + 8] );
        v60 = &a2[8 * (v45 / 8 - 1) + 8];
      }
      switch ( v45 % 8 )
      {
        case 1:
          goto LABEL_77;
        case 2:
          goto LABEL_76;
        case 3:
          goto LABEL_75;
        case 4:
          goto LABEL_74;
        case 5:
          goto LABEL_73;
        case 6:
          goto LABEL_72;
        case 7:
          v60[6] = 0.0;
LABEL_72:
          v60[5] = 0.0;
LABEL_73:
          v60[4] = 0.0;
LABEL_74:
          v60[3] = 0.0;
LABEL_75:
          v60[2] = 0.0;
LABEL_76:
          v60[1] = 0.0;
LABEL_77:
          *v60 = 0.0;
          break;
        default:
          break;
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD, double *, double *, double))(**((_QWORD **)this + 24) + 376LL))(
               *((_QWORD *)this + 24),
               a3,
               a2,
               1.0);
    if ( v13 > 0 )
    {
      v46 = *((double **)this + 142);
      if ( (unsigned int)v13 > 8 && (v46 >= a2 + 2 || a2 >= v46 + 2) && (a4 >= a2 + 2 || a2 >= a4 + 2) )
      {
        v47 = 0;
        if ( (((unsigned __int64)a2 >> 3) & 1) != 0 )
        {
          v47 = 1;
          *a2 = (*a2 - *a4) * *v46;
        }
        v48 = 0;
        v49 = 0;
        v50 = v13 - (((unsigned __int64)a2 >> 3) & 1);
        v51 = ((unsigned __int64)a2 >> 3) & 1;
        v52 = &a2[v51];
        v53 = &a4[v51];
        v54 = &v46[v51];
        do
        {
          ++v49;
          *(__m128d *)&v52[v48] = _mm_mul_pd(
                                    _mm_sub_pd(*(__m128d *)&v52[v48], *(__m128d *)&v53[v48]),
                                    *(__m128d *)&v54[v48]);
          v48 += 2;
        }
        while ( v50 >> 1 > v49 );
        result = (v50 & 0xFFFFFFFE) + v47;
        if ( v50 != (v50 & 0xFFFFFFFE) )
        {
          v55 = (int)result;
          result = (unsigned int)(result + 1);
          a2[v55] = (a2[v55] - a4[v55]) * v46[v55];
          if ( (int)result < v13 )
          {
            result = (int)result;
            a2[(int)result] = (a2[(int)result] - a4[(int)result]) * v46[(int)result];
            if ( !a7 )
              return result;
            goto LABEL_18;
          }
        }
      }
      else
      {
        result = 0;
        do
        {
          *(double *)((char *)a2 + result) = (*(double *)((char *)a2 + result) - *(double *)((char *)a4 + result))
                                           * *(double *)((char *)v46 + result);
          result += 8;
        }
        while ( 8LL * (unsigned int)(v13 - 1) + 8 != result );
      }
    }
  }
  if ( !a7 )
    return result;
LABEL_18:
  if ( a8 )
    v28 = 0.8;
  else
    v28 = 1.0;
  multiplyAdd(a7, *((_DWORD *)this + 26), 1.0, a3, v28);
  return multiplyAdd(a6, v13, 1.0, a2, v28);
}

