FILE *__fastcall fopenWT(const char *a1)
{
  FILE *result; // rax

  result = sub_83B280(a1, "wte");
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
