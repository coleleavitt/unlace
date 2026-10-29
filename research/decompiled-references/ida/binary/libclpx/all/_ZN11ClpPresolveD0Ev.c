void __fastcall ClpPresolve::~ClpPresolve(ClpPresolve *this)
{
  ClpPresolve::~ClpPresolve(this);
  operator delete(this);
}

