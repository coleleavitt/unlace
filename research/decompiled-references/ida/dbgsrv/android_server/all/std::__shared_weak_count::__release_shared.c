/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_shared
// Address: 0x00000000000D5AC0

//----- (00000000000D5AC0) ----------------------------------------------------
unsigned __int64 *__fastcall std::__shared_weak_count::__release_shared(unsigned __int64 *this)
{
  __int64 v1; // x19
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x9
  unsigned __int64 *v4; // x20
  unsigned __int64 v6; // x8

  v1 = (__int64)this;
  v2 = this + 1;
  do
    v3 = __ldaxr(v2);
  while ( __stlxr(v3 - 1, v2) );
  if ( !v3 )
  {
    v4 = this + 2;
    this = (unsigned __int64 *)(*(__int64 (__fastcall **)(unsigned __int64 *))(*this + 16))(this);
    if ( !atomic_load(v4) )
      return (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
    do
      v6 = __ldaxr(v4);
    while ( __stlxr(v6 - 1, v4) );
    if ( !v6 )
      return (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  }
  return this;
}
