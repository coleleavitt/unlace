/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__release_shared
// Address: 0x00000000000D5A50

//----- (00000000000D5A50) ----------------------------------------------------
__int64 __fastcall std::__shared_count::__release_shared(std::__shared_count *this)
{
  unsigned __int64 *v1; // x8
  unsigned __int64 v2; // x9

  v1 = (unsigned __int64 *)((char *)this + 8);
  do
    v2 = __ldaxr(v1);
  while ( __stlxr(v2 - 1, v1) );
  if ( v2 )
    return 0;
  (*(void (__fastcall **)(std::__shared_count *))(*(_QWORD *)this + 16LL))(this);
  return 1;
}
