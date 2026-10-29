void __fastcall ClpModel::setRowObjective(ClpModel *this, const double *a2)
{
  void *v3; // rdi
  unsigned __int64 v4; // rdx
  size_t v5; // rbx
  void *v6; // rax
  void *v7; // rcx

  v3 = *((void **)this + 21);
  if ( v3 )
    operator delete[](v3);
  v4 = *((int *)this + 26);
  if ( a2 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v5 = 8 * v4;
    v6 = (void *)operator new[](8 * v4);
    v7 = memcpy(v6, a2, v5);
  }
  else
  {
    v7 = nullptr;
  }
  *((_QWORD *)this + 21) = v7;
  *((_DWORD *)this + 79) = 0;
}

