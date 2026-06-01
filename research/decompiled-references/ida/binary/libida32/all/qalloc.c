void *__fastcall qalloc(signed __int64 a1, __int64 a2)
{
  void *v2; // rbx

  if ( !a1 )
    return nullptr;
  if ( a1 == 3735928559LL || a1 <= 0 )
  {
    *__errno_location() = 12;
    set_qerrno(1, a2);
    return nullptr;
  }
  v2 = malloc(a1);
  if ( !v2 )
    set_qerrno(1, a2);
  return v2;
}

