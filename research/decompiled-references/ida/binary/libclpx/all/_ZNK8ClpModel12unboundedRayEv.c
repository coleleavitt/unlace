void *__fastcall ClpModel::unboundedRay(ClpModel *this)
{
  const void *v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  void *v4; // rax

  if ( *((_DWORD *)this + 80) != 2 )
    return nullptr;
  v1 = *((const void **)this + 27);
  v2 = *((int *)this + 27);
  if ( !v1 )
    return nullptr;
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = 8 * v2;
  v4 = (void *)operator new[](v3);
  return memcpy(v4, v1, v3);
}

