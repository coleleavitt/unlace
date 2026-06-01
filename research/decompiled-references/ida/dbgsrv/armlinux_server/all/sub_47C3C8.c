/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C3C8
// Address: 0x000000000047C3C8

//----- (000000000047C3C8) ----------------------------------------------------
__int64 __fastcall sub_47C3C8(__int64 result)
{
  __int64 v1; // x1
  FILE *v2; // x1
  __int64 v3; // x19

  v1 = *(_QWORD *)(result + 8);
  if ( v1 )
  {
    v2 = *(FILE **)(v1 + 160);
    if ( v2 )
    {
      v3 = result;
      sub_4906A0(v2);
      result = *(_QWORD *)(v3 + 8);
      *(_QWORD *)(result + 160) = 0;
    }
  }
  return result;
}
