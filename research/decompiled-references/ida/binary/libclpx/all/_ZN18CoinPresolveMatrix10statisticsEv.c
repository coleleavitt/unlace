int __fastcall CoinPresolveMatrix::statistics(CoinPresolveMatrix *this)
{
  int result; // eax
  struct rusage v2; // [rsp+0h] [rbp-98h] BYREF

  *((_BYTE *)this + 321) = 1;
  result = getrusage(RUSAGE_SELF, &v2);
  *((double *)this + 41) = (double)SLODWORD(v2.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v2.ru_utime.tv_sec);
  return result;
}

