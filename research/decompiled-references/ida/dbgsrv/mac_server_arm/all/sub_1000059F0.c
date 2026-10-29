/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000059F0
// Address: 0x00000001000059F0

//----- (00000001000059F0) ----------------------------------------------------
__int64 __fastcall sub_1000059F0(__int64 result)
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
