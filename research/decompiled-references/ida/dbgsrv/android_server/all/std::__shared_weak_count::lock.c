/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::lock
// Address: 0x00000000000D5B6C

//----- (00000000000D5B6C) ----------------------------------------------------
__int64 __fastcall std::__shared_weak_count::lock(__int64 this)
{
  unsigned __int64 *v1; // x8
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x10

  v1 = (unsigned __int64 *)(this + 8);
  v2 = atomic_load((unsigned __int64 *)(this + 8));
  if ( v2 != -1 )
  {
    do
    {
      v3 = __ldaxr(v1);
      if ( v3 == v2 )
      {
        if ( !__stlxr(v2 + 1, v1) )
          return this;
      }
      else
      {
        __clrex();
      }
      v2 = v3;
    }
    while ( v3 != -1 );
  }
  return 0;
}
