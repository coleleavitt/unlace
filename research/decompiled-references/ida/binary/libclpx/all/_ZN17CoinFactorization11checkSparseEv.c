void __fastcall CoinFactorization::checkSparse(CoinFactorization *this)
{
  double v1; // xmm9_8
  double v2; // xmm2_8
  double v3; // xmm1_8
  double v4; // xmm4_8
  double v5; // xmm3_8
  double v6; // xmm6_8
  double v7; // xmm7_8
  double v8; // xmm8_8
  double v9; // xmm10_8
  double v10; // xmm11_8

  v1 = *((double *)this + 116);
  v2 = *((double *)this + 117);
  v3 = *((double *)this + 118);
  v4 = *((double *)this + 119);
  v5 = *((double *)this + 120);
  v6 = *((double *)this + 121);
  v7 = *((double *)this + 122);
  v8 = *((double *)this + 123);
  if ( *((int *)this + 248) <= 100 )
  {
    v10 = v1 * 0.8;
  }
  else
  {
    if ( v1 <= 1.0 )
    {
      v9 = *((double *)this + 117);
      v1 = 1.0;
      v10 = 0.8;
    }
    else
    {
      v9 = v2 / v1;
      v10 = v1 * 0.8;
    }
    *((double *)this + 116) = v1;
    *((double *)this + 125) = fmax(v9, 1.0);
    *((double *)this + 126) = fmax(v3 / v2, 1.0);
    *((double *)this + 127) = fmax(v4 / v3, 1.0);
    if ( v5 == 0.0 || v6 == 0.0 || v7 == 0.0 )
    {
      *((_QWORD *)this + 128) = 0x3FF0000000000000LL;
      *((_QWORD *)this + 129) = 0x3FF0000000000000LL;
      *((_QWORD *)this + 130) = 0x3FF0000000000000LL;
    }
    else
    {
      *((double *)this + 128) = fmax(v6 / v5, 1.0);
      *((double *)this + 129) = fmax(v7 / v6, 1.0);
      *((double *)this + 130) = fmax(v8 / v7, 1.0);
    }
  }
  *((double *)this + 116) = v10;
  *((double *)this + 117) = v2 * 0.8;
  *((double *)this + 118) = v3 * 0.8;
  *((double *)this + 119) = v4 * 0.8;
  *((double *)this + 120) = v5 * 0.8;
  *((double *)this + 121) = v6 * 0.8;
  *((double *)this + 122) = v7 * 0.8;
  *((double *)this + 123) = 0.8 * v8;
}

