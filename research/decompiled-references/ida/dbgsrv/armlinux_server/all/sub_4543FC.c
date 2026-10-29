/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4543FC
// Address: 0x00000000004543FC

//----- (00000000004543FC) ----------------------------------------------------
void __fastcall __noreturn sub_4543FC(_QWORD *a1)
{
  _QWORD *v1; // x20
  void *v2; // x0
  __int64 v3; // x2
  unsigned int *v4; // x3
  int v5; // w1

  sub_49EF68(a1);
  v2 = (void *)v1[2];
  if ( v2 )
  {
    v1[3] = 0;
    j__free(v2);
  }
  v3 = v1[1];
  if ( (__int64 *)(v3 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    v4 = (unsigned int *)(v3 - 8);
    if ( &_pthread_key_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v3 - 8);
      *(_DWORD *)(v3 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      j__free_0((void *)(v3 - 24));
  }
  j__free_0(v1);
  sub_49DD38();
}
// 454400: variable 'v1' is possibly undefined
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
