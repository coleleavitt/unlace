/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_unexpected
// Address: 0x00000000000D9B44

//----- (00000000000D9B44) ----------------------------------------------------
unsigned __int64 __fastcall std::set_unexpected(void (__noreturn *a1)())
{
  void (__noreturn *v1)(); // x8
  unsigned __int64 result; // x0

  v1 = sub_D9CC0;
  if ( a1 )
    v1 = a1;
  do
    result = __ldaxr((unsigned __int64 *)&_cxa_unexpected_handler);
  while ( __stlxr((unsigned __int64)v1, (unsigned __int64 *)&_cxa_unexpected_handler) );
  return result;
}
// 1669B8: using guessed type void (__fastcall __noreturn *_cxa_unexpected_handler)();
