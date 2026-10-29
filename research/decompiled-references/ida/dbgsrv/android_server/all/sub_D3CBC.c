/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3CBC
// Address: 0x00000000000D3CBC

//----- (00000000000D3CBC) ----------------------------------------------------
__int64 __fastcall sub_D3CBC(__int64 result)
{
  __int64 v1; // x8

  if ( result )
  {
    v1 = *(_QWORD *)(result + 320);
    if ( v1 )
      return *(_QWORD *)(v1 + 304) + *(_QWORD *)(v1 + 120);
    else
      return 0;
  }
  return result;
}
