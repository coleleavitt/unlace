__int64 __fastcall ClpSimplex::swapFactorization(ClpSimplex *this, ClpFactorization *a2)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 158);
  *((_QWORD *)this + 158) = a2;
  return result;
}

