void *__fastcall Clp_unboundedRay(__int64 a1)
{
  const void *v1; // rbp
  size_t v2; // rbx
  void *v3; // rax

  v1 = *(const void **)(*(_QWORD *)a1 + 216LL);
  if ( *(_DWORD *)(*(_QWORD *)a1 + 320LL) != 2 || !v1 )
    return nullptr;
  v2 = 8LL * *(int *)(*(_QWORD *)a1 + 108LL);
  v3 = malloc(v2);
  return memcpy(v3, v1, v2);
}

