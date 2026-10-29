/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407038
// Address: 0x0000000000407038

//----- (0000000000407038) ----------------------------------------------------
void *sub_407038()
{
  void *result; // x0

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (void *)__gmon_start__();
  return result;
}
// 406290: using guessed type __int64 __gmon_start__(void);
