// Alternative name is '_ZN10ClpSimplexD2Ev'
void __fastcall ClpSimplex::~ClpSimplex(ClpNonLinearCost **this)
{
  void *v1; // rbp

  ClpSimplex::setPersistenceFlag((ClpSimplex *)this, 0);
  ClpSimplex::gutsOfDelete((ClpSimplex *)this, 0);
  v1 = *(this + 165);
  if ( v1 )
  {
    ClpNonLinearCost::~ClpNonLinearCost(*(this + 165));
    operator delete(v1);
  }
  ClpSimplexProgress::~ClpSimplexProgress((ClpSimplexProgress *)(this + 176));
  ClpModel::~ClpModel((ClpModel *)this);
}

