/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E4D8
// Address: 0x000000000048E4D8

//----- (000000000048E4D8) ----------------------------------------------------
_BYTE *__fastcall sub_48E4D8(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // x19^4
  _BYTE *v5; // x0

  v3 = HIDWORD(a3);
  v5 = sub_48E2D8(a1, a2, a3);
  return sub_48E2D8(v5, a2, v3);
}
