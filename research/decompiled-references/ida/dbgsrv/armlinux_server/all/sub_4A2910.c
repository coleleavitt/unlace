/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2910
// Address: 0x00000000004A2910

//----- (00000000004A2910) ----------------------------------------------------
void *__fastcall sub_4A2910(size_t *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // x0
  __int64 *v5; // x20
  size_t v6; // x2
  void *v7; // x3

  v4 = sub_4A1858(a3 + *a1, a1[1]);
  v5 = v4;
  v6 = *a1;
  v7 = v4 + 3;
  if ( *a1 )
  {
    if ( v6 != 1 )
    {
      v7 = memcpy(v4 + 3, a1 + 3, v6);
      v6 = *a1;
      if ( v5 == std::string::_Rep::_S_empty_rep_storage )
        return v7;
      goto LABEL_7;
    }
    *((_BYTE *)v4 + 24) = *((_BYTE *)a1 + 24);
    v6 = *a1;
  }
  if ( v4 == std::string::_Rep::_S_empty_rep_storage )
    return v7;
LABEL_7:
  *v5 = v6;
  *((_DWORD *)v5 + 4) = 0;
  *((_BYTE *)v5 + v6 + 24) = 0;
  return v7;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
