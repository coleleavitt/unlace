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
        double *a10,
        double *a11)
{
  int v11; // r12d
  int v15; // r11d
  int v16; // ecx
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // edi
  _DWORD *v21; // r14
  __int64 v22; // rdx
  unsigned int v23; // edx
  int v24; // r14d
  const int *v25; // r8
  const int *v26; // rsi
  unsigned int v27; // r10d
  char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // esi
  int v32; // edi
  int v33; // edx
  int v34; // edx
  int v35; // esi
  int v36; // edi
  int v37; // edx
  int v38; // edi
  int v39; // esi
  int v40; // edi
  int v41; // edx
  int v42; // edi
  int v43; // esi
  int v44; // edi
  int v45; // edx
  int v46; // edi
  int v47; // esi
  int v48; // edi
  int v49; // edx
  int v50; // edi
  int v51; // esi
  int v52; // esi
  __int64 v53; // rcx
  __int64 v54; // rax
  _DWORD *v58; // [rsp+18h] [rbp-98h]
  _BYTE v59[144]; // [rsp+20h] [rbp-90h] BYREF

  v11 = a4[a2];
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v58 = (_DWORD *)operator new[](4LL * a2);
  if ( a2 > 0 )
  {
    v15 = a2 - 1;
    v16 = 0;
    v17 = -(int)((unsigned __int64)(a4 + 1) >> 2) & 3;
    if ( a2 - 1 < (unsigned int)(v17 + 3) )
      goto LABEL_13;
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 3 )
      {
        v18 = a4[1];
        v19 = 2;
        v20 = 2;
        v21 = v58;
        *v58 = v18 - *a4;
        v58[1] = a4[2] - v18;
      }
      else
      {
        v19 = 0;
        v20 = 0;
        v21 = v58;
      }
      v22 = v20 + 1LL;
      v21[v22 - 1] = a4[v22] - a4[v22 - 1];
      v16 = v20 + 1;
      if ( (unsigned int)v17 > v19 + 1 )
      {
        v21[v22] = a4[v22 + 1] - a4[v22];
        v16 = v20 + 2;
        if ( (unsigned int)v17 > v19 + 2 )
        {
          v16 = v20 + 3;
          v21[v22 + 1] = a4[v22 + 2] - a4[v22 + 1];
        }
      }
    }
    v23 = 0;
    v24 = a2 - v17;
    v25 = &a4[v17 + 1];
    v26 = &a4[v17];
    v27 = (unsigned int)(a2 - v17) >> 2;
    v28 = (char *)&v58[v17];
    v29 = 0;
    do
    {
      ++v23;
      *(__m128i *)&v28[v29 * 4] = _mm_sub_epi32(
                                    _mm_load_si128((const __m128i *)&v25[v29]),
                                    _mm_loadu_si128((const __m128i *)&v26[v29]));
      v29 += 4;
    }
    while ( v27 > v23 );
    v16 += v24 & 0xFFFFFFFC;
    if ( v24 != (v24 & 0xFFFFFFFC) )
    {
LABEL_13:
      v30 = v16;
      if ( v16 + 1 >= v15 || a2 <= v16 )
      {
        v33 = v16;
      }
      else
      {
        v31 = a4[v30 + 1];
        v32 = a4[v30 + 2];
        v58[v16] = a4[v16 + 1] - a4[v16];
        v58[v30 + 1] = v32 - v31;
        v33 = v16 + 2;
        if ( v15 > v16 + 3 )
        {
          v34 = a4[v30 + 3];
          v58[v30 + 2] = v34 - v32;
          v35 = a4[v30 + 4];
          v36 = v35 - v34;
          v33 = v16 + 4;
          v58[v30 + 3] = v36;
          if ( v15 > v16 + 5 )
          {
            v37 = a4[v30 + 5];
            v38 = v37 - v35;
            v39 = a4[v30 + 6];
            v58[v30 + 4] = v38;
            v40 = v39 - v37;
            v33 = v16 + 6;
            v58[v30 + 5] = v40;
            if ( v15 > v16 + 7 )
            {
              v41 = a4[v30 + 7];
              v42 = v41 - v39;
              v43 = a4[v30 + 8];
              v58[v30 + 6] = v42;
              v44 = v43 - v41;
              v33 = v16 + 8;
              v58[v30 + 7] = v44;
              if ( v15 > v16 + 9 )
              {
                v45 = a4[v30 + 9];
                v46 = v45 - v43;
                v47 = a4[v30 + 10];
                v58[v30 + 8] = v46;
                v48 = v47 - v45;
                v33 = v16 + 10;
                v58[v30 + 9] = v48;
                if ( v15 > v16 + 11 )
                {
                  v49 = a4[v30 + 11];
                  v50 = v49 - v47;
                  v51 = a4[v30 + 12];
                  v58[v30 + 10] = v50;
                  v52 = v51 - v49;
                  v33 = v16 + 12;
                  v58[v30 + 11] = v52;
                }
              }
            }
          }
        }
      }
      v53 = v33 + 1LL;
      v54 = v53;
      v58[v53 - 1] = a4[v53] - a4[v53 - 1];
      if ( a2 > v33 + 1 )
      {
        v58[v53] = a4[v53 + 1] - a4[v53];
        if ( a2 > v33 + 2 )
        {
          v58[v54 + 1] = a4[v54 + 2] - a4[v54 + 1];
          if ( a2 > v33 + 3 )
          {
            v58[v54 + 2] = a4[v54 + 3] - a4[v54 + 2];
            if ( a2 > v33 + 4 )
            {
              v58[v54 + 3] = a4[v54 + 4] - a4[v54 + 3];
              if ( a2 > v33 + 5 )
                v58[v54 + 4] = a4[v54 + 5] - a4[v54 + 4];
            }
          }
        }
      }
    }
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v59, 1, a3, a2, v11, a6, 0.0, 0.0, a5, a4, v58);
  CoinModel::loadBlock(this, (const CoinPackedMatrix *)v59, a7, a8, a9, a10, a11);
  operator delete[](v58);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v59);
}

