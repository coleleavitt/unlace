void *__fastcall CoinDenseVector<float>::clear(int *a1)
{
  return memset(*((void **)a1 + 1), 0, 4LL * *a1);
}

