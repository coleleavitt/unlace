/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A29C0
// Address: 0x00000000004A29C0

//----- (00000000004A29C0) ----------------------------------------------------
void __fastcall sub_4A29C0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // x4
  unsigned __int64 v3; // x3
  unsigned __int64 v4; // x2
  void *v6; // x21
  __int64 v7; // x2
  __int64 *v8; // x0
  int v9; // w2
  unsigned int *v10; // x2
  int v11; // w1
  __int64 v12; // [xsp+38h] [xbp-8h] BYREF

  v2 = *a1;
  if ( a2 != *(_QWORD *)(*a1 - 16) || (v9 = atomic_load((unsigned int *)(v2 - 8)), v9 > 0) )
  {
    v3 = a2;
    v4 = *(_QWORD *)(v2 - 24);
    if ( a2 < v4 )
      v3 = *(_QWORD *)(v2 - 24);
    v6 = sub_4A2910((size_t *)(v2 - 24), (__int64)&v12, v3 - v4);
    v7 = *a1;
    v8 = (__int64 *)(*a1 - 24);
    if ( v8 != std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v10 = (unsigned int *)(v7 - 8);
        do
          v11 = __ldaxr(v10);
        while ( __stlxr(v11 - 1, v10) );
      }
      else
      {
        v11 = *(_DWORD *)(v7 - 8);
        *(_DWORD *)(v7 - 8) = v11 - 1;
      }
      if ( v11 <= 0 )
        j_j__free_0_0(v8);
    }
    *a1 = (__int64)v6;
  }
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
