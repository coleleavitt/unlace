int __fastcall qchsize(int a1, __off64_t a2)
{
  int result; // eax

  result = ftruncate64(a1, a2);
  if ( result )
  {
    set_qerrno(1);
    return -1;
  }
  return result;
}
