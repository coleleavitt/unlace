/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_weak
// Address: 0x00000000000D5B3C

//----- (00000000000D5B3C) ----------------------------------------------------
unsigned __int64 *__fastcall std::__shared_weak_count::__release_weak(unsigned __int64 *this)
{
  unsigned __int64 *v1; // x8
  unsigned __int64 v3; // x9

  v1 = this + 2;
  if ( !atomic_load(this + 2) )
    return (unsigned __int64 *)(*(__int64 (__fastcall **)(unsigned __int64 *))(*this + 32))(this);
  do
    v3 = __ldaxr(v1);
  while ( __stlxr(v3 - 1, v1) );
  if ( !v3 )
    return (unsigned __int64 *)(*(__int64 (__fastcall **)(unsigned __int64 *))(*this + 32))(this);
  return this;
}
