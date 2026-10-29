__int64 __fastcall ClpLinearObjective::operator=(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  void *v4; // rdi
  const void *v5; // r12
  size_t v6; // rbp
  void *v7; // rax
  void *v8; // rcx

  if ( a1 != a2 )
  {
    ClpObjective::operator=();
    v3 = *(int *)(a2 + 32);
    v4 = *(void **)(a1 + 24);
    *(_DWORD *)(a1 + 32) = v3;
    if ( v4 )
    {
      operator delete[](v4);
      v3 = *(int *)(a1 + 32);
    }
    v5 = *(const void **)(a2 + 24);
    if ( v5 )
    {
      if ( v3 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v6 = 8 * v3;
      v7 = (void *)operator new[](8 * v3);
      v8 = memcpy(v7, v5, v6);
    }
    else
    {
      v8 = nullptr;
    }
    *(_QWORD *)(a1 + 24) = v8;
  }
  return a1;
}

