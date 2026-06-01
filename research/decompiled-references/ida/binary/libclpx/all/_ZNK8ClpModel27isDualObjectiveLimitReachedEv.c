bool __fastcall ClpModel::isDualObjectiveLimitReached(ClpModel *this)
{
  double v1; // xmm0_8
  bool result; // al
  int v3; // eax
  double v4; // xmm2_8
  double v5; // xmm1_8

  v1 = *((double *)this + 1);
  result = 0;
  if ( v1 <= 1.0e30 )
  {
    v3 = *((_DWORD *)this + 80);
    v4 = *(double *)this;
    if ( v3 )
    {
      return v3 == 1;
    }
    else
    {
      v5 = *((double *)this + 9) * v4 - *((double *)this + 5);
      if ( v4 <= 0.0 )
        v5 = -v5;
      return v5 > v1;
    }
  }
  return result;
}

