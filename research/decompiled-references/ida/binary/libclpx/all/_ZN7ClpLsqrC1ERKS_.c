// Alternative name is '_ZN7ClpLsqrC2ERKS_'
void __fastcall ClpLsqr::ClpLsqr(ClpLsqr *this, const ClpLsqr *a2)
{
  unsigned __int64 v2; // rdx
  const void *v3; // r12
  __int64 v4; // xmm0_8
  __int64 v5; // rax
  size_t v6; // rbx
  void *v7; // rax
  void *v8; // rcx

  v2 = *(int *)a2;
  v3 = *((const void **)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 3) = v4;
  *(_DWORD *)this = v2;
  *((_QWORD *)this + 1) = v5;
  if ( v3 )
  {
    if ( v2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v6 = 8 * v2;
    v7 = (void *)operator new[](8 * v2);
    v8 = memcpy(v7, v3, v6);
  }
  else
  {
    v8 = nullptr;
  }
  *((_QWORD *)this + 2) = v8;
}

