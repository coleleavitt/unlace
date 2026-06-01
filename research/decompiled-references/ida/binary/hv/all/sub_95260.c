__off64_t __fastcall sub_95260(int a1)
{
  __off64_t result; // rax

  result = lseek64(a1, 0, 1);
  if ( result == -1 )
  {
    sub_8F860(1u);
    return -1;
  }
  return result;
}

