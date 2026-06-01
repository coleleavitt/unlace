/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1A88
// Address: 0x00000000004A1A88

//----- (00000000004A1A88) ----------------------------------------------------
void __fastcall sub_4A1A88(__int64 *a1)
{
  __int64 v1; // x2
  __int64 *v2; // x0
  unsigned int *v3; // x2
  int v4; // w1

  v1 = *a1;
  v2 = (__int64 *)(*a1 - 24);
  if ( v2 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = (unsigned int *)(v1 - 8);
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v4 - 1;
    }
    if ( v4 <= 0 )
      j_j__free_0_0(v2);
  }
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
