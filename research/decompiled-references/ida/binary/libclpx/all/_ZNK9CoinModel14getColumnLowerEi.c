double __fastcall CoinModel::getColumnLower(CoinModel *this, int a2)
{
  double result; // xmm0_8
  __int64 v3; // rax

  result = 0.0;
  if ( *((_DWORD *)this + 3) > a2 )
  {
    v3 = *((_QWORD *)this + 24);
    if ( v3 )
      return *(double *)(v3 + 8LL * a2);
  }
  return result;
}

