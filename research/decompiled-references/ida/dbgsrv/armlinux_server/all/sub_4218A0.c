/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4218A0
// Address: 0x00000000004218A0

//----- (00000000004218A0) ----------------------------------------------------
__int64 __fastcall sub_4218A0(__int64 a1, __int64 a2)
{
  __int64 v2; // x1

  v2 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a1 + 617) )
    return (unsigned __int8)v2;
  if ( !*(_BYTE *)(a1 + 616) && *(_WORD *)(a1 + 522) == 8 )
    return (HIDWORD(v2) >> 8) & 0xFF00 | (HIDWORD(v2) << 8) & 0xFF0000 | HIBYTE(HIDWORD(v2)) | (HIDWORD(v2) << 24);
  return (unsigned int)v2;
}
