void __fastcall ClpPrimalColumnDantzig::~ClpPrimalColumnDantzig(ClpPrimalColumnDantzig *this)
{
  ClpPrimalColumnDantzig::~ClpPrimalColumnDantzig(this);
  operator delete(this);
}

