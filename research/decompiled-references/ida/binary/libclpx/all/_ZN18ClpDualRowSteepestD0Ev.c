void __fastcall ClpDualRowSteepest::~ClpDualRowSteepest(ClpDualRowSteepest *this)
{
  ClpDualRowSteepest::~ClpDualRowSteepest(this);
  operator delete(this);
}

