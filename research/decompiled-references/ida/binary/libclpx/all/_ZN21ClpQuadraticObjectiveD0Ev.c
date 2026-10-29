void __fastcall ClpQuadraticObjective::~ClpQuadraticObjective(ClpQuadraticObjective *this)
{
  ClpQuadraticObjective::~ClpQuadraticObjective(this);
  operator delete(this);
}

