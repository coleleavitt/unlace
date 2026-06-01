/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437E58
// Address: 0x0000000000437E58

//----- (0000000000437E58) ----------------------------------------------------
__int64 __fastcall sub_437E58(__int64 a1)
{
  __int64 v1; // x1
  int v2; // w2

  v1 = *(_QWORD *)(a1 + 304);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 304) = v1 - 1;
  return sub_437D48(a1, -84, v2);
}
