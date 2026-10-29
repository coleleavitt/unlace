// Alternative name is '_ZN18ClpLinearObjectiveC2EPKdi'
void __fastcall ClpLinearObjective::ClpLinearObjective(ClpLinearObjective *this, const double *a2, int a3)
{
  void *v4; // rax
  void *v5; // rcx

  ClpObjective::ClpObjective(this);
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 8) = a3;
  *(_QWORD *)this = &off_4D0520;
  if ( (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v4 = (void *)operator new[](8LL * a3);
  v5 = v4;
  if ( a2 )
  {
    *((_QWORD *)this + 3) = memcpy(v4, a2, 8LL * a3);
  }
  else
  {
    if ( a3 > 0 )
      v5 = memset(v4, 0, 8LL * (unsigned int)(a3 - 1) + 8);
    *((_QWORD *)this + 3) = v5;
  }
}

