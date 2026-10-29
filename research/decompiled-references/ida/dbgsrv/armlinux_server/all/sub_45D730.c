/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D730
// Address: 0x000000000045D730

//----- (000000000045D730) ----------------------------------------------------
__int64 __fastcall sub_45D730(__int64 a1)
{
  unsigned int v1; // w20
  __int64 v2; // x3

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return v1;
  v1 = sub_466FB8(a1, *(__int64 **)(a1 + 72), *(char ***)(a1 + 96), v2);
  if ( !*(_QWORD *)(a1 + 80) )
    return v1;
  sub_45B818((_QWORD *)a1);
  return v1;
}
