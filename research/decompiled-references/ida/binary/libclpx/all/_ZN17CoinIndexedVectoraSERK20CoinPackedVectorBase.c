CoinIndexedVector *__fastcall CoinIndexedVector::operator=(CoinIndexedVector *this, __int64 *a2)
{
  __int64 v2; // rax
  const double *v3; // r13
  const int *v4; // r12
  int v5; // eax

  CoinIndexedVector::clear(this);
  v2 = *a2;
  *((_BYTE *)this + 28) = 0;
  v3 = (const double *)(*(__int64 (__fastcall **)(__int64 *))(v2 + 16))(a2);
  v4 = (const int *)(*(__int64 (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  v5 = (*(__int64 (__fastcall **)(__int64 *))*a2)(a2);
  CoinIndexedVector::gutsOfSetVector(this, v5, v4, v3);
  return this;
}

