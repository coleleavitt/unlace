__int64 __fastcall CoinIndexedVector::createOneUnpackedElement(CoinIndexedVector *this, int a2, double a3)
{
  _DWORD *v3; // rax
  __int64 result; // rax

  v3 = *(_DWORD **)this;
  *((_DWORD *)this + 4) = 1;
  *((_BYTE *)this + 28) = 0;
  *v3 = a2;
  result = *((_QWORD *)this + 1);
  *(double *)(result + 8LL * a2) = a3;
  return result;
}

