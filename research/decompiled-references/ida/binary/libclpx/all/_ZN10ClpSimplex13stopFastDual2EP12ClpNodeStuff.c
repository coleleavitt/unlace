__int64 __fastcall ClpSimplex::stopFastDual2(ClpSimplex *this, ClpNodeStuff *a2)
{
  void *v3; // rdi
  int v4; // eax
  CoinFactorization *v5; // rdi
  __int64 result; // rax

  v3 = *((void **)a2 + 11);
  if ( v3 )
    operator delete[](v3);
  v4 = *((_DWORD *)a2 + 35);
  *((_QWORD *)a2 + 11) = 0;
  *((_DWORD *)this + 84) = v4;
  if ( (v4 & 0x10000) == 0 )
  {
    v5 = *(CoinFactorization **)(*((_QWORD *)this + 158) + 8LL);
    if ( v5 )
      CoinFactorization::setPersistenceFlag(v5, 0);
  }
  result = ClpSimplex::deleteRim(this, 1);
  *((_DWORD *)this + 79) &= 0xFFFF0000;
  *((_DWORD *)a2 + 36) &= ~0x10000u;
  return result;
}

