void __fastcall ClpPEDualRowSteepest::~ClpPEDualRowSteepest(ClpPEDualRowSteepest *this)
{
  ClpPEDualRowSteepest::~ClpPEDualRowSteepest(this);
  operator delete(this);
}

