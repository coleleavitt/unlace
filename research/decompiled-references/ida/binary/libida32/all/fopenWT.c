FILE *__fastcall fopenWT(const char *a1)
{
  FILE *result; // rax

  result = sub_817EC0(a1, "wte");
  if ( !result )
  {
    set_qerrno(1, "wte");
    return nullptr;
  }
  return result;
}

