__int64 __fastcall qmkdir(const char *a1, __mode_t a2)
{
  unsigned int v2; // ebx

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  set_qerrno(1);
  return 0xFFFFFFFFLL;
}
