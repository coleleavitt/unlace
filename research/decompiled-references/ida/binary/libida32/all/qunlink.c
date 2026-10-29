__int64 __fastcall qunlink(const char *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = unlink(a1);
  if ( !v2 )
    return 0;
  set_qerrno(1, a2);
  return v2;
}

