__off64_t __fastcall qtell(int a1)
{
  __off64_t result; // rax

  result = lseek64(a1, 0, 1);
  if ( result == -1 )
  {
    set_qerrno(1);
    return -1;
  }
  return result;
}
