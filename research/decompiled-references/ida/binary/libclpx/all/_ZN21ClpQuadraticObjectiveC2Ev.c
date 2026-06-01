// Alternative name is '_ZN21ClpQuadraticObjectiveC1Ev'
void __fastcall ClpQuadraticObjective::ClpQuadraticObjective(ClpQuadraticObjective *this)
{
  ClpObjective::ClpObjective(this);
  *((_QWORD *)this + 2) = 2;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_BYTE *)this + 56) = 0;
  *(_QWORD *)this = &off_4D12A0;
}

