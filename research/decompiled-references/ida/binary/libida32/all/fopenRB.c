FILE *__fastcall fopenRB(const char *a1)
{
  FILE *result; // rax

  result = sub_817EC0(a1, "rbe");
  if ( !result )
  {
    set_qerrno(1, "rbe");
    return nullptr;
  }
  return result;
}

