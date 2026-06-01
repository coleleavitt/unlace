FILE *__fastcall fopenM(const char *a1)
{
  FILE *result; // rax

  result = sub_817EC0(a1, "rb+e");
  if ( !result )
  {
    set_qerrno(1, "rb+e");
    return nullptr;
  }
  return result;
}

