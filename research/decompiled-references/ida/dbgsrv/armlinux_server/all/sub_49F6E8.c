/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F6E8
// Address: 0x000000000049F6E8

//----- (000000000049F6E8) ----------------------------------------------------
__int64 __fastcall sub_49F6E8(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x1

  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    while ( *(_QWORD *)(result + 16) )
      result = *(_QWORD *)(result + 16);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( a1 == *(_QWORD *)(v3 + 24) )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v3 + 8);
        if ( *(_QWORD *)(result + 24) != v3 )
          break;
        v3 = *(_QWORD *)(v3 + 8);
      }
      if ( result == *(_QWORD *)(v3 + 24) )
        return v3;
    }
    else
    {
      return *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}
