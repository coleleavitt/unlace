// Alternative name is '_ZN21ClpQuadraticObjectiveD2Ev'
void __fastcall ClpQuadraticObjective::~ClpQuadraticObjective(ClpQuadraticObjective *this)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi

  *(_QWORD *)this = &off_4D12A0;
  v2 = *((void **)this + 4);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 5);
  if ( v3 )
    operator delete[](v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  ClpObjective::~ClpObjective(this);
}

