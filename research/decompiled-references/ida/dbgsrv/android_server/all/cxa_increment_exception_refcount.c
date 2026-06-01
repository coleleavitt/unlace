/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_increment_exception_refcount
// Address: 0x00000000000D66FC

//----- (00000000000D66FC) ----------------------------------------------------
__int64 __fastcall _cxa_increment_exception_refcount(__int64 result)
{
  unsigned __int64 *v1; // x8
  unsigned __int64 v2; // x9

  if ( result )
  {
    v1 = (unsigned __int64 *)(result - 128);
    do
      v2 = __ldaxr(v1);
    while ( __stlxr(v2 + 1, v1) );
  }
  return result;
}
