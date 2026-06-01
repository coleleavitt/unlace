/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51988
// Address: 0x0000000000051988

//----- (0000000000051988) ----------------------------------------------------
__int64 __fastcall sub_51988(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 617) && !*(_BYTE *)(a1 + 616) && *(_WORD *)(a1 + 522) == 8 )
    return bswap32(*(_DWORD *)(a2 + 12));
  if ( *(_BYTE *)(a1 + 617) )
    return *(unsigned int *)(a2 + 8);
  return (unsigned __int8)*(_DWORD *)(a2 + 8);
}
