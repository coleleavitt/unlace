/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A4348
// Address: 0x00000000004A4348

//----- (00000000004A4348) ----------------------------------------------------
void __fastcall __noreturn sub_4A4348(struct _Unwind_Exception *a1)
{
  __int64 v1; // x29
  __int64 v2; // x2
  unsigned int *v4; // x3
  int v5; // w1

  v2 = *(_QWORD *)(v1 + 40);
  if ( (__int64 *)(v2 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    v4 = (unsigned int *)(v2 - 8);
    if ( &_pthread_key_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      j_j__free_0_0((void *)(v2 - 24));
  }
  _Unwind_Resume(a1);
}
// 4A434C: variable 'v1' is possibly undefined
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
