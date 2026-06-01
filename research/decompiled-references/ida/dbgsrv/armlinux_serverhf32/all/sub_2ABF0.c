/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2ABF0
// Address: 0x0002ABF0

//----- (0002ABF0) --------------------------------------------------------
int __fastcall sub_2ABF0(int a1, int a2)
{
  __int64 v2; // kr00_8

  v2 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a1 + 481) )
    return (unsigned __int8)v2;
  if ( !*(_BYTE *)(a1 + 480) && *(_WORD *)(a1 + 406) == 8 )
    return (HIDWORD(v2) << 24) | HIBYTE(HIDWORD(v2)) | (HIDWORD(v2) >> 8) & 0xFF00 | (HIDWORD(v2) << 8) & 0xFF0000;
  return *(_DWORD *)(a2 + 8);
}
