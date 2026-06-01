__int64 __fastcall CoinPackedVector::setElement(CoinPackedVector *this, int a2, double a3)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 5);
  *(double *)(result + 8LL * a2) = a3;
  return result;
}

