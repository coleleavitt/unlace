void __fastcall setElements(unsigned __int64 a1, int a2, __m128d a3)
{
  unsigned __int64 v3; // rax
  int v4; // ecx
  double *v5; // rdx
  unsigned int v6; // r9d
  unsigned int v7; // eax
  __m128d v8; // xmm1
  signed int v9; // eax
  int v10; // edx
  int v11; // eax

  if ( a2 <= 0 )
    return;
  v3 = (a1 >> 3) & 1;
  if ( (unsigned int)(a2 - 1) <= 4 )
  {
    v9 = 0;
LABEL_8:
    *(double *)(a1 + 8LL * v9) = a3.m128d_f64[0];
    if ( a2 > v9 + 1 )
    {
      *(double *)(a1 + 8LL * (v9 + 1)) = a3.m128d_f64[0];
      if ( a2 > v9 + 2 )
      {
        *(double *)(a1 + 8LL * (v9 + 2)) = a3.m128d_f64[0];
        v10 = v9 + 3;
        if ( a2 > v9 + 3 )
        {
          v11 = v9 + 4;
          *(double *)(a1 + 8LL * v10) = a3.m128d_f64[0];
          if ( a2 > v11 )
            *(double *)(a1 + 8LL * v11) = a3.m128d_f64[0];
        }
      }
    }
    return;
  }
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    *(double *)a1 = a3.m128d_f64[0];
    v4 = 1;
  }
  v5 = (double *)(a1 + 8 * v3);
  v6 = a2 - v3;
  v7 = 0;
  v8 = _mm_unpacklo_pd(a3, a3);
  do
  {
    ++v7;
    v5 += 2;
    *((__m128d *)v5 - 1) = v8;
  }
  while ( v7 < v6 >> 1 );
  v9 = (v6 & 0xFFFFFFFE) + v4;
  if ( v6 != (v6 & 0xFFFFFFFE) )
    goto LABEL_8;
}

