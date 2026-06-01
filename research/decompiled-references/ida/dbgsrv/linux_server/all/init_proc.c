/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: init_proc
// Address: 0x0000000000405000

//----- (0000000000405000) ----------------------------------------------------
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
  return result;
}
// 4C9D58: using guessed type __int64 _gmon_start__(void);
