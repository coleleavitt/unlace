void __fastcall CoinDenseVector<float>::gutsOfSetConstant(__int64 a1, int a2, float a3)
{
  int v3; // edx
  float *v4; // rcx
  int v5; // edx
  __m128 *v6; // rax
  __int64 v7; // rdx
  __m128 v8; // xmm1

  if ( a2 )
  {
    CoinDenseVector<float>::resize(0.0);
    v3 = a2 + 7;
    *(_DWORD *)a1 = a2;
    v4 = *(float **)(a1 + 8);
    if ( a2 >= 0 )
      v3 = a2;
    v5 = v3 >> 3;
    if ( v5 > 0 )
    {
      v6 = *(__m128 **)(a1 + 8);
      v7 = (unsigned int)(v5 - 1);
      v8 = _mm_shuffle_ps((__m128)LODWORD(a3), (__m128)LODWORD(a3), 0);
      do
      {
        *v6 = v8;
        v6 += 2;
        v6[-1] = v8;
      }
      while ( &v4[8 * v7 + 8] != (float *)v6 );
      v4 += 8 * (int)v7 + 8;
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        goto LABEL_14;
      case 3:
        goto LABEL_13;
      case 4:
        goto LABEL_12;
      case 5:
        goto LABEL_11;
      case 6:
        goto LABEL_10;
      case 7:
        v4[6] = a3;
LABEL_10:
        v4[5] = a3;
LABEL_11:
        v4[4] = a3;
LABEL_12:
        v4[3] = a3;
LABEL_13:
        v4[2] = a3;
LABEL_14:
        v4[1] = a3;
LABEL_15:
        *v4 = a3;
        break;
      default:
        return;
    }
  }
}

