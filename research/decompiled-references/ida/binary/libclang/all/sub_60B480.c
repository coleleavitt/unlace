char *sub_60B480()
{
  char *result; // rax

  result = getenv("LIBCLANG_BGPRIO_DISABLE");
  if ( !result )
    return (char *)sub_2648970(1);
  return result;
}

