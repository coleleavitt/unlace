void *__fastcall CoinDenseVector<double>::clear(int *a1)
{
  return memset(*((void **)a1 + 1), 0, 8LL * *a1);
}

