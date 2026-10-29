__int64 __fastcall ClpSimplex::setInitialDenseFactorization(ClpSimplex *this, char a2)
{
  int v2; // edx
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = *((_DWORD *)this + 84);
  result = v2 & 0xFFFFFFF7;
  v4 = v2 | 8;
  if ( a2 )
    result = v4;
  *((_DWORD *)this + 84) = result;
  return result;
}

