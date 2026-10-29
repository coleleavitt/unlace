__int64 __fastcall qftell(FILE *a1, __int64 a2)
{
  __off64_t v2; // rbx

  if ( !a1 )
  {
    v2 = -1;
    set_qerrno(1, a2);
    *__errno_location() = 9;
    set_qerrno(1, a2);
    return v2;
  }
  v2 = ftello64(a1);
  if ( v2 != -1 )
    return v2;
  set_qerrno(1, a2);
  return -1;
}

