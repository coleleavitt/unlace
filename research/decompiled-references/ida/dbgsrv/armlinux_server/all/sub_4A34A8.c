/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A34A8
// Address: 0x00000000004A34A8

//----- (00000000004A34A8) ----------------------------------------------------
__int64 *__fastcall sub_4A34A8(_BYTE *a1, _BYTE *a2)
{
  size_t v2; // x19
  size_t *v4; // x0
  size_t *v5; // x21
  void *v6; // x3

  if ( a2 == a1 )
    return &std::string::_Rep::_S_empty_rep_storage[3];
  v2 = a2 - a1;
  v4 = sub_4A1858(a2 - a1, 0);
  v5 = v4;
  v6 = v4 + 3;
  if ( v2 == 1 )
  {
    *((_BYTE *)v4 + 24) = *a1;
  }
  else if ( v2 )
  {
    v6 = memcpy(v4 + 3, a1, v2);
  }
  if ( v5 != (size_t *)std::string::_Rep::_S_empty_rep_storage )
  {
    *v5 = v2;
    *((_DWORD *)v5 + 4) = 0;
    *((_BYTE *)v5 + v2 + 24) = 0;
  }
  return (__int64 *)v6;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
