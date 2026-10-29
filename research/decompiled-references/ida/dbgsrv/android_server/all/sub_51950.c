/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51950
// Address: 0x0000000000051950

//----- (0000000000051950) ----------------------------------------------------
__int64 __fastcall sub_51950(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 617) )
    return *(_QWORD *)(a2 + 8) >> 8;
  if ( *(_BYTE *)(a1 + 616) || *(_WORD *)(a1 + 522) != 8 )
    return *(unsigned int *)(a2 + 12);
  return *(_QWORD *)(a2 + 8);
}
