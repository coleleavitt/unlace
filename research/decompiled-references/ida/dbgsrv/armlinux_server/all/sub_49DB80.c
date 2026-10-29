/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DB80
// Address: 0x000000000049DB80

//----- (000000000049DB80) ----------------------------------------------------
unsigned __int64 __fastcall sub_49DB80(unsigned __int64 a1)
{
  unsigned __int64 result; // x0

  do
    result = __ldaxr((unsigned __int64 *)&__cxxabiv1::__terminate_handler);
  while ( __stlxr(a1, (unsigned __int64 *)&__cxxabiv1::__terminate_handler) );
  return result;
}
// 522028: using guessed type void (__fastcall __noreturn *__cxxabiv1::__terminate_handler)(int, int, int, int, int, int, int, int, char);
