void *__fastcall sub_55CCF0(size_t a1, size_t a2)
{
  void *result; // rax

  result = calloc(a1, a2);
  if ( a1 )
  {
    if ( !result )
    {
      fprintf(stderr, "tree-sitter failed to allocate %zu bytes", a2 * a1);
      abort();
    }
  }
  return result;
}
