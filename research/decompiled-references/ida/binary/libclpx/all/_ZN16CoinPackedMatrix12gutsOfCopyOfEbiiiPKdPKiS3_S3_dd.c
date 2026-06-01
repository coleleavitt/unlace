__int64 __fastcall CoinPackedMatrix::gutsOfCopyOf(
        CoinPackedMatrix *this,
        char a2,
        int a3,
        int a4,
        int a5,
        const double *a6,
        __m128d a7,
        double a8,
        const int *a9,
        const int *a10,
        const int *a11)
{
  __int64 v11; // r13
  unsigned __int64 v14; // xmm1_8
  __m128d v15; // xmm2
  void *v16; // rdi
  unsigned __int64 v17; // rdi
  int *v18; // rax
  void *v19; // rdi
  unsigned __int64 v20; // rdi
  _DWORD *v21; // rax
  double v22; // xmm1_8
  __m128d v23; // xmm0
  __m128d v24; // xmm2
  __int64 result; // rax
  void *v26; // rdi
  void *v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  int v31; // edx
  int v32; // edx
  __int64 v33; // r10
  __int64 v34; // r14
  __int64 v35; // r11
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r12
  int v40; // ecx
  int *v41; // rsi
  const int *v42; // rdi
  bool v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __m128i v46; // xmm1
  __int64 v47; // r8
  const int *v48; // r9
  int v49; // esi
  const int *v50; // rcx
  int *v51; // rdi
  int v52; // edx
  int v53; // r15d
  double *v54; // r8
  const double *v55; // r10
  double *v56; // rdx
  const double *v57; // rsi
  __int64 v58; // r9
  __int64 v59; // xmm0_8
  __int64 v60; // r9
  void *v61; // rdi
  _DWORD *v62; // rax
  __int64 v63; // [rsp+8h] [rbp-40h]

  v11 = a4;
  *((double *)this + 2) = a8;
  *((_BYTE *)this + 8) = a2;
  *((_QWORD *)this + 3) = *(_QWORD *)&a7.m128d_f64[0];
  *((_DWORD *)this + 16) = a4;
  *((_DWORD *)this + 17) = a3;
  *((_DWORD *)this + 18) = a5;
  a7.m128d_f64[0] = (a7.m128d_f64[0] + 1.0) * (double)a4;
  v14 = *(unsigned __int64 *)&a7.m128d_f64[0];
  if ( fabs(a7.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v15.m128d_f64[0] = (double)(int)a7.m128d_f64[0];
    v14 = COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a7, v15).m128d_f64[0] & 0x3FF0000000000000LL) + v15.m128d_f64[0])
        | *(_QWORD *)&a7.m128d_f64[0] & 0x8000000000000000LL;
  }
  v16 = *((void **)this + 7);
  *((_DWORD *)this + 19) = (int)*(double *)&v14;
  if ( (int)*(double *)&v14 <= 0 )
  {
    if ( v16 )
      operator delete[](v16);
    v61 = *((void **)this + 6);
    *((_QWORD *)this + 7) = 0;
    if ( v61 )
      operator delete[](v61);
    v62 = (_DWORD *)operator new[](4u);
    *((_QWORD *)this + 6) = v62;
    *v62 = 0;
    goto LABEL_13;
  }
  if ( v16 )
    operator delete[](v16);
  v17 = *((int *)this + 19);
  if ( v17 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_69;
  v18 = (int *)operator new[](4 * v17);
  *((_QWORD *)this + 7) = v18;
  if ( !a11 )
  {
    v48 = &a10[(int)v11 + 1];
    if ( v48 != a10 + 1 )
    {
      v49 = a10[1];
      v50 = a10 + 2;
      *v18 = v49;
      if ( v48 == a10 + 2 )
      {
LABEL_38:
        *v18 = v49 - *a10;
        goto LABEL_9;
      }
      v51 = v18;
      do
      {
        v52 = *v50++;
        ++v51;
        v53 = v52 - v49;
        v49 = v52;
        *v51 = v53;
      }
      while ( v48 != v50 );
    }
    v49 = *v18;
    goto LABEL_38;
  }
  CoinMemcpyN<int>(a11, (unsigned int)v11, v18);
LABEL_9:
  v19 = *((void **)this + 6);
  if ( v19 )
    operator delete[](v19);
  v20 = *((_DWORD *)this + 19) + 1;
  if ( v20 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_69;
  v21 = (_DWORD *)operator new[](4 * v20);
  *((_QWORD *)this + 6) = v21;
  *v21 = 0;
  CoinMemcpyN<int>(a10, (unsigned int)(v11 + 1), v21);
LABEL_13:
  v22 = 0.0;
  if ( *((int *)this + 19) > 0 )
    v22 = (double)*(int *)(*((_QWORD *)this + 6) + 4 * v11);
  v23 = (__m128d)0x3FF0000000000000uLL;
  v23.m128d_f64[0] = (*((double *)this + 3) + 1.0) * v22;
  if ( fabs(v23.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v24.m128d_f64[0] = (double)(int)v23.m128d_f64[0];
    *(_QWORD *)&v23.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v23, v24).m128d_f64[0] & 0x3FF0000000000000LL)
                                   + v24.m128d_f64[0])
                                 | *(_QWORD *)&v23.m128d_f64[0] & 0x8000000000000000LL;
  }
  result = (unsigned int)(int)v23.m128d_f64[0];
  *((_DWORD *)this + 20) = result;
  if ( (int)result > 0 )
  {
    v26 = *((void **)this + 4);
    if ( v26 )
      operator delete[](v26);
    v27 = *((void **)this + 5);
    if ( v27 )
      operator delete[](v27);
    v28 = *((int *)this + 20);
    if ( v28 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v29 = operator new[](8 * v28);
      v30 = *((int *)this + 20);
      *((_QWORD *)this + 4) = v29;
      if ( v30 <= 0x1FFFFFFFFFFFFFFELL )
      {
        result = operator new[](4 * v30);
        v31 = *((_DWORD *)this + 16);
        *((_QWORD *)this + 5) = result;
        v32 = v31 - 1;
        if ( v32 >= 0 )
        {
          v33 = v32;
          v34 = *((_QWORD *)this + 6);
          v35 = v32 - 1LL;
          v36 = *((_QWORD *)this + 7);
          v37 = *((_QWORD *)this + 4);
          v63 = v35 - (unsigned int)v32;
          while ( 1 )
          {
            v38 = *(int *)(v34 + 4 * v33);
            v39 = a10[v33];
            v40 = *(_DWORD *)(v36 + 4 * v33);
            v41 = (int *)(result + 4 * v38);
            v42 = &a9[v39];
            v43 = v40 == 0;
            if ( v41 != v42 && v40 )
            {
              if ( v40 >> 3 > 0 )
              {
                v44 = 0;
                v45 = (unsigned int)((v40 >> 3) - 1);
                do
                {
                  v46 = _mm_loadu_si128((const __m128i *)&v42[v44]);
                  *(__m128i *)&v41[v44 + 4] = _mm_loadu_si128((const __m128i *)&v42[v44 + 4]);
                  *(__m128i *)&v41[v44] = v46;
                  v44 += 8;
                }
                while ( v44 != 8 * (v45 + 1) );
                v47 = 32 * ((int)v45 + 1LL);
                v42 = (const int *)((char *)v42 + v47);
                v41 = (int *)((char *)v41 + v47);
              }
              switch ( v40 % 8 )
              {
                case 1:
                  goto LABEL_45;
                case 2:
                  goto LABEL_44;
                case 3:
                  goto LABEL_43;
                case 4:
                  goto LABEL_42;
                case 5:
                  goto LABEL_41;
                case 6:
                  goto LABEL_40;
                case 7:
                  v41[6] = v42[6];
LABEL_40:
                  v41[5] = v42[5];
LABEL_41:
                  v41[4] = v42[4];
LABEL_42:
                  v41[3] = v42[3];
LABEL_43:
                  v41[2] = v42[2];
LABEL_44:
                  v41[1] = v42[1];
LABEL_45:
                  *v41 = *v42;
                  break;
                default:
                  break;
              }
              v40 = *(_DWORD *)(v36 + 4 * v33);
              v38 = *(int *)(v34 + 4 * v33);
              v43 = v40 == 0;
            }
            v54 = (double *)(v37 + 8 * v38);
            v55 = &a6[v39];
            if ( v54 != v55 && !v43 )
            {
              if ( v40 >> 3 > 0 )
              {
                v56 = (double *)(v37 + 8 * v38);
                v57 = &a6[v39];
                v58 = (unsigned int)((v40 >> 3) - 1);
                do
                {
                  v59 = *(_QWORD *)v57;
                  v56 += 8;
                  v57 += 8;
                  *((_QWORD *)v56 - 8) = v59;
                  *(v56 - 7) = *(v57 - 7);
                  *(v56 - 6) = *(v57 - 6);
                  *(v56 - 5) = *(v57 - 5);
                  *(v56 - 4) = *(v57 - 4);
                  *(v56 - 3) = *(v57 - 3);
                  *(v56 - 2) = *(v57 - 2);
                  *(v56 - 1) = *(v57 - 1);
                }
                while ( v56 != &v54[8 * v58 + 8] );
                v60 = ((int)v58 + 1LL) << 6;
                v55 = (const double *)((char *)v55 + v60);
                v54 = (double *)((char *)v54 + v60);
              }
              switch ( v40 % 8 )
              {
                case 1:
                  goto LABEL_60;
                case 2:
                  goto LABEL_59;
                case 3:
                  goto LABEL_58;
                case 4:
                  goto LABEL_57;
                case 5:
                  goto LABEL_56;
                case 6:
                  goto LABEL_55;
                case 7:
                  v54[6] = v55[6];
LABEL_55:
                  v54[5] = v55[5];
LABEL_56:
                  v54[4] = v55[4];
LABEL_57:
                  v54[3] = v55[3];
LABEL_58:
                  v54[2] = v55[2];
LABEL_59:
                  v54[1] = v55[1];
LABEL_60:
                  *v54 = *v55;
                  break;
                default:
                  break;
              }
            }
            v33 = v35;
            if ( v35 == v63 )
              break;
            --v35;
          }
        }
        return result;
      }
    }
LABEL_69:
    __cxa_throw_bad_array_new_length();
  }
  return result;
}

