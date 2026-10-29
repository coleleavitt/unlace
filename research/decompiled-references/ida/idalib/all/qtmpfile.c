FILE *qtmpfile()
{
  FILE *result; // rax

  result = tmpfile64();
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
