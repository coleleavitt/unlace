/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F678
// Address: 0x000000000049F678

//----- (000000000049F678) ----------------------------------------------------
__int64 __fastcall sub_49F678(__int64 a1)
{
  __int64 v2; // x0
  __int64 result; // x0
  __int64 v4; // x1
  bool v5; // zf

  if ( !*(_DWORD *)a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( v2 == a1 )
      return *(_QWORD *)(v2 + 24);
  }
  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    while ( *(_QWORD *)(result + 24) )
      result = *(_QWORD *)(result + 24);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( a1 == *(_QWORD *)(v4 + 16) )
    {
      do
      {
        result = *(_QWORD *)(v4 + 8);
        v5 = *(_QWORD *)(result + 16) == v4;
        v4 = result;
      }
      while ( v5 );
    }
    else
    {
      return *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}
