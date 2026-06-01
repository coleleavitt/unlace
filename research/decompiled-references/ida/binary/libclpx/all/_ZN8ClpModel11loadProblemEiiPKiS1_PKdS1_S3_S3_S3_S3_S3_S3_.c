void __fastcall ClpModel::loadProblem(
        ClpModel *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        int *a7,
        double *a8,
        double *a9,
        double *a10,
        double *a11,
        double *a12,
        double *a13)
{
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // edi
  __m128i v20; // xmm0
  unsigned int v21; // esi
  __m128i *v22; // rcx
  unsigned int v23; // edx
  __m128i v24; // xmm0
  unsigned int v25; // edx
  int v26; // r8d
  unsigned int v27; // ecx
  int v28; // edx
  ClpPackedMatrix *v29; // rbx
  _BYTE v32[152]; // [rsp+18h] [rbp-98h] BYREF

  ClpModel::gutsOfLoadModel(this, a3, a2, a8, a9, a10, a11, a12, a13);
  if ( a2 <= 0 )
  {
    v26 = 0;
    goto LABEL_17;
  }
  v17 = -(int)((unsigned __int64)a7 >> 2) & 3;
  if ( (unsigned int)(a2 - 1) <= 6 )
  {
    v25 = 0;
    v26 = 0;
LABEL_10:
    v26 += a7[v25];
    if ( a2 > (int)(v25 + 1) )
    {
      v26 += a7[v25 + 1];
      if ( a2 > (int)(v25 + 2) )
      {
        v26 += a7[v25 + 2];
        if ( a2 > (int)(v25 + 3) )
        {
          v26 += a7[v25 + 3];
          if ( a2 > (int)(v25 + 4) )
          {
            v26 += a7[v25 + 4];
            v27 = v25 + 5;
            if ( a2 > (int)(v25 + 5) )
            {
              v28 = v25 + 6;
              v26 += a7[v27];
              if ( a2 > v28 )
                v26 += a7[v28];
            }
          }
        }
      }
    }
    goto LABEL_17;
  }
  if ( (_DWORD)v17 )
  {
    v18 = *a7;
    v19 = 1;
    if ( (_DWORD)v17 != 1 )
    {
      v18 += a7[1];
      v19 = 2;
      if ( (_DWORD)v17 != 2 )
      {
        v18 += a7[2];
        v19 = 3;
      }
    }
  }
  else
  {
    v19 = 0;
    v18 = 0;
  }
  v20 = 0;
  v21 = a2 - v17;
  v22 = (__m128i *)&a7[v17];
  v23 = 0;
  do
  {
    ++v23;
    v20 = _mm_add_epi32(v20, *v22++);
  }
  while ( v23 < v21 >> 2 );
  v24 = _mm_add_epi32(v20, _mm_srli_si128(v20, 8));
  v25 = (v21 & 0xFFFFFFFC) + v19;
  v26 = v18 + _mm_cvtsi128_si32(_mm_add_epi32(v24, _mm_srli_si128(v24, 4)));
  if ( v21 != (v21 & 0xFFFFFFFC) )
    goto LABEL_10;
LABEL_17:
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v32, 1, a3, a2, v26, a6, a5, a4, a7);
  v29 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v29, (const CoinPackedMatrix *)v32);
  *((_QWORD *)this + 24) = v29;
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v32);
}

