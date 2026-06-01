int __cdecl unlink(const char *a1)
{
  int result; // w0

  result = __unlink(a1);
  if ( !result )
    atomic_fetch_add(__remove_counter, 1u);
  return result;
}
