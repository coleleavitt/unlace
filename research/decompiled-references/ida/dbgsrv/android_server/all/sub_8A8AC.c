/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A8AC
// Address: 0x000000000008A8AC

//----- (000000000008A8AC) ----------------------------------------------------
__int64 __fastcall sub_8A8AC(__int64 a1)
{
  __int64 v1; // x8

  v1 = *(int *)(a1 + 172);
  if ( (v1 & 0x80000000) != 0 )
    return 0;
  else
    return *(_QWORD *)(a1 + 104) + 120 * v1;
}
