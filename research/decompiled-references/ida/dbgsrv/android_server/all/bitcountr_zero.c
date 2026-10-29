/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: bitcountr_zero
// Address: 0x00000000000AD3E4

//----- (00000000000AD3E4) ----------------------------------------------------
__int64 __fastcall bitcountr_zero(unsigned __int64 a1)
{
  if ( a1 )
    return *(unsigned int *)((char *)&dword_11B7BC + (((0x3F79D71B4CB0A89LL * ((a1 - 1) ^ a1)) >> 56) & 0xFC));
  else
    return 64;
}
// 11B7BC: using guessed type int dword_11B7BC;
