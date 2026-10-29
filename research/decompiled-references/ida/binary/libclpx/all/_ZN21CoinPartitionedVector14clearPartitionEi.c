void *__fastcall CoinPartitionedVector::clearPartition(CoinPartitionedVector *this, int a2)
{
  char *v2; // rbx
  void *result; // rax

  v2 = (char *)this + 4 * a2;
  result = memset((void *)(*((_QWORD *)this + 1) + 8LL * *((int *)v2 + 8)), 0, 8LL * *((int *)v2 + 17));
  *((_DWORD *)v2 + 17) = 0;
  return result;
}

