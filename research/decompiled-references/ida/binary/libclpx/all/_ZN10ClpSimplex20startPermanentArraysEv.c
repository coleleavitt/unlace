__int64 __fastcall ClpSimplex::startPermanentArrays(ClpSimplex *this)
{
  int v1; // ebp
  int v2; // r12d
  __int64 result; // rax

  v1 = *((_DWORD *)this + 121);
  v2 = *((_DWORD *)this + 120);
  ClpModel::startPermanentArrays(this);
  if ( *((_DWORD *)this + 121) != v1 || (result = 0, *((_DWORD *)this + 120) != v2) )
  {
    ClpSimplex::createRim(this, 63, 0, 0);
    return 1;
  }
  return result;
}

