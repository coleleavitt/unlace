void *__fastcall qcalloc(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rcx
  void *result; // rax

  v2 = a2 * a1;
  if ( !(a2 * a1) )
    return nullptr;
  if ( a1 && a2 && !is_mul_ok(a2, a1) || v2 == 3735928559LL || v2 <= 0 )
  {
    *__errno_location() = 12;
    set_qerrno(1, a2);
    goto LABEL_10;
  }
  a2 = 1;
  result = calloc(v2, 1u);
  if ( !result )
  {
LABEL_10:
    set_qerrno(1, a2);
    return nullptr;
  }
  return result;
}

