FILE *__fastcall fopenWB(const char *a1)
{
  FILE *result; // rax

  result = sub_83B280(a1, "wbe");
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
