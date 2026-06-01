/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4508F8
// Address: 0x00000000004508F8

//----- (00000000004508F8) ----------------------------------------------------
_QWORD *__fastcall sub_4508F8(__int64 a1)
{
  _QWORD *v2; // x19
  _BYTE *v3; // x21
  __int64 *v4; // x20
  unsigned int *v5; // x1
  size_t v6; // x23
  char v7; // w0
  void *v9; // x0
  const void *v10; // x1
  _QWORD *v11; // x0
  size_t *v12; // x22
  _BYTE *v13; // x3
  size_t v14; // x2
  unsigned int v15; // w0

  v2 = sub_49E050(0x38u);
  v3 = *(_BYTE **)a1;
  *v2 = 0;
  v4 = (__int64 *)(v3 - 24);
  v5 = (unsigned int *)(v3 - 8);
  if ( (*((_DWORD *)v3 - 2) & 0x80000000) != 0 )
  {
    v11 = sub_450840(*((_QWORD *)v3 - 3), *((_QWORD *)v3 - 2));
    v12 = v11;
    v13 = v11 + 3;
    v14 = *((_QWORD *)v3 - 3);
    if ( v14 )
    {
      if ( v14 == 1 )
        *((_BYTE *)v11 + 24) = *v3;
      else
        v13 = memcpy(v11 + 3, v3, v14);
      v14 = *v4;
    }
    if ( v12 == (size_t *)std::string::_Rep::_S_empty_rep_storage )
    {
      v3 = v13;
    }
    else
    {
      *v12 = v14;
      *((_DWORD *)v12 + 4) = 0;
      v3 = v13;
      *((_BYTE *)v12 + v14 + 24) = 0;
    }
  }
  else if ( v4 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      do
        v15 = __ldaxr(v5);
      while ( __stlxr(v15 + 1, v5) );
    }
    else
    {
      ++*((_DWORD *)v3 - 2);
    }
  }
  v6 = *(_QWORD *)(a1 + 16);
  v2[1] = v3;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  if ( v6 )
  {
    v9 = sub_491248(v6);
    v10 = *(const void **)(a1 + 8);
    v2[2] = v9;
    v2[4] = v6;
    memcpy(v9, v10, v6);
    v2[3] = v6;
  }
  v7 = *(_BYTE *)(a1 + 33);
  *((_BYTE *)v2 + 40) = *(_BYTE *)(a1 + 32);
  *((_BYTE *)v2 + 41) = v7;
  return v2;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
