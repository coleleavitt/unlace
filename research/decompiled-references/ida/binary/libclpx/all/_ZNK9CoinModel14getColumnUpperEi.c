double __fastcall CoinModel::getColumnUpper(CoinModel *this, int a2)
{
  double result; // xmm0_8
  __int64 v3; // rax

  result = 1.797693134862316e308;
  if ( *((_DWORD *)this + 3) > a2 )
  {
    v3 = *((_QWORD *)this + 25);
    if ( v3 )
      return *(double *)(v3 + 8LL * a2);
  }
  return result;
}

