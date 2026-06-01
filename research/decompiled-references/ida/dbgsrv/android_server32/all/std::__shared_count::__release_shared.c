/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__release_shared
// Address: 0x0008F9AC

//----- (0008F9AC) --------------------------------------------------------
int __fastcall std::__shared_count::__release_shared(std::__shared_count *this)
{
  unsigned int *v1; // r12
  unsigned int v2; // r2

  v1 = (unsigned int *)((char *)this + 4);
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  __dmb(0xBu);
  if ( v2 )
    return 0;
  (*(void (__fastcall **)(std::__shared_count *))(*(_DWORD *)this + 8))(this);
  return 1;
}
