bool __fastcall ClpPlusMinusOneMatrix::canCombine(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3)
{
  int v3; // eax
  __int64 v4; // rdi
  double v5; // xmm2_8
  __int64 v6; // xmm0_8
  double v7; // xmm0_8
  bool result; // al

  v3 = *((_DWORD *)a2 + 26);
  v4 = *((int *)this + 33);
  if ( (unsigned __int64)(8 * v4) <= 0xF4240 )
    goto LABEL_4;
  if ( (int)v4 > 10 * v3 )
  {
    v5 = 0.080999999919;
    v6 = 0x3FB70A3D7040E24BLL;
    goto LABEL_5;
  }
  if ( (int)v4 <= 4 * v3 )
  {
    if ( (int)v4 > 2 * v3 )
    {
      v5 = 0.16200000000081;
      v6 = 0x3FC70A3D70A455B4LL;
      goto LABEL_5;
    }
LABEL_4:
    v5 = 0.243;
    v6 = 0x3FD147AE147AE148LL;
    goto LABEL_5;
  }
  v5 = 0.1215;
  v6 = 0x3FC147AE147AE148LL;
LABEL_5:
  if ( *((_BYTE *)a3 + 28) )
    v5 = *(double *)&v6;
  v7 = (double)v3;
  result = 1;
  if ( (double)*((int *)a3 + 4) <= v7 * v5 )
    return *((_QWORD *)a2 + 25) == 0;
  return result;
}

