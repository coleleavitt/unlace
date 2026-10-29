void *__fastcall qalloc(signed __int64 a1)
{
  void *v1; // rbx

  if ( !a1 )
    return nullptr;
  if ( a1 == 3735928559LL || a1 <= 0 )
  {
    *__errno_location() = 12;
    set_qerrno(1);
    return nullptr;
  }
  v1 = malloc(a1);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
