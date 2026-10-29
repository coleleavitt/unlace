__int64 __fastcall CoinPartitionedVector::reserve(CoinPartitionedVector *this, int a2)
{
  __int64 result; // rax

  CoinIndexedVector::reserve(this, a2);
  result = *((unsigned int *)this + 5);
  *((_QWORD *)this + 12) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_DWORD *)this + 9) = result;
  *((_OWORD *)this + 3) = 0;
  *((_OWORD *)this + 4) = 0;
  *((_OWORD *)this + 5) = 0;
  return result;
}

