/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: init_proc
// Address: 0x0804B000

//----- (0804B000) --------------------------------------------------------
void *init_proc()
{
  void *result; // eax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (void *)((int (*)(void))_gmon_start__)();
  return result;
}
