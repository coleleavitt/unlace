void *__fastcall CoinSimpFactorization::copyRowPermutations(CoinSimpFactorization *this)
{
  memcpy(*((void **)this + 55), *((const void **)this + 53), 4LL * *((int *)this + 9));
  return memcpy(*((void **)this + 56), *((const void **)this + 54), 4LL * *((int *)this + 9));
}

