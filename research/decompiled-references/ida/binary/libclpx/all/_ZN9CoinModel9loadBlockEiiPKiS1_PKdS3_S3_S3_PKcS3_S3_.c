void __fastcall CoinModel::loadBlock(
        CoinModel *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        double *a7,
        double *a8,
        double *a9,
        char *a10,
        double *a11,
        double *a12)
{
  unsigned __int64 v13; // rbx
  char *v14; // r15
  const double *v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // r13
  double *v18; // rbx
  double *v19; // r12
  __int64 v20; // rax
  double *v21; // r13
  double *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r10
  double v26; // xmm0_8
  __int64 v27; // rbx
  int v28; // r11d
  int v29; // esi
  __int64 v30; // rax
  int v31; // r9d
  int v32; // r8d
  int v33; // esi
  __int64 v34; // rdx
  unsigned int v35; // edx
  const int *v36; // r9
  const int *v37; // r8
  __int64 v38; // rdi
  unsigned int v39; // r15d
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edi
  int v43; // r8d
  int v44; // edx
  int v45; // edx
  int v46; // edi
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  int v50; // edi
  int v51; // ecx
  int v52; // edx
  int v53; // ecx
  int v54; // edi
  int v55; // ecx
  int v56; // edx
  int v57; // ecx
  int v58; // edi
  int v59; // ecx
  int v60; // edx
  int v61; // ecx
  __int64 v62; // rsi
  __int64 v63; // rax
  unsigned int v64; // ecx
  double *v65; // rax
  const double *v66; // rax
  __int64 v67; // rax
  int v71; // [rsp+18h] [rbp-A8h]
  const double *v72; // [rsp+18h] [rbp-A8h]
  const double *v73; // [rsp+20h] [rbp-A0h]
  int v74; // [rsp+20h] [rbp-A0h]
  unsigned int v75; // [rsp+20h] [rbp-A0h]
  const double *v76; // [rsp+20h] [rbp-A0h]
  const double *v77; // [rsp+20h] [rbp-A0h]
  _BYTE v80[144]; // [rsp+30h] [rbp-90h] BYREF

  v13 = a3;
  v14 = a10;
  if ( !a10 )
  {
    v14 = (char *)operator new[](a3);
    if ( a3 > 0 )
      memset(v14, 71, (unsigned int)(a3 - 1) + 1LL);
  }
  if ( a11 )
  {
    if ( a12 )
    {
      if ( v13 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_65;
      v15 = a11;
      goto LABEL_6;
    }
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_65;
    v17 = 8 * v13;
    v18 = (double *)operator new[](8 * v13);
    v15 = a11;
    if ( a3 > 0 )
    {
      v64 = a3 - 1;
LABEL_54:
      v72 = v15;
      v75 = v64;
      memset(v18, 0, 8LL * v64 + 8);
      v16 = v75;
      v15 = v72;
      goto LABEL_8;
    }
    v16 = a3 - 1;
  }
  else
  {
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_65;
    v17 = 8 * v13;
    v65 = (double *)operator new[](8 * v13);
    v15 = v65;
    if ( a3 > 0 )
    {
      v66 = (const double *)memset(v65, 0, 8LL * (unsigned int)(a3 - 1) + 8);
      v15 = v66;
      v16 = a3 - 1;
      if ( a12 )
        goto LABEL_7;
      v76 = v66;
      v67 = operator new[](8 * v13);
      v15 = v76;
      v18 = (double *)v67;
      v64 = a3 - 1;
      goto LABEL_54;
    }
    if ( a12 )
    {
LABEL_6:
      v16 = a3 - 1;
LABEL_7:
      v17 = 8 * v13;
      v18 = a12;
      goto LABEL_8;
    }
    v77 = v65;
    v18 = (double *)operator new[](8 * v13);
    v15 = v77;
    v16 = a3 - 1;
  }
LABEL_8:
  v71 = v16;
  v73 = v15;
  v19 = (double *)operator new[](v17);
  v20 = operator new[](v17);
  v21 = (double *)v20;
  v22 = (double *)v73;
  if ( v71 >= 0 )
  {
    v23 = v71;
    v24 = v71 - 1LL;
    v25 = v24 - (unsigned int)v71;
    while ( 1 )
    {
      v26 = v73[v23];
      switch ( v14[v23] )
      {
        case 'E':
          *(double *)(v20 + 8 * v23) = v26;
          v19[v23] = v26;
          goto LABEL_12;
        case 'G':
          v19[v23] = v26;
          *(_QWORD *)(v20 + 8 * v23) = 0x7FEFFFFFFFFFFFFFLL;
          goto LABEL_12;
        case 'L':
          v19[v23] = -1.797693134862316e308;
          *(double *)(v20 + 8 * v23) = v26;
          goto LABEL_12;
        case 'N':
          v19[v23] = -1.797693134862316e308;
          *(_QWORD *)(v20 + 8 * v23) = 0x7FEFFFFFFFFFFFFFLL;
          v23 = v24;
          if ( v24 == v25 )
            goto LABEL_15;
          goto LABEL_13;
        case 'R':
          *(double *)(v20 + 8 * v23) = v26;
          v19[v23] = v26 - v18[v23];
          goto LABEL_12;
        default:
LABEL_12:
          v23 = v24;
          if ( v24 == v25 )
            goto LABEL_15;
LABEL_13:
          --v24;
          break;
      }
    }
  }
LABEL_15:
  if ( v14 != a10 )
  {
    operator delete[](v14);
    v22 = (double *)v73;
  }
  if ( a11 != v22 )
    operator delete[](v22);
  if ( a12 != v18 )
    operator delete[](v18);
  v74 = a4[a2];
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
LABEL_65:
    __cxa_throw_bad_array_new_length();
  v27 = operator new[](4LL * a2);
  if ( a2 > 0 )
  {
    v28 = a2 - 1;
    v29 = 0;
    v30 = -(int)((unsigned __int64)(a4 + 1) >> 2) & 3;
    if ( (int)v30 + 3 > (unsigned int)(a2 - 1) )
      goto LABEL_33;
    if ( (_DWORD)v30 )
    {
      if ( (_DWORD)v30 == 3 )
      {
        v31 = 2;
        v32 = 2;
        v33 = a4[1] - *a4;
        *(_DWORD *)(v27 + 4) = a4[2] - a4[1];
        *(_DWORD *)v27 = v33;
      }
      else
      {
        v31 = 0;
        v32 = 0;
      }
      v34 = v32 + 1LL;
      *(_DWORD *)(v27 + 4 * v34 - 4) = a4[v34] - a4[v34 - 1];
      v29 = v32 + 1;
      if ( (unsigned int)v30 > v31 + 1 )
      {
        *(_DWORD *)(v27 + 4 * v34) = a4[v34 + 1] - a4[v34];
        v29 = v32 + 2;
        if ( (unsigned int)v30 > v31 + 2 )
        {
          v29 = v32 + 3;
          *(_DWORD *)(v27 + 4 * v34 + 4) = a4[v34 + 2] - a4[v34 + 1];
        }
      }
    }
    v35 = 0;
    v36 = &a4[v30 + 1];
    v37 = &a4[v30];
    v38 = v27 + 4 * v30;
    v39 = a2 - v30;
    v40 = 0;
    do
    {
      ++v35;
      *(__m128i *)(v38 + v40 * 4) = _mm_sub_epi32(
                                      _mm_load_si128((const __m128i *)&v36[v40]),
                                      _mm_loadu_si128((const __m128i *)&v37[v40]));
      v40 += 4;
    }
    while ( v39 >> 2 > v35 );
    v29 += v39 & 0xFFFFFFFC;
    if ( (v39 & 0xFFFFFFFC) != v39 )
    {
LABEL_33:
      v41 = v29;
      if ( v29 + 1 >= v28 || v29 >= a2 )
      {
        v44 = v29;
      }
      else
      {
        v42 = a4[v41 + 1];
        v43 = a4[v41 + 2];
        *(_DWORD *)(v27 + 4LL * v29) = a4[v29 + 1] - a4[v29];
        *(_DWORD *)(v27 + v41 * 4 + 4) = v43 - v42;
        v44 = v29 + 2;
        if ( v28 > v29 + 3 )
        {
          v45 = a4[v41 + 3];
          *(_DWORD *)(v27 + v41 * 4 + 8) = v45 - v43;
          v46 = a4[v41 + 4];
          v47 = v46 - v45;
          v44 = v29 + 4;
          *(_DWORD *)(v27 + v41 * 4 + 12) = v47;
          if ( v28 > v29 + 5 )
          {
            v48 = a4[v41 + 5];
            v49 = v48 - v46;
            v50 = a4[v41 + 6];
            *(_DWORD *)(v27 + v41 * 4 + 16) = v49;
            v51 = v50 - v48;
            v44 = v29 + 6;
            *(_DWORD *)(v27 + v41 * 4 + 20) = v51;
            if ( v28 > v29 + 7 )
            {
              v52 = a4[v41 + 7];
              v53 = v52 - v50;
              v54 = a4[v41 + 8];
              *(_DWORD *)(v27 + v41 * 4 + 24) = v53;
              v55 = v54 - v52;
              v44 = v29 + 8;
              *(_DWORD *)(v27 + v41 * 4 + 28) = v55;
              if ( v28 > v29 + 9 )
              {
                v56 = a4[v41 + 9];
                v57 = v56 - v54;
                v58 = a4[v41 + 10];
                *(_DWORD *)(v27 + v41 * 4 + 32) = v57;
                v59 = v58 - v56;
                v44 = v29 + 10;
                *(_DWORD *)(v27 + v41 * 4 + 36) = v59;
                if ( v28 > v29 + 11 )
                {
                  v60 = a4[v41 + 11];
                  *(_DWORD *)(v27 + v41 * 4 + 40) = v60 - v58;
                  v61 = a4[v41 + 12] - v60;
                  v44 = v29 + 12;
                  *(_DWORD *)(v27 + v41 * 4 + 44) = v61;
                }
              }
            }
          }
        }
      }
      v62 = v44 + 1LL;
      v63 = v62;
      *(_DWORD *)(v27 + 4 * v62 - 4) = a4[v62] - a4[v62 - 1];
      if ( a2 > v44 + 1 )
      {
        *(_DWORD *)(v27 + 4 * v62) = a4[v62 + 1] - a4[v62];
        if ( a2 > v44 + 2 )
        {
          *(_DWORD *)(v27 + v63 * 4 + 4) = a4[v63 + 2] - a4[v63 + 1];
          if ( a2 > v44 + 3 )
          {
            *(_DWORD *)(v27 + v63 * 4 + 8) = a4[v63 + 3] - a4[v63 + 2];
            if ( a2 > v44 + 4 )
            {
              *(_DWORD *)(v27 + v63 * 4 + 12) = a4[v63 + 4] - a4[v63 + 3];
              if ( a2 > v44 + 5 )
                *(_DWORD *)(v27 + v63 * 4 + 16) = a4[v63 + 5] - a4[v63 + 4];
            }
          }
        }
      }
    }
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v80, 1, a3, a2, v74, a6, 0.0, 0.0, a5, a4, (const int *)v27);
  CoinModel::loadBlock(this, (const CoinPackedMatrix *)v80, a7, a8, a9, v19, v21);
  operator delete[]((void *)v27);
  operator delete[](v19);
  operator delete[](v21);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v80);
}

