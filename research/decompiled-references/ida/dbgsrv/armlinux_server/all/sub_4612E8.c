/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4612E8
// Address: 0x00000000004612E8

//----- (00000000004612E8) ----------------------------------------------------
_QWORD *__fastcall sub_4612E8(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x0
  _QWORD *result; // x0
  __int64 v9; // x3
  __int64 v10; // x3

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(_QWORD *)(a1[4] + 32LL) < *a3 )
      return nullptr;
    return sub_461230((__int64)a1, a3);
  }
  v6 = *a3;
  v7 = *(_QWORD *)(a2 + 32);
  if ( *a3 < v7 )
  {
    result = (_QWORD *)a1[3];
    if ( result == (_QWORD *)a2 )
      return result;
    v9 = sub_49F750(a2);
    if ( v6 > *(_QWORD *)(v9 + 32) )
    {
      if ( *(_QWORD *)(v9 + 24) )
        return (_QWORD *)a2;
      else
        return nullptr;
    }
    return sub_461230((__int64)a1, a3);
  }
  if ( *a3 <= v7 )
    return (_QWORD *)a2;
  if ( a1[4] == a2 )
    return nullptr;
  v10 = sub_49F6E8(a2);
  if ( v6 >= *(_QWORD *)(v10 + 32) )
    return sub_461230((__int64)a1, a3);
  if ( *(_QWORD *)(a2 + 24) )
    return (_QWORD *)v10;
  else
    return nullptr;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
