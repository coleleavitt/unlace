__int64 __fastcall ClpSimplexPrimal::unPerturb(ClpSimplexPrimal *this)
{
  void *v2; // rbp
  ClpNonLinearCost *v3; // rbp

  if ( *((_DWORD *)this + 327) != 101 )
    return 0;
  ClpSimplex::createRim(this, 5, 0, 0);
  ClpSimplex::sanityCheck(this);
  ClpSimplexPrimal::unflag(this);
  v2 = *((void **)this + 165);
  if ( v2 )
  {
    ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
    operator delete(v2);
  }
  v3 = (ClpNonLinearCost *)operator new(0x98u);
  ClpNonLinearCost::ClpNonLinearCost(v3, this, 1);
  *((_QWORD *)this + 165) = v3;
  *((_DWORD *)this + 327) = 102;
  ClpNonLinearCost::checkInfeasibilities(v3, 0.0);
  return 1;
}

