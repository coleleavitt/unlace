void __fastcall ClpDualRowDantzig::~ClpDualRowDantzig(ClpDualRowDantzig *this)
{
  ClpDualRowDantzig::~ClpDualRowDantzig(this);
  operator delete(this);
}

