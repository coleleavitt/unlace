/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E808
// Address: 0x000000000042E808

//----- (000000000042E808) ----------------------------------------------------
__int64 __fastcall sub_42E808(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v6; // w22
  unsigned int v7; // w0
  __int64 result; // x0
  __int64 v9; // x3
  __int64 v10; // x3

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(unsigned __int16 *)(a1[4] + 32LL) < (unsigned int)*a3 )
      return 0;
    return sub_42E750((__int64)a1, a3);
  }
  v6 = *a3;
  v7 = *(unsigned __int16 *)(a2 + 32);
  if ( v6 < v7 )
  {
    result = a1[3];
    if ( result == a2 )
      return result;
    v9 = sub_49F750(a2);
    if ( *(unsigned __int16 *)(v9 + 32) < v6 )
    {
      if ( *(_QWORD *)(v9 + 24) )
        return a2;
      else
        return 0;
    }
    return sub_42E750((__int64)a1, a3);
  }
  if ( v6 <= v7 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  v10 = sub_49F6E8(a2);
  if ( *(unsigned __int16 *)(v10 + 32) <= v6 )
    return sub_42E750((__int64)a1, a3);
  if ( *(_QWORD *)(a2 + 24) )
    return v10;
  else
    return 0;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
