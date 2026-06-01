/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_weak
// Address: 0x0008FA36

//----- (0008FA36) --------------------------------------------------------
unsigned int *__fastcall std::__shared_weak_count::__release_weak(unsigned int *this)
{
  int v1; // r1
  unsigned int *v2; // r12
  unsigned int v3; // r2

  v1 = *(this + 2);
  __dmb(0xBu);
  if ( !v1 )
    return (unsigned int *)(*(int (__fastcall **)(unsigned int *))(*this + 16))(this);
  v2 = this + 2;
  __dmb(0xBu);
  do
    v3 = __ldrex(v2);
  while ( __strex(v3 - 1, v2) );
  __dmb(0xBu);
  if ( !v3 )
    return (unsigned int *)(*(int (__fastcall **)(unsigned int *))(*this + 16))(this);
  return this;
}
