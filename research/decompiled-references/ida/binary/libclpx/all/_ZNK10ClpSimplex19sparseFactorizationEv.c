bool __fastcall ClpSimplex::sparseFactorization(ClpSimplex *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 1048) != 0;
  return result;
}

