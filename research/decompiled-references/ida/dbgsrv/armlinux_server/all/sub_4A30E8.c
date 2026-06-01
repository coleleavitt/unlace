/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A30E8
// Address: 0x00000000004A30E8

//----- (00000000004A30E8) ----------------------------------------------------
void *__fastcall sub_4A30E8(__int64 a1, __int64 a2)
{
  unsigned int *v3; // x3
  unsigned int v5; // w0

  v3 = (unsigned int *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 16) & 0x80000000) != 0 )
    return sub_4A2910((size_t *)a1, a2, 0);
  if ( (__int64 *)a1 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      do
        v5 = __ldaxr(v3);
      while ( __stlxr(v5 + 1, v3) );
    }
    else
    {
      ++*(_DWORD *)(a1 + 16);
    }
  }
  return (void *)(a1 + 24);
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
