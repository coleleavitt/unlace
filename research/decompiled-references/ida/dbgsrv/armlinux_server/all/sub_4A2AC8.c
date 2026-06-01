/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2AC8
// Address: 0x00000000004A2AC8

//----- (00000000004A2AC8) ----------------------------------------------------
__int64 *__fastcall sub_4A2AC8(__int64 *a1, _BYTE **a2)
{
  _BYTE *v3; // x1
  size_t v5; // x20
  __int64 v6; // x3
  size_t v7; // x21
  __int64 v8; // x2
  __int64 v9; // x1
  int v11; // w0

  v3 = *a2;
  v5 = *((_QWORD *)v3 - 3);
  if ( v5 )
  {
    v6 = *a1;
    v7 = v5 + *(_QWORD *)(*a1 - 24);
    if ( v7 > *(_QWORD *)(*a1 - 16) || (v11 = atomic_load((unsigned int *)(v6 - 8)), v11 > 0) )
    {
      sub_4A29C0(a1, v5 + *(_QWORD *)(v6 - 24));
      v6 = *a1;
      v3 = *a2;
    }
    v8 = *(_QWORD *)(v6 - 24);
    if ( v5 == 1 )
      *(_BYTE *)(v6 + v8) = *v3;
    else
      memcpy((void *)(v6 + v8), v3, v5);
    v9 = *a1;
    if ( (__int64 *)(*a1 - 24) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_QWORD *)(v9 - 24) = v7;
      *(_DWORD *)(v9 - 8) = 0;
      *(_BYTE *)(v9 + v7) = 0;
    }
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
