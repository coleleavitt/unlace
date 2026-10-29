/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060FBC
// Address: 0x0000000100060FBC

//----- (0000000100060FBC) ----------------------------------------------------
__int64 __fastcall sub_100060FBC(__int64 result)
{
  void *v1; // x8
  __int64 v2; // x19

  v1 = *(void **)(result + 8);
  if ( v1 )
  {
    v2 = result;
    *(_QWORD *)(result + 16) = 0;
    qfree(v1);
    *(_QWORD *)(v2 + 8) = 0;
    *(_QWORD *)(v2 + 24) = 0;
    return v2;
  }
  return result;
}
