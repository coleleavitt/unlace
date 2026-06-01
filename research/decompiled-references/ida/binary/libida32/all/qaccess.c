__int64 __fastcall qaccess(const char *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = access(a1, a2);
  if ( !v2 )
    return 0;
  set_qerrno(1, a2);
  return v2;
}

