__int64 __fastcall CoinPrePostsolveMatrix::setRowStatusUsingValue(CoinPrePostsolveMatrix *this, int a2)
{
  double *v2; // rdx
  double v3; // xmm0_8
  double v4; // xmm1_8
  _BYTE *v5; // rsi
  __int64 result; // rax
  double v7; // xmm2_8

  v2 = (double *)(*((_QWORD *)this + 22) + 8LL * a2);
  v3 = *(double *)(*((_QWORD *)this + 13) + 8LL * a2);
  v4 = *(double *)(*((_QWORD *)this + 14) + 8LL * a2);
  v5 = (_BYTE *)(*((_QWORD *)this + 25) + a2);
  result = *v5 & 0xF8;
  if ( v3 < -1.0e20 && v4 > 1.0e20 )
    goto LABEL_6;
  v7 = *((double *)this + 17);
  if ( v7 < fabs(v3 - *v2) )
  {
    result = (unsigned int)result | 4;
    if ( v7 >= fabs(v4 - *v2) )
      result = *v5 & 0xF8 | 3u;
LABEL_6:
    *v5 = result;
    return result;
  }
  result = (unsigned int)result | 2;
  *v5 = result;
  return result;
}

