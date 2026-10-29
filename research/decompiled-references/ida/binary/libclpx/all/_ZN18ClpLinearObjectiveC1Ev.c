// Alternative name is '_ZN18ClpLinearObjectiveC2Ev'
void __fastcall ClpLinearObjective::ClpLinearObjective(ClpLinearObjective *this)
{
  ClpObjective::ClpObjective(this);
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &off_4D0520;
}

