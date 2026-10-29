/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc_or_throw
// Address: 0x000B0DA0

//----- (000B0DA0) --------------------------------------------------------
void *__cdecl qrealloc_or_throw(void *ptr, size_t size)
{
  void *result; // eax

  if ( size >= 0x7FFFFFFF )
LABEL_7:
    sub_B0D70();
  if ( !size )
  {
    free(ptr);
    sub_B0D70();
  }
  result = realloc(ptr, size);
  if ( !result )
  {
    set_qerrno(1);
    goto LABEL_7;
  }
  return result;
}
