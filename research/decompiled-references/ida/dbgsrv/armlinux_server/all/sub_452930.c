/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452930
// Address: 0x0000000000452930

//----- (0000000000452930) ----------------------------------------------------
void __fastcall sub_452930(__int64 a1)
{
  _QWORD *v2; // x19
  __int64 v3; // x1
  _QWORD *v4; // x20
  void *v5; // x0
  void *v6; // x0
  unsigned int *v7; // x1
  int v8; // w2

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      v3 = v2[1];
      v5 = (void *)(v3 - 24);
      if ( (__int64 *)(v3 - 24) != std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v7 = (unsigned int *)(v3 - 8);
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
        }
        else
        {
          v8 = *(_DWORD *)(v3 - 8);
          *(_DWORD *)(v3 - 8) = v8 - 1;
        }
        if ( v8 <= 0 )
          j__free_0(v5);
      }
      v6 = v2;
      v2 = v4;
      j__free_0(v6);
    }
    while ( v4 );
  }
  memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( *(_QWORD *)a1 != a1 + 48 )
    j__free_0(*(void **)a1);
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
