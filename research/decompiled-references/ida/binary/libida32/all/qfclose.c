__int64 __fastcall qfclose(FILE *a1, __int64 a2)
{
  unsigned int v2; // ebx

  if ( !a1 )
  {
    v2 = -1;
    set_qerrno(1, a2);
    *__errno_location() = 9;
    set_qerrno(1, a2);
    return v2;
  }
  v2 = fclose(a1);
  if ( !v2 )
    return v2;
  set_qerrno(1, a2);
  return v2;
}

