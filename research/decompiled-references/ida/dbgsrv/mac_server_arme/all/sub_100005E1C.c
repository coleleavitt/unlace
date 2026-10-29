/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005E1C
// Address: 0x0000000100005E1C

//----- (0000000100005E1C) ----------------------------------------------------
__int64 __fastcall sub_100005E1C(__int64 result)
{
  void *v1; // x8
  __int64 v2; // x19

  v1 = *(void **)(result + 2096);
  if ( v1 )
  {
    v2 = result;
    *(_QWORD *)(result + 2104) = 0;
    qfree(v1);
    *(_QWORD *)(v2 + 2096) = 0;
    *(_QWORD *)(v2 + 2112) = 0;
    return v2;
  }
  return result;
}
