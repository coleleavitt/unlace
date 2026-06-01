__int64 __fastcall CoinIndexedVector::setElement(CoinIndexedVector *this, int a2, double a3)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 1);
  *(double *)(result + 8LL * *(int *)(*(_QWORD *)this + 4LL * a2)) = a3;
  return result;
}

