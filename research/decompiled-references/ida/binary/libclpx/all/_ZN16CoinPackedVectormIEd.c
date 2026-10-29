void __fastcall CoinPackedVector::operator-=(__int64 a1, __m128d a2)
{
  int v2; // r9d
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  int v5; // esi
  double *v6; // rcx
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 v9; // rax
  __m128d v10; // xmm2
  signed int v11; // eax
  __int64 v12; // rdx
  int v13; // eax

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 > 0 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = (v3 >> 3) & 1;
    if ( (unsigned int)(v2 - 1) <= 1 )
    {
      v11 = 0;
LABEL_8:
      v12 = v11;
      v13 = v11 + 1;
      *(double *)(v3 + 8 * v12) = *(double *)(v3 + 8 * v12) - a2.m128d_f64[0];
      if ( v13 < v2 )
        *(double *)(v3 + 8LL * v13) = *(double *)(v3 + 8LL * v13) - a2.m128d_f64[0];
      return;
    }
    v5 = 0;
    if ( (_DWORD)v4 )
    {
      v5 = 1;
      *(double *)v3 = *(double *)v3 - a2.m128d_f64[0];
    }
    v6 = (double *)(v3 + 8 * v4);
    v7 = v2 - v4;
    v8 = 0;
    v9 = 0;
    v10 = _mm_unpacklo_pd(a2, a2);
    do
    {
      ++v8;
      *(__m128d *)&v6[v9] = _mm_sub_pd(*(__m128d *)&v6[v9], v10);
      v9 += 2;
    }
    while ( v8 < v7 >> 1 );
    v11 = (v7 & 0xFFFFFFFE) + v5;
    if ( v7 != (v7 & 0xFFFFFFFE) )
      goto LABEL_8;
  }
}

