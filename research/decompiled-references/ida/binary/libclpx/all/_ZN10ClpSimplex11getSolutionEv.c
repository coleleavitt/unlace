__int64 __fastcall ClpSimplex::getSolution(const void **this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  void *v5; // r12
  void *v6; // rbp
  unsigned int Solution; // ebx

  v2 = *((int *)this + 26);
  if ( v2 > 0xFFFFFFFFFFFFFFFLL
    || (v3 = operator new[](8 * v2), v4 = *((int *)this + 27), v5 = (void *)v3, v4 > 0xFFFFFFFFFFFFFFFLL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v6 = (void *)operator new[](8 * v4);
  memcpy(v5, *(this + 151), 8LL * *((int *)this + 26));
  memcpy(v6, *(this + 152), 8LL * *((int *)this + 27));
  Solution = ClpSimplex::getSolution((ClpSimplex *)this, (const double *)v5, (const double *)v6);
  operator delete[](v5);
  operator delete[](v6);
  return Solution;
}

