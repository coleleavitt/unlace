FILE *__fastcall fopenRT(const char *a1)
{
  FILE *result; // rax

  result = sub_817EC0(a1, "rte");
  if ( !result )
  {
    set_qerrno(1, "rte");
    return nullptr;
  }
  return result;
}

