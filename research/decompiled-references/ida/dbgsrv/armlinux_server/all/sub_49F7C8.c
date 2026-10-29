/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F7C8
// Address: 0x000000000049F7C8

//----- (000000000049F7C8) ----------------------------------------------------
__int64 __fastcall sub_49F7C8(__int64 result, _QWORD *a2)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1

  v2 = *(_QWORD *)(result + 16);
  v3 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(result + 16) = v3;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = result;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(result + 8);
  if ( result == *a2 )
  {
    *a2 = v2;
    *(_QWORD *)(v2 + 24) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  else
  {
    v4 = *(_QWORD *)(result + 8);
    if ( result == *(_QWORD *)(v4 + 24) )
      *(_QWORD *)(v4 + 24) = v2;
    else
      *(_QWORD *)(v4 + 16) = v2;
    *(_QWORD *)(v2 + 24) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  return result;
}
