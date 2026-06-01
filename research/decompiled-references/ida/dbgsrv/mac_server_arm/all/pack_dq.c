/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dq
// Address: 0x000000010006DA30

//----- (000000010006DA30) ----------------------------------------------------
_BYTE *__fastcall pack_dq(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // x19^4
  _BYTE *v5; // x0

  v3 = HIDWORD(a3);
  v5 = pack_dd(a1, a2, a3);
  return pack_dd(v5, a2, v3);
}
