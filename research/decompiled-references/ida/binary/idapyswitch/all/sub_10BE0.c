__off64_t __fastcall sub_10BE0(int a1, __off64_t a2, int a3)
{
  __off64_t result; // rax

  result = lseek64(a1, a2, a3);
  if ( result == -1 )
  {
    sub_F2F0(1u);
    return -1;
  }
  return result;
}

