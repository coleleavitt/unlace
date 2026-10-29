/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450A88
// Address: 0x0000000000450A88

//----- (0000000000450A88) ----------------------------------------------------
void __fastcall sub_450A88(_QWORD *ptr)
{
  char *v2; // x0
  __int64 v3; // x21
  __int64 i; // x19
  char *v5; // x2
  void *v6; // x0
  __int64 v7; // x2
  void *v8; // x0
  unsigned int *v9; // x2
  int v10; // w1

  v2 = (char *)ptr[2];
  if ( v2 )
  {
    v3 = ptr[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[32 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
        }
        v2 = (char *)ptr[2];
      }
    }
    ptr[3] = 0;
    j__free(v2);
  }
  v7 = ptr[1];
  v8 = (void *)(v7 - 24);
  if ( (__int64 *)(v7 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v9 = (unsigned int *)(v7 - 8);
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = *(_DWORD *)(v7 - 8);
      *(_DWORD *)(v7 - 8) = v10 - 1;
    }
    if ( v10 <= 0 )
      j__free_0(v8);
  }
  j__free_0(ptr);
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
