/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1A38
// Address: 0x00000000004A1A38

//----- (00000000004A1A38) ----------------------------------------------------
void __fastcall sub_4A1A38(void *ptr)
{
  unsigned int *v1; // x3
  int v2; // w2

  if ( ptr != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = (unsigned int *)((char *)ptr + 16);
      do
        v2 = __ldaxr(v1);
      while ( __stlxr(v2 - 1, v1) );
    }
    else
    {
      v2 = *((_DWORD *)ptr + 4);
      *((_DWORD *)ptr + 4) = v2 - 1;
    }
    if ( v2 <= 0 )
      j_j__free_0_0(ptr);
  }
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
