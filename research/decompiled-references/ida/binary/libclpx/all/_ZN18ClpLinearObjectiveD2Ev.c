// Alternative name is '_ZN18ClpLinearObjectiveD1Ev'
void __fastcall ClpLinearObjective::~ClpLinearObjective(ClpLinearObjective *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &off_4D0520;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  ClpObjective::~ClpObjective(this);
}

