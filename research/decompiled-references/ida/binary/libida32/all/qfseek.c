__int64 __fastcall qfseek(FILE *a1, __off64_t a2, int a3)
{
  unsigned int v3; // ebx

  if ( !a1 )
  {
    v3 = -1;
    set_qerrno(1, a2);
    *__errno_location() = 9;
    set_qerrno(1, a2);
    return v3;
  }
  v3 = fseeko64(a1, a2, a3);
  if ( !v3 )
    return v3;
  set_qerrno(1, a2);
  return v3;
}

