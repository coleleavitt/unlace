void __fastcall ClpObjective::~ClpObjective(ClpObjective *this)
{
  ClpObjective::~ClpObjective(this);
  operator delete(this);
}

