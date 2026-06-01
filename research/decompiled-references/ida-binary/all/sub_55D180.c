void *__fastcall sub_55D180(void *a1, size_t a2)
{
  void *result; // rax

  result = realloc(a1, a2);
  if ( a2 )
  {
    if ( !result )
    {
      fprintf(stderr, "tree-sitter failed to reallocate %zu bytes", a2);
      abort();
    }
  }
  return result;
}
