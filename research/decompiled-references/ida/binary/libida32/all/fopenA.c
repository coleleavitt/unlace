FILE *__fastcall fopenA(const char *a1)
{
  FILE *result; // rax

  result = sub_817EC0(a1, "ae");
  if ( !result )
  {
    set_qerrno(1, "ae");
    return nullptr;
  }
  return result;
}

