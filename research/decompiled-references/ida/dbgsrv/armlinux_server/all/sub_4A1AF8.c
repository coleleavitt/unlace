/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1AF8
// Address: 0x00000000004A1AF8

//----- (00000000004A1AF8) ----------------------------------------------------
void __fastcall sub_4A1AF8(_BYTE **a1)
{
  _BYTE *v1; // x1
  unsigned int *v2; // x2
  int v3; // w3
  _BYTE *v5; // x0
  unsigned int v6; // w1
  int v7; // w2

  v1 = *a1;
  v2 = (unsigned int *)(*a1 - 8);
  v3 = atomic_load(v2);
  if ( v3 <= 0 )
  {
    if ( v1 - 24 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
    {
      *((_QWORD *)v1 - 3) = 0;
      *((_DWORD *)v1 - 2) = 0;
      *v1 = 0;
    }
  }
  else
  {
    v5 = v1 - 24;
    if ( v1 - 24 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        do
          v6 = __ldaxr(v2);
        while ( __stlxr(v6 - 1, v2) );
        v7 = v6;
      }
      else
      {
        v7 = *((_DWORD *)v1 - 2);
        *((_DWORD *)v1 - 2) = v7 - 1;
      }
      if ( v7 <= 0 )
        j_j__free_0_0(v5);
    }
    *a1 = &std::string::_Rep::_S_empty_rep_storage[3];
  }
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
