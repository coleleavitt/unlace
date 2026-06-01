FILE *__fastcall fopenWB(const char *a1)
{
  FILE *result; // rax

  result = sub_817EC0(a1, "wbe");
  if ( !result )
  {
    set_qerrno(1, "wbe");
    return nullptr;
  }
  return result;
}

