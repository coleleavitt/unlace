/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5AE8
// Address: 0x00000000004A5AE8

//----- (00000000004A5AE8) ----------------------------------------------------
__int64 __fastcall sub_4A5AE8(__int64 a1, __int64 *a2)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x0

  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
  {
    v3 = *a2;
    v4 = *(_QWORD *)(v2 + 8);
    v2 = *(_QWORD *)(v4 + 16);
    if ( (v3 & 0x80000000) == 0 )
      return sub_4A5A98(*(_QWORD *)(v4 + 16), v3);
  }
  else
  {
    *(_DWORD *)(a1 + 304) = 1;
  }
  return v2;
}
