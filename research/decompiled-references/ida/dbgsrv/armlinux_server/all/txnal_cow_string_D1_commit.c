/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: txnal_cow_string_D1_commit
// Address: 0x00000000004A3E90

//----- (00000000004A3E90) ----------------------------------------------------
void __fastcall _txnal_cow_string_D1_commit(__int64 *a1)
{
  unsigned int *v1; // x2
  int v2; // w1

  if ( a1 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = (unsigned int *)(a1 + 2);
      do
        v2 = __ldaxr(v1);
      while ( __stlxr(v2 - 1, v1) );
    }
    else
    {
      v2 = *((_DWORD *)a1 + 4);
      *((_DWORD *)a1 + 4) = v2 - 1;
    }
    if ( v2 <= 0 )
      j_j__free_0_0(a1);
  }
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
