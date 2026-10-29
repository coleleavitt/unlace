/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42FAE0
// Address: 0x000000000042FAE0

//----- (000000000042FAE0) ----------------------------------------------------
__int64 __fastcall sub_42FAE0(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // w22
  unsigned int v7; // w0
  __int64 result; // x0
  __int64 v9; // x3
  __int64 v10; // x3

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(_DWORD *)(a1[4] + 32LL) < *a3 )
      return 0;
    return sub_42FA28((__int64)a1, a3);
  }
  v6 = *a3;
  v7 = *(_DWORD *)(a2 + 32);
  if ( *a3 < v7 )
  {
    result = a1[3];
    if ( result == a2 )
      return result;
    v9 = sub_49F750(a2);
    if ( v6 > *(_DWORD *)(v9 + 32) )
    {
      if ( *(_QWORD *)(v9 + 24) )
        return a2;
      else
        return 0;
    }
    return sub_42FA28((__int64)a1, a3);
  }
  if ( v6 <= v7 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  v10 = sub_49F6E8(a2);
  if ( v6 >= *(_DWORD *)(v10 + 32) )
    return sub_42FA28((__int64)a1, a3);
  if ( *(_QWORD *)(a2 + 24) )
    return v10;
  else
    return 0;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
