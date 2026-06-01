void *__fastcall CoinPartitionedVector::setPartitions(CoinPartitionedVector *this, int a2, const int *a3)
{
  void *result; // rax
  char *v5; // rdi

  if ( !a2 )
    return (void *)CoinPartitionedVector::clearAndReset(this);
  v5 = (char *)this + 32;
  *(v5 - 4) = 1;
  result = memcpy(v5, a3, 4LL * (a2 + 1));
  *((_DWORD *)this + 25) = a2;
  return result;
}

