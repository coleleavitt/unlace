__off64_t __fastcall qseek(int a1, __off64_t a2, int a3)
{
  __off64_t result; // rax

  result = lseek64(a1, a2, a3);
  if ( result == -1 )
  {
    set_qerrno(1, a2);
    return -1;
  }
  return result;
}

