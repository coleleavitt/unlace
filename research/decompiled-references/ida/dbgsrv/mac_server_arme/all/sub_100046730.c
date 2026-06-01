/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046730
// Address: 0x0000000100046730

//----- (0000000100046730) ----------------------------------------------------
__int64 __fastcall sub_100046730(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = a2;
  return v2;
}
