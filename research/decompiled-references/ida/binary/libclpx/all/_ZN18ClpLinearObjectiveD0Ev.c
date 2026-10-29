void __fastcall ClpLinearObjective::~ClpLinearObjective(ClpLinearObjective *this)
{
  ClpLinearObjective::~ClpLinearObjective(this);
  operator delete(this);
}

