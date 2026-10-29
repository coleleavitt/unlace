/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A28C0
// Address: 0x00000000004A28C0

//----- (00000000004A28C0) ----------------------------------------------------
__int64 __fastcall sub_4A28C0(__int64 a1)
{
  unsigned int *v2; // x1
  unsigned int v3; // w2

  if ( (__int64 *)a1 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v2 = (unsigned int *)(a1 + 16);
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 + 1, v2) );
    }
    else
    {
      ++*(_DWORD *)(a1 + 16);
    }
  }
  return a1 + 24;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
