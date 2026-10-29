__int64 __fastcall qtouchfile(const char *a1)
{
  unsigned int v1; // ebx

  v1 = utime(a1, nullptr);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1, 0);
  return 0xFFFFFFFFLL;
}

