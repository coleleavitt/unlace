/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_increment_exception_refcount
// Address: 0x000BD4C0

//----- (000BD4C0) --------------------------------------------------------
int __cdecl _cxa_increment_exception_refcount(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 - 36));
  return result;
}
