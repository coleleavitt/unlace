__int64 __fastcall CoinIndexedVector::borrowVector(CoinIndexedVector *this, int a2, int a3, int *a4, double *a5)
{
  __int64 result; // rax

  result = CoinIndexedVector::empty(this);
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = a3;
  *(_QWORD *)this = a4;
  *((_QWORD *)this + 1) = a5;
  return result;
}

