/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_increment_exception_refcount
// Address: 0x00000000000CF6A0

//----- (00000000000CF6A0) ----------------------------------------------------
void __fastcall _cxa_increment_exception_refcount(__int64 a1)
{
  if ( a1 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 - 128), 1u);
}
