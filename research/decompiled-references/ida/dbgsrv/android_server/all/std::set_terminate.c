/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_terminate
// Address: 0x00000000000D9B6C

//----- (00000000000D9B6C) ----------------------------------------------------
unsigned __int64 __fastcall std::set_terminate(void (__noreturn *a1)())
{
  void (__noreturn *v1)(); // x8
  unsigned __int64 result; // x0

  v1 = sub_D9B94;
  if ( a1 )
    v1 = a1;
  do
    result = __ldaxr((unsigned __int64 *)&_cxa_terminate_handler);
  while ( __stlxr((unsigned __int64)v1, (unsigned __int64 *)&_cxa_terminate_handler) );
  return result;
}
// 1669B0: using guessed type __int64 (__fastcall *_cxa_terminate_handler)();
