// Alternative name is '_ZN12ClpObjectiveC1ERKS_'
void __fastcall ClpObjective::ClpObjective(ClpObjective *this, const ClpObjective *a2)
{
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &off_4D0A50;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
}

