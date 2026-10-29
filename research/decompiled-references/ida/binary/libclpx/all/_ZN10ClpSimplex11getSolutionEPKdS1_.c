__int64 __fastcall ClpSimplex::getSolution(ClpSimplex *this, const double *a2, const double *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = *((_QWORD *)this + 158);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 176);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    result = *(unsigned int *)(*(_QWORD *)(v3 + 16) + 56LL);
    if ( (_DWORD)result )
      return result;
  }
  ClpSimplex::createRim(this, 63, 0, -1);
  if ( **((int **)this + 157) < 0 )
    ClpSimplex::internalFactorize(this, 0);
  ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  ClpSimplex::deleteRim(this, 0);
  v6 = *((_QWORD *)this + 158);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
    return *(unsigned int *)(v7 + 176);
  else
    return *(unsigned int *)(*(_QWORD *)(v6 + 16) + 56LL);
}

