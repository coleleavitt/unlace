/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AFB4
// Address: 0x000000010005AFB4

//----- (000000010005AFB4) ----------------------------------------------------
__int64 __fastcall sub_10005AFB4(__int64 result)
{
  void *v1; // x8
  __int64 v2; // x19

  if ( *(int *)result >= -1 )
  {
    v1 = *(void **)(result + 8);
    if ( v1 )
    {
      v2 = result;
      *(_QWORD *)(result + 16) = 0;
      qfree(v1);
      result = v2;
      *(_QWORD *)(v2 + 8) = 0;
      *(_QWORD *)(v2 + 24) = 0;
    }
    *(_DWORD *)result = -2;
  }
  return result;
}
