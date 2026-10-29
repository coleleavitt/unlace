/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B950
// Address: 0x000000010004B950

//----- (000000010004B950) ----------------------------------------------------
__int64 __fastcall sub_10004B950(__int64 result, __int64 *a2)
{
  __int64 v2; // x19
  __int128 v3; // q0
  void *v4; // x8
  __int64 v5; // x20
  __int128 v6; // [xsp+0h] [xbp-20h]

  v2 = *a2;
  v3 = *(_OWORD *)(a2 + 1);
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v4 = *(void **)result;
  if ( *(_QWORD *)result )
  {
    *(_QWORD *)(result + 8) = 0;
    v5 = result;
    v6 = v3;
    qfree(v4);
    v3 = v6;
    result = v5;
  }
  *(_QWORD *)result = v2;
  *(_OWORD *)(result + 8) = v3;
  return result;
}
