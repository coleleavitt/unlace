/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430610
// Address: 0x0000000000430610

//----- (0000000000430610) ----------------------------------------------------
__int64 __fastcall sub_430610(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = **(unsigned __int8 **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}
