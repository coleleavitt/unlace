__int64 __fastcall CoinPartitionedVector::sort(CoinPartitionedVector *this)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rax

  result = *((unsigned int *)this + 25);
  if ( (int)result > 0 )
  {
    v2 = 1;
    do
    {
      v3 = *((int *)this + v2 + 7);
      CoinSort_2<int,double>(
        *(_QWORD *)this + 4 * v3,
        *(_QWORD *)this + 4 * v3 + 4LL * *((int *)this + v2 + 16),
        *((_QWORD *)this + 1) + 8 * v3);
      result = (unsigned int)v2++;
    }
    while ( *((_DWORD *)this + 25) > (int)result );
  }
  return result;
}

