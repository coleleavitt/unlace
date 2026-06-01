ClpNonLinearCost **__fastcall ClpSimplex::operator=(ClpNonLinearCost **this, ClpNonLinearCost **a2)
{
  void *v2; // r12

  if ( this != a2 )
  {
    ClpSimplex::gutsOfDelete((ClpSimplex *)this, 0);
    v2 = *(this + 165);
    if ( v2 )
    {
      ClpNonLinearCost::~ClpNonLinearCost(*(this + 165));
      operator delete(v2);
    }
    *(this + 165) = nullptr;
    ClpModel::operator=((ClpModel *)this, (ClpModel *)a2);
    ClpSimplex::gutsOfCopy((ClpSimplex *)this, (const ClpSimplex *)a2);
  }
  return this;
}

