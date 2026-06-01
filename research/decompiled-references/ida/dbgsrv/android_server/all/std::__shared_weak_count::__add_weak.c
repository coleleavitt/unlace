/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__add_weak
// Address: 0x00000000000D5AA8

//----- (00000000000D5AA8) ----------------------------------------------------
__int64 __fastcall std::__shared_weak_count::__add_weak(__int64 this)
{
  unsigned __int64 *v1; // x8
  unsigned __int64 v2; // x9

  v1 = (unsigned __int64 *)(this + 16);
  do
    v2 = __ldxr(v1);
  while ( __stxr(v2 + 1, v1) );
  return this;
}
