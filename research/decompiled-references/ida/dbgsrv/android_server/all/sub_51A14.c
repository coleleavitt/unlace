/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51A14
// Address: 0x0000000000051A14

//----- (0000000000051A14) ----------------------------------------------------
__int64 __fastcall sub_51A14(__int64 result, __int64 a2, unsigned int a3)
{
  if ( *(_BYTE *)(result + 617) )
  {
    if ( *(_BYTE *)(result + 616) || *(_WORD *)(result + 522) != 8 )
      *(_QWORD *)(a2 + 8) = a3;
    else
      *(_DWORD *)(a2 + 12) = bswap32(a3);
  }
  else
  {
    *(_BYTE *)(a2 + 8) = a3;
  }
  return result;
}
