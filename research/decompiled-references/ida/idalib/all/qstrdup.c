void *__fastcall qstrdup(const char *a1)
{
  size_t v1; // r12
  void *v2; // rax
  void *v3; // rbp

  if ( !a1 )
    return nullptr;
  v1 = strlen(a1) + 1;
  v2 = malloc(v1);
  v3 = v2;
  if ( !v2 )
  {
    set_qerrno(1);
    *__errno_location() = 12;
    set_qerrno(1);
    return nullptr;
  }
  qstrncpy(v2, a1, v1);
  return v3;
}
