/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452C90
// Address: 0x0000000000452C90

//----- (0000000000452C90) ----------------------------------------------------
void *__fastcall sub_452C90(__int64 a1)
{
  _QWORD *v2; // x19
  void *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x1
  void *v6; // x0
  void *v7; // x0
  void *result; // x0
  unsigned int *v9; // x1
  int v10; // w2

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = (void *)v2[2];
      v4 = (_QWORD *)*v2;
      if ( v3 )
      {
        v2[3] = 0;
        j__free(v3);
      }
      v5 = v2[1];
      v6 = (void *)(v5 - 24);
      if ( (__int64 *)(v5 - 24) != std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v9 = (unsigned int *)(v5 - 8);
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
        }
        else
        {
          v10 = *(_DWORD *)(v5 - 8);
          *(_DWORD *)(v5 - 8) = v10 - 1;
        }
        if ( v10 <= 0 )
          j__free_0(v6);
      }
      v7 = v2;
      v2 = v4;
      j__free_0(v7);
    }
    while ( v4 );
  }
  result = memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
