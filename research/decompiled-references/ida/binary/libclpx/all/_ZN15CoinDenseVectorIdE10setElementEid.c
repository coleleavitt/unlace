__int64 __fastcall CoinDenseVector<double>::setElement(__int64 a1, int a2, double a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(double *)(result + 8LL * a2) = a3;
  return result;
}

