/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A31E0
// Address: 0x00000000004A31E0

//----- (00000000004A31E0) ----------------------------------------------------
_QWORD *__fastcall sub_4A31E0(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v3; // x20
  _DWORD *v4; // x1
  size_t *v5; // x0
  unsigned int *v6; // x3
  __int64 *v7; // x0
  unsigned int *v9; // x1
  int v10; // w2
  unsigned int v11; // w0
  char v12; // [xsp+28h] [xbp+28h] BYREF

  v3 = (_DWORD *)*a2;
  v4 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 != v3 )
  {
    v5 = (size_t *)(v3 - 6);
    v6 = v3 - 2;
    if ( (*(v3 - 2) & 0x80000000) != 0 )
    {
      v3 = sub_4A2910(v5, (__int64)&v12, 0);
      v4 = (_DWORD *)*a1;
    }
    else if ( v5 != (size_t *)std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        do
          v11 = __ldaxr(v6);
        while ( __stlxr(v11 + 1, v6) );
        v7 = (__int64 *)(*a1 - 24LL);
        if ( v7 == std::string::_Rep::_S_empty_rep_storage )
        {
          *a1 = v3;
          return a1;
        }
LABEL_9:
        v9 = (unsigned int *)(v7 + 2);
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
LABEL_11:
        if ( v10 <= 0 )
        {
          j_j__free_0_0(v7);
          *a1 = v3;
          return a1;
        }
        goto LABEL_5;
      }
      v7 = (__int64 *)(v4 - 6);
      ++*(v3 - 2);
      if ( v4 - 6 == (_DWORD *)std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_5;
LABEL_14:
      v10 = *(v4 - 2);
      *(v4 - 2) = v10 - 1;
      goto LABEL_11;
    }
    v7 = (__int64 *)(v4 - 6);
    if ( v4 - 6 == (_DWORD *)std::string::_Rep::_S_empty_rep_storage )
    {
LABEL_5:
      *a1 = v3;
      return a1;
    }
    if ( &_pthread_key_create )
      goto LABEL_9;
    goto LABEL_14;
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
