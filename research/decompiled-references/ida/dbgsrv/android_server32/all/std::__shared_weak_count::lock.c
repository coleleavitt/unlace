/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::lock
// Address: 0x0008FA64

//----- (0008FA64) --------------------------------------------------------
int __fastcall std::__shared_weak_count::lock(int this)
{
  unsigned int v1; // r3
  unsigned int *v2; // r12
  unsigned int v3; // r2

  v1 = *(_DWORD *)(this + 4);
  v2 = (unsigned int *)(this + 4);
  __dmb(0xBu);
  while ( 1 )
  {
    if ( v1 == -1 )
      return 0;
    v3 = __ldrex(v2);
    if ( v3 != v1 )
    {
      __clrex();
      goto LABEL_3;
    }
    __dmb(0xBu);
    if ( !__strex(v1 + 1, v2) )
      break;
LABEL_3:
    __dmb(0xBu);
    v1 = v3;
  }
  __dmb(0xBu);
  return this;
}
