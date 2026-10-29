void __fastcall sub_8E86F0(__int64 a1)
{
  double *v1; // rcx
  unsigned __int64 v2; // rsi
  int v3; // r8d
  __m128d *v4; // rax
  __m128d v5; // xmm1
  __m128d v6; // xmm0

  v1 = *(double **)(a1 + 8880);
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    v3 = *((_DWORD *)v1 - 1);
    if ( 8 * v2 )
    {
      if ( 8 * v2 == 8 )
      {
LABEL_8:
        *v1 = *v1 * 1.0e-100;
        goto LABEL_9;
      }
      v4 = *(__m128d **)(a1 + 8880);
      v5 = _mm_unpacklo_pd((__m128d)0x2B2BFF2EE48E0530uLL, (__m128d)0x2B2BFF2EE48E0530uLL);
      do
      {
        v6 = *v4++;
        v4[-1] = _mm_mul_pd(v6, v5);
      }
      while ( v4 != (__m128d *)&v1[2 * (v2 >> 1)] );
      if ( (v3 & 1) != 0 )
      {
        v1 += v2 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  *(double *)(a1 + 8960) = 1.0e-100 * *(double *)(a1 + 8960);
}

