__int64 __fastcall CoinPartitionedVector::clearAndKeep(CoinPartitionedVector *this)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = *((unsigned int *)this + 25);
  if ( (int)result > 0 )
  {
    v2 = 1;
    do
    {
      memset((void *)(*((_QWORD *)this + 1) + 8LL * *((int *)this + v2 + 7)), 0, 8LL * *((int *)this + v2 + 16));
      *((_DWORD *)this + v2 + 16) = 0;
      result = (unsigned int)v2++;
    }
    while ( *((_DWORD *)this + 25) > (int)result );
  }
  *((_DWORD *)this + 4) = 0;
  return result;
}

