/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A18E0
// Address: 0x00000000004A18E0

//----- (00000000004A18E0) ----------------------------------------------------
__int64 *__fastcall sub_4A18E0(unsigned __int64 a1, unsigned __int8 a2)
{
  int v4; // w21
  unsigned __int64 *v5; // x0
  unsigned __int64 *v6; // x20
  void *v7; // x3

  if ( !a1 )
    return &std::string::_Rep::_S_empty_rep_storage[3];
  v4 = a2;
  v5 = sub_4A1858(a1, 0);
  v6 = v5;
  v7 = v5 + 3;
  if ( a1 == 1 )
    *((_BYTE *)v5 + 24) = v4;
  else
    v7 = memset(v5 + 3, v4, a1);
  if ( v6 != (unsigned __int64 *)std::string::_Rep::_S_empty_rep_storage )
  {
    *v6 = a1;
    *((_DWORD *)v6 + 4) = 0;
    *((_BYTE *)v6 + a1 + 24) = 0;
  }
  return (__int64 *)v7;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
