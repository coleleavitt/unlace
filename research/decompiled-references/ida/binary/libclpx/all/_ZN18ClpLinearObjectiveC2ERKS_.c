// Alternative name is '_ZN18ClpLinearObjectiveC1ERKS_'
void __fastcall ClpLinearObjective::ClpLinearObjective(ClpLinearObjective *this, const ClpLinearObjective *a2)
{
  unsigned __int64 v2; // rdx
  const void *v3; // r12
  size_t v4; // rbx
  void *v5; // rax
  void *v6; // rcx

  ClpObjective::ClpObjective(this, a2);
  v2 = *((int *)a2 + 8);
  v3 = *((const void **)a2 + 3);
  *(_QWORD *)this = &off_4D0520;
  *((_DWORD *)this + 8) = v2;
  if ( v3 )
  {
    if ( v2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v4 = 8 * v2;
    v5 = (void *)operator new[](8 * v2);
    v6 = memcpy(v5, v3, v4);
  }
  else
  {
    v6 = nullptr;
  }
  *((_QWORD *)this + 3) = v6;
}

