void *__fastcall sub_55CCB0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( a1 )
  {
    if ( !result )
    {
      fprintf(stderr, "tree-sitter failed to allocate %zu bytes", a1);
      abort();
    }
  }
  return result;
}
