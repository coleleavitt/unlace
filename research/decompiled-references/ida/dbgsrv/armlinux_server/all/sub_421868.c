/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_421868
// Address: 0x0000000000421868

//----- (0000000000421868) ----------------------------------------------------
unsigned __int64 __fastcall sub_421868(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x1

  v2 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a1 + 617) )
    return (unsigned int)(v2 >> 8);
  if ( !*(_BYTE *)(a1 + 616) && *(_WORD *)(a1 + 522) == 8 )
    return (unsigned int)v2;
  return HIDWORD(v2);
}
