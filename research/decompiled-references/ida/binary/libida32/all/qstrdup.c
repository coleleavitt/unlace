void *__fastcall qstrdup(const char *a1, __int64 a2)
{
  size_t v2; // r12
  void *v3; // rax
  void *v4; // rbp

  if ( !a1 )
    return nullptr;
  v2 = strlen(a1) + 1;
  v3 = malloc(v2);
  v4 = v3;
  if ( !v3 )
  {
    set_qerrno(1, a2);
    *__errno_location() = 12;
    set_qerrno(1, a2);
    return nullptr;
  }
  qstrncpy(v3, a1, v2);
  return v4;
}

